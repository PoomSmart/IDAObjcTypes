#import "../Types.h"

typedef struct __CFError *CFErrorRef;
typedef const struct __CFAllocator *CFAllocatorRef;
typedef struct __CFArray *CFArrayRef;
typedef struct __CFArray *CFMutableArrayRef;
typedef const struct __CFString *CFStringRef;
typedef struct __CFString *CFMutableStringRef;
typedef const struct __CFDictionary *CFDictionaryRef;
typedef struct __CFDictionary *CFMutableDictionaryRef;
typedef struct __CFLocale *CFLocaleRef;
typedef struct __CFBoolean *CFBooleanRef;
typedef struct __CFNumber *CFNumberRef;
typedef struct __CFData *CFDataRef;
typedef struct __CFData *CFMutableDataRef;
typedef struct __CFAttributedString *CFAttributedStringRef;
typedef struct __CFNotificationCenter *CFNotificationCenterRef;
typedef struct __CFCharacterSet *CFCharacterSetRef;
typedef struct __CFCharacterSet *CFMutableCharacterSetRef;
typedef struct __CFSet *CFSetRef;
typedef struct __CFSet *CFMutableSetRef;

typedef const void *CFTypeRef;

typedef CFTypeRef CFPropertyListRef;

typedef long CFIndex;

typedef unsigned long CFTypeID;
typedef unsigned long CFOptionFlags;
typedef unsigned long CFHashCode;

typedef CFOptionFlags CFDataSearchFlags;
typedef CFOptionFlags CFStringCompareFlags;

typedef CFIndex CFNotificationSuspensionBehavior;
typedef CFIndex CFCharacterSetPredefinedSet;
typedef CFIndex CFComparisonResult;
typedef CFIndex CFStringNormalizationForm;
typedef CFIndex CFStringCharacterClusterType;
typedef CFIndex CFSystemVersion;

typedef UInt32 CFStringEncoding;

typedef double CFTimeInterval;

typedef CFStringRef CFNotificationName;
typedef CFStringRef CFErrorDomain;

typedef CFComparisonResult (*CFComparatorFunction)(const void *val1, const void *val2, void *context);

typedef const void *(*CFArrayRetainCallBack)(CFAllocatorRef allocator, const void *value);
typedef void (*CFArrayApplierFunction)(const void *value, void *context);
typedef void (*CFArrayReleaseCallBack)(CFAllocatorRef allocator, const void *value);
typedef void (*CFNotificationCallback)(CFNotificationCenterRef center, void *observer, CFNotificationName name, const void *object, CFDictionaryRef userInfo);

typedef CFStringRef	(*CFArrayCopyDescriptionCallBack)(const void *value);

typedef CFTimeInterval CFAbsoluteTime;

typedef Boolean	(*CFArrayEqualCallBack)(const void *value1, const void *value2);

struct CFArrayCallBacks {
    CFIndex	version;
    CFArrayRetainCallBack retain;
    CFArrayReleaseCallBack release;
    CFArrayCopyDescriptionCallBack copyDescription;
    CFArrayEqualCallBack equal;
};

typedef const void *(*CFDictionaryRetainCallBack)(CFAllocatorRef allocator, const void *value);
typedef void (*CFDictionaryApplierFunction)(const void *key, const void *value, void *context);
typedef void (*CFDictionaryReleaseCallBack)(CFAllocatorRef allocator, const void *value);
typedef CFStringRef	(*CFDictionaryCopyDescriptionCallBack)(const void *value);
typedef Boolean	(*CFDictionaryEqualCallBack)(const void *value1, const void *value2);
typedef CFHashCode (*CFDictionaryHashCallBack)(const void *value);

typedef struct {
    CFIndex	version;
    CFDictionaryRetainCallBack retain;
    CFDictionaryReleaseCallBack	release;
    CFDictionaryCopyDescriptionCallBack	copyDescription;
    CFDictionaryEqualCallBack equal;
    CFDictionaryHashCallBack hash;
} CFDictionaryKeyCallBacks;

const CFDictionaryKeyCallBacks kCFTypeDictionaryKeyCallBacks;
const CFDictionaryKeyCallBacks kCFCopyStringDictionaryKeyCallBacks;

typedef struct {
    CFIndex	version;
    CFDictionaryRetainCallBack retain;
    CFDictionaryReleaseCallBack	release;
    CFDictionaryCopyDescriptionCallBack	copyDescription;
    CFDictionaryEqualCallBack equal;
} CFDictionaryValueCallBacks;

const CFDictionaryValueCallBacks kCFTypeDictionaryValueCallBacks;

typedef const void *(*CFSetRetainCallBack)(CFAllocatorRef allocator, const void *value);
typedef void (*CFSetReleaseCallBack)(CFAllocatorRef allocator, const void *value);
typedef CFStringRef	(*CFSetCopyDescriptionCallBack)(const void *value);
typedef Boolean	(*CFSetEqualCallBack)(const void *value1, const void *value2);
typedef CFHashCode (*CFSetHashCallBack)(const void *value);

typedef struct {
    CFIndex	version;
    CFSetRetainCallBack	retain;
    CFSetReleaseCallBack release;
    CFSetCopyDescriptionCallBack copyDescription;
    CFSetEqualCallBack equal;
    CFSetHashCallBack hash;
} CFSetCallBacks;

typedef struct CFRange {
    CFIndex location;
    CFIndex length;
} CFRange;

struct CFCharacterSetInlineBuffer {
    CFCharacterSetRef cset;
    uint32_t flags;
    uint32_t rangeStart;
    uint32_t rangeLimit;
    const uint8_t *bitmap;
};

struct CFStringInlineBuffer {
    UniChar buffer[64];
    CFStringRef theString;
    const UniChar *directBuffer;
    CFRange rangeToBuffer;
    CFIndex bufferedRangeStart;
    CFIndex bufferedRangeEnd;
};

typedef CFIndex CFNumberType; enum {
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

const CFAllocatorRef kCFAllocatorDefault;
const CFAllocatorRef kCFAllocatorSystemDefault;
const CFAllocatorRef kCFAllocatorMalloc;
const CFAllocatorRef kCFAllocatorMallocZone;
const CFAllocatorRef kCFAllocatorNull;
const CFAllocatorRef kCFAllocatorUseContext;