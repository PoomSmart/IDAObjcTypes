# IDAObjcTypes
A collection of (public and private) types and functions definitions useful for Objective-C binaries analysis.

## Why even?
Would you rather re-define the same functions or types over and over as you work in different binaries?

## Usage
From inside IDA Pro, simply go to `File > Load file > Parse C header file` then choose `IDA.h` to import everything at once.

If you work on 32-bit binaries, you may want to uncomment `#define x86` in `IDA.h`.

## Included Frameworks/Libraries
More to be added as the owner reverses more binaries.
- AudioToolbox
- CoreAudio
- CoreFoundation
- CoreGraphics
- CoreMedia
- CoreText
- CoreVideo
- Darwin
- Foundation
- IOKit
- IOSurface
- Kernel
- MobileGestalt
- UIKit
- dyld
- objc
- os
- pthread
- xpc