#import "../Types.h"
#import "CoreGraphicsTypes.h"

CFTypeID CGPathGetTypeID(void);

struct CGRect CGRectInset(struct CGRect rect, CGFloat dx, CGFloat dy);
struct CGRect CGRectUnion(struct CGRect rect1, struct CGRect rect2);
struct CGRect CGRectApplyAffineTransform(struct CGRect rect, struct CGAffineTransform t);
struct CGRect CGContextGetPathBoundingBox(CGContextRef context);
struct CGRect CGContextGetClipBoundingBox(CGContextRef c);
struct CGRect CGPathGetBoundingBox(CGPathRef path);
struct CGRect CGPathGetPathBoundingBox(CGPathRef path);

struct CGPoint CGPointApplyAffineTransform(struct CGPoint point, struct CGAffineTransform t);
struct CGPoint CGContextGetPathCurrentPoint(CGContextRef context);
struct CGPoint CGPathGetCurrentPoint(CGPathRef path);

struct CGSize CGSizeApplyAffineTransform(struct CGSize size, struct CGAffineTransform t);

CGFloat CGRectGetWidth(struct CGRect rect);
CGFloat CGRectGetHeight(struct CGRect rect);
CGFloat CGRectGetMaxX(struct CGRect rect);
CGFloat CGRectGetMidX(struct CGRect rect);
CGFloat CGRectGetMinX(struct CGRect rect);
CGFloat CGRectGetMaxY(struct CGRect rect);
CGFloat CGRectGetMidY(struct CGRect rect);
CGFloat CGRectGetMinY(struct CGRect rect);

