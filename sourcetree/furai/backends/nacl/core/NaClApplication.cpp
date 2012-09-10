/*
 -----------------------------------------------------------------------------
 This source file is part of the Project Furai.
 For more information, go to:
 http://code.google.com/p/furai/
 -----------------------------------------------------------------------------

 Copyright 2012 Allan Yoshio Hasegawa

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 -----------------------------------------------------------------------------
 */

#include "furai/backends/nacl/core/NaClApplication.h"

#include <ppapi/cpp/instance.h>
#include <ppapi/cpp/module.h>
#include <ppapi/cpp/core.h>
#include <ppapi/cpp/completion_callback.h>
#include <ppapi/cpp/rect.h>
#include <GLES2/gl2.h>

#include <furai/core/Furai.h>
#include <furai/backends/nacl/core/NaClWindow.h>
#include <furai/backends/nacl/core/NaClClock.h>
#include <furai/backends/nacl/core/NaClLogJSConsole.h>
#include <furai/backends/nacl/core/NaClLogEnvVars.h>
#include <furai/backends/nacl/storage/NaClFileSystem.h>

namespace furai {

NaClApplication::NaClApplication(NaClLogType log_type,
                                 WindowListener* window_listener,
                                 PP_Instance pp_instance)
    : pp::Instance(pp_instance) {

  started_ = false;
  switch (log_type) {
    case NACL_LOG_TYPE_JS_CONSOLE:
      this->log_ = new NaClLogJSConsole(this);
      break;
    case NACL_LOG_TYPE_ENV_VARS:
      this->log_ = new NaClLogEnvVars();
      break;
    default:
      this->log_ = new NaClLogJSConsole(this);
      break;
  }
  Furai::LOG = this->log_;
  Furai::LOG->LogV("NA: Starting internal systems..");

  Furai::LOG->LogV("NA: Starting Clock system..");
  NaClClock* nacl_clock = new NaClClock();
  this->clock_ = nacl_clock;
  Furai::CLOCK = this->clock_;

  Furai::LOG->LogV("NA: Starting FS system..");
  NaClFileSystem* nacl_filesystem = new NaClFileSystem(this);
  this->file_system_ = nacl_filesystem;
  Furai::FS = nacl_filesystem;

  Furai::LOG->LogV("NA: Starting Window system..");
  this->window_ = new NaClWindow(this, nacl_clock, window_listener);
  Furai::WINDOW = this->window_;
}

NaClApplication::~NaClApplication() {
  delete this->window_;
  delete this->clock_;
  delete this->file_system_;
  delete this->log_;
}

bool NaClApplication::Init(uint32_t argc, const char* argn[],
                           const char* argv[]) {

  //this->window_->Start();

  this->pp_core_ = pp::Module::Get()->core();
  this->UpdateScheduler(0);
  return true;
}

void NaClApplication::DidChangeView(const pp::View& view) {
  pp::Rect position = view.GetRect();
  this->window_->Resize(position.width(), position.height());
}

void NaClApplication::DidChangeFocus(bool has_focus) {
  this->window_->set_focus(has_focus);
}

void NaClApplication::Update() {
  if (!started_) {
    this->window_->Start();
    started_ = true;
  }

  this->window_->Draw();
  this->UpdateScheduler(0);
}

void NaClApplication::UpdateCallback(void* instance, int32_t) {
  static_cast<NaClApplication*>(instance)->Update();
}

void NaClApplication::UpdateScheduler(int32_t delay_in_milliseconds) {
  this->pp_core_->CallOnMainThread(
      delay_in_milliseconds,
      pp::CompletionCallback(NaClApplication::UpdateCallback, this));
}

}  // namespace furai
