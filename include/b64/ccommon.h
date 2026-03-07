/*
ccommon.h - common header for encoding and decoding algorithm

This is part of the libb64 project, and has been placed in the public domain.
For details, see http://sourceforge.net/projects/libb64
*/

#ifndef BASE64_CCOMMON_H
#define BASE64_CCOMMON_H

#define BASE64_VER_MAJOR	2
#define BASE64_VER_MINOR	0

#ifdef _WIN32
  #ifdef LIBB64_EXPORTS
    #define LIBB64 __declspec(dllexport)
  #else
    #define LIBB64 __declspec(dllimport)
  #endif
#else
#define LIBB64
#endif

#endif /* BASE64_CCOMMON_H */