void CGContextSaveGState(CGContextRef c);
void CGContextRestoreGState(CGContextRef c);
void CGContextScaleCTM(CGContextRef c, CGFloat sx, CGFloat sy);
void CGContextTranslateCTM(CGContextRef c, CGFloat tx, CGFloat ty);
void CGContextRotateCTM(CGContextRef c, CGFloat angle);
void CGContextConcatCTM(CGContextRef c, struct CGAffineTransform transform);
void CGContextSetLineWidth(CGContextRef c, CGFloat width);
void CGContextBeginPath(CGContextRef c);
void CGContextMoveToPoint(CGContextRef c, CGFloat x, CGFloat y);
void CGContextAddLineToPoint(CGContextRef c, CGFloat x, CGFloat y);
void CGContextAddCurveToPoint(CGContextRef c, CGFloat cp1x, CGFloat cp1y, CGFloat cp2x, CGFloat cp2y, CGFloat x, CGFloat y);
void CGContextAddQuadCurveToPoint(CGContextRef c, CGFloat cpx, CGFloat cpy, CGFloat x, CGFloat y);
void CGContextClosePath(CGContextRef c);
void CGContextAddRect(CGContextRef c, struct CGRect rect);
void CGContextAddRects(CGContextRef c, const struct CGRect rects[], size_t count);
void CGContextAddLines(CGContextRef c, const struct CGPoint points[], size_t count);
void CGContextAddEllipseInRect(CGContextRef context, struct CGRect rect);
void CGContextAddArc(CGContextRef c, CGFloat x, CGFloat y, CGFloat radius, CGFloat startAngle, CGFloat endAngle, int clockwise);
void CGContextAddArcToPoint(CGContextRef c, CGFloat x1, CGFloat y1, CGFloat x2, CGFloat y2, CGFloat radius);
void CGContextReplacePathWithStrokedPath(CGContextRef c);
void CGContextFillPath(CGContextRef c);
void CGContextEOFillPath(CGContextRef c);
void CGContextStrokePath(CGContextRef c);
void CGContextFillRect(CGContextRef c, struct CGRect rect);
void CGContextFillRects(CGContextRef c, const struct CGRect rects[], size_t count);
void CGContextStrokeRect(CGContextRef c, struct CGRect rect);
void CGContextStrokeRectWithWidth(CGContextRef c, struct CGRect rect, CGFloat width);
void CGContextClearRect(CGContextRef c, struct CGRect rect);
void CGContextFillEllipseInRect(CGContextRef context, struct CGRect rect);
void CGContextStrokeEllipseInRect(CGContextRef context, struct CGRect rect);
void CGContextStrokeLineSegments(CGContextRef c, const struct CGPoint points[], size_t count);
void CGContextClip(CGContextRef c);
void CGContextEOClip(CGContextRef c);
void CGContextClipToMask(CGContextRef c, struct CGRect rect, CGImageRef mask);
void CGContextClipToRect(CGContextRef c, struct CGRect rect);
void CGContextClipToRects(CGContextRef c, const struct CGRect rects[], size_t count);
void CGContextSetFillColor(CGContextRef context, const CGFloat components[]);
void CGContextSetStrokeColor(CGContextRef context, const CGFloat components[]);
void CGContextRelease(CGContextRef c);
void CGContextFlush(CGContextRef c);
void CGContextSynchronize(CGContextRef c);
void CGContextEndPage(CGContextRef c);
void CGContextBeginPage(CGContextRef c, const struct CGRect *mediaBox);
void CGContextDrawPath(CGContextRef c, CGPathDrawingMode mode);
void CGGradientRelease(CGGradientRef gradient);
void CGImageRelease(CGImageRef image);
void CGPathAddPath(CGMutablePathRef path1, const struct CGAffineTransform *m, CGPathRef path2);
void CGPathAddArc(CGMutablePathRef path, const struct CGAffineTransform *m, CGFloat x, CGFloat y, CGFloat radius, CGFloat startAngle, CGFloat endAngle, bool clockwise);
void CGPathAddRelativeArc(CGMutablePathRef path, const struct CGAffineTransform *matrix, CGFloat x, CGFloat y, CGFloat radius, CGFloat startAngle, CGFloat delta);
void CGPathAddArcToPoint(CGMutablePathRef path, const struct CGAffineTransform *m, CGFloat x1, CGFloat y1, CGFloat x2, CGFloat y2, CGFloat radius);
void CGPathAddCurveToPoint(CGMutablePathRef path, const struct CGAffineTransform *m, CGFloat cp1x, CGFloat cp1y, CGFloat cp2x, CGFloat cp2y, CGFloat x, CGFloat y);
void CGPathAddLines(CGMutablePathRef path, const struct CGAffineTransform *m, const struct CGPoint *points, size_t count);
void CGPathAddLineToPoint(CGMutablePathRef path, const struct CGAffineTransform *m, CGFloat x, CGFloat y);
void CGPathAddQuadCurveToPoint(CGMutablePathRef path, const struct CGAffineTransform *m, CGFloat cpx, CGFloat cpy, CGFloat x, CGFloat y);
void CGPathAddRect(CGMutablePathRef path, const struct CGAffineTransform *m, struct CGRect rect);
void CGPathAddRects(CGMutablePathRef path, const struct CGAffineTransform *m, const struct CGRect *rects, size_t count);
void CGPathAddRoundedRect(CGMutablePathRef path, const struct CGAffineTransform *transform, struct CGRect rect, CGFloat cornerWidth, CGFloat cornerHeight);
void CGPathApply(CGPathRef path, void *info, CGPathApplierFunction function);
void CGPathMoveToPoint(CGMutablePathRef path, const struct CGAffineTransform *m, CGFloat x, CGFloat y);
void CGPathCloseSubpath(CGMutablePathRef path);
void CGPathAddEllipseInRect(CGMutablePathRef path, const struct CGAffineTransform *m, struct CGRect rect);
void CGPathRelease(CGPathRef path);
void CGContextDrawLinearGradient(CGContextRef c, CGGradientRef gradient, struct CGPoint startPoint, struct CGPoint endPoint, CGGradientDrawingOptions options);
void CGContextBeginTransparencyLayer(CGContextRef c, CFDictionaryRef auxiliaryInfo);
void CGContextBeginTransparencyLayerWithRect(CGContextRef c, struct CGRect rect, CFDictionaryRef auxInfo);
void CGContextEndTransparencyLayer(CGContextRef c);

