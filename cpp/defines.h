// generated by CommonPackage.cmake, do not edit.

/**
 * @file @PROJECT_INCLUDE_NAME@/defines.h
 * Includes compile-time defines of @PROJECT_NAME@.
 */

#ifndef @UPPER_PROJECT_NAME@_DEFINES_H
#define @UPPER_PROJECT_NAME@_DEFINES_H

#ifdef __APPLE__
#  include <@PROJECT_INCLUDE_NAME@/definesDarwin.h>
#elif defined (__linux__)
#  include <@PROJECT_INCLUDE_NAME@/definesLinux.h>
#elif defined (_WIN32)
#  include <@PROJECT_INCLUDE_NAME@/definesWin32.h>
#else
#  error Unknown OS
#endif

#endif
