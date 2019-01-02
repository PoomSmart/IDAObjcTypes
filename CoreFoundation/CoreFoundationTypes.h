#import "../Types.h"

#define CFStringRef const __CFString *
#define CFDictionaryRef const void *
#define CFMutableDictionaryRef const void *
#define CFArrayRef const void *
#define CFMutableArrayRef const void *

typedef struct __CFAllocator *CFAllocatorRef;
typedef struct __CFBoolean *CFBooleanRef;
typedef struct __CFData *CFDataRef;
typedef struct __CFAttributedString *CFAttributedStringRef;
typedef struct __CFNotificationCenter *CFNotificationCenterRef;

typedef const void *CFTypeRef;

typedef long CFIndex;

typedef unsigned long CFTypeID;
typedef unsigned long CFOptionFlags;

typedef CFIndex CFNotificationSuspensionBehavior;

typedef UInt32 CFStringEncoding;

typedef double CFTimeInterval;

typedef CFStringRef CFNotificationName;

typedef CFTypeRef CFPropertyListRef;

typedef const void *(*CFArrayRetainCallBack)(CFAllocatorRef allocator, const void *value);
typedef void (*CFArrayReleaseCallBack)(CFAllocatorRef allocator, const void *value);

typedef CFStringRef	(*CFArrayCopyDescriptionCallBack)(const void *value);

typedef CFTimeInterval CFAbsoluteTime;

typedef Boolean	(*CFArrayEqualCallBack)(const void *value1, const void *value2);

typedef void (*CFNotificationCallback)(CFNotificationCenterRef center, void *observer, CFNotificationName name, const void *object, CFDictionaryRef userInfo);

struct CFArrayCallBacks {
    CFIndex	version;
    CFArrayRetainCallBack retain;
    CFArrayReleaseCallBack release;
    CFArrayCopyDescriptionCallBack copyDescription;
    CFArrayEqualCallBack equal;
};

struct CFRange {
    CFIndex location;
    CFIndex length;
};