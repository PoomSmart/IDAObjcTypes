#import "../CoreFoundation/Types.h"
#import "Types.h"

CFTypeID CGPathGetTypeID(void);
CFTypeID CGImageGetTypeID(void);
CFTypeID CGColorGetTypeID(void);
CFTypeID CGPatternGetTypeID(void);
CFTypeID CGFontGetTypeID(void);

CFTypeRef CGCFRetain(CFTypeRef cf);
CFTypeRef CGTypeCreateInstance(CFTypeID typeID, CFIndex extraBytes);
CFTypeRef CGCFDictionaryGetValueWithType(CFDictionaryRef theDict, const void* key, CFTypeID typeID);

CFDictionaryRef CGRectCreateDictionaryRepresentation(CGRect rect);
CFDictionaryRef CGSizeCreateDictionaryRepresentation(CGSize size);
CFDictionaryRef CGPointCreateDictionaryRepresentation(CGPoint point);

CFMutableDictionaryRef CGCFDictionaryCreate(void);
CFMutableDictionaryRef CGCFDictionaryCreateCopy(CFDictionaryRef theDict);

CFArrayRef CGCFDictionaryCopyKeys(CFDictionaryRef theDict, const CFArrayCallBacks* callBacks);
CFArrayRef CGCFDictionaryCopyValues(CFDictionaryRef theDict, const CFArrayCallBacks* callBacks);

CGRect CGRectInset(CGRect rect, CGFloat dx, CGFloat dy);
CGRect CGRectUnion(CGRect rect1, CGRect rect2);
CGRect CGRectApplyAffineTransform(CGRect rect, CGAffineTransform t);
CGRect CGContextGetPathBoundingBox(CGContextRef context);
CGRect CGContextGetClipBoundingBox(CGContextRef c);
CGRect CGPathGetBoundingBox(CGPathRef path);
CGRect CGPathGetPathBoundingBox(CGPathRef path);
CGRect CGRectStandardize(CGRect rect);
CGRect CGRectOffset(CGRect rect, CGFloat dx, CGFloat dy);
CGRect CGRectIntegral(CGRect rect);
CGRect CGRectIntersection(CGRect r1, CGRect r2);

CGPoint CGPointApplyAffineTransform(CGPoint point, CGAffineTransform t);
CGPoint CGContextGetPathCurrentPoint(CGContextRef context);
CGPoint CGPathGetCurrentPoint(CGPathRef path);

CGSize CGSizeApplyAffineTransform(CGSize size, CGAffineTransform t);

CGFloat CGRectGetWidth(CGRect rect);
CGFloat CGRectGetHeight(CGRect rect);
CGFloat CGRectGetMaxX(CGRect rect);
CGFloat CGRectGetMidX(CGRect rect);
CGFloat CGRectGetMinX(CGRect rect);
CGFloat CGRectGetMaxY(CGRect rect);
CGFloat CGRectGetMidY(CGRect rect);
CGFloat CGRectGetMinY(CGRect rect);
CGFloat CGColorGetAlpha(CGColorRef color);
CGFloat CGContextGetAlpha(CGContextRef c);

CGBlendMode CGContextGetBlendMode(CGContextRef c);

