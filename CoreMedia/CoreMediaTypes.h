#import "../Types.h"

typedef int64_t CMTimeValue;
typedef int32_t CMTimeScale;
typedef int64_t CMTimeEpoch;
typedef uint32_t CMTimeFlags;
typedef uint32_t CMTimeRoundingMethod;
typedef double Float64;
typedef FourCharCode CMMediaType;

typedef struct OpaqueCMClock *CMClockRef;
typedef struct opaqueCMFormatDescription *CMFormatDescriptionRef;

typedef CMFormatDescriptionRef CMVideoFormatDescriptionRef;

typedef struct CMVideoDimensions {
    int32_t width;
    int32_t height;
} CMVideoDimensions;

typedef struct CMTime {
	CMTimeValue	value;
	CMTimeScale	timescale;
	CMTimeFlags	flags;
	CMTimeEpoch	epoch;
} CMTime;

typedef struct CMTimeRange {
    struct CMTime duration;
    struct CMTime start;
} CMTimeRange;

struct CMTime kCMTimeZero;