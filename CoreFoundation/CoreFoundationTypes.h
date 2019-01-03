#import "../Types.h"

#define CFStringRef const __CFString *
#define CFArrayRef const void *
#define CFMutableArrayRef const void *

typedef const struct __CFDictionary *CFDictionaryRef;
typedef struct __CFDictionary *CFMutableDictionaryRef;
typedef struct __CFAllocator *CFAllocatorRef;
typedef struct __CFBoolean *CFBooleanRef;
typedef struct __CFData *CFDataRef;
typedef struct __CFAttributedString *CFAttributedStringRef;
typedef struct __CFNotificationCenter *CFNotificationCenterRef;
typedef struct __CFCharacterSet *CFCharacterSetRef;
typedef struct __CFCharacterSet *CFMutableCharacterSetRef;

typedef const void *CFTypeRef;

typedef long CFIndex;

typedef unsigned long CFTypeID;
typedef unsigned long CFOptionFlags;
typedef unsigned long CFHashCode;

typedef CFIndex CFNotificationSuspensionBehavior;
typedef CFIndex CFCharacterSetPredefinedSet;

typedef UInt32 CFStringEncoding;

typedef double CFTimeInterval;

typedef CFStringRef CFNotificationName;

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