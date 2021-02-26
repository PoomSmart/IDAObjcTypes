#import "../BaseTypes.h"
#import "../CoreGraphics/Types.h"
#import "../IOSurface/Types.h"
#import "Types.h"

UIEdgeInsets UIEdgeInsetsFromString(NSString *str);
UIEdgeInsets UIEdgeInsetsAdd(UIEdgeInsets a, UIEdgeInsets b);
UIEdgeInsets UIEdgeInsetsMax(UIEdgeInsets a, UIEdgeInsets b);
UIEdgeInsets UIEdgeInsetsSubtract(UIEdgeInsets a, UIEdgeInsets b);

UIOffset UIOffsetFromString(NSString *str);

NSString *NSStringFromDirectionalEdgeInsets(NSDirectionalEdgeInsets insets);

NSData *UIImagePNGRepresentation(UIImage *image);
NSData *UIImageJPEGRepresentation(UIImage *image, CGFloat compressionQuality);

UIImage *UIGraphicsGetImageFromCurrentImageContext(void);

CGRect UIRectCenteredAboutPoint(CGRect, CGPoint, CGFloat, CGFloat);
CGRect UIRectCenteredAboutPointScale(CGRect, CGPoint);
CGRect UIRectInset(CGRect, CGFloat, CGFloat, CGFloat, CGFloat);
CGRect CGRectFromString(NSString *str);

CGSize CGSizeFromString(NSString *str);

CGPoint UIRectGetCenter(CGRect rect);
CGPoint UIMidPointBetweenPoints(CGPoint a, CGPoint b);
CGPoint CGPointFromString(NSString *str);

CGFloat UIRoundToScale(CGFloat, CGFloat);
CGFloat UIRoundToViewScale(CGFloat);
CGFloat UIRoundToScreenScale(CGFloat);
CGFloat UIFloorToScale(CGFloat, CGFloat);
CGFloat UIFloorToViewScale(CGFloat);
CGFloat UIFloorToScreenScale(CGFloat);
CGFloat UICeilToScale(CGFloat, CGFloat);
CGFloat UICeilToViewScale(CGFloat);
CGFloat UICeilToScreenScale(CGFloat);
// CGFloat UIRectCenteredXInRect(CGRect);
CGFloat UIAnimationDragCoefficient(void);
CGFloat UIDistanceBetweenPoints(CGPoint a, CGPoint b);

CGAffineTransform UIIntegralTransform(CGAffineTransform t);

CGContextRef UIGraphicsGetCurrentContext(void);

CGImageRef UICreateCGImageFromIOSurface(IOSurfaceRef surface);

NSComparisonResult UIContentSizeCategoryCompareToCategory(UIContentSizeCategory lhs, UIContentSizeCategory rhs);

void UIRectFrame(CGRect rect);
void UIRectFill(CGRect rect);
void UIRectFillUsingBlendMode(CGRect rect, CGBlendMode blendMode);
void UIRectClip(CGRect rect);
void UIImageWriteToSavedPhotosAlbum(UIImage *image, id completionTarget, SEL completionSelector, void *contextInfo);
void UISaveVideoAtPathToSavedPhotosAlbum(NSString *videoPath, id completionTarget, SEL completionSelector, void *contextInfo);
void UIGraphicsPushContext(CGContextRef context);
void UIGraphicsPopContext(void);
void UIGraphicsBeginImageContextWithOptions(CGSize size, BOOL opaque, CGFloat scale);
void UIGraphicsBeginImageContext(CGSize size);
void UIGraphicsBeginImageContextWithOptions(CGSize size, BOOL opaque, CGFloat scale);
void UIGraphicsEndImageContext(void);

void _UIApplicationLoadWebKit(void);

int UIApplicationMain(int argc, char **argv, NSString *principalClassName, NSString *delegateClassName);

BOOL UIContentSizeCategoryIsAccessibilityCategory(UIContentSizeCategory category);

BOOL _UIApplicationIsExtension(void);
BOOL _UIApplicationUsesLegacyUI(void);

bool UIRectIsDiscrete(CGRect rect);

bool __UIApplicationLinkedOnOrAfter(NSInteger);
