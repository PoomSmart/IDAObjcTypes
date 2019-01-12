#import "../CoreGraphics/Types.h"
#import "../Foundation/Types.h"

CGRect AVMakeRectWithAspectRatioInsideRect(CGSize aspectRatio, CGRect boundingRect);
CGRect _imp__AVMakeRectWithAspectRatioInsideRect(CGSize aspectRatio, CGRect boundingRect);

void AVCGRectFromNSValue(NSValue* value, CGRect* rect);
void _imp__AVCGRectFromNSValue(NSValue* value, CGRect* rect);
void AVCGSizeFromNSValue(NSValue* value, CGSize* size);
void _imp__AVCGSizeFromNSValue(NSValue* value, CGSize* size);
void AVCGPointFromNSValue(NSValue* value, CGPoint* point);
void _imp__AVCGPointFromNSValue(NSValue* value, CGPoint* point);

NSMutableArray* AVNSArrayFromCGColor(CGColorRef color);
NSMutableArray* _imp__AVNSArrayFromCGColor(CGColorRef color);

NSValue* AVNSValueWithCGRect(CGRect* rect);
NSValue* _imp__AVNSValueWithCGRect(CGRect* rect);
NSValue* AVNSValueWithCGSize(CGSize* size);
NSValue* _imp__AVNSValueWithCGSize(CGSize* size);
NSValue* AVNSValueWithCGPoint(CGPoint* point);
NSValue* _imp__AVNSValueWithCGPoint(CGPoint* point);