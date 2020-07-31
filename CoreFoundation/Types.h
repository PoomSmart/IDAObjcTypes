#ifndef COREFOUNDATION_H_
#define COREFOUNDATION_H_

#import "../BaseTypes.h"

struct __CFString {
    void *isa;
    __int64 info;
    char *data;
    __int64 length;
};

typedef struct __CFError *CFErrorRef;
typedef const struct __CFAllocator *CFAllocatorRef;
typedef struct __CFArray *CFArrayRef;
typedef struct __CFArray *CFMutableArrayRef;
typedef const __CFString *CFStringRef;
typedef const __CFString *CFMutableStringRef;
typedef const struct __CFDictionary *CFDictionaryRef;
typedef struct __CFDictionary *CFMutableDictionaryRef;
typedef struct __CFBundle *CFBundleRef;
typedef struct __CFLocale *CFLocaleRef;
typedef struct __CFBoolean *CFBooleanRef;
typedef struct __CFNumber *CFNumberRef;
typedef struct __CFDate *CFDateRef;
typedef struct __CFData *CFDataRef;
typedef struct __CFData *CFMutableDataRef;
typedef struct __CFURL *CFURLRef;
typedef struct __CFRunLoop *CFRunLoopRef;
typedef struct __CFRunLoopSource *CFRunLoopSourceRef;
typedef struct __CFRunLoopObserver *CFRunLoopObserverRef;
typedef struct __CFRunLoopTimer *CFRunLoopTimerRef;
typedef struct __CFAttributedString *CFAttributedStringRef;
typedef struct __CFMutableAttributedString *CFMutableAttributedStringRef;
typedef struct __CFNotificationCenter *CFNotificationCenterRef;
typedef struct __CFUserNotification *CFUserNotificationRef;
typedef struct __CFCharacterSet *CFCharacterSetRef;
typedef struct __CFCharacterSet *CFMutableCharacterSetRef;
typedef struct __CFSet *CFSetRef;
typedef struct __CFSet *CFMutableSetRef;
typedef struct __CFReadStream *CFReadStreamRef;
typedef struct __CFWriteStream *CFWriteStreamRef;
typedef struct __CFUUID *CFUUIDRef;
typedef const struct __CFBag *CFBagRef;
typedef struct __CFBag *CFMutableBagRef;
typedef struct __CFStringTokenizer *CFStringTokenizerRef;
typedef struct __CFMachPort *CFMachPortRef;
typedef struct __CFMessagePort *CFMessagePortRef;
typedef struct __CFMessagePortContext CFMessagePortContext;
typedef struct __CFHTTPMessage *CFHTTPMessageRef;

typedef const void *CFTypeRef;
typedef const unsigned char *ConstStr255Param;

typedef CFTypeRef CFPropertyListRef;

typedef int CFBundleRefNum;

typedef long CFIndex;

typedef unsigned long CFTypeID;
typedef unsigned long CFOptionFlags;
typedef unsigned long CFHashCode;

typedef SInt16 LangCode;
typedef SInt16 RegionCode;
typedef SInt16 ScriptCode;

typedef double CFTimeInterval;

typedef CFOptionFlags CFDataSearchFlags;
typedef CFOptionFlags CFURLBookmarkResolutionOptions;

typedef CFIndex CFNotificationSuspensionBehavior;
typedef CFIndex CFStringNormalizationForm;
typedef CFIndex CFStringCharacterClusterType;
typedef CFIndex CFSystemVersion;
typedef CFIndex CFStreamStatus;
typedef CFIndex CFURLPathStyle;
typedef CFIndex CFURLComponentType;

PS_ENUM(SInt32, CFRunLoopRunResult) {
    kCFRunLoopRunFinished = 1,
    kCFRunLoopRunStopped = 2,
    kCFRunLoopRunTimedOut = 3,
    kCFRunLoopRunHandledSource = 4
};

PS_ENUM(CFIndex, CFComparisonResult) { kCFCompareLessThan = -1, kCFCompareEqualTo = 0, kCFCompareGreaterThan = 1 };

PS_ENUM(CFIndex, CFSearchPathDirectory) {
    kCFApplicationDirectory = 1,
    kCFDemoApplicationDirectory,
    kCFDeveloperApplicationDirectory,
    kCFAdminApplicationDirectory,
    kCFLibraryDirectory,
    kCFDeveloperDirectory,
    kCFUserDirectory,
    kCFDocumentationDirectory,
    kCFDocumentDirectory,
    kCFAllApplicationsDirectory = 100,
    kCFAllLibrariesDirectory = 101
};

