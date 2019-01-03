#import "../Types.h"
#import "UIKitTypes.h"

NSData *UIImagePNGRepresentation(UIImage *image);
NSData *UIImageJPEGRepresentation(UIImage *image, CGFloat compressionQuality);

CGRect UIRectCenteredAboutPoint(CGRect, CGPoint, CGFloat, CGFloat);
CGRect UIRectCenteredAboutPointScale(CGRect, CGPoint);

CGPoint UIRectGetCenter(CGRect rect);

void UIRectFill(CGRect rect);
void UIRectFillUsingBlendMode(CGRect rect, CGBlendMode blendMode);
void UIRectClip(CGRect rect);
void UIGraphicsPushContext(CGContextRef context);
void UIGraphicsPopContext(void);
void UIGraphicsBeginImageContextWithOptions(CGSize size, BOOL opaque, CGFloat scale);
void UIGraphicsBeginImageContext(CGSize size);
void UIGraphicsEndImageContext(void);

CGFloat UIRoundToScale(CGFloat, CGFloat);
CGFloat UIFloorToScale(CGFloat, CGFloat);
CGFloat UICeilToScale(CGFloat, CGFloat);
CGFloat UIFloorToViewScale(CGFloat, CGFloat);
CGFloat UIRoundToViewScale(CGFloat, CGFloat);
CGFloat UICeilToViewScale(CGFloat, CGFloat);

CGContextRef UIGraphicsGetCurrentContext(void);