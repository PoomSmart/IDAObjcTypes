#import "../Types.h"

typedef struct objc_object *Protocol;
typedef struct objc_ivar *Ivar;
typedef struct objc_property *objc_property_t;
typedef struct objc_property_attribute *objc_property_attribute_t;
typedef struct objc_method *Method;

typedef uintptr_t objc_AssociationPolicy;

//id (*IMP)(id, SEL, ...);
typedef void * IMP;