PS_ENUM(CFIndex, CFPropertyListFormat) {
    kCFPropertyListOpenStepFormat = 1,
    kCFPropertyListXMLFormat_v1_0 = 100,
    kCFPropertyListBinaryFormat_v1_0 = 200
};

PS_ENUM(CFOptionFlags, CFSearchPathDomainMask) {
    kCFUserDomainMask = 1,
    kCFLocalDomainMask = 2,
    kCFNetworkDomainMask = 4,
    kCFSystemDomainMask = 8,
    kCFAllDomainsMask = 0x0ffff
};

PS_ENUM(CFOptionFlags, CFRunLoopActivity) {
    kCFRunLoopEntry = (1UL << 0),
    kCFRunLoopBeforeTimers = (1UL << 1),
    kCFRunLoopBeforeSources = (1UL << 2),
    kCFRunLoopBeforeWaiting = (1UL << 5),
    kCFRunLoopAfterWaiting = (1UL << 6),
    kCFRunLoopExit = (1UL << 7),
    kCFRunLoopAllActivities = 0x0FFFFFFFU
};

typedef CFStringRef CFNotificationName;
typedef CFStringRef CFErrorDomain;
typedef CFStringRef CFRunLoopMode;
typedef CFStringRef CFStreamPropertyKey;
typedef CFStringRef CFLocaleKey;
typedef CFStringRef CFLocaleIdentifier;

typedef CFComparisonResult (*CFComparatorFunction)(const void *val1, const void *val2, void *context);

typedef const void *(*CFArrayRetainCallBack)(CFAllocatorRef allocator, const void *value);
typedef void (*CFArrayApplierFunction)(const void *value, void *context);
typedef void (*CFArrayReleaseCallBack)(CFAllocatorRef allocator, const void *value);
typedef void (*CFNotificationCallback)(CFNotificationCenterRef center, void *observer, CFNotificationName name, const void *object,
                                       CFDictionaryRef userInfo);

typedef CFStringRef (*CFArrayCopyDescriptionCallBack)(const void *value);

typedef CFTimeInterval CFAbsoluteTime;

typedef Boolean (*CFArrayEqualCallBack)(const void *value1, const void *value2);

typedef struct CFArrayCallBacks {
    CFIndex version;
    CFArrayRetainCallBack retain;
    CFArrayReleaseCallBack release;
    CFArrayCopyDescriptionCallBack copyDescription;
    CFArrayEqualCallBack equal;
} CFArrayCallBacks;

typedef const void *(*CFDictionaryRetainCallBack)(CFAllocatorRef allocator, const void *value);
typedef void (*CFDictionaryApplierFunction)(const void *key, const void *value, void *context);
typedef void (*CFDictionaryReleaseCallBack)(CFAllocatorRef allocator, const void *value);
typedef CFStringRef (*CFDictionaryCopyDescriptionCallBack)(const void *value);
typedef Boolean (*CFDictionaryEqualCallBack)(const void *value1, const void *value2);
typedef CFHashCode (*CFDictionaryHashCallBack)(const void *value);

typedef struct CFDictionaryKeyCallBacks {
    CFIndex version;
    CFDictionaryRetainCallBack retain;
    CFDictionaryReleaseCallBack release;
    CFDictionaryCopyDescriptionCallBack copyDescription;
    CFDictionaryEqualCallBack equal;
    CFDictionaryHashCallBack hash;
} CFDictionaryKeyCallBacks;

extern const CFDictionaryKeyCallBacks kCFTypeDictionaryKeyCallBacks;
extern const CFDictionaryKeyCallBacks kCFCopyStringDictionaryKeyCallBacks;

typedef struct CFDictionaryValueCallBacks {
    CFIndex version;
    CFDictionaryRetainCallBack retain;
    CFDictionaryReleaseCallBack release;
    CFDictionaryCopyDescriptionCallBack copyDescription;
    CFDictionaryEqualCallBack equal;
} CFDictionaryValueCallBacks;

extern const CFDictionaryValueCallBacks kCFTypeDictionaryValueCallBacks;

typedef CFDataRef (*CFMessagePortCallBack)(CFMessagePortRef local, SInt32 msgid, CFDataRef data, void *info);