void CGContextSaveGState(CGContextRef c);
void CGContextRestoreGState(CGContextRef c);
void CGContextScaleCTM(CGContextRef c, CGFloat sx, CGFloat sy);
void CGContextTranslateCTM(CGContextRef c, CGFloat tx, CGFloat ty);
void CGContextRotateCTM(CGContextRef c, CGFloat angle);
void CGContextConcatCTM(CGContextRef c, CGAffineTransform transform);
void CGContextSetBlendMode(CGContextRef c, CGBlendMode mode);
void CGContextSetLineWidth(CGContextRef c, CGFloat width);
void CGContextBeginPath(CGContextRef c);
void CGContextMoveToPoint(CGContextRef c, CGFloat x, CGFloat y);
void CGContextAddLineToPoint(CGContextRef c, CGFloat x, CGFloat y);
void CGContextAddCurveToPoint(CGContextRef c, CGFloat cp1x, CGFloat cp1y, CGFloat cp2x, CGFloat cp2y, CGFloat x, CGFloat y);
void CGContextAddQuadCurveToPoint(CGContextRef c, CGFloat cpx, CGFloat cpy, CGFloat x, CGFloat y);
void CGContextClosePath(CGContextRef c);
void CGContextAddRect(CGContextRef c, CGRect rect);
void CGContextAddRects(CGContextRef c, const CGRect rects[], size_t count);
void CGContextAddLines(CGContextRef c, const CGPoint points[], size_t count);
void CGContextAddEllipseInRect(CGContextRef context, CGRect rect);
void CGContextAddArc(CGContextRef c, CGFloat x, CGFloat y, CGFloat radius, CGFloat startAngle, CGFloat endAngle, int clockwise);
void CGContextAddArcToPoint(CGContextRef c, CGFloat x1, CGFloat y1, CGFloat x2, CGFloat y2, CGFloat radius);
void CGContextReplacePathWithStrokedPath(CGContextRef c);
void CGContextAddPath(CGContextRef c, CGPathRef path);
void CGContextFillPath(CGContextRef c);
void CGContextEOFillPath(CGContextRef c);
void CGContextStrokePath(CGContextRef c);
void CGContextDrawImage(CGContextRef c, CGRect rect, CGImageRef image);
void CGContextFillRect(CGContextRef c, CGRect rect);
void CGContextFillRects(CGContextRef c, const CGRect rects[], size_t count);
void CGContextStrokeRect(CGContextRef c, CGRect rect);
void CGContextStrokeRectWithWidth(CGContextRef c, CGRect rect, CGFloat width);
void CGContextClearRect(CGContextRef c, CGRect rect);
void CGContextFillEllipseInRect(CGContextRef context, CGRect rect);
void CGContextStrokeEllipseInRect(CGContextRef context, CGRect rect);
void CGContextStrokeLineSegments(CGContextRef c, const CGPoint points[], size_t count);
void CGContextClip(CGContextRef c);
void CGContextEOClip(CGContextRef c);
void CGContextClipToMask(CGContextRef c, CGRect rect, CGImageRef mask);
void CGContextClipToRect(CGContextRef c, CGRect rect);
void CGContextClipToRects(CGContextRef c, const CGRect rects[], size_t count);
void CGContextSetFillColor(CGContextRef context, const CGFloat components[]);
void CGContextSetFillColorWithColor(CGContextRef c, CGColorRef color);
void CGContextSetStrokeColor(CGContextRef context, const CGFloat components[]);
void CGContextSetStrokeColorWithColor(CGContextRef c, CGColorRef color);
void CGContextRelease(CGContextRef c);
void CGContextFlush(CGContextRef c);
void CGContextSynchronize(CGContextRef c);
void CGContextEndPage(CGContextRef c);
void CGContextBeginPage(CGContextRef c, const CGRect* mediaBox);
void CGContextDrawPath(CGContextRef c, CGPathDrawingMode mode);
void CGContextResetClip(CGContextRef c);
void CGContextClear(CGContextRef c);
void CGGradientRelease(CGGradientRef gradient);
void CGImageRelease(CGImageRef image);
void CGPathAddPath(CGMutablePathRef path1, const CGAffineTransform* m, CGPathRef path2);
void CGPathAddArc(CGMutablePathRef path, const CGAffineTransform* m, CGFloat x, CGFloat y, CGFloat radius, CGFloat startAngle, CGFloat endAngle, bool clockwise);
void CGPathAddRelativeArc(CGMutablePathRef path, const CGAffineTransform* matrix, CGFloat x, CGFloat y, CGFloat radius, CGFloat startAngle, CGFloat delta);
void CGPathAddArcToPoint(CGMutablePathRef path, const CGAffineTransform* m, CGFloat x1, CGFloat y1, CGFloat x2, CGFloat y2, CGFloat radius);
void CGPathAddCurveToPoint(CGMutablePathRef path, const CGAffineTransform* m, CGFloat cp1x, CGFloat cp1y, CGFloat cp2x, CGFloat cp2y, CGFloat x, CGFloat y);
void CGPathAddLines(CGMutablePathRef path, const CGAffineTransform* m, const CGPoint* points, size_t count);
void CGPathAddLineToPoint(CGMutablePathRef path, const CGAffineTransform* m, CGFloat x, CGFloat y);
void CGPathAddQuadCurveToPoint(CGMutablePathRef path, const CGAffineTransform* m, CGFloat cpx, CGFloat cpy, CGFloat x, CGFloat y);
void CGPathAddRect(CGMutablePathRef path, const CGAffineTransform* m, CGRect rect);
void CGPathAddRects(CGMutablePathRef path, const CGAffineTransform* m, const CGRect* rects, size_t count);
void CGPathAddRoundedRect(CGMutablePathRef path, const CGAffineTransform* transform, CGRect rect, CGFloat cornerWidth, CGFloat cornerHeight);
void CGPathApply(CGPathRef path, void* info, CGPathApplierFunction function);
void CGPathMoveToPoint(CGMutablePathRef path, const CGAffineTransform* m, CGFloat x, CGFloat y);
void CGPathCloseSubpath(CGMutablePathRef path);
void CGPathAddEllipseInRect(CGMutablePathRef path, const CGAffineTransform* m, CGRect rect);
void CGPathRelease(CGPathRef path);
void CGContextDrawLinearGradient(CGContextRef c, CGGradientRef gradient, CGPoint startPoint, CGPoint endPoint, CGGradientDrawingOptions options);
void CGContextBeginTransparencyLayer(CGContextRef c, CFDictionaryRef auxiliaryInfo);
void CGContextBeginTransparencyLayerWithRect(CGContextRef c, CGRect rect, CFDictionaryRef auxInfo);
void CGContextEndTransparencyLayer(CGContextRef c);
void CGRectDivide(CGRect rect, CGRect* slice, CGRect* remainder, CGFloat amount, CGRectEdge edge);
void CGColorRelease(CGColorRef color);
void CGPatternRelease(CGPatternRef pattern);
void CGFontRelease(CGFontRef font);

