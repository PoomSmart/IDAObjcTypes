#import "../CoreFoundation/Types.h"
#import "../Foundation/Types.h"
#import "../IOSurface/Types.h"
#import "Types.h"

CFTypeID CGPathGetTypeID(void);
CFTypeID CGImageGetTypeID(void);
CFTypeID CGColorGetTypeID(void);
CFTypeID CGPatternGetTypeID(void);
CFTypeID CGFontGetTypeID(void);

CFTypeRef CGCFRetain(CFTypeRef cf);
CFTypeRef CGTypeCreateInstance(CFTypeID typeID, CFIndex extraBytes);
CFTypeRef CGCFDictionaryGetValueWithType(CFDictionaryRef theDict, const void *key, CFTypeID typeID);

CFDataRef CGFontCopyTableForTag(CGFontRef font, uint32_t tag);

CFDictionaryRef CGFontCopyVariations(CGFontRef font);
CFDictionaryRef CGRectCreateDictionaryRepresentation(CGRect rect);
CFDictionaryRef CGSizeCreateDictionaryRepresentation(CGSize size);
CFDictionaryRef CGPointCreateDictionaryRepresentation(CGPoint point);
CFDictionaryRef CGImageSourceCopyProperties(CGImageSourceRef isrc, CFDictionaryRef options);
CFDictionaryRef CGImageSourceCopyPropertiesAtIndex(CGImageSourceRef isrc, size_t index, CFDictionaryRef options);

CFMutableDictionaryRef CGCFDictionaryCreate(void);
CFMutableDictionaryRef CGCFDictionaryCreateCopy(CFDictionaryRef theDict);

CFArrayRef CGCFDictionaryCopyKeys(CFDictionaryRef theDict, const CFArrayCallBacks *callBacks);
CFArrayRef CGCFDictionaryCopyValues(CFDictionaryRef theDict, const CFArrayCallBacks *callBacks);
CFArrayRef CGFontCopyTableTags(CGFontRef font);

CFArrayRef CGFontCopyVariationAxes(CGFontRef font);

CFStringRef CGFontCopyFullName(CGFontRef font);
CFStringRef CGFontCopyFamilyName(CGFontRef font);
CFStringRef CGFontCopyPostScriptName(CGFontRef font);
CFStringRef CGFontCopyGlyphNameForGlyph(CGFontRef font, CGGlyph glyph);
CFStringRef CGImageSourceGetType(CGImageSourceRef isrc); // ImageIO ?
CFStringRef CGImageSourceGetTypeWithData(CFDataRef, CFStringRef, bool *); // ImageIO ?
CFStringRef CGImageMetadataCopyStringValueWithPath(CGImageMetadataRef metadata, CGImageMetadataTagRef parent, CFStringRef path);

CGRect CGContextGetPathBoundingBox(CGContextRef c);
CGRect CGContextGetClipBoundingBox(CGContextRef c);
CGRect CGPathGetBoundingBox(CGPathRef path);
CGRect CGPathGetPathBoundingBox(CGPathRef path);
CGRect CGFontGetFontBBox(CGFontRef font);
CGRect CGRectInset(CGRect rect, CGFloat dx, CGFloat dy);
CGRect CGRectUnion(CGRect rect1, CGRect rect2);
CGRect CGRectApplyAffineTransform(CGRect rect, CGAffineTransform t);
CGRect CGRectStandardize(CGRect rect);
CGRect CGRectOffset(CGRect rect, CGFloat dx, CGFloat dy);
CGRect CGRectIntegral(CGRect rect);
CGRect CGRectIntersection(CGRect r1, CGRect r2);

CGPoint CGPointApplyAffineTransform(CGPoint point, CGAffineTransform t);
CGPoint CGContextGetPathCurrentPoint(CGContextRef context);
CGPoint CGContextGetTextPosition(CGContextRef c);
CGPoint CGPathGetCurrentPoint(CGPathRef path);

CGSize CGSizeApplyAffineTransform(CGSize size, CGAffineTransform t);
CGSize CGContextConvertSizeToUserSpace(CGContextRef c, CGSize size);

