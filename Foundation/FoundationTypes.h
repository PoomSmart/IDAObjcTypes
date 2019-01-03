#import "../Types.h"

#ifdef x86
typedef unsigned int NSUInteger;
typedef int NSInteger;
#else
typedef unsigned long long NSUInteger;
typedef long long NSInteger;
#endif

typedef struct __NSObject NSObject;
typedef struct __NSString NSString;
typedef struct __NSData NSData;
typedef struct __NSArray NSArray;
typedef struct _NSZone NSZone;

typedef unsigned long long NSAlignmentOptions;

typedef NSUInteger NSRectEdge;
typedef NSUInteger NSSearchPathDirectory;
typedef NSUInteger NSSearchPathDomainMask;

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