typedef const void *(*CFSetRetainCallBack)(CFAllocatorRef allocator, const void *value);
typedef void (*CFSetReleaseCallBack)(CFAllocatorRef allocator, const void *value);
typedef void (*CFSetApplierFunction)(const void *value, void *context);
typedef CFStringRef (*CFSetCopyDescriptionCallBack)(const void *value);
typedef Boolean (*CFSetEqualCallBack)(const void *value1, const void *value2);
typedef CFHashCode (*CFSetHashCallBack)(const void *value);

typedef void *(*CFAllocatorAllocateCallBack)(CFIndex allocSize, CFOptionFlags hint, void *info);
typedef void (*CFAllocatorDeallocateCallBack)(void *ptr, void *info);
typedef void *(*CFAllocatorReallocateCallBack)(void *ptr, CFIndex newsize, CFOptionFlags hint, void *info);
typedef CFIndex (*CFAllocatorPreferredSizeCallBack)(CFIndex size, CFOptionFlags hint, void *info);
typedef const void *(*CFAllocatorRetainCallBack)(const void *info);
typedef void (*CFAllocatorReleaseCallBack)(const void *info);
typedef CFStringRef (*CFAllocatorCopyDescriptionCallBack)(const void *info);

typedef struct CFAllocatorContext {
    CFIndex version;
    void *info;
    CFAllocatorRetainCallBack retain;
    CFAllocatorReleaseCallBack release;
    CFAllocatorCopyDescriptionCallBack copyDescription;
    CFAllocatorAllocateCallBack allocate;
    CFAllocatorReallocateCallBack reallocate;
    CFAllocatorDeallocateCallBack deallocate;
    CFAllocatorPreferredSizeCallBack preferredSize;
} CFAllocatorContext;

typedef struct CFSetCallBacks {
    CFIndex version;
    CFSetRetainCallBack retain;
    CFSetReleaseCallBack release;
    CFSetCopyDescriptionCallBack copyDescription;
    CFSetEqualCallBack equal;
    CFSetHashCallBack hash;
} CFSetCallBacks;

typedef struct CFRange {
    CFIndex location;
    CFIndex length;
} CFRange;

typedef struct CFCharacterSetInlineBuffer {
    CFCharacterSetRef cset;
    uint32_t flags;
    uint32_t rangeStart;
    uint32_t rangeLimit;
    const uint8_t *bitmap;
} CFCharacterSetInlineBuffer;

typedef struct CFStringInlineBuffer {
    UniChar buffer[64];
    CFStringRef theString;
    const UniChar *directBuffer;
    CFRange rangeToBuffer;
    CFIndex bufferedRangeStart;
    CFIndex bufferedRangeEnd;
} CFStringInlineBuffer;

PS_ENUM(CFIndex, CFNumberType) {
    kCFNumberSInt8Type = 1,
    kCFNumberSInt16Type = 2,
    kCFNumberSInt32Type = 3,
    kCFNumberSInt64Type = 4,
    kCFNumberFloat32Type = 5,
    kCFNumberFloat64Type = 6,
    kCFNumberCharType = 7,
    kCFNumberShortType = 8,
    kCFNumberIntType = 9,
    kCFNumberLongType = 10,
    kCFNumberLongLongType = 11,
    kCFNumberFloatType = 12,
    kCFNumberDoubleType = 13,
    kCFNumberCFIndexType = 14,
    kCFNumberNSIntegerType = 15,
    kCFNumberCGFloatType = 16,
    kCFNumberMaxType = 16
};

PS_ENUM(UInt32, CFStringEncoding) {
    kCFStringEncodingMacRoman = 0,
    kCFStringEncodingWindowsLatin1 = 0x0500,
    kCFStringEncodingISOLatin1 = 0x0201,
    kCFStringEncodingNextStepLatin = 0x0B01,
    kCFStringEncodingASCII = 0x0600,
    kCFStringEncodingUnicode = 0x0100,
    kCFStringEncodingUTF8 = 0x08000100,
    kCFStringEncodingNonLossyASCII = 0x0BFF,
    kCFStringEncodingUTF16 = 0x0100,
    kCFStringEncodingUTF16BE = 0x10000100,
    kCFStringEncodingUTF16LE = 0x14000100,
    kCFStringEncodingUTF32 = 0x0c000100,
    kCFStringEncodingUTF32BE = 0x18000100,
    kCFStringEncodingUTF32LE = 0x1c000100
};

