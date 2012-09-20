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

#ifndef FURAI_GL2_H_
#define FURAI_GL2_H_

#include <GLES2/gl2.h>

#undef glActiveTexture
#undef glAttachShader
#undef glBindAttribLocation
#undef glBindBuffer
#undef glBindFramebuffer
#undef glBindRenderbuffer
#undef glBindTexture
#undef glBlendColor
#undef glBlendEquation
#undef glBlendEquationSeparate
#undef glBlendFunc
#undef glBlendFuncSeparate
#undef glBufferData
#undef glBufferSubData
#undef glCheckFramebufferStatus
#undef glClear
#undef glClearColor
#undef glClearDepthf
#undef glClearStencil
#undef glColorMask
#undef glCompileShader
#undef glCompressedTexImage2D
#undef glCompressedTexSubImage2D
#undef glCopyTexImage2D
#undef glCopyTexSubImage2D
#undef glCreateProgram
#undef glCreateShader
#undef glCullFace
#undef glDeleteBuffers
#undef glDeleteFramebuffers
#undef glDeleteProgram
#undef glDeleteRenderbuffers
#undef glDeleteShader
#undef glDeleteTextures
#undef glDepthFunc
#undef glDepthMask
#undef glDepthRangef
#undef glDetachShader
#undef glDisable
#undef glDisableVertexAttribArray
#undef glDrawArrays
#undef glDrawElements
#undef glEnable
#undef glEnableVertexAttribArray
#undef glFinish
#undef glFlush
#undef glFramebufferRenderbuffer
#undef glFramebufferTexture2D
#undef glFrontFace
#undef glGenBuffers
#undef glGenerateMipmap
#undef glGenFramebuffers
#undef glGenRenderbuffers
#undef glGenTextures
#undef glGetActiveAttrib
#undef glGetActiveUniform
#undef glGetAttachedShaders
#undef glGetAttribLocation
#undef glGetBooleanv
#undef glGetBufferParameteriv
#undef glGetError
#undef glGetFloatv
#undef glGetFramebufferAttachmentParameteriv
#undef glGetIntegerv
#undef glGetProgramiv
#undef glGetProgramInfoLog
#undef glGetRenderbufferParameteriv
#undef glGetShaderiv
#undef glGetShaderInfoLog
#undef glGetShaderPrecisionFormat
#undef glGetShaderSource
#undef glGetString
#undef glGetTexParameterfv
#undef glGetTexParameteriv
#undef glGetUniformfv
#undef glGetUniformiv
#undef glGetUniformLocation
#undef glGetVertexAttribfv
#undef glGetVertexAttribiv
#undef glGetVertexAttribPointerv
#undef glHint
#undef glIsBuffer
#undef glIsEnabled
#undef glIsFramebuffer
#undef glIsProgram
#undef glIsRenderbuffer
#undef glIsShader
#undef glIsTexture
#undef glLineWidth
#undef glLinkProgram
#undef glPixelStorei
#undef glPolygonOffset
#undef glReadPixels
#undef glReleaseShaderCompiler
#undef glRenderbufferStorage
#undef glSampleCoverage
#undef glScissor
#undef glShaderBinary
#undef glShaderSource
#undef glStencilFunc
#undef glStencilFuncSeparate
#undef glStencilMask
#undef glStencilMaskSeparate
#undef glStencilOp
#undef glStencilOpSeparate
#undef glTexImage2D
#undef glTexParameterf
#undef glTexParameterfv
#undef glTexParameteri
#undef glTexParameteriv
#undef glTexSubImage2D
#undef glUniform1f
#undef glUniform1fv
#undef glUniform1i
#undef glUniform1iv
#undef glUniform2f
#undef glUniform2fv
#undef glUniform2i
#undef glUniform2iv
#undef glUniform3f
#undef glUniform3fv
#undef glUniform3i
#undef glUniform3iv
#undef glUniform4f
#undef glUniform4fv
#undef glUniform4i
#undef glUniform4iv
#undef glUniformMatrix2fv
#undef glUniformMatrix3fv
#undef glUniformMatrix4fv
#undef glUseProgram
#undef glValidateProgram
#undef glVertexAttrib1f
#undef glVertexAttrib1fv
#undef glVertexAttrib2f
#undef glVertexAttrib2fv
#undef glVertexAttrib3f
#undef glVertexAttrib3fv
#undef glVertexAttrib4f
#undef glVertexAttrib4fv
#undef glVertexAttribPointer
#undef glViewport

