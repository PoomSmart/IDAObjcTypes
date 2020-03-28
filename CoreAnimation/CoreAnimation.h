#import "../Types.h"
#import "Types.h"

CFTimeInterval CACurrentMediaTime(void);

CATransform3D CATransform3DMakeTranslation(CGFloat tx, CGFloat ty, CGFloat tz);
CATransform3D CATransform3DConcat(CATransform3D a, CATransform3D b);
CATransform3D CATransform3DTranslate(CATransform3D t, CGFloat tx, CGFloat ty, CGFloat tz);
CATransform3D CATransform3DScale(CATransform3D t, CGFloat sx, CGFloat sy, CGFloat sz);
CATransform3D CATransform3DRotate(CATransform3D t, CGFloat angle, CGFloat x, CGFloat y, CGFloat z);
