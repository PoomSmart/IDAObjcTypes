#import "../Types.h"
#import "Types.h"

SEL NSSelectorFromString(NSString *aSelectorName);

CGFloat NSWidth(NSRect aRect);
CGFloat NSHeight(NSRect aRect);
CGFloat NSMaxX(NSRect aRect);
CGFloat NSMidX(NSRect aRect);
CGFloat NSMinX(NSRect aRect);
CGFloat NSMaxY(NSRect aRect);
CGFloat NSMidY(NSRect aRect);
CGFloat NSMinY(NSRect aRect);

NSUInteger NSRoundUpToMultipleOfPageSize(NSUInteger bytes);
NSUInteger NSPageSize(void);

NSString *NSStringFromClass(Class aClass);
NSString *NSStringFromProtocol(Protocol *proto);
NSString *NSStringFromBOOL(BOOL theBOOL);
NSString *NSStringFromSelector(SEL aSelector);
NSString *NSStringFromPoint(NSPoint aPoint);
NSString *NSStringFromSize(NSSize aSize);
NSString *NSStringFromRect(NSRect aRect);
NSString *NSStringFromRange(NSRange range);
NSString *NSStringFromCGRect(CGRect rect);
NSString *NSStringFromCGSize(CGSize size);
NSString *NSStringFromCGPoint(CGPoint point);
NSString *NSStringFromCGAffineTransform(CGAffineTransform t);
NSString *NSStringFromUIEdgeInsets(UIEdgeInsets insets);
NSString *NSStringFromUIOffset(UIOffset offset);
NSString *NSHomeDirectory(void);
NSString *NSTemporaryDirectory(void);

NSDictionary *_NSDictionaryOfVariableBindings(NSString *commaSeparatedKeysString, id firstValue, ...);

NSArray *NSSearchPathForDirectoriesInDomains(NSSearchPathDirectory directory, NSSearchPathDomainMask domainMask, BOOL expandTilde);

NSRect NSUnionRect(NSRect aRect, NSRect bRect);
NSRect NSInsetRect(NSRect aRect, CGFloat dX, CGFloat dY);
NSRect NSIntegralRect(NSRect aRect);
NSRect NSIntegralRectWithOptions(NSRect aRect, NSAlignmentOptions opts);
NSRect NSIntersectionRect(NSRect aRect, NSRect bRect);
NSRect NSMakeRect(CGFloat x, CGFloat y, CGFloat w, CGFloat h);

NSRange NSUnionRange(NSRange range1, NSRange range2);
NSRange NSIntersectionRange(NSRange range1, NSRange range2);

BOOL NSContainsRect(NSRect aRect, NSRect bRect);
BOOL NSEqualRects(NSRect aRect, NSRect bRect);
BOOL NSIsEmptyRect(NSRect aRect);
BOOL NSIntersectsRect(NSRect aRect, NSRect bRect);
BOOL NSMapMember(NSMapTable *table, const void *key, void **originalKey, void **value);
BOOL NSNextMapEnumeratorPair(NSMapEnumerator *enumerator, void **key, void **value);
BOOL NSEqualSizes(NSSize aSize, NSSize bSize);

Class NSClassFromString(CFStringRef string);

Protocol *NSProtocolFromString(NSString *namestr);

NSMapEnumerator NSEnumerateMapTable(NSMapTable *table);

unsigned __NSHashCString(void *table, const void *anObject);

const char *NSGetSizeAndAlignment(const char *typePtr, NSUInteger *sizep, NSUInteger *alignp);

void *NSPushAutoreleasePool(NSUInteger capacity);
void *NSZoneMalloc(NSZone *zone, NSUInteger size);
void *NSMapInsertIfAbsent(NSMapTable *table, const void *key, const void *value);
void *NSMapGet(NSMapTable *table, const void *key);

NSArray *NSAllMapTableKeys(NSMapTable *table);
NSArray *NSAllMapTableValues(NSMapTable *table);

void NSRequestConcreteImplementation(id self, SEL _cmd, Class absClass);
void NSPopAutoreleasePool(void *token);
void NSDivideRect(NSRect inRect, NSRect *slice, NSRect *rem, CGFloat amount, NSRectEdge edge);
void NSLog(NSString *format, ...);
void NSZoneFree(NSZone *zone, void *ptr);
void NSMapInsert(NSMapTable *table, const void *key, const void *value);
void NSMapInsertKnownAbsent(NSMapTable *table, const void *key, const void *value);
void NSMapRemove(NSMapTable *table, const void *key);
void NSEndMapTableEnumeration(NSMapEnumerator *enumerator);