/*************************************************/

#define glActiveTexture(texture) furai::GLES2ActiveTexture(texture)
#define glAttachShader(program, shader) furai::GLES2AttachShader(program, shader)
#define glBindAttribLocation(program, index, name) furai::GLES2BindAttribLocation(program, index, name)
#define glBindBuffer(target, buffer) furai::GLES2BindBuffer(target, buffer)
#define glBindFramebuffer(target, framebuffer) furai::GLES2BindFramebuffer(target, framebuffer)
#define glBindRenderbuffer(target, renderbuffer) furai::GLES2BindRenderbuffer(target, renderbuffer)
#define glBindTexture(target, texture) furai::GLES2BindTexture(target, texture)
#define glBlendColor(red, green, blue, alpha) furai::GLES2BlendColor(red, green, blue, alpha)
#define glBlendEquation(mode) furai::GLES2BlendEquation(mode)
#define glBlendEquationSeparate(modeRGB, modeAlpha) furai::GLES2BlendEquationSeparate(modeRGB, modeAlpha)
#define glBlendFunc(sfactor, dfactor) furai::GLES2BlendFunc(sfactor, dfactor)
#define glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha) furai::GLES2BlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha)
#define glBufferData(target, size, data, usage) furai::GLES2BufferData(target, size, data, usage)
#define glBufferSubData(target, offset, size, data) furai::GLES2BufferSubData(target, offset, size, data)
#define glCheckFramebufferStatus(target) furai::GLES2CheckFramebufferStatus(target)
#define glClear(mask) furai::GLES2Clear(mask)
#define glClearColor(red, green, blue, alpha) furai::GLES2ClearColor(red, green, blue, alpha)
#define glClearDepthf(depth) furai::GLES2ClearDepthf(depth)
#define glClearStencil(s) furai::GLES2ClearStencil(s)
#define glColorMask(red, green, blue, alpha) furai::GLES2ColorMask(red, green, blue, alpha)
#define glCompileShader(shader) furai::GLES2CompileShader(shader)
#define glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data) furai::GLES2CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data)
#define glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data) furai::GLES2CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data)
#define glCopyTexImage2D(target, level, internalformat, x, y, width, height, border) furai::GLES2CopyTexImage2D(target, level, internalformat, x, y, width, height, border)
#define glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height) furai::GLES2CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height)
#define glCreateProgram furai::GLES2CreateProgram
#define glCreateShader(type) furai::GLES2CreateShader(type)
#define glCullFace(mode) furai::GLES2CullFace(mode)
#define glDeleteBuffers(n, buffers) furai::GLES2DeleteBuffers(n, buffers)
#define glDeleteFramebuffers(n, framebuffers) furai::GLES2DeleteFramebuffers(n, framebuffers)
#define glDeleteProgram(program) furai::GLES2DeleteProgram(program)
#define glDeleteRenderbuffers(n, renderbuffers) furai::GLES2DeleteRenderbuffers(n, renderbuffers)
#define glDeleteShader(shader) furai::GLES2DeleteShader(shader)
#define glDeleteTextures(n, textures) furai::GLES2DeleteTextures(n, textures)
#define glDepthFunc(func) furai::GLES2DepthFunc(func)
#define glDepthMask(flag) furai::GLES2DepthMask(flag)
#define glDepthRangef(zNear, zFar) furai::GLES2DepthRangef(zNear, zFar)
#define glDetachShader(program, shader) furai::GLES2DetachShader(program, shader)
#define glDisable(cap) furai::GLES2Disable(cap)
#define glDisableVertexAttribArray(index) furai::GLES2DisableVertexAttribArray(index)
#define glDrawArrays(mode, first, count) furai::GLES2DrawArrays(mode, first, count)
#define glDrawElements(mode, count, type, indices) furai::GLES2DrawElements(mode, count, type, indices)
#define glEnable(cap) furai::GLES2Enable(cap)
#define glEnableVertexAttribArray(index) furai::GLES2EnableVertexAttribArray(index)
#define glFinish furai::GLES2Finish
#define glFlush furai::GLES2Flush
#define glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer) furai::GLES2FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer)
#define glFramebufferTexture2D(target, attachment, textarget, texture, level) furai::GLES2FramebufferTexture2D(target, attachment, textarget, texture, level)
#define glFrontFace(mode) furai::GLES2FrontFace(mode)
#define glGenBuffers(n, buffers) furai::GLES2GenBuffers(n, buffers)
#define glGenerateMipmap(target) furai::GLES2GenerateMipmap(target)
#define glGenFramebuffers(n, framebuffers) furai::GLES2GenFramebuffers(n, framebuffers)
#define glGenRenderbuffers(n, renderbuffers) furai::GLES2GenRenderbuffers(n, renderbuffers)
#define glGenTextures(n, textures) furai::GLES2GenTextures(n, textures)
#define glGetActiveAttrib(program, index, bufsize, length, size, type, name) furai::GLES2GetActiveAttrib(program, index, bufsize, length, size, type, name)
#define glGetActiveUniform(program, index, bufsize, length, size, type, name) furai::GLES2GetActiveUniform(program, index, bufsize, length, size, type, name)
#define glGetAttachedShaders(program, maxcount, count, shaders) furai::GLES2GetAttachedShaders(program, maxcount, count, shaders)
#define glGetAttribLocation(program, name) furai::GLES2GetAttribLocation(program, name)
#define glGetBooleanv(pname, params) furai::GLES2GetBooleanv(pname, params)
#define glGetBufferParameteriv(target, pname, params) furai::GLES2GetBufferParameteriv(target, pname, params)
#define glGetError furai::GLES2GetError
#define glGetFloatv(pname, params) furai::GLES2GetFloatv(pname, params)
#define glGetFramebufferAttachmentParameteriv(target, attachment, pname, params) furai::GLES2GetFramebufferAttachmentParameteriv(target, attachment, pname, params)
#define glGetIntegerv(pname, params) furai::GLES2GetIntegerv(pname, params)
#define glGetProgramiv(program, pname, params) furai::GLES2GetProgramiv(program, pname, params)
#define glGetProgramInfoLog(program, bufsize, length, infolog) furai::GLES2GetProgramInfoLog(program, bufsize, length, infolog)
#define glGetRenderbufferParameteriv(target, pname, params) furai::GLES2GetRenderbufferParameteriv(target, pname, params)
#define glGetShaderiv(shader, pname, params) furai::GLES2GetShaderiv(shader, pname, params)
#define glGetShaderInfoLog(shader, bufsize, length, infolog) furai::GLES2GetShaderInfoLog(shader, bufsize, length, infolog)
#define glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision) furai::GLES2GetShaderPrecisionFormat(shadertype, precisiontype, range, precision)
#define glGetShaderSource(shader, bufsize, length, source) furai::GLES2GetShaderSource(shader, bufsize, length, source)
#define glGetString(name) furai::GLES2GetString(name)
#define glGetTexParameterfv(target, pname, params) furai::GLES2GetTexParameterfv(target, pname, params)
#define glGetTexParameteriv(target, pname, params) furai::GLES2GetTexParameteriv(target, pname, params)
#define glGetUniformfv(program, location, params) furai::GLES2GetUniformfv(program, location, params)
#define glGetUniformiv(program, location, params) furai::GLES2GetUniformiv(program, location, params)
#define glGetUniformLocation(program, name) furai::GLES2GetUniformLocation(program, name)
#define glGetVertexAttribfv(index, pname, params) furai::GLES2GetVertexAttribfv(index, pname, params)
#define glGetVertexAttribiv(index, pname, params) furai::GLES2GetVertexAttribiv(index, pname, params)
#define glGetVertexAttribPointerv(index, pname, pointer) furai::GLES2GetVertexAttribPointerv(index, pname, pointer)
#define glHint(target, mode) furai::GLES2Hint(target, mode)
#define glIsBuffer(buffer) furai::GLES2IsBuffer(buffer)
#define glIsEnabled(cap) furai::GLES2IsEnabled(cap)
#define glIsFramebuffer(framebuffer) furai::GLES2IsFramebuffer(framebuffer)
#define glIsProgram(program) furai::GLES2IsProgram(program)
#define glIsRenderbuffer(renderbuffer) furai::GLES2IsRenderbuffer(renderbuffer)
#define glIsShader(shader) furai::GLES2IsShader(shader)
#define glIsTexture(texture) furai::GLES2IsTexture(texture)
#define glLineWidth(width) furai::GLES2LineWidth(width)
#define glLinkProgram(program) furai::GLES2LinkProgram(program)
#define glPixelStorei(pname, param) furai::GLES2PixelStorei(pname, param)
#define glPolygonOffset(factor, units) furai::GLES2PolygonOffset(factor, units)
#define glReadPixels(x, y, width, height, format, type, pixels) furai::GLES2ReadPixels(x, y, width, height, format, type, pixels)
#define glReleaseShaderCompiler furai::GLES2ReleaseShaderCompiler
#define glRenderbufferStorage(target, internalformat, width, height) furai::GLES2RenderbufferStorage(target, internalformat, width, height)
#define glSampleCoverage(value, invert) furai::GLES2SampleCoverage(value, invert)
#define glScissor(x, y, width, height) furai::GLES2Scissor(x, y, width, height)
#define glShaderBinary(n, shaders, binaryformat, binary, length) furai::GLES2ShaderBinary(n, shaders, binaryformat, binary, length)
#define glShaderSource(shader, count, string, length) furai::GLES2ShaderSource(shader, count, string, length)
#define glStencilFunc(func, ref, mask) furai::GLES2StencilFunc(func, ref, mask)
#define glStencilFuncSeparate(face, func, ref, mask) furai::GLES2StencilFuncSeparate(face, func, ref, mask)
#define glStencilMask(mask) furai::GLES2StencilMask(mask)
#define glStencilMaskSeparate(face, mask) furai::GLES2StencilMaskSeparate(face, mask)
#define glStencilOp(fail, zfail, zpass) furai::GLES2StencilOp(fail, zfail, zpass)
#define glStencilOpSeparate(face, fail, zfail, zpass) furai::GLES2StencilOpSeparate(face, fail, zfail, zpass)
#define glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels) furai::GLES2TexImage2D(target, level, internalformat, width, height, border, format, type, pixels)
#define glTexParameterf(target, pname, param) furai::GLES2TexParameterf(target, pname, param)
#define glTexParameterfv(target, pname, params) furai::GLES2TexParameterfv(target, pname, params)
#define glTexParameteri(target, pname, param) furai::GLES2TexParameteri(target, pname, param)
#define glTexParameteriv(target, pname, params) furai::GLES2TexParameteriv(target, pname, params)
#define glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels) furai::GLES2TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels)
#define glUniform1f(location, x) furai::GLES2Uniform1f(location, x)
#define glUniform1fv(location, count, v) furai::GLES2Uniform1fv(location, count, v)
#define glUniform1i(location, x) furai::GLES2Uniform1i(location, x)
#define glUniform1iv(location, count, v) furai::GLES2Uniform1iv(location, count, v)
#define glUniform2f(location, x, y) furai::GLES2Uniform2f(location, x, y)
#define glUniform2fv(location, count, v) furai::GLES2Uniform2fv(location, count, v)
#define glUniform2i(location, x, y) furai::GLES2Uniform2i(location, x, y)
#define glUniform2iv(location, count, v) furai::GLES2Uniform2iv(location, count, v)
#define glUniform3f(location, x, y, z) furai::GLES2Uniform3f(location, x, y, z)
#define glUniform3fv(location, count, v) furai::GLES2Uniform3fv(location, count, v)
#define glUniform3i(location, x, y, z) furai::GLES2Uniform3i(location, x, y, z)
#define glUniform3iv(location, count, v) furai::GLES2Uniform3iv(location, count, v)
#define glUniform4f(location, x, y, z, w) furai::GLES2Uniform4f(location, x, y, z, w)
#define glUniform4fv(location, count, v) furai::GLES2Uniform4fv(location, count, v)
#define glUniform4i(location, x, y, z, w) furai::GLES2Uniform4i(location, x, y, z, w)
#define glUniform4iv(location, count, v) furai::GLES2Uniform4iv(location, count, v)
#define glUniformMatrix2fv(location, count, transpose, value) furai::GLES2UniformMatrix2fv(location, count, transpose, value)
#define glUniformMatrix3fv(location, count, transpose, value) furai::GLES2UniformMatrix3fv(location, count, transpose, value)
#define glUniformMatrix4fv(location, count, transpose, value) furai::GLES2UniformMatrix4fv(location, count, transpose, value)
#define glUseProgram(program) furai::GLES2UseProgram(program)
#define glValidateProgram(program) furai::GLES2ValidateProgram(program)
#define glVertexAttrib1f(indx, x) furai::GLES2VertexAttrib1f(indx, x)
#define glVertexAttrib1fv(indx, values) furai::GLES2VertexAttrib1fv(indx, values)
#define glVertexAttrib2f(indx, x, y) furai::GLES2VertexAttrib2f(indx, x, y)
#define glVertexAttrib2fv(indx, values) furai::GLES2VertexAttrib2fv(indx, values)
#define glVertexAttrib3f(indx, x, y, z) furai::GLES2VertexAttrib3f(indx, x, y, z)
#define glVertexAttrib3fv(indx, values) furai::GLES2VertexAttrib3fv(indx, values)
#define glVertexAttrib4f(indx, x, y, z, w) furai::GLES2VertexAttrib4f(indx, x, y, z, w)
#define glVertexAttrib4fv(indx, values) furai::GLES2VertexAttrib4fv(indx, values)
#define glVertexAttribPointer(indx, size, type, normalized, stride, ptr) furai::GLES2VertexAttribPointer(indx, size, type, normalized, stride, ptr)
#define glViewport(x, y, width, height) furai::GLES2Viewport(x, y, width, height)

