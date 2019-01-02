#import "../Types.h"
#import "CoreMediaTypes.h"

struct CMTime CMTimeMake(int64_t value, int32_t timescale);
struct CMTime CMTimeMakeWithSeconds(Float64 seconds, int32_t preferredTimescale);
struct CMTime CMTimeMakeFromDictionary(CFDictionaryRef dictionaryRepresentation);
struct CMTime CMTimeMakeWithEpoch(int64_t value, int32_t timescale, int64_t epoch);
struct CMTime CMTimeMaximum(struct CMTime time1, struct CMTime time2);
struct CMTime CMTimeMinimum(struct CMTime time1, struct CMTime time2);
struct CMTime CMTimeAbsoluteValue(struct CMTime time);
struct CMTime CMTimeAdd(struct CMTime lhs, struct CMTime rhs);
struct CMTime CMTimeSubtract(struct CMTime lhs, struct CMTime rhs);
struct CMTime CMTimeMultiply(struct CMTime time, int32_t multiplier);
struct CMTime CMTimeMultiplyByRatio(struct CMTime time, int32_t multiplier, int32_t divisor);
struct CMTime CMTimeMultiplyByFloat64(struct CMTime time, Float64 multiplier);
struct CMTime CMTimeConvertScale(struct CMTime time, int32_t newTimescale, CMTimeRoundingMethod method);

struct CMTimeRange CMTimeRangeMake(struct CMTime start, struct CMTime duration);

Float64 CMTimeGetSeconds(struct CMTime time);

int32_t CMTimeCompare(struct CMTime time1, struct CMTime time2);

CFStringRef CMTimeCopyDescription(CFAllocatorRef allocator, struct CMTime time);

CFDictionaryRef CMTimeCopyAsDictionary(struct CMTime time, CFAllocatorRef allocator);