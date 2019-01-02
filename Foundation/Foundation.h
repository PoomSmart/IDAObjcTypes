#import "../Types.h"
#import "FoundationTypes.h"

CGFloat NSWidth(NSRect aRect);
CGFloat NSHeight(NSRect aRect);
CGFloat NSMaxX(NSRect aRect);
CGFloat NSMidX(NSRect aRect);
CGFloat NSMinX(NSRect aRect);
CGFloat NSMaxY(NSRect aRect);
CGFloat NSMidY(NSRect aRect);
CGFloat NSMinY(NSRect aRect);

NSString *NSStringFromClass(Class aClass);
NSString *NSStringFromProtocol(Protocol *proto);
NSString *NSStringFromSelector(SEL aSelector);
NSString *NSStringFromPoint(NSPoint aPoint);
NSString *NSStringFromSize(NSSize aSize);
NSString *NSStringFromRect(NSRect aRect);
NSString *NSStringFromRange(NSRange range);
NSString *NSStringFromCGRect(struct CGRect rect);
NSString *NSStringFromCGSize(struct CGSize size);
NSString *NSStringFromCGPoint(struct CGPoint point);
NSString *NSStringFromCGAffineTransform(struct CGAffineTransform t);
NSString *NSStringFromUIEdgeInsets(struct UIEdgeInsets insets);
NSString *NSStringFromUIOffset(struct UIOffset offset);
NSString *NSHomeDirectory(void);
NSString *NSTemporaryDirectory(void);

NSRect NSUnionRect(NSRect aRect, NSRect bRect);
NSRect NSInsetRect(NSRect aRect, CGFloat dX, CGFloat dY);
NSRect NSIntegralRect(NSRect aRect);
NSRect NSIntegralRectWithOptions(NSRect aRect, NSAlignmentOptions opts);
NSRect NSIntersectionRect(NSRect aRect, NSRect bRect);
NSRect NSMakeRect(CGFloat x, CGFloat y, CGFloat w, CGFloat h);

BOOL NSContainsRect(NSRect aRect, NSRect bRect);
BOOL NSEqualRects(NSRect aRect, NSRect bRect);
BOOL NSIsEmptyRect(NSRect aRect);
BOOL NSIntersectsRect(NSRect aRect, NSRect bRect);

Class NSClassFromString(CFStringRef string);

void NSDivideRect(NSRect inRect, NSRect *slice, NSRect *rem, CGFloat amount, NSRectEdge edge);