/*************************************************/

namespace furai {

void GLES2ActiveTexture(GLenum texture);
void GLES2AttachShader(GLuint program, GLuint shader);
void GLES2BindAttribLocation(GLuint program, GLuint index, const GLchar* name);
void GLES2BindBuffer(GLenum target, GLuint buffer);
void GLES2BindFramebuffer(GLenum target, GLuint framebuffer);
void GLES2BindRenderbuffer(GLenum target, GLuint renderbuffer);
void GLES2BindTexture(GLenum target, GLuint texture);
void GLES2BlendColor(GLclampf red, GLclampf green, GLclampf blue,
                     GLclampf alpha);
void GLES2BlendEquation(GLenum mode);
void GLES2BlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha);
void GLES2BlendFunc(GLenum sfactor, GLenum dfactor);
void GLES2BlendFuncSeparate(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha,
                            GLenum dstAlpha);
void GLES2BufferData(GLenum target, GLsizeiptr size, const GLvoid* data,
                     GLenum usage);
void GLES2BufferSubData(GLenum target, GLintptr offset, GLsizeiptr size,
                        const GLvoid* data);
GLenum GLES2CheckFramebufferStatus(GLenum target);
void GLES2Clear(GLbitfield mask);
void GLES2ClearColor(GLclampf red, GLclampf green, GLclampf blue,
                     GLclampf alpha);
