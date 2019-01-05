#import "../CoreGraphics/Types.h"
#import "../objc/Types.h"

#ifdef x86
typedef unsigned int NSUInteger;
typedef int NSInteger;
#else
typedef unsigned long long NSUInteger;
typedef long long NSInteger;
#endif

typedef struct __NSObject NSObject;
typedef struct __NSValue NSValue;
typedef struct __NSString NSString;
typedef struct __NSData NSData;
typedef struct __NSArray NSArray;
typedef struct __NSArray NSMutableArray;
typedef struct __NSDictionary NSDictionary;
typedef struct _NSZone NSZone;

typedef unsigned long long NSAlignmentOptions;

typedef NSUInteger NSRectEdge;
typedef NSUInteger NSSearchPathDirectory;
typedef NSUInteger NSSearchPathDomainMask;

struct _NSMapTable;

struct _NSMapNode {
    void *key;
    void *value;
    struct _NSMapNode *next;
};

typedef struct _NSMapTableKeyCallBacks {
    unsigned (*hash)(struct _NSMapTable *table, const void *anObject);
    BOOL (*isEqual)(struct _NSMapTable *table, const void *anObject1, const void *anObject2);
    void (*retain)(struct _NSMapTable *table, const void *anObject);
    void (*release)(struct _NSMapTable *table, void *anObject);
    NSString  *(*describe)(struct _NSMapTable *table, const void *anObject);
    const void *notAKeyMarker;
} NSMapTableKeyCallBacks;

typedef struct _NSMapTableValueCallBacks {
    void (*retain)(struct _NSMapTable *table, const void *anObject);
    void (*release)(struct _NSMapTable *table, void *anObject);
    NSString  *(*describe)(struct _NSMapTable *table, const void *anObject);
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

typedef CGPoint *NSPoint;
typedef CGSize *NSSize;
typedef CGRect *NSRect;