#import "../BaseTypes.h"
#import "../Kernel/Types.h"
#import "../System/Types.h"
#import "Types.h"

id objc_alloc(id);
id objc_alloc_init(Class);
id objc_constructInstance(Class cls, void *bytes);
id objc_autorelease(id value);
id objc_autoreleaseReturnValue(id value);
id objc_retain(id value);
id objc_retainAutorelease(id value);
id objc_retainAutoreleaseReturnValue(id value);
id objc_retainAutoreleasedReturnValue(id value);
id objc_unsafeClaimAutoreleasedReturnValue(id value);
id objc_msgSendSuper(struct objc_super *super, SEL op, ...);
id objc_msgSendSuper2(struct objc_super *super, SEL op, ...);
id objc_allocWithZone(Class cls);
id objc_initWeak(id *object, id value);
id objc_loadWeakRetained(id *object);
id objc_loadWeak(id *object);
id objc_storeWeak(id *object, id value);
id objc_storeWeakOrNil(id *location, id obj);
id objc_getClass(const char *name);
id objc_getAssociatedObject(id object, const void *key);
id objc_getProperty(id self, SEL _cmd, ptrdiff_t offset, BOOL atomic);
id objc_getMetaClass(const char *name);
id objc_retainBlock(id value);
id objc_begin_catch(void *exc_buf);
id object_getIvar(id obj, Ivar ivar);
id object_dispose(id obj);
id class_createInstance(Class cls, size_t extraBytes);
id method_invoke(id receiver, Method m, ...);

id objc_opt_self(id self);
id objc_opt_new(Class cls);

id _objc_rootAlloc(Class cls);
id _objc_rootAllocWithZone(Class cls, malloc_zone_t *zone);
id _objc_rootAutorelease(id object);
id _objc_rootRetain(id object);

#ifdef __EA64__
long double objc_msgSend_fpret(id self, SEL op, ...);
#else
double objc_msgSend_fpret(id self, SEL op, ...);
#endif

Class objc_lookUpClass(const char *name);
Class objc_getFutureClass(const char *name);
Class objc_getRequiredClass(const char *name);
Class objc_initializeClassPair(Class superclass, const char *name, Class cls, Class metacls);
Class objc_allocateClassPair(Class superclass, const char *name, size_t extraBytes);
Class objc_duplicateClass(Class original, const char *name, size_t extraBytes);
Class object_getClass(id obj);
Class object_setClass(id obj, Class cls);
Class class_getSuperclass(Class cls);
Class class_setSuperclass(Class cls, Class newSuper);
Class objc_opt_class(id obj);

Class _objc_getClassForTag(objc_tag_index_t tag);

Protocol *objc_getProtocol(const char *name);
Protocol *objc_allocateProtocol(const char *name);
Protocol **class_copyProtocolList(Class cls, unsigned int *outCount);

IMP method_getImplementation(Method m);
IMP method_setImplementation(Method m, IMP imp);
IMP class_replaceMethod(Class cls, SEL name, IMP imp, const char *types);
IMP class_getMethodImplementation(Class cls, SEL name);
IMP object_getMethodImplementation(id obj, SEL name);
IMP imp_implementationWithBlock(id block);

char *property_copyAttributeValue(objc_property_t property, const char *attributeName);
char *method_copyArgumentType(Method m, unsigned int index);
char *method_copyReturnType(Method m);

const uint8_t *class_getIvarLayout(Class cls);

const char *_protocol_getMethodTypeEncoding(Protocol *, SEL, BOOL isRequiredMethod, BOOL isInstanceMethod);
const char **objc_copyImageNames(unsigned int *outCount);
const char *object_getClassName(id obj);
const char *protocol_getName(Protocol *proto);
const char *sel_getName(SEL sel);
const char *property_getAttributes(objc_property_t property);
const char *property_getName(objc_property_t property);
const char *method_getTypeEncoding(Method m);
const char *ivar_getName(Ivar v);
const char *ivar_getTypeEncoding(Ivar v);
const char *class_getName(Class cls);
const char *class_getImageName(Class cls);

SEL sel_registerName(const char *str);
SEL sel_getUid(const char *str);
SEL method_getName(Method m);

Ivar class_getInstanceVariable(Class cls, const char *name);
Ivar class_getClassVariable(Class cls, const char *name);
Ivar *class_copyIvarList(Class cls, unsigned int *outCount);
Ivar object_setInstanceVariable(id obj, const char *name, void *value);
Ivar object_getInstanceVariable(id obj, const char *name, void **outValue);

Method class_getInstanceMethod(Class cls, SEL name);
Method class_getClassMethod(Class cls, SEL name);
Method *class_copyMethodList(Class cls, unsigned int *outCount);

objc_property_t *protocol_copyPropertyList(Protocol *proto, unsigned int *outCount);
objc_property_t class_getProperty(Class cls, const char *name);
objc_property_t *class_copyPropertyList(Class cls, unsigned int *outCount);