void GLES2ClearDepthf(GLclampf depth);
void GLES2ClearStencil(GLint s);
void GLES2ColorMask(GLboolean red, GLboolean green, GLboolean blue,
                    GLboolean alpha);
void GLES2CompileShader(GLuint shader);
void GLES2CompressedTexImage2D(GLenum target, GLint level,
                               GLenum internalformat, GLsizei width,
                               GLsizei height, GLint border, GLsizei imageSize,
                               const GLvoid* data);
void GLES2CompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset,
                                  GLint yoffset, GLsizei width, GLsizei height,
                                  GLenum format, GLsizei imageSize,
                                  const GLvoid* data);
void GLES2CopyTexImage2D(GLenum target, GLint level, GLenum internalformat,
                         GLint x, GLint y, GLsizei width, GLsizei height,
                         GLint border);
void GLES2CopyTexSubImage2D(GLenum target, GLint level, GLint xoffset,
                            GLint yoffset, GLint x, GLint y, GLsizei width,
                            GLsizei height);
GLuint GLES2CreateProgram(void);
GLuint GLES2CreateShader(GLenum type);
void GLES2CullFace(GLenum mode);
void GLES2DeleteBuffers(GLsizei n, const GLuint* buffers);
void GLES2DeleteFramebuffers(GLsizei n, const GLuint* framebuffers);
void GLES2DeleteProgram(GLuint program);
void GLES2DeleteRenderbuffers(GLsizei n, const GLuint* renderbuffers);
void GLES2DeleteShader(GLuint shader);
void GLES2DeleteTextures(GLsizei n, const GLuint* textures);
void GLES2DepthFunc(GLenum func);
void GLES2DepthMask(GLboolean flag);
void GLES2DepthRangef(GLclampf zNear, GLclampf zFar);
void GLES2DetachShader(GLuint program, GLuint shader);
void GLES2Disable(GLenum cap);
void GLES2DisableVertexAttribArray(GLuint index);
void GLES2DrawArrays(GLenum mode, GLint first, GLsizei count);
void GLES2DrawElements(GLenum mode, GLsizei count, GLenum type,
                       const GLvoid* indices);
