#import "../Types.h"
#import "objcTypes.h"

id objc_autorelease(id value);
id objc_autoreleaseReturnValue(id value);
id objc_retain(id value);
id objc_retainAutorelease(id value);
id objc_retainAutoreleaseReturnValue(id value);
id objc_retainAutoreleasedReturnValue(id value);
id objc_unsafeClaimAutoreleasedReturnValue(id value);
id objc_msgSendSuper2(struct objc_super *super, SEL op, ...);
id objc_initWeak(id *object, id value);
id objc_loadWeakRetained(id *object);
id objc_loadWeak(id *object);
id objc_storeWeak(id *object, id value);
id objc_getClass(const char *name);
id objc_getAssociatedObject(id object, const void *key);
id objc_getProperty(id self, SEL _cmd, ptrdiff_t offset, BOOL atomic);

void objc_copyWeak(id *dest, id *src);
void objc_destroyWeak(id *object);
void objc_storeStrong(id *object, id value);
void objc_setProperty_nonatomic_copy(id self, SEL _cmd, id newValue, ptrdiff_t offset);
void objc_enumerationMutation(id obj);
void objc_autoreleasePoolPop(void *pool);

void *objc_autoreleasePoolPush(void);