CGFloat CGFontGetItalicAngle(CGFontRef font);
CGFloat CGFontGetStemV(CGFontRef font);
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
CGFloat CGContextGetLineWidth(CGContextRef);

CGBlendMode CGContextGetBlendMode(CGContextRef c);

CGPathRef CGPathRetain(CGPathRef path);
CGPathRef CGPathCreateWithEllipseInRect(CGRect rect, const CGAffineTransform *transform);
CGPathRef CGPathCreateWithRect(CGRect rect, const CGAffineTransform *transform);
CGPathRef CGPathCreateWithRoundedRect(CGRect rect, CGFloat cornerWidth, CGFloat cornerHeight, const CGAffineTransform *transform);
CGPathRef CGPathCreateCopy(CGPathRef path);
CGPathRef CGPathCreateCopyByTransformingPath(CGPathRef path, const CGAffineTransform *transform);
CGPathRef CGPathCreateCopyByDashingPath(CGPathRef path, const CGAffineTransform *transform, CGFloat phase, const CGFloat *lengths, size_t count);
CGPathRef CGPathCreateCopyByStrokingPath(CGPathRef path, const CGAffineTransform *transform, CGFloat lineWidth, CGLineCap lineCap, CGLineJoin lineJoin, CGFloat miterLimit);
CGPathRef CGContextCopyPath(CGContextRef c);

CGMutablePathRef CGPathCreateMutable(void);
CGMutablePathRef CGPathCreateMutableCopy(CGPathRef path);
CGMutablePathRef CGPathCreateMutableCopyByTransformingPath(CGPathRef path, const CGAffineTransform *transform);

CGImageRef CGImageCreate(size_t width, size_t height, size_t bitsPerComponent, size_t bitsPerPixel, size_t bytesPerRow, CGColorSpaceRef space, CGBitmapInfo bitmapInfo, CGDataProviderRef provider, const CGFloat *decode, bool shouldInterpolate, CGColorRenderingIntent intent);
CGImageRef CGImageCreateWithPNGDataProvider(CGDataProviderRef source, const CGFloat *decode, bool shouldInterpolate, CGColorRenderingIntent intent);
CGImageRef CGImageCreateWithJPEGDataProvider(CGDataProviderRef source, const CGFloat *decode, bool shouldInterpolate, CGColorRenderingIntent intent);
CGImageRef CGImageCreateWithImageInRect(CGImageRef image, CGRect rect);
CGImageRef CGImageCreateWithMask(CGImageRef image, CGImageRef mask);
CGImageRef CGImageCreateFromIOSurface(IOSurfaceRef surface, CFDictionaryRef options);
CGImageRef CGImageCreateCopy(CGImageRef image);
CGImageRef CGImageMaskCreate(size_t width, size_t height, size_t bitsPerComponent, size_t bitsPerPixel, size_t bytesPerRow, CGDataProviderRef provider, const CGFloat *decode, bool shouldInterpolate);
CGImageRef CGImageRetain(CGImageRef image);
CGImageRef CGImageSourceCreateImageAtIndex(CGImageSourceRef isrc, size_t index, CFDictionaryRef options);
CGImageRef CGImageSourceCreateThumbnailAtIndex(CGImageSourceRef isrc, size_t index, CFDictionaryRef options);
CGImageRef CGPatternGetImage(CGPatternRef pattern);
CGImageRef CGBitmapContextCreateImage(CGContextRef context);

CGImageMetadataRef CGImageSourceCopyMetadataAtIndex(CGImageSourceRef isrc, size_t index, CFDictionaryRef options);

CGImageMetadataTagRef CGImageMetadataTagCreate(CFStringRef xmlns, CFStringRef prefix, CFStringRef name, CGImageMetadataType type, CFTypeRef value);

CGMutableImageMetadataRef CGImageMetadataCreateMutable(void);

CGImageSourceRef CGImageSourceCreateWithData(CFDataRef data, CFDictionaryRef options);
CGImageSourceRef CGImageSourceCreateWithDataProvider(CGDataProviderRef provider, CFDictionaryRef options);
CGImageSourceRef CGImageSourceCreateWithURL(CFURLRef url, CFDictionaryRef options);
CGImageSourceRef CGImageSourceCreateWithFile(CFStringRef path, CFDictionaryRef options);
CGImageSourceRef CGImageSourceCreateIncremental(CFDictionaryRef options);