void GLES2Enable(GLenum cap);
void GLES2EnableVertexAttribArray(GLuint index);
void GLES2Finish(void);
void GLES2Flush(void);
void GLES2FramebufferRenderbuffer(GLenum target, GLenum attachment,
                                  GLenum renderbuffertarget,
                                  GLuint renderbuffer);
void GLES2FramebufferTexture2D(GLenum target, GLenum attachment,
                               GLenum textarget, GLuint texture, GLint level);
void GLES2FrontFace(GLenum mode);
void GLES2GenBuffers(GLsizei n, GLuint* buffers);
void GLES2GenerateMipmap(GLenum target);
void GLES2GenFramebuffers(GLsizei n, GLuint* framebuffers);
void GLES2GenRenderbuffers(GLsizei n, GLuint* renderbuffers);
void GLES2GenTextures(GLsizei n, GLuint* textures);
void GLES2GetActiveAttrib(GLuint program, GLuint index, GLsizei bufsize,
                          GLsizei* length, GLint* size, GLenum* type,
                          GLchar* name);
void GLES2GetActiveUniform(GLuint program, GLuint index, GLsizei bufsize,
                           GLsizei* length, GLint* size, GLenum* type,
                           GLchar* name);
void GLES2GetAttachedShaders(GLuint program, GLsizei maxcount, GLsizei* count,
                             GLuint* shaders);