void CGPostError(const char* format, ...);
void CGCFRelease(CFTypeRef cf);
void CGCFDictionaryApplyBlock(CFDictionaryRef theDict, void* context);
void CGCFDictionarySetCString(CFMutableDictionaryRef theDict, const char* cStr);
void CGCFDictionarySetBoolean(CFMutableDictionaryRef theDict, const void* key, bool value);
void CGCFDictionarySetFloat(CFMutableDictionaryRef theDict, const void* key, double value);
void CGCFDictionarySetNumber(CFMutableDictionaryRef theDict, const void* key, CFNumberType type, const void* valuePtr);
void CGCFDictionarySetCFTypeRef(CFMutableDictionaryRef theDict, const void* key, const void* value);

CGPathRef CGPathRetain(CGPathRef path);
CGPathRef CGPathCreateWithEllipseInRect(CGRect rect, const CGAffineTransform* transform);
CGPathRef CGPathCreateWithRect(CGRect rect, const CGAffineTransform* transform);
CGPathRef CGPathCreateWithRoundedRect(CGRect rect, CGFloat cornerWidth, CGFloat cornerHeight, const CGAffineTransform* transform);
CGPathRef CGPathCreateCopy(CGPathRef path);
CGPathRef CGPathCreateCopyByTransformingPath(CGPathRef path, const CGAffineTransform* transform);
CGPathRef CGPathCreateCopyByDashingPath(CGPathRef path, const CGAffineTransform* transform, CGFloat phase, const CGFloat* lengths, size_t count);
CGPathRef CGPathCreateCopyByStrokingPath(CGPathRef path, const CGAffineTransform* transform, CGFloat lineWidth, CGLineCap lineCap, CGLineJoin lineJoin, CGFloat miterLimit);

CGMutablePathRef CGPathCreateMutable(void);
CGMutablePathRef CGPathCreateMutableCopy(CGPathRef path);
CGMutablePathRef CGPathCreateMutableCopyByTransformingPath(CGPathRef path, const CGAffineTransform* transform);

CGImageRef CGImageCreate(size_t width, size_t height, size_t bitsPerComponent, size_t bitsPerPixel, size_t bytesPerRow, CGColorSpaceRef space, CGBitmapInfo bitmapInfo, CGDataProviderRef provider, const CGFloat* decode, bool shouldInterpolate, CGColorRenderingIntent intent);
CGImageRef CGImageMaskCreate(size_t width, size_t height, size_t bitsPerComponent, size_t bitsPerPixel, size_t bytesPerRow, CGDataProviderRef provider, const CGFloat* decode, bool shouldInterpolate);
CGImageRef CGImageRetain(CGImageRef image);

CGFontRef CGFontRetain(CGFontRef font);
CGFontRef CGFontCreateWithFontName(CFStringRef name);
CGFontRef CGFontCreateWithDataProvider(CGDataProviderRef provider);
CGFontRef CGFontCreateCopyWithVariations(CGFontRef font, CFDictionaryRef variations);

CGFontRef CGFontCreateWithName(const char* name);
CGFontRef CGFontCreateMatchingFont(const char* , const char* , int, bool, CGFloat);

CFMutableArrayRef CGFontCreateFontsWithPath(CFStringRef path);
CFMutableArrayRef CGCFArrayCreate(void);

CGContextRef CGContextRetain(CGContextRef c);

CGColorRef CGColorRetain(CGColorRef color);
CGColorRef CGColorGetConstantColor(CFStringRef colorName);
CGColorRef CGColorCreate(CGColorSpaceRef space, const CGFloat* components);
CGColorRef CGColorCreateCopy(CGColorRef color);
CGColorRef CGColorCreateCopyWithAlpha(CGColorRef color, CGFloat alpha);
CGColorRef CGColorCreateGenericGray(CGFloat gray, CGFloat alpha);
CGColorRef CGColorCreateGenericRGB(CGFloat red, CGFloat green, CGFloat blue, CGFloat alpha);
CGColorRef CGColorCreateGenericCMYK(CGFloat cyan, CGFloat magenta, CGFloat yellow, CGFloat black, CGFloat alpha);
CGColorRef CGColorCreateWithPattern(CGColorSpaceRef space, CGPatternRef pattern, const CGFloat* components);
CGColorRef CGColorCreateCopyByMatchingToColorSpace(CGColorSpaceRef, CGColorRenderingIntent intent, CGColorRef color, CFDictionaryRef options);

