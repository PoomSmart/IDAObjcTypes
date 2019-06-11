#ifndef IDATYPES_H_
#define IDATYPES_H_

// ^(.+) (.+)\((.*)\);$
// $1 $2($3);\n$1 _imp__$2($3);

// Revert
// ^(.+) (.+)\((.*)\);$\n^(.+) _imp__(.+)\((.*)\);
// $1 $2($3);

typedef  signed char        int8;
typedef  unsigned char      uint8;
typedef  signed short       int16;
typedef  unsigned short     uint16;
typedef  signed long        int32;
typedef  unsigned long      uint32;
typedef  signed long long   int64;
typedef  unsigned long long uint64;

typedef float Float32;
typedef double Float64;
typedef UInt32 UTF32Char;
typedef UInt16 UniChar;
typedef UInt16 UTF16Char;
typedef UInt8 UTF8Char;

extern uintptr_t __stack_chk_guard;
__noreturn void __stack_chk_fail(void);

#import "Kernel/Types.h"
#import "dyld/Types.h"
#import "sandbox/Types.h"
#import "icu/Types.h"
#import "CoreAnimation/Types.h"
#import "CoreAudio/Types.h"
#import "AudioToolbox/Types.h"
#import "CommonCrypto/Types.h"
#import "CoreFoundation/Types.h"
#import "CoreGraphics/Types.h"
#import "CoreMedia/Types.h"
#import "CoreText/Types.h"
#import "CoreVideo/Types.h"
#import "Darwin/Types.h"
#import "Foundation/Types.h"
#import "IOKit/Types.h"
#import "IOSurface/Types.h"
#import "objc/Types.h"
#import "os/Types.h"
#import "pthread/Types.h"
#import "Security/Types.h"
#import "UIKit/Types.h"
#import "xpc/Types.h"
#ifdef SWIFT
#import "Swift/Types.h"
#endif

#endif