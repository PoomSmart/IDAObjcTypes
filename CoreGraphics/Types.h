#ifndef COREGRAPHICS_H_
#define COREGRAPHICS_H_

#import "../BaseTypes.h"
#import "../CoreFoundation/Types.h"

#ifdef __EA64__
typedef double CGFloat;
#else
typedef float CGFloat;
#endif

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct CGContext *CGContextRef;
typedef struct CGImage *CGImageRef;
typedef struct CGColorSpace *CGColorSpaceRef;
typedef struct CGColor *CGColorRef;
typedef struct CGGradient *CGGradientRef;
typedef struct CGDataProvider *CGDataProviderRef;
typedef const struct CGPath *CGPathRef;
typedef struct CGPath *CGMutablePathRef;
typedef struct CGPattern *CGPatternRef;
typedef struct CGFont *CGFontRef;
typedef const struct CGColorTransform *CGColorTransformRef;
typedef struct CGImageDestination *CGImageDestinationRef;
typedef struct CGImageSource *CGImageSourceRef;
typedef struct CGImageMetadata *CGImageMetadataRef;
typedef struct CGImageMetadata *CGMutableImageMetadataRef;
typedef struct CGImageMetadataTag *CGImageMetadataTagRef;
typedef struct CGShading *CGShadingRef;
typedef struct CGPDFAnnotation *CGPDFAnnotationRef;
typedef struct CGPDFPage *CGPDFPageRef;
typedef struct CGPDFDocument *CGPDFDocumentRef;
typedef struct CGImageProvider *CGImageProviderRef;

typedef struct CGSRegionEnumeratorObject *CGSRegionEnumeratorObj;
typedef struct CGSRegionObject *CGSRegionObj;
typedef struct CGSRegionObject *CGRegionRef;

typedef uint32_t CGRectEdge;

typedef uint32_t CGSByteCount;
typedef uint32_t CGSConnectionID;
typedef uint32_t CGSWindowCount;
typedef uint32_t CGSWindowID;

typedef unsigned short CGFontIndex;

typedef CGFontIndex CGGlyph;

typedef CFTypeRef CGSRegionRef;
typedef CFTypeRef CGSRegionEnumeratorRef;

PS_ENUM(uint32_t, CGImageCachingFlags) {
    kCGImageCachingTransient = 1,
    kCGImageCachingTemporary = 3,
};

PS_ENUM(int32_t, CGError) {
    kCGErrorSuccess = 0,
    kCGErrorFailure = 1000,
    kCGErrorIllegalArgument = 1001,
    kCGErrorInvalidConnection = 1002,
    kCGErrorInvalidContext = 1003,
    kCGErrorCannotComplete = 1004,
    kCGErrorNotImplemented = 1006,
    kCGErrorRangeCheck = 1007,
    kCGErrorTypeCheck = 1008,
    kCGErrorInvalidOperation = 1010,
    kCGErrorNoneAvailable = 1011
};

typedef enum CGCompositeOperation {
    kCGCompositeCopy = 1,
    kCGCompositeSover = 2,
} CGCompositeOperation;

PS_ENUM(int32_t, CGImageMetadataType) {
    kCGImageMetadataTypeInvalid = -1,
    kCGImageMetadataTypeDefault = 0,
    kCGImageMetadataTypeString = 1,
    kCGImageMetadataTypeArrayUnordered = 2,
    kCGImageMetadataTypeArrayOrdered = 3,
    kCGImageMetadataTypeAlternateArray = 4,
    kCGImageMetadataTypeAlternateText = 5,
    kCGImageMetadataTypeStructure = 6
};

