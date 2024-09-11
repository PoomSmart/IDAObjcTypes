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
NSString *NSStringFromCGAffineTransform(CGAffineTransform t);
NSString *NSStringFromCGPoint(CGPoint point);
NSString *NSStringFromCGRect(CGRect rect);
NSString *NSStringFromCGSize(CGSize size);
NSString *NSStringFromCGVector(CGVector vector);
NSString *NSStringFromUIEdgeInsets(UIEdgeInsets insets);
NSString *NSStringFromUIOffset(UIOffset offset);

NSData *UIImagePNGRepresentation(UIImage *image);
NSData *UIImageJPEGRepresentation(UIImage *image, CGFloat compressionQuality);

UIImage *UIGraphicsGetImageFromCurrentImageContext(void);

CGRect UIRectCenteredAboutPoint(CGRect rect, CGPoint center);
CGRect UIRectCenteredAboutPointScale(CGRect rect, CGPoint center, CGFloat scale);
CGRect UIRectCenteredXInRect(CGRect rect, CGRect bounds);
CGRect UIRectCenteredYInRect(CGRect rect, CGRect bounds);
CGRect UIRectCenteredIntegralRect(CGRect rect, CGRect bounds);
CGRect UIRectCenteredIntegralRectScale(CGRect rect, CGRect bounds, CGFloat scale);
CGRect UIRectInset(CGRect rect, CGFloat top, CGFloat right, CGFloat bottom, CGFloat left);
CGRect UIRectInsetEdges(CGRect rect, UIRectEdge edges, CGFloat v);
CGRect UIRectIntegralWithScale(CGRect rect, CGFloat scale);
CGRect UIRectRoundToScale(CGRect value, CGFloat scale);
CGRect CGRectFromString(NSString *str);

CGSize CGSizeFromString(NSString *str);

CGPoint UIRectGetCenter(CGRect rect);
CGPoint UIMidPointBetweenPoints(CGPoint a, CGPoint b);
CGPoint CGPointFromString(NSString *str);

CGVector CGVectorFromString(NSString *str);

CGFloat UIRoundToScale(CGFloat value, CGFloat scale);
CGFloat UIRoundToViewScale(CGFloat value, id view);
CGFloat UIRoundToScreenScale(CGFloat value, id screen);
CGFloat UIFloorToScale(CGFloat value, CGFloat scale);
CGFloat UIFloorToViewScale(CGFloat value, id view);
CGFloat UIFloorToScreenScale(CGFloat value, id screen);
CGFloat UICeilToScale(CGFloat value, CGFloat scale);
CGFloat UICeilToViewScale(CGFloat value, id view);
CGFloat UICeilToScreenScale(CGFloat value, id screen);
CGFloat UIAnimationDragCoefficient(void);
CGFloat UIDistanceBetweenPoints(CGPoint a, CGPoint b);

CGAffineTransform UIIntegralTransform(CGAffineTransform t);

CGContextRef UIGraphicsGetCurrentContext(void);

CGImageRef UICreateCGImageFromIOSurface(IOSurfaceRef surface);

NSComparisonResult UIContentSizeCategoryCompareToCategory(UIContentSizeCategory lhs, UIContentSizeCategory rhs);

NSDirectionalEdgeInsets NSDirectionalEdgeInsetsFromString(NSString *str);

void UIRectFrame(CGRect rect);
void UIRectFill(CGRect rect);
void UIRectFillUsingBlendMode(CGRect rect, CGBlendMode blendMode);
void UIRectClip(CGRect rect);
void UIImageWriteToSavedPhotosAlbum(UIImage *image, id completionTarget, SEL completionSelector, void *contextInfo);
void UIImageDataWriteToSavedPhotosAlbum(NSData *imageData, id completionTarget, SEL completionSelector, void *contextInfo);
void UISaveVideoAtPathToSavedPhotosAlbum(CFNSString videoPath, id completionTarget, SEL completionSelector, void *contextInfo);
void UIGraphicsPushContext(CGContextRef context);
void UIGraphicsPopContext(void);
void UIGraphicsBeginImageContextWithOptions(CGSize size, BOOL opaque, CGFloat scale);
void UIGraphicsBeginImageContext(CGSize size);
void UIGraphicsEndImageContext(void);

void _UIApplicationLoadWebKit(void);

int UIApplicationMain(int argc, char **argv, NSString *principalClassName, NSString *delegateClassName);

BOOL UIContentSizeCategoryIsAccessibilityCategory(UIContentSizeCategory category);

BOOL _UIApplicationIsExtension(void);
BOOL _UIApplicationUsesLegacyUI(void);

bool UIRectIsDiscrete(CGRect rect);

bool __UIApplicationLinkedOnOrAfter(NSInteger);
