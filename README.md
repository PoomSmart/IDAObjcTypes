# IDAObjcTypes
A collection of (public and private) types and functions definitions useful for Objective-C binaries analysis.

## Why even?
Would you rather re-define the same functions or types over and over as you work with different binaries?

## Usage (IDA Pro, 7.2+ recommended)
Go to `File > Load file > Parse C header file` then choose `IDA.h` to import everything at once.

Or, run this IDA command: `idaapi.idc_parse_types("/path/to/IDAObjcTypes/IDA.h", idc.PT_FILE)`

## Usage (Ghidra)
1. Go to `File > Parse C Source`.
2. (Go to 6. if it's not the first time you do this) Clone `objc_mac_carbon.prf` profile into a new profile, called `OBJC.prf`, for example.
3. Remove everything in `Source files to parse`, and add `IDA.h` to the list.
4. Add two additional flags: `-D__EA64__ -DGHIDRA` to Parse Options.
5. Save `OBJC.prf` profile as you might use it later.
6. Click `Parse to Program`, click `Proceed` if anything pops up.
7. Check `Data Type Manager` window (at bottom-left), (long) right-click at `<your-binary-name>` and select `Apply Function Data Types`.

### Ghidra limitation
You have to manually specify the size of enum members if what you get is incorrect.

## Included Frameworks/Libraries
More to be added as the owner reverses more binaries.
- AppSupport
- AudioToolbox
- AVFoundation
- CommonCrypto
- CoreAnimation
- CoreAudio
- CoreFoundation
- CoreGraphics
- CoreMedia
- CoreServices
- CoreText
- CoreVideo
- CydiaSubstrate (if you ever want to RE tweaks)
- Darwin
- Foundation
- GraphicsServices
- IOKit
- IOSurface
- Kernel
- MediaRemote
- MobileGestalt
- Security
- SpringBoard
- SpringBoardHome
- Swift (WIP, PRs welcome)
- System (libSystem)
- SystemConfiguration
- UIKit
- dyld
- icu
- objc
- os
- pthread
- sandbox
- sqlite
- xpc