CGImageDestinationRef CGImageDestinationCreateWithData(CFMutableDataRef data, CFStringRef type, size_t count, CFDictionaryRef options);
CGImageDestinationRef CGImageDestinationCreateWithURL(CFURLRef url, CFStringRef type, size_t count, CFDictionaryRef options);

CGFontRef CGFontRetain(CGFontRef font);
CGFontRef CGFontCreateWithFontName(CFStringRef name);
CGFontRef CGFontCreateWithDataProvider(CGDataProviderRef provider);
CGFontRef CGFontCreateCopyWithVariations(CGFontRef font, CFDictionaryRef variations);

CGFontRef CGFontCreateWithName(const char *name);
CGFontRef CGFontCreateMatchingFont(const char *, const char *, int, bool, CGFloat);

CFMutableArrayRef CGFontCreateFontsWithPath(CFStringRef path);
CFMutableArrayRef CGCFArrayCreate(void);

CGContextRef CGBitmapContextCreate(void *data, size_t width, size_t height, size_t bitsPerComponent, size_t bytesPerRow, CGColorSpaceRef space, uint32_t bitmapInfo);
CGContextRef CGContextRetain(CGContextRef c);

CGColorRef CGColorRetain(CGColorRef color);
CGColorRef CGColorGetConstantColor(CFStringRef colorName);
CGColorRef CGColorCreate(CGColorSpaceRef space, const CGFloat *components);
CGColorRef CGColorCreateCopy(CGColorRef color);
CGColorRef CGColorCreateCopyWithAlpha(CGColorRef color, CGFloat alpha);
CGColorRef CGColorCreateSRGB(CGFloat red, CGFloat green, CGFloat blue, CGFloat alpha);
CGColorRef CGColorCreateGenericGray(CGFloat gray, CGFloat alpha);
CGColorRef CGColorCreateGenericRGB(CGFloat red, CGFloat green, CGFloat blue, CGFloat alpha);
CGColorRef CGColorCreateGenericCMYK(CGFloat cyan, CGFloat magenta, CGFloat yellow, CGFloat black, CGFloat alpha);
CGColorRef CGColorCreateWithPattern(CGColorSpaceRef space, CGPatternRef pattern, const CGFloat *components);
CGColorRef CGColorCreateCopyByMatchingToColorSpace(CGColorSpaceRef, CGColorRenderingIntent intent, CGColorRef color, CFDictionaryRef options);
CGColorRef CGColorTransformConvertColor(CGColorTransformRef, CGColorRef, CGColorRenderingIntent);
CGColorRef CGContextGetFillColorAsColor(CGContextRef);

CGColorSpaceRef CGImageGetColorSpace(CGImageRef image);
CGColorSpaceRef CGColorGetColorSpace(CGColorRef color);
CGColorSpaceRef CGColorSpaceRetain(CGColorSpaceRef space);
CGColorSpaceRef CGColorSpaceCreateWithName(CFStringRef name);
CGColorSpaceRef CGColorSpaceCreateDeviceRGB(void);
CGColorSpaceRef CGColorSpaceCreateDeviceCMYK(void);
CGColorSpaceRef CGColorSpaceCreateDeviceGray(void);
CGColorSpaceRef CGColorSpaceCreateLab(const CGFloat *whitePoint, const CGFloat *blackPoint, const CGFloat *range);
CGColorSpaceRef CGColorSpaceCreatePattern(CGColorSpaceRef baseSpace);
CGColorSpaceRef CGColorSpaceCreateWithPropertyList(CFPropertyListRef plist);
CGColorSpaceRef CGColorSpaceGetBaseColorSpace(CGColorSpaceRef space);
CGColorSpaceRef CGBitmapContextGetColorSpace(CGContextRef context);

CGColorSpaceModel CGColorSpaceGetModel(CGColorSpaceRef space);

CGColorTransformRef CGColorTransformCreate(CGColorSpaceRef, CFDictionaryRef attributes);

