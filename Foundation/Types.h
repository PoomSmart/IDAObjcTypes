#ifndef FOUNDATION_H_
#define FOUNDATION_H_

#import "../BaseTypes.h"
#import "../CoreFoundation/Types.h"
#import "../CoreGraphics/Types.h"
#import "../objc/Types.h"

#ifdef __EA64__
typedef unsigned long NSUInteger;
typedef long NSInteger;
#else
typedef unsigned int NSUInteger;
typedef int NSInteger;
#endif

typedef double NSTimeInterval;

typedef struct __NSValue NSValue;
typedef struct __NSObject NSString;
#define CFNSString const __CFString
typedef struct __NSData NSData;
typedef struct __NSArray NSArray;
typedef struct __NSArray NSMutableArray;
typedef struct __NSDictionary NSDictionary;
typedef struct __NSException NSException;
typedef struct _NSZone NSZone;

typedef unsigned long long NSAlignmentOptions;

typedef NSUInteger NSRectEdge;
typedef NSUInteger NSSearchPathDirectory;
typedef NSUInteger NSSearchPathDomainMask;

PS_ENUM(NSInteger, NSComparisonResult) {
    NSOrderedAscending = -1L,
    NSOrderedSame,
    NSOrderedDescending
};

struct _NSMapTable;

struct _NSMapNode {
    void *key;
    void *value;
    struct _NSMapNode *next;
};

typedef NSObject *NSHashTable;

typedef struct NSError {
    NSObject super;
    void *_reserved;
    int64 _code;
    NSString *_domain;
    NSDictionary *_userInfo;
} NSError;

typedef struct _NSMapTableKeyCallBacks {
    unsigned (*hash)(struct _NSMapTable *table, const void *anObject);
    BOOL (*isEqual)(struct _NSMapTable *table, const void *anObject1, const void *anObject2);
    void (*retain)(struct _NSMapTable *table, const void *anObject);
    void (*release)(struct _NSMapTable *table, void *anObject);
    NSString *(*describe)(struct _NSMapTable *table, const void *anObject);
    const void *notAKeyMarker;
} NSMapTableKeyCallBacks;

typedef struct NSHashTableCallBacks {
    unsigned (*hash)(NSHashTable *table, const void *);
    BOOL (*isEqual)(NSHashTable *table, const void *, const void *);
    void (*retain)(NSHashTable *table, const void *);
    void (*release)(NSHashTable *table, void *);
    NSString *(*describe)(NSHashTable *table, const void *);
} NSHashTableCallBacks;

typedef struct _NSMapTableValueCallBacks {
    void (*retain)(struct _NSMapTable *table, const void *anObject);
    void (*release)(struct _NSMapTable *table, void *anObject);
    NSString *(*describe)(struct _NSMapTable *table, const void *anObject);
} NSMapTableValueCallBacks;

typedef struct _NSMapTable {
    struct _NSMapNode **nodes;
    unsigned int hashSize;
    unsigned int itemsCount;
    NSMapTableKeyCallBacks keyCallbacks;
    NSMapTableValueCallBacks valueCallbacks;
    NSZone *zone;
    BOOL keysInvisible;
    BOOL valuesInvisible;
} NSMapTable;

typedef struct NSMapEnumerator {
    struct _NSMapTable *table;
    struct _NSMapNode *node;
    int bucket;
} NSMapEnumerator;

typedef struct NSHashEnumerator {
    unsigned _pi;
    unsigned _si;
    void *_bs;
} NSHashEnumerator;

typedef struct NSFastEnumerationState {
    unsigned long state;
    id *itemsPtr;
    unsigned long *mutationsPtr;
    unsigned long extra[5];
} NSFastEnumerationState;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} NSRange;

typedef struct NSEdgeInsets {
    CGFloat top, left, bottom, right;
} NSEdgeInsets;

typedef CGPoint NSPoint;
typedef CGSize NSSize;
typedef CGRect NSRect;

typedef CFNSString NSNotificationName;

typedef void NSUncaughtExceptionHandler(NSException *exception);

extern const NSPoint NSZeroPoint;
extern const NSSize NSZeroSize;
extern const NSRect NSZeroRect;

extern const NSEdgeInsets NSEdgeInsetsZero;

#endif
