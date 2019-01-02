#import "../Types.h"

typedef struct __NSString NSString;
typedef unsigned long long NSUInteger;
typedef unsigned long long NSAlignmentOptions;
typedef NSUInteger NSRectEdge;

struct NSFastEnumerationState {
    unsigned long state;
    id *itemsPtr;
    unsigned long *mutationsPtr;
    unsigned long extra[5];
};

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} NSRange;

typedef struct CGPoint *NSPoint;
typedef struct CGSize *NSSize;
typedef struct CGRect *NSRect;