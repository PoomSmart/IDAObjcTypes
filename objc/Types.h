#ifndef OBJC_H_
#define OBJC_H_

#import "../BaseTypes.h"

typedef struct objc_class *Class;

struct objc_object {
    Class isa;
};

typedef struct objc_object *id;

typedef struct objc_object Protocol;
// typedef struct objc_selector *SEL;
typedef const char *SEL;
typedef struct objc_ivar *Ivar;
typedef struct objc_category *Category;
typedef struct objc_property *objc_property_t;
typedef struct objc_method *Method;

typedef uintptr_t objc_AssociationPolicy;

// id (*IMP)(id, SEL, ...);
typedef void *IMP;

typedef struct objc_property_attribute {
    const char *name;
    const char *value;
} objc_property_attribute_t;

typedef struct objc_super {
    id receiver;
    Class super_class;
} objc_super;

typedef enum objc_tag_index_t {
    OBJC_TAG_NSAtom = 0,
    OBJC_TAG_1 = 1,
    OBJC_TAG_NSString = 2,
    OBJC_TAG_NSNumber = 3,
    OBJC_TAG_NSIndexPath = 4,
    OBJC_TAG_NSManagedObjectID = 5,
    OBJC_TAG_NSDate = 6,
    OBJC_TAG_RESERVED_7 = 7,
    OBJC_TAG_Photos_1 = 8,
    OBJC_TAG_Photos_2 = 9,
    OBJC_TAG_Photos_3 = 10,
    OBJC_TAG_Photos_4 = 11,
    OBJC_TAG_XPC_1 = 12,
    OBJC_TAG_XPC_2 = 13,
    OBJC_TAG_XPC_3 = 14,
    OBJC_TAG_XPC_4 = 15,
    OBJC_TAG_NSColor = 16,
    OBJC_TAG_UIColor = 17,
    OBJC_TAG_CGColor = 18,
    OBJC_TAG_NSIndexSet = 19,
    OBJC_TAG_First60BitPayload = 0,
    OBJC_TAG_Last60BitPayload = 6,
    OBJC_TAG_First52BitPayload = 8,
    OBJC_TAG_Last52BitPayload = 263,
    OBJC_TAG_RESERVED_264 = 264
} objc_tag_index_t;

typedef BOOL (*objc_hook_getClass)(const char *name, Class *outClass);

#endif