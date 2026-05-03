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

By default the headers target **iOS 17+**. If you are reversing an older binary, uncomment the matching `#define` near the top of `IDA.h`:

| Target iOS | Line to uncomment |
|---|---|
| iOS 17 or lower | `// #define IOS17` |
| iOS 16 or lower | `// #define IOS16` |
| iOS 15 or lower | `// #define IOS15` |
| iOS 14 or lower | `// #define IOS14` |

The defines cascade — uncommenting `IOS14` also suppresses iOS 15, 16, and 17 additions automatically.

## ARM64e / pointer authentication

When analysing **arm64e** slices (iPhone XS / A12 and later), add `-D__ARM64E__` to your import flags. This enables the `ptrauth_strip` / `__ptrauth` annotation macros defined in `BaseTypes.h`.

## Framework coverage

| Status | Meaning |
|---|---|
| ✅ Complete | Types and function declarations, regularly updated |
| 🔶 Partial | Some types or functions missing |
| 🔧 Stub | Minimal declarations; contributions welcome |
| 🚧 WIP | Work in progress |

| Framework | Coverage |
|---|---|
| AppSupport | 🔶 Partial |
| AssetsLibraryServices | 🔶 Partial |
| AudioToolbox | 🔶 Partial |
| AVFCapture | 🔧 Stub |
| AVFoundation | 🔧 Stub |
| CommonCrypto | ✅ Complete |
| CoreAnimation | 🔶 Partial |
| CoreAudio | 🔶 Partial |
| CoreFoundation | ✅ Complete |
| CoreGraphics | ✅ Complete |
| CoreMedia | 🔶 Partial |
| CoreServices | 🔶 Partial |
| CoreText | 🔶 Partial |
| CoreVideo | 🔶 Partial |
| CydiaSubstrate | ✅ Complete |
| Darwin | ✅ Complete |
| dyld | 🔶 Partial |
| fishhook | ✅ Complete |
| Foundation | ✅ Complete |
| GraphicsServices | 🔶 Partial |
| icu | 🔶 Partial |
| IOMobileFramebuffer | 🔶 Partial |
| IOKit | 🔶 Partial |
| IOSurface | 🔶 Partial |
| Kernel | 🔶 Partial |
| MediaRemote | 🔶 Partial |
| MobileGestalt | 🔶 Partial |
| objc | ✅ Complete |
| os | 🔶 Partial |
| PowerLog | 🔶 Partial |
| pthread | 🔶 Partial |
| QuartzCore | 🔶 Partial |
| sandbox | 🔶 Partial |
| Security | ✅ Complete |
| SoftLinking | 🔧 Stub |
| SpringBoard | 🔶 Partial |
| SpringBoardHome | 🔶 Partial |
| sqlite | 🔶 Partial |
| Swift | 🚧 WIP |
| System (libSystem) | 🔶 Partial |
| SystemConfiguration | 🔶 Partial |
| UIKit | ✅ Complete |
| xpc | 🔶 Partial |

## Contributing

PRs are welcome! Please follow these guidelines:

1. **File structure**: Each framework should have a `FrameworkName/FrameworkName.h` for function declarations and a `FrameworkName/Types.h` for type definitions. Import `Types.h` from the main header.
2. **Source annotations**: Use the comment conventions defined in `BaseTypes.h`:
   - No annotation — from Apple SDK / official headers
   - `// RE:` — reverse-engineered; accuracy not guaranteed
   - `// from research` — crowdsourced / community research
   - `// WIP` — incomplete
3. **Version guards**: Wrap definitions that first appeared in iOS 15/16/17 inside `#ifndef IOS15` / `#ifndef IOS16` / `#ifndef IOS17` guards respectively.
4. **Regenerate .til files**: After changing headers, run `./build.sh /path/to/tilib` to update `IDA.til` and `IDA32.til`.