CGColorRenderingIntent CGImageGetRenderingIntent(CGImageRef image);

CGPatternRef CGPatternRetain(CGPatternRef pattern);
CGPatternRef CGPatternCreate(void *info, CGRect bounds, CGAffineTransform matrix, CGFloat xStep, CGFloat yStep, CGPatternTiling tiling, bool isColored, const CGPatternCallbacks *callbacks);
CGPatternRef CGPatternCreateWithImage2(CGImageRef, CGAffineTransform, CGPatternTiling);
CGPatternRef CGColorGetPattern(CGColorRef color);

CGGradientRef CGGradientCreateWithColors(CGColorSpaceRef space, CFArrayRef colors, const CGFloat *locations);
CGGradientRef CGGradientCreateWithColorComponents(CGColorSpaceRef space, const CGFloat *components, const CGFloat *locations, size_t count);

CGImageAlphaInfo CGImageGetAlphaInfo(CGImageRef image);
CGImageAlphaInfo CGBitmapContextGetAlphaInfo(CGContextRef context);

CGBitmapInfo CGImageGetBitmapInfo(CGImageRef image);
CGBitmapInfo CGBitmapContextGetBitmapInfo(CGContextRef context);

CGDataProviderRef CGImageGetDataProvider(CGImageRef image);

const CGFloat *CGImageGetDecode(CGImageRef image);
const CGFloat *CGColorGetComponents(CGColorRef color);

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
CGAffineTransform CGAffineTransformFromString(NSString *string);
CGAffineTransform CGContextGetCTM(CGContextRef c);
CGAffineTransform CGContextGetBaseCTM(CGContextRef c);
CGAffineTransform CGContextGetTextMatrix(CGContextRef c);
CGAffineTransform CGContextGetUserSpaceToDeviceSpaceTransform(CGContextRef c);

CGFontAntialiasingStyle CGContextGetFontAntialiasingStyle(CGContextRef);

CGContextType CGContextGetType(CGContextRef c);

CGGlyph CGFontGetGlyphWithGlyphName(CGFontRef font, CFStringRef name);

CGCompositeOperation CGContextGetCompositeOperation(CGContextRef c);

const char *CGFontGetPostScriptName(CGFontRef font);

size_t CGFontGetNumberOfGlyphs(CGFontRef font);
size_t CGImageGetWidth(CGImageRef image);
size_t CGImageGetHeight(CGImageRef image);
size_t CGImageGetBitsPerComponent(CGImageRef image);
size_t CGImageGetBitsPerPixel(CGImageRef image);
size_t CGImageGetBytesPerRow(CGImageRef image);
size_t CGImageSourceGetCount(CGImageSourceRef isrc);
size_t CGBitmapContextGetBitsPerComponent(CGContextRef context);
size_t CGBitmapContextGetBitsPerPixel(CGContextRef context);
size_t CGBitmapContextGetBytesPerRow(CGContextRef context);
size_t CGBitmapContextGetWidth(CGContextRef context);
size_t CGBitmapContextGetHeight(CGContextRef context);
size_t CGBitmapGetAlignedBytesPerRow(size_t);
size_t CGColorGetNumberOfComponents(CGColorRef color);
size_t CGColorSpaceGetNumberOfComponents(CGColorSpaceRef space);

