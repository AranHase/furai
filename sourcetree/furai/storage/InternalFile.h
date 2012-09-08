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

#ifndef FURAI_INTERNALFILE_H_
#define FURAI_INTERNALFILE_H_

#include <string>
#include <furai/storage/File.h>

namespace furai {

class InternalFile : public furai::File {
 public:
  InternalFile(std::string path)
      : furai::File(path) {

  }

  virtual ~InternalFile() {

  }

  virtual void Read(const int64_t offset, const int32_t bytes_to_read,
                    char *buffer) = 0;

  int64_t bytes_read() {
    return bytes_read_;
  }

 protected:
  int64_t bytes_read_;
};

}  // namespace furai
#endif /* FURAI_INTERNALFILE_H_ */
