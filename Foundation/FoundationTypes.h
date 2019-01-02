#import "../Types.h"

typedef struct __NSString NSString;
typedef unsigned long long NSUInteger;

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