int GLES2GetAttribLocation(GLuint program, const GLchar* name);
void GLES2GetBooleanv(GLenum pname, GLboolean* params);
void GLES2GetBufferParameteriv(GLenum target, GLenum pname, GLint* params);
GLenum GLES2GetError(void);
void GLES2GetFloatv(GLenum pname, GLfloat* params);
void GLES2GetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment,
                                              GLenum pname, GLint* params);
void GLES2GetIntegerv(GLenum pname, GLint* params);
void GLES2GetProgramiv(GLuint program, GLenum pname, GLint* params);
void GLES2GetProgramInfoLog(GLuint program, GLsizei bufsize, GLsizei* length,
                            GLchar* infolog);
void GLES2GetRenderbufferParameteriv(GLenum target, GLenum pname,
                                     GLint* params);
void GLES2GetShaderiv(GLuint shader, GLenum pname, GLint* params);
void GLES2GetShaderInfoLog(GLuint shader, GLsizei bufsize, GLsizei* length,
                           GLchar* infolog);
void GLES2GetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype,
                                   GLint* range, GLint* precision);
void GLES2GetShaderSource(GLuint shader, GLsizei bufsize, GLsizei* length,
                          GLchar* source);
const GLubyte* GLES2GetString(GLenum name);
void GLES2GetTexParameterfv(GLenum target, GLenum pname, GLfloat* params);
void GLES2GetTexParameteriv(GLenum target, GLenum pname, GLint* params);
void GLES2GetUniformfv(GLuint program, GLint location, GLfloat* params);
void GLES2GetUniformiv(GLuint program, GLint location, GLint* params);
int GLES2GetUniformLocation(GLuint program, const GLchar* name);
void GLES2GetVertexAttribfv(GLuint index, GLenum pname, GLfloat* params);
void GLES2GetVertexAttribiv(GLuint index, GLenum pname, GLint* params);
void GLES2GetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid** pointer);
void GLES2Hint(GLenum target, GLenum mode);
GLboolean GLES2IsBuffer(GLuint buffer);
GLboolean GLES2IsEnabled(GLenum cap);
GLboolean GLES2IsFramebuffer(GLuint framebuffer);
GLboolean GLES2IsProgram(GLuint program);
GLboolean GLES2IsRenderbuffer(GLuint renderbuffer);
GLboolean GLES2IsShader(GLuint shader);
GLboolean GLES2IsTexture(GLuint texture);
void GLES2LineWidth(GLfloat width);
void GLES2LinkProgram(GLuint program);
void GLES2PixelStorei(GLenum pname, GLint param);
void GLES2PolygonOffset(GLfloat factor, GLfloat units);
void GLES2ReadPixels(GLint x, GLint y, GLsizei width, GLsizei height,
                     GLenum format, GLenum type, GLvoid* pixels);
