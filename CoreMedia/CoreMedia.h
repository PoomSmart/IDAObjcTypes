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
struct CMTime CMClockGetTime(CMClockRef clock);
struct CMTime CMClockMakeHostTimeFromSystemUnits(uint64_t hostTime);

struct CMTimeRange CMTimeRangeMake(struct CMTime start, struct CMTime duration);

Boolean CMFormatDescriptionEqual(CMFormatDescriptionRef formatDescription, CMFormatDescriptionRef otherFormatDescription);
Boolean CMFormatDescriptionEqualIgnoringExtensionKeys(CMFormatDescriptionRef formatDescription, CMFormatDescriptionRef otherFormatDescription, CFTypeRef formatDescriptionExtensionKeysToIgnore, CFTypeRef sampleDescriptionExtensionAtomKeysToIgnore);

FourCharCode CMFormatDescriptionGetMediaSubType(CMFormatDescriptionRef desc);

Float64 CMTimeGetSeconds(struct CMTime time);

int32_t CMTimeCompare(struct CMTime time1, struct CMTime time2);

uint64_t CMClockConvertHostTimeToSystemUnits(struct CMTime hostTime);

CMMediaType CMFormatDescriptionGetMediaType(CMFormatDescriptionRef desc);

CFTypeID CMFormatDescriptionGetTypeID(void);

CMClockRef CMClockGetHostTimeClock(void);

CFStringRef CMTimeCopyDescription(CFAllocatorRef allocator, struct CMTime time);

CFDictionaryRef CMTimeCopyAsDictionary(struct CMTime time, CFAllocatorRef allocator);

CFPropertyListRef CMFormatDescriptionGetExtension(CMFormatDescriptionRef desc, CFStringRef extensionKey);
CFDictionaryRef CMFormatDescriptionGetExtensions(CMFormatDescriptionRef desc);

CMVideoDimensions CMVideoFormatDescriptionGetDimensions(CMVideoFormatDescriptionRef videoDesc);

OSStatus CMVideoFormatDescriptionCreateForImageBuffer(CFAllocatorRef allocator, CVImageBufferRef imageBuffer, CMVideoFormatDescriptionRef *formatDescriptionOut);
OSStatus CMClockGetAnchorTime(CMClockRef clock, struct CMTime *clockTimeOut, struct CMTime *referenceClockTimeOut);
OSStatus CMFormatDescriptionCreate(CFAllocatorRef allocator, CMMediaType mediaType, FourCharCode mediaSubType, CFDictionaryRef extensions, CMFormatDescriptionRef *formatDescriptionOut);