#import "../CoreGraphics/Types.h"
#import "../Foundation/Types.h"

CGRect AVMakeRectWithAspectRatioInsideRect(CGSize aspectRatio, CGRect boundingRect);

void AVCGRectFromNSValue(NSValue *value, CGRect *rect);
void AVCGSizeFromNSValue(NSValue *value, CGSize *size);
void AVCGPointFromNSValue(NSValue *value, CGPoint *point);

NSMutableArray *AVNSArrayFromCGColor(CGColorRef color);

NSValue *AVNSValueWithCGRect(CGRect *rect);
NSValue *AVNSValueWithCGSize(CGSize *size);
NSValue *AVNSValueWithCGPoint(CGPoint *point);
