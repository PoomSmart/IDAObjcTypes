#import "../Types.h"
#import "FoundationTypes.h"

NSString *NSStringFromClass(Class aClass);
NSString *NSStringFromProtocol(Protocol *proto);
NSString *NSStringFromSelector(SEL aSelector);
NSString *NSStringFromCGSize(struct CGSize size);
NSString *NSStringFromCGPoint(struct CGPoint point);
NSString *NSStringFromUIEdgeInsets(struct UIEdgeInsets insets);
NSString *NSStringFromUIOffset(struct UIOffset offset);
NSString *NSHomeDirectory(void);
NSString *NSTemporaryDirectory(void);

Class NSClassFromString(CFStringRef string);