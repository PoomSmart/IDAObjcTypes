#import "../Types.h"

#ifdef x86
typedef unsigned int NSUInteger;
typedef int NSInteger;
#else
typedef unsigned long long NSUInteger;
typedef long long NSInteger;
#endif

typedef struct __NSString NSString;
typedef unsigned long long NSAlignmentOptions;
typedef NSUInteger NSRectEdge;

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