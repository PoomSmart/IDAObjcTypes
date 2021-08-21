#import "../BaseTypes.h"
#import "../CoreGraphics/Types.h"
#import "../UIKit/Types.h"
#import "Types.h"

BOOL NSCompareHashTables(NSHashTable *table1, NSHashTable *table2);
BOOL NSCompareMapTables(NSMapTable *table1, NSMapTable *table2);
BOOL NSContainsRect(NSRect aRect, NSRect bRect);
BOOL NSEqualPoints(NSPoint aPoint, NSPoint bPoint);
BOOL NSEqualRects(NSRect aRect, NSRect bRect);
BOOL NSEqualSizes(NSSize aSize, NSSize bSize);
BOOL NSIntersectsRange(NSRange aRange, NSRange bRange);
BOOL NSIntersectsRect(NSRect aRect, NSRect bRect);
BOOL NSIsEmptyRect(NSRect aRect);
BOOL NSMapMember(NSMapTable *table, const void *key, void **originalKey, void **value);
BOOL NSNextMapEnumeratorPair(NSMapEnumerator *enumerator, void **key, void **value);
BOOL NSPointInRect(NSPoint aPoint, NSRect aRect);

CGFloat NSHeight(NSRect aRect);
CGFloat NSMaxX(NSRect aRect);
CGFloat NSMaxY(NSRect aRect);
CGFloat NSMidX(NSRect aRect);
CGFloat NSMidY(NSRect aRect);
CGFloat NSMinX(NSRect aRect);
CGFloat NSMinY(NSRect aRect);
CGFloat NSWidth(NSRect aRect);

Class NSClassFromString(CFStringRef string);

const char *NSGetSizeAndAlignment(const char *typePtr, NSUInteger *sizep, NSUInteger *alignp);

id NSAllocateObject(Class aClass, NSUInteger extraBytes, NSZone *zone);

NSArray *NSAllMapTableKeys(NSMapTable *table);
NSArray *NSAllMapTableValues(NSMapTable *table);
NSArray *NSSearchPathForDirectoriesInDomains(NSSearchPathDirectory directory, NSSearchPathDomainMask domainMask, BOOL expandTilde);

NSDictionary *_NSDictionaryOfVariableBindings(NSString *commaSeparatedKeysString, id firstValue, ...);

NSHashEnumerator NSEnumerateHashTable(NSHashTable *table);

NSHashTable *NSCreateHashTable(NSHashTableCallBacks callBacks, NSUInteger capacity);

NSMapEnumerator NSEnumerateMapTable(NSMapTable *table);

NSMapTable *NSCreateMapTable(NSMapTableKeyCallBacks keyCallBacks, NSMapTableValueCallBacks valueCallBacks, NSUInteger capacity);
NSMapTable *NSCreateMapTableWithZone(NSMapTableKeyCallBacks keyCallBacks, NSMapTableValueCallBacks valueCallBacks, NSUInteger capacity, NSZone *zone);

NSPoint NSPointFromString(CFNSString aString);

NSRange NSIntersectionRange(NSRange range1, NSRange range2);
NSRange NSRangeFromString(CFNSString aString);
NSRange NSUnionRange(NSRange range1, NSRange range2);

NSRect NSInsetRect(NSRect aRect, CGFloat dX, CGFloat dY);
NSRect NSIntegralRect(NSRect aRect);
NSRect NSIntegralRectWithOptions(NSRect aRect, NSAlignmentOptions opts);
NSRect NSIntersectionRect(NSRect aRect, NSRect bRect);
NSRect NSMakeRect(CGFloat x, CGFloat y, CGFloat w, CGFloat h);
NSRect NSRectFromString(NSString *aString);
NSRect NSUnionRect(NSRect aRect, NSRect bRect);

NSString *NSHomeDirectory(void);
NSString *NSOpenStepRootDirectory(void);
NSString *NSStringFromBOOL(BOOL theBOOL);
NSString *NSStringFromClass(Class aClass);
NSString *NSStringFromPoint(NSPoint aPoint);
NSString *NSStringFromProtocol(Protocol *proto);
NSString *NSStringFromRange(NSRange range);
NSString *NSStringFromRect(NSRect aRect);
NSString *NSStringFromSelector(SEL aSelector);
NSString *NSStringFromSize(NSSize aSize);
NSString *NSTemporaryDirectory(void);

NSUInteger NSCountMapTable(NSMapTable *table);
NSUInteger NSPageSize(void);
NSUInteger NSRoundUpToMultipleOfPageSize(NSUInteger bytes);

NSUncaughtExceptionHandler *NSGetUncaughtExceptionHandler(void);

NSZone *NSZoneFromPointer(void *ptr);

Protocol *NSProtocolFromString(CFStringRef namestr);

SEL NSSelectorFromString(CFStringRef aSelectorName);

unsigned __NSHashCString(void *table, const void *anObject);
unsigned NSHashCString(unsigned char *str, int n);

void *NSHashGet(NSHashTable *table, const void *pointer);
void *NSMapGet(NSMapTable *table, const void *key);
void *NSMapInsertIfAbsent(NSMapTable *table, const void *key, const void *value);
void *NSNextHashEnumeratorItem(NSHashEnumerator *enumerator);
void *NSPushAutoreleasePool(NSUInteger capacity);
void *NSReallocateCollectable(void *ptr, NSUInteger size, NSUInteger options);
void *NSZoneCalloc(NSZone *zone, NSUInteger numElems, NSUInteger byteSize);
void *NSZoneMalloc(NSZone *zone, NSUInteger size);
void *NSZoneRealloc(NSZone *zone, void *ptr, NSUInteger size);

void NSDeallocateObject(id object);
void NSDivideRect(NSRect inRect, NSRect *slice, NSRect *rem, CGFloat amount, NSRectEdge edge);
void NSEndHashTableEnumeration(NSHashEnumerator *enumerator);
void NSEndMapTableEnumeration(NSMapEnumerator *enumerator);
void NSFreeMapTable(NSMapTable *table);
void NSHashInsert(NSHashTable *table, const void *pointer);
void NSHashRemove(NSHashTable *table, const void *pointer);
void NSLog(CFNSString format, ...);
void NSLogv(CFNSString format, va_list args);
void NSMapInsert(NSMapTable *table, const void *key, const void *value);
void NSMapInsertKnownAbsent(NSMapTable *table, const void *key, const void *value);
void NSMapRemove(NSMapTable *table, const void *key);
void NSPopAutoreleasePool(void *token);
void NSRequestConcreteImplementation(id self, SEL _cmd, Class absClass);
void NSSetUncaughtExceptionHandler(NSUncaughtExceptionHandler *);
void NSZoneFree(NSZone *zone, void *ptr);