PS_ENUM(int32_t, CGBlendMode) {
    kCGBlendModeNormal,
    kCGBlendModeMultiply,
    kCGBlendModeScreen,
    kCGBlendModeOverlay,
    kCGBlendModeDarken,
    kCGBlendModeLighten,
    kCGBlendModeColorDodge,
    kCGBlendModeColorBurn,
    kCGBlendModeSoftLight,
    kCGBlendModeHardLight,
    kCGBlendModeDifference,
    kCGBlendModeExclusion,
    kCGBlendModeHue,
    kCGBlendModeSaturation,
    kCGBlendModeColor,
    kCGBlendModeLuminosity,
    kCGBlendModeClear,
    kCGBlendModeCopy,
    kCGBlendModeSourceIn,
    kCGBlendModeSourceOut,
    kCGBlendModeSourceAtop,
    kCGBlendModeDestinationOver,
    kCGBlendModeDestinationIn,
    kCGBlendModeDestinationOut,
    kCGBlendModeDestinationAtop,
    kCGBlendModeXOR,
    kCGBlendModePlusDarker,
    kCGBlendModePlusLighter
};

PS_ENUM(int32_t, CGInterpolationQuality) {
    kCGInterpolationDefault = 0,
    kCGInterpolationNone = 1,
    kCGInterpolationLow = 2,
    kCGInterpolationMedium = 4,
    kCGInterpolationHigh = 3
};

PS_ENUM(int32_t, CGPathDrawingMode) {
    kCGPathFill,
    kCGPathEOFill,
    kCGPathStroke,
    kCGPathFillStroke,
    kCGPathEOFillStroke
};

PS_ENUM(int32_t, CGTextDrawingMode) {
    kCGTextFill,
    kCGTextStroke,
    kCGTextFillStroke,
    kCGTextInvisible,
    kCGTextFillClip,
    kCGTextStrokeClip,
    kCGTextFillStrokeClip,
    kCGTextClip
};

PS_ENUM(int32_t, CGPatternTiling) {
    kCGPatternTilingNoDistortion,
    kCGPatternTilingConstantSpacingMinimalDistortion,
    kCGPatternTilingConstantSpacing
};

PS_ENUM(uint32_t, CGImageAlphaInfo) {
    kCGImageAlphaNone,
    kCGImageAlphaPremultipliedLast,
    kCGImageAlphaPremultipliedFirst,
    kCGImageAlphaLast,
    kCGImageAlphaFirst,
    kCGImageAlphaNoneSkipLast,
    kCGImageAlphaNoneSkipFirst,
    kCGImageAlphaOnly
};

PS_ENUM(uint32_t, CGGradientDrawingOptions) {
    kCGGradientDrawsBeforeStartLocation = (1 << 0),
    kCGGradientDrawsAfterEndLocation = (1 << 1)
};

PS_ENUM(int32_t, CGColorRenderingIntent) {
    kCGRenderingIntentDefault,
    kCGRenderingIntentAbsoluteColorimetric,
    kCGRenderingIntentRelativeColorimetric,
    kCGRenderingIntentPerceptual,
    kCGRenderingIntentSaturation
};

PS_ENUM(int32_t, CGColorSpaceModel) {
    kCGColorSpaceModelUnknown = -1,
    kCGColorSpaceModelMonochrome,
    kCGColorSpaceModelRGB,
    kCGColorSpaceModelCMYK,
    kCGColorSpaceModelLab,
    kCGColorSpaceModelDeviceN,
    kCGColorSpaceModelIndexed,
    kCGColorSpaceModelPattern,
    kCGColorSpaceModelXYZ
};

PS_ENUM(int32_t, CGLineCap) { kCGLineCapButt, kCGLineCapRound, kCGLineCapSquare };

PS_ENUM(int32_t, CGLineJoin) { kCGLineJoinMiter, kCGLineJoinRound, kCGLineJoinBevel };

PS_ENUM(int32_t, CGPathElementType) {
    kCGPathElementMoveToPoint,
    kCGPathElementAddLineToPoint,
    kCGPathElementAddQuadCurveToPoint,
    kCGPathElementAddCurveToPoint,
    kCGPathElementCloseSubpath
};

