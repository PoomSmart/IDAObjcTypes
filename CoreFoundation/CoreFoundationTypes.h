#import "../Types.h"

#define CFArrayRef const void *
#define CFMutableArrayRef const void *

typedef struct __CFError *CFErrorRef;
typedef struct __CFAllocator *CFAllocatorRef;
typedef struct __CFString *CFStringRef;
typedef struct __CFString *CFMutableStringRef;
typedef const struct __CFDictionary *CFDictionaryRef;
typedef struct __CFDictionary *CFMutableDictionaryRef;
typedef struct __CFLocale *CFLocaleRef;
typedef struct __CFBoolean *CFBooleanRef;
typedef struct __CFData *CFDataRef;
typedef struct __CFData *CFMutableDataRef;
typedef struct __CFAttributedString *CFAttributedStringRef;
typedef struct __CFNotificationCenter *CFNotificationCenterRef;
typedef struct __CFCharacterSet *CFCharacterSetRef;
typedef struct __CFCharacterSet *CFMutableCharacterSetRef;

typedef const void *CFTypeRef;

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

typedef CFTypeRef CFPropertyListRef;

typedef const void *(*CFArrayRetainCallBack)(CFAllocatorRef allocator, const void *value);
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

typedef void (*CFDictionaryApplierFunction)(const void *key, const void *value, void *context);

struct CFRange {
    CFIndex location;
    CFIndex length;
};

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
    struct CFRange rangeToBuffer;
    CFIndex bufferedRangeStart;
    CFIndex bufferedRangeEnd;
};