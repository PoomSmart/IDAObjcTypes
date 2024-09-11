# IDAObjcTypes
A collection of (public and private) types and functions definitions useful for iOS/macOS binaries analysis.

## Why even?
Would you rather re-define the same functions or types over and over as you work with different binaries?

## Usage (IDA Pro 8+)

1. Go to `File > Load file > Parse C header file` then choose `IDA.h` to import everything at once. Or, run this IDA command: `idaapi.idc_parse_types("/path/to/IDAObjcTypes/IDA.h", idc.PT_FILE)`.
2. Copy `IDA.til` and `IDA32.til` to `til` folder inside IDA application directory.
3. In IDA Pro, open `Type Libraries` window via `View > Open subviews > Type libraries` or press `Shift + F11`.
4. Right-click the type list and select `Load type library...`.
5. Select `IDA` (or `IDA32` if you target 32-bit binaries) and click `OK` button.

TIL created via this command:

```bash
tilib -c -hIDA.h IDA.til -D__EA64__ -P -tIDAObjcTypes
tilib -c -hIDA.h IDA32.til -P -tIDAObjcTypes32
```

## Usage (IDA Pro 7)
Go to `File > Load file > Parse C header file` then choose `IDA.h` to import everything at once.

Or, run this IDA command: `idaapi.idc_parse_types("/path/to/IDAObjcTypes/IDA.h", idc.PT_FILE)`

## Usage (Binary Ninja)
1. Go to `Analysis > Import Header File...`.
2. In `Header File(s)`, browse for `IDA.h` in this project.
3. In `Compiler Flag(s)`, add `-D__EA64__ -D__BINJA__`.
4. Click `Import` button.

## Usage (Ghidra)
1. Go to `File > Parse C Source`.
2. (Go to 6. if it's not the first time you do this) Clone `objc_mac_carbon.prf` profile into a new profile, called `OBJC.prf`, for example.
3. Remove everything in `Source files to parse`, and add `IDA.h` in this project to the list.
4. Add two additional flags: `-D__EA64__ -DGHIDRA` to Parse Options.
5. Save `OBJC.prf` profile as you might use it later.
6. Click `Parse to Program`, click `Proceed` if anything pops up.
7. Check `Data Type Manager` window (at bottom-left), (long) right-click at `<your-binary-name>` and select `Apply Function Data Types`.

### Ghidra limitation
You have to manually specify the size of enum members if what you get is incorrect.

## iOS version-specific analysis

Uncomment `// #define IOS14` inside `IDA.h` before you import it if you are reversing iOS 14 or lower binaries.

## Included Frameworks/Libraries
More to be added as the owner reverses more binaries.
- AppSupport
- AssetsLibraryServices
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
- IOMobileFramebuffer
- IOKit
- IOSurface
- Kernel
- MediaRemote
- MobileGestalt
- PowerLog
- Security
- SoftLinking
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
- fishhook