CGPathRef CGPathRetain(CGPathRef path);
CGPathRef CGPathCreateWithEllipseInRect(struct CGRect rect, const struct CGAffineTransform *transform);
CGPathRef CGPathCreateWithRect(struct CGRect rect, const struct CGAffineTransform *transform);
CGPathRef CGPathCreateWithRoundedRect(struct CGRect rect, CGFloat cornerWidth, CGFloat cornerHeight, const struct CGAffineTransform *transform);
CGPathRef CGPathCreateCopy(CGPathRef path);
CGPathRef CGPathCreateCopyByTransformingPath(CGPathRef path, const struct CGAffineTransform *transform);
CGPathRef CGPathCreateCopyByDashingPath(CGPathRef path, const struct CGAffineTransform *transform, CGFloat phase, const CGFloat *lengths, size_t count);
CGPathRef CGPathCreateCopyByStrokingPath(CGPathRef path, const struct CGAffineTransform *transform, CGFloat lineWidth, CGLineCap lineCap, CGLineJoin lineJoin, CGFloat miterLimit);

CGMutablePathRef CGPathCreateMutable(void);
CGMutablePathRef CGPathCreateMutableCopy(CGPathRef path);
CGMutablePathRef CGPathCreateMutableCopyByTransformingPath(CGPathRef path, const struct CGAffineTransform *transform);

CGImageRef CGImageMaskCreate(size_t width, size_t height, size_t bitsPerComponent, size_t bitsPerPixel, size_t bytesPerRow, CGDataProviderRef provider, const CGFloat *decode, bool shouldInterpolate);

CGContextRef CGContextRetain(CGContextRef c);

CGColorSpaceRef CGColorGetColorSpace(CGColorRef color);

CGGradientRef CGGradientCreateWithColors(CGColorSpaceRef space, CFArrayRef colors, const CGFloat *locations);

CGImageAlphaInfo CGImageGetAlphaInfo(CGImageRef image);

CGBitmapInfo CGImageGetBitmapInfo(CGImageRef image);

CGDataProviderRef CGImageGetDataProvider(CGImageRef image);

CGColorRenderingIntent CGImageGetRenderingIntent(CGImageRef image);

const CGFloat *CGImageGetDecode(CGImageRef image);

size_t CGImageGetWidth(CGImageRef image);
size_t CGImageGetHeight(CGImageRef image);
size_t CGImageGetBitsPerComponent(CGImageRef image);
size_t CGImageGetBitsPerPixel(CGImageRef image);
size_t CGImageGetBytesPerRow(CGImageRef image);

bool CGRectEqualToRect(struct CGRect rect1, struct CGRect rect2);
bool CGRectIsNull(struct CGRect rect);
bool CGRectContainsPoint(struct CGRect rect, struct CGPoint point);
bool CGAffineTransformIsIdentity(struct CGAffineTransform t);
bool CGAffineTransformEqualToTransform(struct CGAffineTransform t1, struct CGAffineTransform t2);
bool CGContextIsPathEmpty(CGContextRef context);
bool CGImageGetShouldInterpolate(CGImageRef image);
bool CGImageIsMask(CGImageRef image);
bool CGPathEqualToPath(CGPathRef path1, CGPathRef path2);
bool CGPathIsEmpty(CGPathRef path);
bool CGPathIsRect(CGPathRef path, struct CGRect *rect);
bool CGPathContainsPoint(CGPathRef path, const struct CGAffineTransform *m, struct CGPoint point, bool eoFill);

struct CGAffineTransform CGAffineTransformMake(CGFloat a, CGFloat b, CGFloat c, CGFloat d, CGFloat tx, CGFloat ty);
struct CGAffineTransform CGAffineTransformMakeScale(CGFloat sx, CGFloat sy);
struct CGAffineTransform CGAffineTransformMakeRotation(CGFloat angle);
struct CGAffineTransform CGAffineTransformMakeTranslation(CGFloat tx, CGFloat ty);
struct CGAffineTransform CGAffineTransformTranslate(struct CGAffineTransform t, CGFloat tx, CGFloat ty);
struct CGAffineTransform CGAffineTransformScale(struct CGAffineTransform t, CGFloat sx, CGFloat sy);
struct CGAffineTransform CGAffineTransformRotate(struct CGAffineTransform t, CGFloat angle);
struct CGAffineTransform CGAffineTransformTranslate(struct CGAffineTransform t, CGFloat tx, CGFloat ty);
struct CGAffineTransform CGAffineTransformInvert(struct CGAffineTransform t);
struct CGAffineTransform CGAffineTransformConcat(struct CGAffineTransform t1, CGAffineTransform t2);
struct CGAffineTransform CGContextGetCTM(CGContextRef c);