# IDAObjcTypes
A collection of (public and private) types and functions definitions useful for Objective-C binaries analysis.

## Why even?
Would you rather re-define the same functions or types over and over as you work with different binaries?

## Usage
From inside IDA Pro, simply go to `File > Load file > Parse C header file` then choose `IDA.h` to import everything at once.

If you work with 32-bit binaries, you should uncomment `#define x86` in `IDA.h`.

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
- CoreServices
- CoreVideo
- CydiaSubstrate (if you ever want to RE tweaks)
- Darwin
- Foundation
- IOKit
- IOSurface
- Kernel
- MobileGestalt
- Swift (WIP, PRs welcomed)
- UIKit
- dyld
- icu
- objc
- os
- pthread
- sandbox
- sqlite
- xpc