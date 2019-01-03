#import "../Types.h"
#import "FoundationTypes.h"

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

Class NSClassFromString(CFStringRef string);

Protocol *NSProtocolFromString(NSString *namestr);

const char *NSGetSizeAndAlignment(const char *typePtr, NSUInteger *sizep, NSUInteger *alignp);

void *NSPushAutoreleasePool(NSUInteger capacity);
void *NSZoneMalloc(NSZone *zone, NSUInteger size);

void NSPopAutoreleasePool(void *token);
void NSDivideRect(NSRect inRect, NSRect *slice, NSRect *rem, CGFloat amount, NSRectEdge edge);
void NSLog(NSString *format, ...);
void NSZoneFree(NSZone *zone, void *ptr);