objc_property_attribute_t *property_copyAttributeList(objc_property_t property, unsigned int *outCount);

struct objc_method_description protocol_getMethodDescription(Protocol *proto, SEL aSel, BOOL isRequiredMethod, BOOL isInstanceMethod);
struct objc_method_description *protocol_copyMethodDescriptionList(Protocol *proto, BOOL isRequiredMethod, BOOL isInstanceMethod, unsigned int *outCount);
struct objc_method_description *method_getDescription(Method m);

int objc_getClassList(Class *buffer, int bufferCount);
int objc_sync_enter(id obj);
int objc_sync_exit(id obj);

ptrdiff_t ivar_getOffset(Ivar v);

size_t class_getInstanceSize(Class cls);

unsigned int method_getNumberOfArguments(Method m);

BOOL protocol_conformsToProtocol(Protocol *proto, Protocol *other);
BOOL protocol_isEqual(Protocol *proto, Protocol *other);
BOOL sel_isEqual(SEL lhs, SEL rhs);
BOOL sel_isMapped(SEL aSelector);
BOOL class_conformsToProtocol(Class cls, Protocol *protocol);
BOOL class_addMethod(Class cls, SEL name, IMP imp, const char *types);
BOOL class_isMetaClass(Class cls);
BOOL class_addIvar(Class cls, const char *name, size_t size, uint8_t alignment, const char *types);
BOOL class_addProperty(Class cls, const char *name, const objc_property_attribute_t *attributes, unsigned int attributeCount);
BOOL class_addProtocol(Class cls, Protocol *protocol);
BOOL class_respondsToSelector(Class cls, SEL sel);

BOOL objc_opt_isKindOfClass(id obj, Class cls);
BOOL objc_opt_respondsToSelector(id obj, SEL sel);

void class_replaceProperty(Class cls, const char *name, const objc_property_attribute_t *attributes, unsigned int attributeCount);
void objc_registerClassPair(Class cls);
void objc_disposeClassPair(Class cls);
void objc_removeAssociatedObjects(id object);
void objc_copyWeak(id *dest, id *src);
void objc_destroyWeak(id *object);
void objc_storeStrong(id *object, id value);
void objc_setAssociatedObject(id object, const void *key, id value, objc_AssociationPolicy policy);
void objc_setProperty(id self, SEL _cmd, ptrdiff_t offset, id newValue, BOOL atomic, BOOL shouldCopy);
void objc_setProperty_atomic(id self, SEL _cmd, id newValue, ptrdiff_t offset);
void objc_setProperty_atomic_copy(id self, SEL _cmd, id newValue, ptrdiff_t offset);
void objc_setProperty_nonatomic(id self, SEL _cmd, id newValue, ptrdiff_t offset);
void objc_setProperty_nonatomic_copy(id self, SEL _cmd, id newValue, ptrdiff_t offset);
void objc_enumerationMutation(id obj);
void objc_autoreleasePoolPop(void *pool);
void objc_msgSend_stret(void *val, id self, SEL op, ...);
void objc_msgSendSuper2_stret(struct objc_super *super, SEL op,...);
void objc_moveWeak(id *dest, id *src);
void objc_registerProtocol(Protocol *proto);
void objc_release(id value);
void objc_terminate(void);
void objc_copyStruct(void *dest, const void *src, ptrdiff_t size, BOOL atomic, BOOL hasStrong);
void objc_exception_throw(id exception);
void objc_exception_rethrow(void);
void objc_end_catch(void);
void objc_setHook_getClass(objc_hook_getClass newValue, objc_hook_getClass *outOldValue);
void object_setIvar(id obj, Ivar ivar, id value);
void protocol_addMethodDescription(Protocol *proto, SEL name, const char *types, BOOL isRequiredMethod, BOOL isInstanceMethod);
void protocol_addProtocol(Protocol *proto, Protocol *addition);
void protocol_addProperty(Protocol *proto, const char *name, const objc_property_attribute_t *attributes, unsigned int attributeCount, BOOL isRequiredProperty, BOOL isInstanceProperty);
void method_invoke_stret(id receiver, Method m, ...);
void method_getReturnType(Method m, char *dst, size_t dst_len);
void method_getArgumentType(Method m, unsigned int index, char *dst, size_t dst_len);
void method_exchangeImplementations(Method m1, Method m2);

void _objc_registerTaggedPointerClass(objc_tag_index_t tag, Class cls);
void _objc_autoreleasePoolPrint();
void _objc_rootDealloc(id obj);
void _objc_rootRelease(id obj);
void _objc_setBadAllocHandler(id (*newHandler)(Class isa));

bool _objc_rootTryRetain(id obj);

void *objc_autoreleasePoolPush(void);
void *objc_destructInstance(id obj);
void *object_getIndexedIvars(id obj);
