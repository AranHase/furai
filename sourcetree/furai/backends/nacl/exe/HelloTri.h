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

#ifndef FURAI_HELLOTRI_H_
#define FURAI_HELLOTRI_H_

#include <stdio.h>

#include <GLES2/gl2.h>
#include <furai/core/WindowListener.h>
#include <furai/core/Furai.h>

class HelloTri : public furai::WindowListener {
 public:
  HelloTri() {

  }

  ~HelloTri() {

  }

  virtual void OnCreate() {

  }
  virtual void OnDraw(const double delta_time) {
    glClearColor(1.f, 1.f, 0, 1.f);
    glClear(GL_COLOR_BUFFER_BIT);
  }

  virtual void OnResize(const GLint width, const GLint height) {
    glViewport(0, 0, width, height);
  }

  virtual void OnDestroy() {

  }

  virtual void OnFocusGained() {

  }
  virtual void OnFocusLost() {

  }
};

#endif /* FURAI_HELLOTRI_H_ */
