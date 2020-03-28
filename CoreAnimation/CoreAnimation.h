#import "../Types.h"
#import "Types.h"

CFTimeInterval CACurrentMediaTime(void);

CGPoint CA_CGPointApplyTransform(CGPoint p, CATransform3D t);
CGPoint CA_CGPointUnapplyInverseTransform(CGPoint p, CATransform3D t_inv);

CGRect CA_CGRectApplyTransform(CGRect r, CATransform3D t);
CGRect CA_CGRectUnapplyInverseTransform(CGRect r, CATransform3D t_inv);

CATransform3D CATransform3DMakeAffineTransform(CGAffineTransform m);
CATransform3D CATransform3DMakeTranslation(CGFloat tx, CGFloat ty, CGFloat tz);
CATransform3D CATransform3DMakeScale(CGFloat sx, CGFloat sy, CGFloat sz);
CATransform3D CATransform3DMakeRotation(CGFloat angle, CGFloat x, CGFloat y, CGFloat z);
CATransform3D CATransform3DConcat(CATransform3D a, CATransform3D b);
CATransform3D CATransform3DConcatAffineTransform(CGAffineTransform a, CATransform3D b);
CATransform3D CATransform3DTranslate(CATransform3D t, CGFloat tx, CGFloat ty, CGFloat tz);
CATransform3D CATransform3DTranslateRight(CATransform3D t, CGFloat tx, CGFloat ty, CGFloat tz);
CATransform3D CATransform3DScale(CATransform3D t, CGFloat sx, CGFloat sy, CGFloat sz);
CATransform3D CATransform3DRotate(CATransform3D t, CGFloat angle, CGFloat x, CGFloat y, CGFloat z);

CGAffineTransform CATransform3DGetAffineTransform(CATransform3D t);