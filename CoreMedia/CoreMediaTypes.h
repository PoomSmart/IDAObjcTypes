#import "../Types.h"

typedef int64_t CMTimeValue;
typedef int64_t CMTimeEpoch;

typedef int32_t CMTimeScale;
typedef uint32_t CMTimeFlags;
typedef uint32_t CMTimeRoundingMethod;
typedef uint32_t CMAudioFormatDescriptionMask;

typedef double Float64;

typedef long CMItemCount;
typedef long CMItemIndex;

typedef FourCharCode CMMediaType;
typedef FourCharCode CMVideoCodecType;

typedef CFStringRef CMSoundDescriptionFlavor;

typedef struct OpaqueCMBlockBuffer *CMBlockBufferRef;
typedef struct OpaqueCMClock *CMClockRef;
typedef struct opaqueCMSampleBuffer *CMSampleBufferRef;
typedef struct opaqueCMFormatDescription *CMFormatDescriptionRef;
typedef struct opaqueCMNotificationCenter *CMNotificationCenterRef;

typedef CMFormatDescriptionRef CMVideoFormatDescriptionRef;
typedef CMFormatDescriptionRef CMAudioFormatDescriptionRef;

typedef OSStatus (*CMSampleBufferMakeDataReadyCallback)(CMSampleBufferRef sbuf, void *makeDataReadyRefcon);
typedef void (*CMSampleBufferInvalidateHandler)(CMSampleBufferRef sbuf);
typedef void (*CMSampleBufferInvalidateCallback)(CMSampleBufferRef sbuf, uint64_t invalidateRefCon);
typedef void (*CMNotificationCallback)(CMNotificationCenterRef inCenter, const void *inListener, CFStringRef inNotificationName, const void *inNotifyingObject, CFTypeRef inNotificationPayload);

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
    CMTime duration;
    CMTime start;
} CMTimeRange;

typedef struct CMSampleTimingInfo {
  CMTime duration;
  CMTime presentationTimeStamp;
  CMTime decodeTimeStamp;
} CMSampleTimingInfo;

CMTime kCMTimeZero;