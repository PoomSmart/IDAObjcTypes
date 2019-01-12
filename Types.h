#ifndef IDATYPES_H_
#define IDATYPES_H_

// ^(.+) (.+)\((.*)\);$
// $1 $2($3);\n$1 _imp__$2($3);

// Revert
// ^(.+) (.+)\((.*)\);$\n^(.+) _imp__(.+)\((.*)\);
// $1 $2($3);

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
#import "UIKit/Types.h"
#import "xpc/Types.h"

#endif