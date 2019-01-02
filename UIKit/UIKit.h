#import "../Types.h"
#import "UIKitTypes.h"

id UIImagePNGRepresentation(id image);
id UIImageJPEGRepresentation(id image, CGFloat compressionQuality);

struct CGRect UIRectCenteredAboutPoint(struct CGRect, CGPoint, CGFloat, CGFloat);
struct CGRect UIRectCenteredAboutPointScale(struct CGRect, CGPoint);

struct CGPoint UIRectGetCenter(struct CGRect rect);

void UIRectFill(struct CGRect rect);
void UIRectClip(struct CGRect rect);
void UIGraphicsPushContext(CGContextRef context);
void UIGraphicsPopContext(void);
void UIGraphicsBeginImageContextWithOptions(struct CGSize size, BOOL opaque, CGFloat scale);
void UIGraphicsBeginImageContext(struct CGSize size);
void UIGraphicsEndImageContext(void);

CGFloat UIRoundToScale(CGFloat, CGFloat);
CGFloat UIFloorToViewScale(CGFloat, CGFloat);
CGFloat UIRoundToViewScale(CGFloat, CGFloat);
CGFloat UICeilToViewScale(CGFloat, CGFloat);

CGContextRef UIGraphicsGetCurrentContext(void);