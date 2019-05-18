#ifndef OBJC_H_
#define OBJC_H_

typedef struct objc_class* Class;

typedef struct objc_object {
    Class isa;
}* id;

typedef struct objc_object* Protocol;
// typedef struct objc_selector* SEL;
typedef const char *SEL;
typedef struct objc_ivar* Ivar;
typedef struct objc_category* Category;
typedef struct objc_property* objc_property_t;
typedef struct objc_method* Method;

typedef uintptr_t objc_AssociationPolicy;

//id (*IMP)(id, SEL, ...);
typedef void* IMP;

typedef struct objc_property_attribute {
    const char* name;
    const char* value;
} objc_property_attribute_t;

typedef struct objc_super {
    id receiver;
    Class super_class;
} objc_super;

#endif