bool CGFontGetGlyphBBoxes(CGFontRef font, const CGGlyph *glyphs, size_t count, CGRect *bboxes);
bool CGFontGetGlyphAdvances(CGFontRef font, const CGGlyph *glyphs, size_t count, int *advances);
bool CGFontGetGlyphAdvancesForStyle(CGFontRef font, const CGAffineTransform *transform, CGFontRenderingStyle style, const CGGlyph *glyphs, size_t count, CGSize *advances);
bool CGRectEqualToRect(CGRect rect1, CGRect rect2);
bool CGRectIsNull(CGRect rect);
bool CGRectIsEmpty(CGRect rect);
bool CGRectIsInfinite(CGRect rect);
bool CGRectContainsPoint(CGRect rect, CGPoint point);
bool CGRectContainsRect(CGRect rect1, CGRect rect2);
bool CGRectIntersectsRect(CGRect rect1, CGRect rect2);
bool CGRectMakeWithDictionaryRepresentation(CFDictionaryRef dict, CGRect *rect);
bool CGSizeMakeWithDictionaryRepresentation(CFDictionaryRef dict, CGSize *size);
bool CGSizeEqualToSize(CGSize size1, CGSize size2);
bool CGAffineTransformIsIdentity(CGAffineTransform t);
bool CGAffineTransformEqualToTransform(CGAffineTransform t1, CGAffineTransform t2);
bool CGContextIsPathEmpty(CGContextRef context);
bool CGContextDrawsWithCorrectShadowOffsets(CGContextRef);
bool CGContextGetAllowsFontSubpixelPositioning(CGContextRef);
bool CGImageGetShouldInterpolate(CGImageRef image);
bool CGImageDestinationCopyImageSource(CGImageDestinationRef idst, CGImageSourceRef isrc, CFDictionaryRef options, CFErrorRef *err);
bool CGImageDestinationFinalize(CGImageDestinationRef idst);
bool CGImageHasAlpha(CGImageRef image);
bool CGImageIsMask(CGImageRef image);
bool CGImageMetadataRegisterNamespaceForPrefix(CGMutableImageMetadataRef metadata, CFStringRef xmlns, CFStringRef prefix, CFErrorRef *err);
bool CGImageMetadataSetTagWithPath(CGMutableImageMetadataRef metadata, CGImageMetadataTagRef parent, CFStringRef path, CGImageMetadataTagRef tag);
bool CGImageMetadataSetValueWithPath(CGMutableImageMetadataRef metadata, CGImageMetadataTagRef parent, CFStringRef path, CFTypeRef value);
bool CGPathEqualToPath(CGPathRef path1, CGPathRef path2);
bool CGPathIsEmpty(CGPathRef path);
bool CGPathIsRect(CGPathRef path, CGRect *rect);
bool CGPathContainsPoint(CGPathRef path, const CGAffineTransform *m, CGPoint point, bool eoFill);
bool CGPointMakeWithDictionaryRepresentation(CFDictionaryRef dict, CGPoint *point);
bool CGColorEqualToColor(CGColorRef color1, CGColorRef color2);
bool CGColorSpaceSupportsOutput(CGColorSpaceRef space);
bool CGColorSpaceUsesExtendedRange(CGColorSpaceRef space);
bool CGColorSpaceEqualToColorSpace(CGColorSpaceRef space1, CGColorSpaceRef space2);
bool CGFloatIsValid(CGFloat value);

bool CGCFDictionaryGetBoolean(CFDictionaryRef theDict, const void *key, bool *result);
bool CGCFDictionaryGetBooleanWithDefault(CFDictionaryRef theDict, const void *key, bool defaultValue);
bool CGCFDictionaryGetFloat(CFMutableDictionaryRef theDict, const void *key, double *value);
bool CGCFDictionaryGetNumber(CFMutableDictionaryRef theDict, const void *key, CFNumberType type, void *valuePtr);
bool CGCFDictionaryGetInteger(CFMutableDictionaryRef theDict, const void *key, int *valuePtr);
bool CGCFDictionaryGetCFTypeRef(CFDictionaryRef theDict, const void *key, CFTypeID typeID, CFTypeRef *valuePtr);

double CGCFDictionaryGetFloatWithDefault(CFMutableDictionaryRef theDict, const void *key, double defaultValue);

int CGCFDictionaryGetIntegerWithDefault(CFMutableDictionaryRef theDict, const void *key, int defaultValue);

int CGFontGetAscent(CGFontRef font);
int CGFontGetDescent(CGFontRef font);
int CGFontGetLeading(CGFontRef font);
int CGFontGetCapHeight(CGFontRef font);
int CGFontGetXHeight(CGFontRef font);
int CGFontGetUnitsPerEm(CGFontRef font);

