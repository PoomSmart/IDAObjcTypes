#ifndef COREGRAPHICS_H_
#define COREGRAPHICS_H_

#import "../BaseTypes.h"

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

typedef uint32_t CGRectEdge;

typedef unsigned short CGFontIndex;

typedef CGFontIndex CGGlyph;

typedef enum CGCompositeOperation {
    kCGCompositeCopy = 1,
    kCGCompositeSover = 2,
} CGCompositeOperation;

enum CGImageMetadataType : int32_t {
    kCGImageMetadataTypeInvalid = -1,
    kCGImageMetadataTypeDefault = 0,
    kCGImageMetadataTypeString = 1,
    kCGImageMetadataTypeArrayUnordered = 2,
    kCGImageMetadataTypeArrayOrdered = 3,
    kCGImageMetadataTypeAlternateArray = 4,
    kCGImageMetadataTypeAlternateText = 5,
    kCGImageMetadataTypeStructure = 6
};

enum CGBlendMode : int32_t {
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

enum CGInterpolationQuality : int32_t {
    kCGInterpolationDefault = 0,
    kCGInterpolationNone = 1,
    kCGInterpolationLow = 2,
    kCGInterpolationMedium = 4,
    kCGInterpolationHigh = 3
};

enum CGPathDrawingMode : int32_t {
    kCGPathFill,
    kCGPathEOFill,
    kCGPathStroke,
    kCGPathFillStroke,
    kCGPathEOFillStroke
};

enum CGTextDrawingMode : int32_t {
    kCGTextFill,
    kCGTextStroke,
    kCGTextFillStroke,
    kCGTextInvisible,
    kCGTextFillClip,
    kCGTextStrokeClip,
    kCGTextFillStrokeClip,
    kCGTextClip
};

enum CGPatternTiling : int32_t {
    kCGPatternTilingNoDistortion,
    kCGPatternTilingConstantSpacingMinimalDistortion,
    kCGPatternTilingConstantSpacing
};

enum CGImageAlphaInfo : uint32_t {
    kCGImageAlphaNone,
    kCGImageAlphaPremultipliedLast,
    kCGImageAlphaPremultipliedFirst,
    kCGImageAlphaLast,
    kCGImageAlphaFirst,
    kCGImageAlphaNoneSkipLast,
    kCGImageAlphaNoneSkipFirst,
    kCGImageAlphaOnly
};

enum CGGradientDrawingOptions : uint32_t {
    kCGGradientDrawsBeforeStartLocation = (1 << 0),
    kCGGradientDrawsAfterEndLocation = (1 << 1)
};

enum CGColorRenderingIntent : int32_t {
    kCGRenderingIntentDefault,
    kCGRenderingIntentAbsoluteColorimetric,
    kCGRenderingIntentRelativeColorimetric,
    kCGRenderingIntentPerceptual,
    kCGRenderingIntentSaturation
};

enum CGColorSpaceModel : int32_t {
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

enum CGLineCap : int32_t { kCGLineCapButt, kCGLineCapRound, kCGLineCapSquare };

enum CGLineJoin : int32_t { kCGLineJoinMiter, kCGLineJoinRound, kCGLineJoinBevel };

enum CGPathElementType : int32_t {
    kCGPathElementMoveToPoint,
    kCGPathElementAddLineToPoint,
    kCGPathElementAddQuadCurveToPoint,
    kCGPathElementAddCurveToPoint,
    kCGPathElementCloseSubpath
};

enum CGImageByteOrderInfo : uint32_t {
    kCGImageByteOrderMask = 0x7000,
    kCGImageByteOrderDefault = (0 << 12),
    kCGImageByteOrder16Little = (1 << 12),
    kCGImageByteOrder32Little = (2 << 12),
    kCGImageByteOrder16Big = (3 << 12),
    kCGImageByteOrder32Big = (4 << 12)
};

enum CGImagePixelFormatInfo : uint32_t {
    kCGImagePixelFormatMask = 0xF0000,
    kCGImagePixelFormatPacked = (0 << 16),
    kCGImagePixelFormatRGB555 = (1 << 16),
    kCGImagePixelFormatRGB565 = (2 << 16),
    kCGImagePixelFormatRGB101010 = (3 << 16),
    kCGImagePixelFormatRGBCIF10 = (4 << 16),
};

enum CGBitmapInfo : uint32_t {
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

enum CGFontAntialiasingStyle : uint32_t {
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

enum CGFontRenderingStyle : uint32_t {
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

typedef struct CGPatternCallbacks {
    unsigned int version;
    CGPatternDrawPatternCallback drawPattern;
    CGPatternReleaseInfoCallback releaseInfo;
} CGPatternCallbacks;

CGAffineTransform CGAffineTransformIdentity;

CGRect CGRectZero;
CGRect CGRectNull;
CGSize CGSizeZero;
CGPoint CGPointZero;

#endif