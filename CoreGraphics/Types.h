#ifndef COREGRAPHICS_H_
#define COREGRAPHICS_H_

#import "../Types.h"

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

typedef uint32_t CGRectEdge;

typedef unsigned short CGFontIndex;

typedef CGFontIndex CGGlyph;

typedef enum CGCompositeOperation {
    kCGCompositeCopy = 1,
    kCGCompositeSover = 2,
} CGCompositeOperation;

typedef int32_t CGBlendMode; enum CGBlendMode {
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
} CGBlendMode;

typedef int32_t CGInterpolationQuality; enum CGInterpolationQuality {
  kCGInterpolationDefault = 0,
  kCGInterpolationNone = 1,
  kCGInterpolationLow = 2,
  kCGInterpolationMedium = 4,
  kCGInterpolationHigh = 3
} CGInterpolationQuality;

typedef int32_t CGPathDrawingMode; enum CGPathDrawingMode {
  kCGPathFill,
  kCGPathEOFill,
  kCGPathStroke,
  kCGPathFillStroke,
  kCGPathEOFillStroke
} CGPathDrawingMode;

typedef int32_t CGTextDrawingMode; enum CGTextDrawingMode {
  kCGTextFill,
  kCGTextStroke,
  kCGTextFillStroke,
  kCGTextInvisible,
  kCGTextFillClip,
  kCGTextStrokeClip,
  kCGTextFillStrokeClip,
  kCGTextClip
} CGTextDrawingMode;

typedef int32_t CGPatternTiling; enum CGPatternTiling {
    kCGPatternTilingNoDistortion,
    kCGPatternTilingConstantSpacingMinimalDistortion,
    kCGPatternTilingConstantSpacing
} CGPatternTiling;

typedef uint32_t CGImageAlphaInfo; enum CGImageAlphaInfo {
    kCGImageAlphaNone,
    kCGImageAlphaPremultipliedLast,
    kCGImageAlphaPremultipliedFirst,
    kCGImageAlphaLast,
    kCGImageAlphaFirst,
    kCGImageAlphaNoneSkipLast,
    kCGImageAlphaNoneSkipFirst,
    kCGImageAlphaOnly
} CGImageAlphaInfo;

typedef uint32_t CGGradientDrawingOptions; enum CGGradientDrawingOptions {
  kCGGradientDrawsBeforeStartLocation = (1 << 0),
  kCGGradientDrawsAfterEndLocation = (1 << 1)
} CGGradientDrawingOptions;

typedef int32_t CGColorRenderingIntent; enum CGColorRenderingIntent {
    kCGRenderingIntentDefault,
    kCGRenderingIntentAbsoluteColorimetric,
    kCGRenderingIntentRelativeColorimetric,
    kCGRenderingIntentPerceptual,
    kCGRenderingIntentSaturation
} CGColorRenderingIntent;

typedef int32_t CGColorSpaceModel; enum CGColorSpaceModel {
    kCGColorSpaceModelUnknown = -1,
    kCGColorSpaceModelMonochrome,
    kCGColorSpaceModelRGB,
    kCGColorSpaceModelCMYK,
    kCGColorSpaceModelLab,
    kCGColorSpaceModelDeviceN,
    kCGColorSpaceModelIndexed,
    kCGColorSpaceModelPattern,
    kCGColorSpaceModelXYZ
} CGColorSpaceModel;

typedef int32_t CGLineCap; enum CGLineCap {
    kCGLineCapButt,
    kCGLineCapRound,
    kCGLineCapSquare
} CGLineCap;

typedef int32_t CGLineJoin; enum CGLineJoin {
    kCGLineJoinMiter,
    kCGLineJoinRound,
    kCGLineJoinBevel
} CGLineJoin;

typedef int32_t CGPathElementType; enum CGPathElementType {
  kCGPathElementMoveToPoint,
  kCGPathElementAddLineToPoint,
  kCGPathElementAddQuadCurveToPoint,
  kCGPathElementAddCurveToPoint,
  kCGPathElementCloseSubpath
} CGPathElementType;

typedef uint32_t CGImageByteOrderInfo; enum CGImageByteOrderInfo {
    kCGImageByteOrderMask     = 0x7000,
    kCGImageByteOrderDefault  = (0 << 12),
    kCGImageByteOrder16Little = (1 << 12),
    kCGImageByteOrder32Little = (2 << 12),
    kCGImageByteOrder16Big    = (3 << 12),
    kCGImageByteOrder32Big    = (4 << 12)
} CGImageByteOrderInfo;

typedef uint32_t CGImagePixelFormatInfo; enum CGImagePixelFormatInfo {
    kCGImagePixelFormatMask      = 0xF0000,
    kCGImagePixelFormatPacked    = (0 << 16),
    kCGImagePixelFormatRGB555    = (1 << 16),
    kCGImagePixelFormatRGB565    = (2 << 16),
    kCGImagePixelFormatRGB101010 = (3 << 16),
    kCGImagePixelFormatRGBCIF10  = (4 << 16),
} CGImagePixelFormatInfo;

typedef uint32_t CGBitmapInfo; enum CGBitmapInfo {
    kCGBitmapAlphaInfoMask = 0x1F,
    kCGBitmapFloatInfoMask = 0xF00,
    kCGBitmapFloatComponents = (1 << 8),
    kCGBitmapByteOrderMask     = kCGImageByteOrderMask,
    kCGBitmapByteOrderDefault  = kCGImageByteOrderDefault,
    kCGBitmapByteOrder16Little = kCGImageByteOrder16Little,
    kCGBitmapByteOrder32Little = kCGImageByteOrder32Little,
    kCGBitmapByteOrder16Big    = kCGImageByteOrder16Big,
    kCGBitmapByteOrder32Big    = kCGImageByteOrder32Big
} CGBitmapInfo;

typedef uint32_t CGFontAntialiasingStyle; enum CGFontAntialiasingStyle {
    kCGFontAntialiasingStyleUnfiltered = 0 << 7,
    kCGFontAntialiasingStyleFilterLight = 1 << 7,
    kCGFontAntialiasingStyleUnfilteredCustomDilation = (8 << 7),
} CGFontAntialiasingStyle;

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

typedef uint32_t CGFontRenderingStyle; enum CGFontRenderingStyle {
    kCGFontRenderingStyleAntialiasing = 1 << 0,
    kCGFontRenderingStyleSmoothing = 1 << 1,
    kCGFontRenderingStyleSubpixelPositioning = 1 << 2,
    kCGFontRenderingStyleSubpixelQuantization = 1 << 3,
    kCGFontRenderingStylePlatformNative = 1 << 9,
    kCGFontRenderingStyleMask = 0x20F,
} CGFontRenderingStyle;

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