void CGContextDestroy(CFTypeRef c);
void CGContextSaveGState(CGContextRef c);
void CGContextRestoreGState(CGContextRef c);
void CGContextScaleCTM(CGContextRef c, CGFloat sx, CGFloat sy);
void CGContextTranslateCTM(CGContextRef c, CGFloat tx, CGFloat ty);
void CGContextRotateCTM(CGContextRef c, CGFloat angle);
void CGContextConcatCTM(CGContextRef c, CGAffineTransform transform);
void CGContextSetLineCap(CGContextRef c, CGLineCap cap);
void CGContextSetLineJoin(CGContextRef c, CGLineJoin join);
void CGContextSetLineDash(CGContextRef c, CGFloat phase, const CGFloat *lengths, size_t count);
void CGContextSetLineWidth(CGContextRef c, CGFloat width);
void CGContextSetAlpha(CGContextRef c, CGFloat alpha);
void CGContextSetGrayFillColor(CGContextRef c, CGFloat gray, CGFloat alpha);
void CGContextSetGrayStrokeColor(CGContextRef c, CGFloat gray, CGFloat alpha);
void CGContextSetRGBFillColor(CGContextRef c, CGFloat red, CGFloat green, CGFloat blue, CGFloat alpha);
void CGContextSetCMYKFillColor(CGContextRef c, CGFloat cyan, CGFloat magenta, CGFloat yellow, CGFloat black, CGFloat alpha);
void CGContextSetFillColor(CGContextRef context, const CGFloat components[]);
void CGContextSetFillColorWithColor(CGContextRef c, CGColorRef color);
void CGContextSetFillColorSpace(CGContextRef c, CGColorSpaceRef space);
void CGContextSetFillPattern(CGContextRef c, CGPatternRef pattern, const CGFloat *components);
void CGContextSetRGBStrokeColor(CGContextRef c, CGFloat red, CGFloat green, CGFloat blue, CGFloat alpha);
void CGContextSetStrokeColor(CGContextRef context, const CGFloat components[]);
void CGContextSetStrokeColorWithColor(CGContextRef c, CGColorRef color);
void CGContextSetStrokeColorSpace(CGContextRef c, CGColorSpaceRef space);
void CGContextSetInterpolationQuality(CGContextRef c, CGInterpolationQuality quality);
void CGContextSetShadowWithColor(CGContextRef c, CGSize offset, CGFloat blur, CGColorRef color);
void CGContextSetTextDrawingMode(CGContextRef c, CGTextDrawingMode mode);
void CGContextSetTextPosition(CGContextRef c, CGFloat x, CGFloat y);
void CGContextSetTextMatrix(CGContextRef c, CGAffineTransform t);
void CGContextSetFont(CGContextRef c, CGFontRef font);
void CGContextSetFontSize(CGContextRef c, CGFloat size);
void CGContextSetFontAntialiasingStyle(CGContextRef c, CGFontAntialiasingStyle style);
void CGContextSetShouldSmoothFonts(CGContextRef c, bool shouldSmoothFonts);
void CGContextSetShouldAntialias(CGContextRef c, bool shouldAntialias);
void CGContextSetAllowsAntialiasing(CGContextRef c, bool allowsAntialiasing);
void CGContextSetRenderingIntent(CGContextRef c, CGColorRenderingIntent intent);
void CGContextSetCompositeOperation(CGContextRef c, CGCompositeOperation operation);
void CGContextSetCTM(CGContextRef, CGAffineTransform);
void CGContextSetBaseCTM(CGContextRef, CGAffineTransform);
void CGContextSetBlendMode(CGContextRef c, CGBlendMode mode);
void CGContextSetFlatness(CGContextRef c, CGFloat flatness);
void CGContextSetMiterLimit(CGContextRef c, CGFloat limit);
void CGContextSetPatternPhase(CGContextRef c, CGSize phase);
void CGContextBeginPath(CGContextRef c);
void CGContextAddPath(CGContextRef c, CGPathRef path);
void CGContextFillPath(CGContextRef c);
void CGContextEOFillPath(CGContextRef c);
void CGContextStrokePath(CGContextRef c);
void CGContextClosePath(CGContextRef c);
void CGContextMoveToPoint(CGContextRef c, CGFloat x, CGFloat y);
void CGContextAddLineToPoint(CGContextRef c, CGFloat x, CGFloat y);
void CGContextAddCurveToPoint(CGContextRef c, CGFloat cp1x, CGFloat cp1y, CGFloat cp2x, CGFloat cp2y, CGFloat x, CGFloat y);
void CGContextAddQuadCurveToPoint(CGContextRef c, CGFloat cpx, CGFloat cpy, CGFloat x, CGFloat y);
void CGContextAddRect(CGContextRef c, CGRect rect);
void CGContextAddRects(CGContextRef c, const CGRect rects[], size_t count);
void CGContextAddLines(CGContextRef c, const CGPoint points[], size_t count);
void CGContextAddEllipseInRect(CGContextRef context, CGRect rect);
void CGContextAddArc(CGContextRef c, CGFloat x, CGFloat y, CGFloat radius, CGFloat startAngle, CGFloat endAngle, int clockwise);
void CGContextAddArcToPoint(CGContextRef c, CGFloat x1, CGFloat y1, CGFloat x2, CGFloat y2, CGFloat radius);
void CGContextReplacePathWithStrokedPath(CGContextRef c);
void CGContextDrawImage(CGContextRef c, CGRect rect, CGImageRef image);
void CGContextDrawRadialGradient(CGContextRef c, CGGradientRef gradient, CGPoint startCenter, CGFloat startRadius, CGPoint endCenter, CGFloat endRadius, CGGradientDrawingOptions options);
void CGContextDrawLinearGradient(CGContextRef c, CGGradientRef gradient, CGPoint startPoint, CGPoint endPoint, CGGradientDrawingOptions options);
void CGContextDrawPath(CGContextRef c, CGPathDrawingMode mode);
void CGContextFillRect(CGContextRef c, CGRect rect);
void CGContextFillRects(CGContextRef c, const CGRect rects[], size_t count);
void CGContextFillEllipseInRect(CGContextRef context, CGRect rect);
void CGContextStrokeRect(CGContextRef c, CGRect rect);
void CGContextStrokeRectWithWidth(CGContextRef c, CGRect rect, CGFloat width);
void CGContextStrokeEllipseInRect(CGContextRef context, CGRect rect);
void CGContextStrokeLineSegments(CGContextRef c, const CGPoint points[], size_t count);
void CGContextClearRect(CGContextRef c, CGRect rect);
void CGContextClip(CGContextRef c);
void CGContextEOClip(CGContextRef c);
void CGContextClipToMask(CGContextRef c, CGRect rect, CGImageRef mask);
void CGContextClipToRect(CGContextRef c, CGRect rect);
void CGContextClipToRects(CGContextRef c, const CGRect rects[], size_t count);
void CGContextResetState(CGContextRef c);
void CGContextRelease(CGContextRef c);
void CGContextFlush(CGContextRef c);
void CGContextSynchronize(CGContextRef c);
void CGContextEndPage(CGContextRef c);
void CGContextBeginPage(CGContextRef c, const CGRect *mediaBox);
void CGContextBeginTransparencyLayer(CGContextRef c, CFDictionaryRef auxiliaryInfo);
void CGContextBeginTransparencyLayerWithRect(CGContextRef c, CGRect rect, CFDictionaryRef auxInfo);
void CGContextEndTransparencyLayer(CGContextRef c);
void CGContextShowGlyphsAtPositions(CGContextRef c, const CGGlyph *glyphs, const CGPoint *Lpositions, size_t count);
void CGContextResetClip(CGContextRef c);
void CGContextClear(CGContextRef c);
void CGGradientRelease(CGGradientRef gradient);
void CGImageSourceUpdateData(CGImageSourceRef isrc, CFDataRef data, bool final);
void CGImageSourceUpdateDataProvider(CGImageSourceRef isrc, CGDataProviderRef provider, bool final);
void CGImageSourceRemoveCacheAtIndex(CGImageSourceRef isrc, size_t index);
void CGImageDestinationAddImage(CGImageDestinationRef idst, CGImageRef image, CFDictionaryRef properties);
void CGImageDestinationAddImageFromSource(CGImageDestinationRef idst, CGImageSourceRef isrc, size_t index, CFDictionaryRef properties);
void CGImageDestinationAddImageAndMetadata(CGImageDestinationRef idst, CGImageRef image, CGImageMetadataRef metadata, CFDictionaryRef options);
void CGImageDestinationSetProperties(CGImageDestinationRef idst, CFDictionaryRef properties);
void CGImageSetProperty(CGImageRef image, CFStringRef property, const void *value);
void CGImageRelease(CGImageRef image);
void CGPathAddPath(CGMutablePathRef path1, const CGAffineTransform *m, CGPathRef path2);
void CGPathAddArc(CGMutablePathRef path, const CGAffineTransform *m, CGFloat x, CGFloat y, CGFloat radius, CGFloat startAngle, CGFloat endAngle, bool clockwise);
void CGPathAddRelativeArc(CGMutablePathRef path, const CGAffineTransform *matrix, CGFloat x, CGFloat y, CGFloat radius, CGFloat startAngle, CGFloat delta);
void CGPathAddArcToPoint(CGMutablePathRef path, const CGAffineTransform *m, CGFloat x1, CGFloat y1, CGFloat x2, CGFloat y2, CGFloat radius);
void CGPathAddCurveToPoint(CGMutablePathRef path, const CGAffineTransform *m, CGFloat cp1x, CGFloat cp1y, CGFloat cp2x, CGFloat cp2y, CGFloat x, CGFloat y);
void CGPathAddLines(CGMutablePathRef path, const CGAffineTransform *m, const CGPoint *points, size_t count);
void CGPathAddLineToPoint(CGMutablePathRef path, const CGAffineTransform *m, CGFloat x, CGFloat y);
void CGPathAddQuadCurveToPoint(CGMutablePathRef path, const CGAffineTransform *m, CGFloat cpx, CGFloat cpy, CGFloat x, CGFloat y);
void CGPathAddRect(CGMutablePathRef path, const CGAffineTransform *m, CGRect rect);
void CGPathAddRects(CGMutablePathRef path, const CGAffineTransform *m, const CGRect *rects, size_t count);
void CGPathAddRoundedRect(CGMutablePathRef path, const CGAffineTransform *transform, CGRect rect, CGFloat cornerWidth, CGFloat cornerHeight);
void CGPathAddEllipseInRect(CGMutablePathRef path, const CGAffineTransform *m, CGRect rect);
void CGPathApply(CGPathRef path, void *info, CGPathApplierFunction function);
void CGPathApplyWithBlock(CGPathRef path, CGPathApplyBlock block);
void CGPathMoveToPoint(CGMutablePathRef path, const CGAffineTransform *m, CGFloat x, CGFloat y);
void CGPathCloseSubpath(CGMutablePathRef path);
void CGPathRelease(CGPathRef path);
void CGRectDivide(CGRect rect, CGRect *slice, CGRect *remainder, CGFloat amount, CGRectEdge edge);
void CGColorSpaceRelease(CGColorSpaceRef space);
void CGColorRelease(CGColorRef color);
void CGPatternRelease(CGPatternRef pattern);
void CGFontGetGlyphsForUnichars(CGFontRef font, const UniChar chars[], CGGlyph glyphs[], size_t length);
void CGFontRelease(CGFontRef font);

void CGPostError(const char *format, ...);
void CGCFRelease(CFTypeRef cf);
void CGCFDictionaryApplyBlock(CFDictionaryRef theDict, void *context);
void CGCFDictionarySetCString(CFMutableDictionaryRef theDict, const char *cStr);
void CGCFDictionarySetBoolean(CFMutableDictionaryRef theDict, const void *key, bool value);
void CGCFDictionarySetFloat(CFMutableDictionaryRef theDict, const void *key, double value);
void CGCFDictionarySetInteger(CFMutableDictionaryRef theDict, const void *key, int value);
void CGCFDictionarySetNumber(CFMutableDictionaryRef theDict, const void *key, CFNumberType type, const void *valuePtr);
void CGCFDictionarySetCFTypeRef(CFMutableDictionaryRef theDict, const void *key, const void *value);

void *CGBitmapContextGetData(CGContextRef context);