typedef double CGFloat;

struct CGPoint {
    CGFloat x;
    CGFloat y;
};

struct CGSize {
    CGFloat width;
    CGFloat height;
};

struct CGRect {
    CGPoint origin;
    CGSize size;
};

struct CGAffineTransform {
   CGFloat a;
   CGFloat b;
   CGFloat c;
   CGFloat d;
   CGFloat tx;
   CGFloat ty;
};

typedef struct CGContext *CGContextRef;
typedef struct CGImage *CGImageRef;
typedef struct CGColorSpace *CGColorSpaceRef;
typedef struct CGColor *CGColorRef;
typedef struct CGGradient *CGGradientRef;
typedef struct CGDataProvider *CGDataProviderRef;
typedef const struct CGPath *CGPathRef;
typedef struct CGPath *CGMutablePathRef;

typedef int32_t CGPathDrawingMode;
typedef uint32_t CGImageAlphaInfo;
typedef uint32_t CGBitmapInfo;
typedef int32_t CGColorRenderingIntent;
typedef int32_t CGPathElementType;
typedef int32_t CGLineCap;
typedef int32_t CGLineJoin;
typedef uint32_t CGGradientDrawingOptions;
typedef unsigned short CGFontIndex;
typedef uint32_t CTFontOrientation;

typedef CGFontIndex CGGlyph;

struct CGPathElement {
    CGPathElementType type;
    struct CGPoint *points;
};

typedef void (*CGPathApplierFunction)(void *info, const CGPathElement *element);