PS_ENUM(uint32_t, CGImageByteOrderInfo) {
    kCGImageByteOrderMask = 0x7000,
    kCGImageByteOrderDefault = (0 << 12),
    kCGImageByteOrder16Little = (1 << 12),
    kCGImageByteOrder32Little = (2 << 12),
    kCGImageByteOrder16Big = (3 << 12),
    kCGImageByteOrder32Big = (4 << 12)
};

PS_ENUM(uint32_t, CGImagePixelFormatInfo) {
    kCGImagePixelFormatMask = 0xF0000,
    kCGImagePixelFormatPacked = (0 << 16),
    kCGImagePixelFormatRGB555 = (1 << 16),
    kCGImagePixelFormatRGB565 = (2 << 16),
    kCGImagePixelFormatRGB101010 = (3 << 16),
    kCGImagePixelFormatRGBCIF10 = (4 << 16),
};

PS_ENUM(uint32_t, CGBitmapInfo) {
    kCGBitmapAlphaInfoMask = 0x1F,
    kCGBitmapFloatInfoMask = 0xF00,
    kCGBitmapFloatComponents = (1 << 8),
    kCGBitmapByteOrderMask = kCGImageByteOrderMask,
    kCGBitmapByteOrderDefault = kCGImageByteOrderDefault,
    kCGBitmapByteOrder16Little = kCGImageByteOrder16Little,
    kCGBitmapByteOrder32Little = kCGImageByteOrder32Little,
    kCGBitmapByteOrder16Big = kCGImageByteOrder16Big,
    kCGBitmapByteOrder32Big = kCGImageByteOrder32Big
};

PS_ENUM(uint32_t, CGFontAntialiasingStyle) {
    kCGFontAntialiasingStyleUnfiltered = 0 << 7,
    kCGFontAntialiasingStyleFilterLight = 1 << 7,
    kCGFontAntialiasingStyleUnfilteredCustomDilation = (8 << 7),
};

typedef enum CGContextType {
    kCGContextTypeUnknown,
    kCGContextTypePDF,
    kCGContextTypePostScript,
    kCGContextTypeWindow,
    kCGContextTypeBitmap,
    kCGContextTypeGL,
    kCGContextTypeDisplayList,
    kCGContextTypeKSeparation,
    kCGContextTypeIOSurface,
    kCGContextTypeCount
} CGContextType;

PS_ENUM(uint32_t, CGFontRenderingStyle) {
    kCGFontRenderingStyleAntialiasing = 1 << 0,
    kCGFontRenderingStyleSmoothing = 1 << 1,
    kCGFontRenderingStyleSubpixelPositioning = 1 << 2,
    kCGFontRenderingStyleSubpixelQuantization = 1 << 3,
    kCGFontRenderingStylePlatformNative = 1 << 9,
    kCGFontRenderingStyleMask = 0x20F,
};

typedef struct CGPathElement {
    CGPathElementType type;
    CGPoint *points;
} CGPathElement;

typedef void (*CGPathApplyBlock)(const CGPathElement *element);
typedef void (*CGPathApplierFunction)(void *info, const CGPathElement *element);
typedef void (*CGPatternDrawPatternCallback)(void *info, CGContextRef context);
typedef void (*CGPatternReleaseInfoCallback)(void *info);

typedef bool (*CGPDFAnnotationDrawCallbackType)(CGContextRef context, CGPDFPageRef page, CGPDFAnnotationRef annotation);

typedef struct CGPatternCallbacks {
    unsigned int version;
    CGPatternDrawPatternCallback drawPattern;
    CGPatternReleaseInfoCallback releaseInfo;
} CGPatternCallbacks;

const CGAffineTransform CGAffineTransformIdentity;

const CGRect CGRectZero;
const CGRect CGRectNull;
const CGSize CGSizeZero;
const CGPoint CGPointZero;

#endif