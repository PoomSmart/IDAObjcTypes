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
- AVFoundation
- CommonCrypto
- CoreAnimation
- CoreAudio
- CoreFoundation
- CoreGraphics
- CoreMedia
- CoreText
- CoreVideo
- CydiaSubstrate (if you ever want to RE tweaks)
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
- sandbox
- xpc