void GLES2ReleaseShaderCompiler(void);
void GLES2RenderbufferStorage(GLenum target, GLenum internalformat,
                              GLsizei width, GLsizei height);
void GLES2SampleCoverage(GLclampf value, GLboolean invert);
void GLES2Scissor(GLint x, GLint y, GLsizei width, GLsizei height);
void GLES2ShaderBinary(GLsizei n, const GLuint* shaders, GLenum binaryformat,
                       const GLvoid* binary, GLsizei length);
void GLES2ShaderSource(GLuint shader, GLsizei count, const GLchar** string,
                       const GLint* length);
void GLES2StencilFunc(GLenum func, GLint ref, GLuint mask);
void GLES2StencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask);
void GLES2StencilMask(GLuint mask);
void GLES2StencilMaskSeparate(GLenum face, GLuint mask);
void GLES2StencilOp(GLenum fail, GLenum zfail, GLenum zpass);
void GLES2StencilOpSeparate(GLenum face, GLenum fail, GLenum zfail,
                            GLenum zpass);
void GLES2TexImage2D(GLenum target, GLint level, GLint internalformat,
                     GLsizei width, GLsizei height, GLint border, GLenum format,
                     GLenum type, const GLvoid* pixels);
void GLES2TexParameterf(GLenum target, GLenum pname, GLfloat param);
void GLES2TexParameterfv(GLenum target, GLenum pname, const GLfloat* params);
void GLES2TexParameteri(GLenum target, GLenum pname, GLint param);
void GLES2TexParameteriv(GLenum target, GLenum pname, const GLint* params);
void GLES2TexSubImage2D(GLenum target, GLint level, GLint xoffset,
                        GLint yoffset, GLsizei width, GLsizei height,
                        GLenum format, GLenum type, const GLvoid* pixels);
void GLES2Uniform1f(GLint location, GLfloat x);
void GLES2Uniform1fv(GLint location, GLsizei count, const GLfloat* v);
void GLES2Uniform1i(GLint location, GLint x);
void GLES2Uniform1iv(GLint location, GLsizei count, const GLint* v);
void GLES2Uniform2f(GLint location, GLfloat x, GLfloat y);
void GLES2Uniform2fv(GLint location, GLsizei count, const GLfloat* v);
void GLES2Uniform2i(GLint location, GLint x, GLint y);
void GLES2Uniform2iv(GLint location, GLsizei count, const GLint* v);
void GLES2Uniform3f(GLint location, GLfloat x, GLfloat y, GLfloat z);
void GLES2Uniform3fv(GLint location, GLsizei count, const GLfloat* v);
void GLES2Uniform3i(GLint location, GLint x, GLint y, GLint z);
void GLES2Uniform3iv(GLint location, GLsizei count, const GLint* v);
void GLES2Uniform4f(GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void GLES2Uniform4fv(GLint location, GLsizei count, const GLfloat* v);
void GLES2Uniform4i(GLint location, GLint x, GLint y, GLint z, GLint w);
void GLES2Uniform4iv(GLint location, GLsizei count, const GLint* v);
void GLES2UniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose,
                           const GLfloat* value);
void GLES2UniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose,
                           const GLfloat* value);
void GLES2UniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose,
                           const GLfloat* value);
void GLES2UseProgram(GLuint program);
void GLES2ValidateProgram(GLuint program);
void GLES2VertexAttrib1f(GLuint indx, GLfloat x);
void GLES2VertexAttrib1fv(GLuint indx, const GLfloat* values);
void GLES2VertexAttrib2f(GLuint indx, GLfloat x, GLfloat y);
void GLES2VertexAttrib2fv(GLuint indx, const GLfloat* values);
void GLES2VertexAttrib3f(GLuint indx, GLfloat x, GLfloat y, GLfloat z);
void GLES2VertexAttrib3fv(GLuint indx, const GLfloat* values);
void GLES2VertexAttrib4f(GLuint indx, GLfloat x, GLfloat y, GLfloat z,
                         GLfloat w);
void GLES2VertexAttrib4fv(GLuint indx, const GLfloat* values);
void GLES2VertexAttribPointer(GLuint indx, GLint size, GLenum type,
                              GLboolean normalized, GLsizei stride,
                              const GLvoid* ptr);
void GLES2Viewport(GLint x, GLint y, GLsizei width, GLsizei height);
}  //namespace

#endif /* FURAI_GL2_H_ */
