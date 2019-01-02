typedef struct __NSString NSString;

struct NSFastEnumerationState {
    unsigned long state;
    id *itemsPtr;
    unsigned long *mutationsPtr;
    unsigned long extra[5];
};