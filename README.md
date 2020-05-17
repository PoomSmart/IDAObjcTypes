# IDAObjcTypes
A collection of (public and private) types and functions definitions useful for Objective-C binaries analysis.

## Why even?
Would you rather re-define the same functions or types over and over as you work with different binaries?

## Usage
From inside IDA Pro, simply go to `File > Load file > Parse C header file` then choose `IDA.h` to import everything at once.

Or, run this IDA command: `idaapi.idc_parse_types("/path/to/IDAObjcTypes/IDA.h", idc.PT_FILE)`

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
- GraphicsServices
- IOKit
- IOSurface
- Kernel
- MobileGestalt
- Security
- Swift (WIP, PRs welcome)
- System (libSystem)
- UIKit
- dyld
- icu
- objc
- os
- pthread
- sandbox
- sqlite
- xpc