PS_ENUM(CFOptionFlags, CFStringCompareFlags) {
    kCFCompareCaseInsensitive = 1,
    kCFCompareBackwards = 4,
    kCFCompareAnchored = 8,
    kCFCompareNonliteral = 16,
    kCFCompareLocalized = 32,
    kCFCompareNumerically = 64,
    kCFCompareDiacriticInsensitive = 128,
    kCFCompareWidthInsensitive = 256,
    kCFCompareForcedOrdering = 512
};

PS_ENUM(CFOptionFlags, CFStringTokenizerTokenType) {
    kCFStringTokenizerTokenNone = 0,
    kCFStringTokenizerTokenNormal = 1UL << 0,
    kCFStringTokenizerTokenHasSubTokensMask = 1UL << 1,
    kCFStringTokenizerTokenHasDerivedSubTokensMask = 1UL << 2,
    kCFStringTokenizerTokenHasHasNumbersMask = 1UL << 3,
    kCFStringTokenizerTokenHasNonLettersMask = 1UL << 4,
    kCFStringTokenizerTokenIsCJWordMask = 1UL << 5
};

PS_ENUM(CFIndex, CFCharacterSetPredefinedSet) {
    kCFCharacterSetControl = 1,
    kCFCharacterSetWhitespace,
    kCFCharacterSetWhitespaceAndNewline,
    kCFCharacterSetDecimalDigit,
    kCFCharacterSetLetter,
    kCFCharacterSetLowercaseLetter,
    kCFCharacterSetUppercaseLetter,
    kCFCharacterSetNonBase,
    kCFCharacterSetDecomposable,
    kCFCharacterSetAlphaNumeric,
    kCFCharacterSetPunctuation,
    kCFCharacterSetCapitalizedLetter = 13,
    kCFCharacterSetSymbol = 14,
    kCFCharacterSetNewline = 15,
    kCFCharacterSetIllegal = 12
};

typedef enum CFStreamEventType {
    kCFStreamEventNone = 0,
    kCFStreamEventOpenCompleted = (1 << 0),
    kCFStreamEventHasBytesAvailable = (1 << 1),
    kCFStreamEventCanAcceptBytes = (1 << 2),
    kCFStreamEventErrorOccurred = (1 << 3),
    kCFStreamEventEndEncountered = (1 << 4)
} CFStreamEventType;

typedef struct __CFRuntimeClass {
    CFIndex version;
    const char *className;
    void (*init)(CFTypeRef cf);
    CFTypeRef (*copy)(CFAllocatorRef allocator, CFTypeRef cf);
    void (*finalize)(CFTypeRef cf);
    Boolean (*equal)(CFTypeRef cf1, CFTypeRef cf2);
    CFHashCode (*hash)(CFTypeRef cf);
    CFStringRef (*copyFormattingDesc)(CFTypeRef cf, CFDictionaryRef formatOptions);
    CFStringRef (*copyDebugDesc)(CFTypeRef cf);
    void (*reclaim)(CFTypeRef cf);
    uint32_t (*refcount)(intptr_t op, CFTypeRef cf);
    uintptr_t requiredAlignment;
} CFRuntimeClass;

typedef struct CFUUIDBytes {
    UInt8 byte0;
    UInt8 byte1;
    UInt8 byte2;
    UInt8 byte3;
    UInt8 byte4;
    UInt8 byte5;
    UInt8 byte6;
    UInt8 byte7;
    UInt8 byte8;
    UInt8 byte9;
    UInt8 byte10;
    UInt8 byte11;
    UInt8 byte12;
    UInt8 byte13;
    UInt8 byte14;
    UInt8 byte15;
} CFUUIDBytes;

extern const CFAllocatorRef kCFAllocatorDefault;
extern const CFAllocatorRef kCFAllocatorSystemDefault;
extern const CFAllocatorRef kCFAllocatorMalloc;
extern const CFAllocatorRef kCFAllocatorMallocZone;
extern const CFAllocatorRef kCFAllocatorNull;
extern const CFAllocatorRef kCFAllocatorUseContext;

extern const CFArrayCallBacks kCFTypeArrayCallBacks;

extern const CFBooleanRef kCFBooleanTrue;
extern const CFBooleanRef kCFBooleanFalse;

extern const CFRunLoopMode kCFRunLoopDefaultMode;
extern const CFRunLoopMode kCFRunLoopCommonModes;

