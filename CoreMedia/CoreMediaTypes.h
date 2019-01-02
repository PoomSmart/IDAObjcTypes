typedef int64_t CMTimeValue;
typedef int32_t CMTimeScale;
typedef int64_t CMTimeEpoch;
typedef uint32_t CMTimeFlags;
typedef uint32_t CMTimeRoundingMethod;
typedef double Float64;

struct CMTime {
	CMTimeValue	value;
	CMTimeScale	timescale;
	CMTimeFlags	flags;
	CMTimeEpoch	epoch;
};

struct CMTimeRange {
    struct CMTime duration;
    struct CMTime start;
};