CGColorSpaceRef CGImageGetColorSpace(CGImageRef image);
CGColorSpaceRef CGColorGetColorSpace(CGColorRef color);

CGColorRenderingIntent CGImageGetRenderingIntent(CGImageRef image);

CGPatternRef CGPatternRetain(CGPatternRef pattern);
CGPatternRef CGPatternCreate(void* info, CGRect bounds, CGAffineTransform matrix, CGFloat xStep, CGFloat yStep, CGPatternTiling tiling, bool isColored, const CGPatternCallbacks* callbacks);
CGPatternRef CGColorGetPattern(CGColorRef color);

CGGradientRef CGGradientCreateWithColors(CGColorSpaceRef space, CFArrayRef colors, const CGFloat* locations);

CGImageAlphaInfo CGImageGetAlphaInfo(CGImageRef image);

CGBitmapInfo CGImageGetBitmapInfo(CGImageRef image);

CGDataProviderRef CGImageGetDataProvider(CGImageRef image);

const CGFloat* CGImageGetDecode(CGImageRef image);
const CGFloat* CGColorGetComponents(CGColorRef color);

size_t CGImageGetWidth(CGImageRef image);
size_t CGImageGetHeight(CGImageRef image);
size_t CGImageGetBitsPerComponent(CGImageRef image);
size_t CGImageGetBitsPerPixel(CGImageRef image);
size_t CGImageGetBytesPerRow(CGImageRef image);
size_t CGColorGetNumberOfComponents(CGColorRef color);

bool CGRectEqualToRect(CGRect rect1, CGRect rect2);
bool CGRectIsNull(CGRect rect);
bool CGRectIsEmpty(CGRect rect);
bool CGRectIsInfinite(CGRect rect);
bool CGRectContainsPoint(CGRect rect, CGPoint point);
bool CGRectContainsRect(CGRect rect1, CGRect rect2);
bool CGRectIntersectsRect(CGRect rect1, CGRect rect2);
bool CGAffineTransformIsIdentity(CGAffineTransform t);
bool CGAffineTransformEqualToTransform(CGAffineTransform t1, CGAffineTransform t2);
bool CGContextIsPathEmpty(CGContextRef context);
bool CGImageGetShouldInterpolate(CGImageRef image);
bool CGImageIsMask(CGImageRef image);
bool CGPathEqualToPath(CGPathRef path1, CGPathRef path2);
bool CGPathIsEmpty(CGPathRef path);
bool CGPathIsRect(CGPathRef path, CGRect* rect);
bool CGPathContainsPoint(CGPathRef path, const CGAffineTransform* m, CGPoint point, bool eoFill);
bool CGRectMakeWithDictionaryRepresentation(CFDictionaryRef dict, CGRect* rect);
bool CGSizeMakeWithDictionaryRepresentation(CFDictionaryRef dict, CGSize* size);
bool CGPointMakeWithDictionaryRepresentation(CFDictionaryRef dict, CGPoint* point);
bool CGColorEqualToColor(CGColorRef color1, CGColorRef color2);

bool CGFloatIsValid(CGFloat value);
bool CGCFDictionaryGetBoolean(CFDictionaryRef theDict, const void* key, bool* result);
bool CGCFDictionaryGetCFTypeRef(CFDictionaryRef theDict, const void* key, CFTypeID typeID, CFTypeRef* valuePtr);

CGAffineTransform CGAffineTransformMake(CGFloat a, CGFloat b, CGFloat c, CGFloat d, CGFloat tx, CGFloat ty);
CGAffineTransform CGAffineTransformMakeScale(CGFloat sx, CGFloat sy);
CGAffineTransform CGAffineTransformMakeRotation(CGFloat angle);
CGAffineTransform CGAffineTransformMakeTranslation(CGFloat tx, CGFloat ty);
CGAffineTransform CGAffineTransformTranslate(CGAffineTransform t, CGFloat tx, CGFloat ty);
CGAffineTransform CGAffineTransformScale(CGAffineTransform t, CGFloat sx, CGFloat sy);
CGAffineTransform CGAffineTransformRotate(CGAffineTransform t, CGFloat angle);
CGAffineTransform CGAffineTransformTranslate(CGAffineTransform t, CGFloat tx, CGFloat ty);
CGAffineTransform CGAffineTransformInvert(CGAffineTransform t);
CGAffineTransform CGAffineTransformConcat(CGAffineTransform t1, CGAffineTransform t2);
CGAffineTransform CGContextGetCTM(CGContextRef c);