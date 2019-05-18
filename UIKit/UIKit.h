#import "../Types.h"
#import "Types.h"

UIEdgeInsets UIEdgeInsetsFromString(NSString *str);

UIOffset UIOffsetFromString(NSString *str);

NSData* UIImagePNGRepresentation(UIImage* image);
NSData* _imp__UIImagePNGRepresentation(UIImage* image);
NSData* UIImageJPEGRepresentation(UIImage* image, CGFloat compressionQuality);
NSData* _imp__UIImageJPEGRepresentation(UIImage* image, CGFloat compressionQuality);

UIImage* UIGraphicsGetImageFromCurrentImageContext(void);
UIImage* _imp__UIGraphicsGetImageFromCurrentImageContext(void);

CGRect UIRectCenteredAboutPoint(CGRect, CGPoint, CGFloat, CGFloat);
CGRect _imp__UIRectCenteredAboutPoint(CGRect, CGPoint, CGFloat, CGFloat);
CGRect UIRectCenteredAboutPointScale(CGRect, CGPoint);
CGRect _imp__UIRectCenteredAboutPointScale(CGRect, CGPoint);
CGRect UIRectInset(CGRect, CGFloat, CGFloat, CGFloat, CGFloat);
CGRect _imp__UIRectInset(CGRect, CGFloat, CGFloat, CGFloat, CGFloat);
CGRect CGRectFromString(NSString *str);
CGRect _imp__CGRectFromString(NSString *str);

CGSize CGSizeFromString(NSString *str);
CGSize _imp__CGSizeFromString(NSString *str);

CGPoint UIRectGetCenter(CGRect rect);
CGPoint _imp__UIRectGetCenter(CGRect rect);
CGPoint CGPointFromString(NSString *str);
CGPoint _imp__CGPointFromString(NSString *str);

CGFloat UIRoundToScale(CGFloat, CGFloat);
CGFloat _imp__UIRoundToScale(CGFloat, CGFloat);
CGFloat UIFloorToScale(CGFloat, CGFloat);
CGFloat _imp__UIFloorToScale(CGFloat, CGFloat);
CGFloat UICeilToScale(CGFloat, CGFloat);
CGFloat _imp__UICeilToScale(CGFloat, CGFloat);
CGFloat UIFloorToViewScale(CGFloat);
CGFloat _imp__UIFloorToViewScale(CGFloat);
CGFloat UIRoundToViewScale(CGFloat);
CGFloat _imp__UIRoundToViewScale(CGFloat);
CGFloat UICeilToViewScale(CGFloat);
CGFloat _imp__UICeilToViewScale(CGFloat);
CGFloat UIFloorToScreenScale(CGFloat);
CGFloat _imp__UIFloorToScreenScale(CGFloat);
CGFloat UIRoundToScreenScale(CGFloat);
CGFloat _imp__UIRoundToScreenScale(CGFloat);
CGFloat UICeilToScreenScale(CGFloat);
CGFloat _imp__UICeilToScreenScale(CGFloat);
CGFloat UIAnimationDragCoefficient(void);
CGFloat _imp__UIAnimationDragCoefficient(void);

CGAffineTransform UIIntegralTransform(CGAffineTransform t);
CGAffineTransform _imp__UIIntegralTransform(CGAffineTransform t);

CGContextRef UIGraphicsGetCurrentContext(void);
CGContextRef _imp__UIGraphicsGetCurrentContext(void);

void UIRectFill(CGRect rect);
void _imp__UIRectFill(CGRect rect);
void UIRectFillUsingBlendMode(CGRect rect, CGBlendMode blendMode);
void _imp__UIRectFillUsingBlendMode(CGRect rect, CGBlendMode blendMode);
void UIRectClip(CGRect rect);
void _imp__UIRectClip(CGRect rect);
void UIGraphicsPushContext(CGContextRef context);
void _imp__UIGraphicsPushContext(CGContextRef context);
void UIGraphicsPopContext(void);
void _imp__UIGraphicsPopContext(void);
void UIGraphicsBeginImageContextWithOptions(CGSize size, BOOL opaque, CGFloat scale);
void _imp__UIGraphicsBeginImageContextWithOptions(CGSize size, BOOL opaque, CGFloat scale);
void UIGraphicsBeginImageContext(CGSize size);
void _imp__UIGraphicsBeginImageContext(CGSize size);
void UIGraphicsBeginImageContextWithOptions(CGSize size, BOOL opaque, CGFloat scale);
void _imp__UIGraphicsBeginImageContextWithOptions(CGSize size, BOOL opaque, CGFloat scale);
void UIGraphicsEndImageContext(void);
void _imp__UIGraphicsEndImageContext(void);

int UIApplicationMain(int argc, char** argv, NSString* principalClassName, NSString* delegateClassName);
int _imp__UIApplicationMain(int argc, char** argv, NSString* principalClassName, NSString* delegateClassName);

BOOL UIContentSizeCategoryIsAccessibilityCategory(UIContentSizeCategory category);
BOOL _imp__UIContentSizeCategoryIsAccessibilityCategory(UIContentSizeCategory category);

bool UIRectIsDiscrete(CGRect rect);
bool _imp__UIRectIsDiscrete(CGRect rect);
bool __UIApplicationLinkedOnOrAfter(NSInteger);
bool _imp____UIApplicationLinkedOnOrAfter(NSInteger);