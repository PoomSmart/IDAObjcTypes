#ifndef DYLD_H_
#define DYLD_H_

#import "../BaseTypes.h"

typedef uint32_t dyld_platform_t;

typedef struct dyld_build_version_t {
    dyld_platform_t platform;
    uint32_t version;
} dyld_build_version_t;

typedef const struct dyld_process_info_base *dyld_process_info;

typedef struct dyld_unwind_sections {
    const struct mach_header *mh;
    const void *dwarf_section;
    uintptr_t dwarf_section_length;
    const void *compact_unwind_section;
    uintptr_t compact_unwind_section_length;
} dyld_unwind_sections;

typedef enum Platform {
    unknown             = 0,
    macOS               = 1,    // PLATFORM_MACOS
    iOS                 = 2,    // PLATFORM_IOS
    tvOS                = 3,    // PLATFORM_TVOS
    watchOS             = 4,    // PLATFORM_WATCHOS
    bridgeOS            = 5,    // PLATFORM_BRIDGEOS
    iOSMac              = 6,    // PLATFORM_MACCATALYST
    iOS_simulator       = 7,    // PLATFORM_IOSSIMULATOR
    tvOS_simulator      = 8,    // PLATFORM_TVOSSIMULATOR
    watchOS_simulator   = 9,    // PLATFORM_WATCHOSSIMULATOR
    driverKit           = 10,   // PLATFORM_DRIVERKIT
} Platform;

typedef struct PlatformInfo {
    const char* name;
    Platform    platform;
    uint32_t    loadCommand;
} PlatformInfo;

#endif