typedef const void *(*CFBagRetainCallBack)(CFAllocatorRef allocator, const void *value);
typedef void (*CFBagReleaseCallBack)(CFAllocatorRef allocator, const void *value);
typedef CFStringRef (*CFBagCopyDescriptionCallBack)(const void *value);
typedef Boolean (*CFBagEqualCallBack)(const void *value1, const void *value2);
typedef CFHashCode (*CFBagHashCallBack)(const void *value);

typedef struct CFBagCallBacks {
    CFIndex version;
    CFBagRetainCallBack retain;
    CFBagReleaseCallBack release;
    CFBagCopyDescriptionCallBack copyDescription;
    CFBagEqualCallBack equal;
    CFBagHashCallBack hash;
} CFBagCallBacks;

extern const CFBagCallBacks kCFTypeBagCallBacks;
extern const CFBagCallBacks kCFCopyStringBagCallBacks;

typedef void (*CFBagApplierFunction)(const void *value, void *context);

#ifndef NULL
#define NULL 0
#endif
static const CFBagCallBacks __kCFNullBagCallBacks = {0, NULL, NULL, NULL, NULL, NULL};

typedef struct __CFRuntimeBase {
    uintptr_t _cfisa;
    uint8_t _cfinfo[4];
#ifdef __EA64__
    uint32_t _rc;
#endif
} CFRuntimeBase;

typedef struct CFStreamClientContext {
    CFIndex version;
    void *info;
    void *(*retain)(void *info);
    void (*release)(void *info);
    CFStringRef (*copyDescription)(void *info);
} CFStreamClientContext;

typedef struct CFRunLoopSourceContext {
    CFIndex version;
    void *info;
    const void *(*retain)(const void *info);
    void (*release)(const void *info);
    CFStringRef (*copyDescription)(const void *info);
    Boolean (*equal)(const void *info1, const void *info2);
    CFHashCode (*hash)(const void *info);
    void (*schedule)(void *info, CFRunLoopRef rl, CFRunLoopMode mode);
    void (*cancel)(void *info, CFRunLoopRef rl, CFRunLoopMode mode);
    void (*perform)(void *info);
} CFRunLoopSourceContext;

typedef struct CFRunLoopSourceContext1 {
    CFIndex version;
    void *info;
    const void *(*retain)(const void *info);
    void (*release)(const void *info);
    CFStringRef (*copyDescription)(const void *info);
    Boolean (*equal)(const void *info1, const void *info2);
    CFHashCode (*hash)(const void *info);
    mach_port_t (*getPort)(void *info);
    void *(*perform)(void *msg, CFIndex size, CFAllocatorRef allocator, void *info);
} CFRunLoopSourceContext1;

typedef struct CFRunLoopObserverContext {
    CFIndex version;
    void *info;
    const void *(*retain)(const void *info);
    void (*release)(const void *info);
    CFStringRef (*copyDescription)(const void *info);
} CFRunLoopObserverContext;

typedef void (*CFRunLoopObserverCallBack)(CFRunLoopObserverRef observer, CFRunLoopActivity activity, void *info);

typedef struct CFRunLoopTimerContext {
    CFIndex version;
    void *info;
    const void *(*retain)(const void *info);
    void (*release)(const void *info);
    CFStringRef (*copyDescription)(const void *info);
} CFRunLoopTimerContext;

typedef struct {
    CFIndex version;
    void *info;
    const void *(*retain)(const void *info);
    void (*release)(const void *info);
    CFStringRef (*copyDescription)(const void *info);
} CFMachPortContext;

typedef void (*CFRunLoopTimerCallBack)(CFRunLoopTimerRef timer, void *info);
typedef void (*CFUserNotificationCallBack)(CFUserNotificationRef userNotification, CFOptionFlags responseFlags);
typedef void (*CFReadStreamClientCallBack)(CFReadStreamRef stream, CFStreamEventType type, void *clientCallBackInfo);
typedef void (*CFWriteStreamClientCallBack)(CFWriteStreamRef stream, CFStreamEventType type, void *clientCallBackInfo);
typedef void (*CFMachPortCallBack)(CFMachPortRef port, void *msg, CFIndex size, void *info);
typedef void (*CFMachPortInvalidationCallBack)(CFMachPortRef port, void *info);

#define CFBagKeyCallBacks CFBagCallBacks
#define CFBagValueCallBacks CFBagCallBacks

#define CFHashRef CFBagRef
#define CFMutableHashRef CFMutableBagRef
#define CFHashKeyCallBacks CFBagCallBacks
#define CFHashValueCallBacks CFBagCallBacks

#endif
