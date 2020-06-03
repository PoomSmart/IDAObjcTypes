#ifndef COREMEDIA_H_
#define COREMEDIA_H_

#import "../BaseTypes.h"
#import "../CoreFoundation/Types.h"
#import "../Kernel/Types.h"

typedef int64_t CMTimeValue;
typedef int64_t CMTimeEpoch;

typedef int32_t CMTimeScale;
typedef uint32_t CMTimeFlags;
typedef uint32_t CMTimeRoundingMethod;
typedef uint32_t CMAudioFormatDescriptionMask;
typedef uint32_t CMAttachmentMode;

typedef double Float64;

typedef long CMItemCount;
typedef long CMItemIndex;

enum CMMediaType : FourCharCode {
    kCMMediaType_Video				= 'vide',
    kCMMediaType_Audio				= 'soun',
    kCMMediaType_Muxed				= 'muxx',
    kCMMediaType_Text				= 'text',
    kCMMediaType_ClosedCaption		= 'clcp',
    kCMMediaType_Subtitle			= 'sbtl',
    kCMMediaType_TimeCode			= 'tmcd',
    kCMMediaType_Metadata			= 'meta'
};

enum CMPixelFormatType : FourCharCode {
    kCMPixelFormat_32ARGB                   = 32,
    kCMPixelFormat_32BGRA                   = 'BGRA',
    kCMPixelFormat_24RGB                    = 24,
    kCMPixelFormat_16BE555                  = 16,
    kCMPixelFormat_16BE565                  = 'B565',
    kCMPixelFormat_16LE555                  = 'L555',
    kCMPixelFormat_16LE565                  = 'L565',
    kCMPixelFormat_16LE5551                 = '5551',
    kCMPixelFormat_422YpCbCr8               = '2vuy',
    kCMPixelFormat_422YpCbCr8_yuvs          = 'yuvs',
    kCMPixelFormat_444YpCbCr8               = 'v308',
    kCMPixelFormat_4444YpCbCrA8             = 'v408',
    kCMPixelFormat_422YpCbCr16              = 'v216',
    kCMPixelFormat_422YpCbCr10              = 'v210',
    kCMPixelFormat_444YpCbCr10              = 'v410',
    kCMPixelFormat_8IndexedGray_WhiteIsZero = 0x00000028
};

enum CMVideoCodecType : FourCharCode {
    kCMVideoCodecType_422YpCbCr8       = kCMPixelFormat_422YpCbCr8,
    kCMVideoCodecType_Animation        = 'rle ',
    kCMVideoCodecType_Cinepak          = 'cvid',
    kCMVideoCodecType_JPEG             = 'jpeg',
    kCMVideoCodecType_JPEG_OpenDML     = 'dmb1',
    kCMVideoCodecType_SorensonVideo    = 'SVQ1',
    kCMVideoCodecType_SorensonVideo3   = 'SVQ3',
    kCMVideoCodecType_H263             = 'h263',
    kCMVideoCodecType_H264             = 'avc1',
    kCMVideoCodecType_HEVC             = 'hvc1',
    kCMVideoCodecType_HEVCWithAlpha    = 'muxa',
    kCMVideoCodecType_MPEG4Video       = 'mp4v',
    kCMVideoCodecType_MPEG2Video       = 'mp2v',
    kCMVideoCodecType_MPEG1Video       = 'mp1v',

    kCMVideoCodecType_DVCNTSC          = 'dvc ',
    kCMVideoCodecType_DVCPAL           = 'dvcp',
    kCMVideoCodecType_DVCProPAL        = 'dvpp',
    kCMVideoCodecType_DVCPro50NTSC     = 'dv5n',
    kCMVideoCodecType_DVCPro50PAL      = 'dv5p',
    kCMVideoCodecType_DVCPROHD720p60   = 'dvhp',
    kCMVideoCodecType_DVCPROHD720p50   = 'dvhq',
    kCMVideoCodecType_DVCPROHD1080i60  = 'dvh6',
    kCMVideoCodecType_DVCPROHD1080i50  = 'dvh5',
    kCMVideoCodecType_DVCPROHD1080p30  = 'dvh3',
    kCMVideoCodecType_DVCPROHD1080p25  = 'dvh2',
    
    kCMVideoCodecType_AppleProRes4444XQ = 'ap4x',
    kCMVideoCodecType_AppleProRes4444  = 'ap4h',
    kCMVideoCodecType_AppleProRes422HQ = 'apch',
    kCMVideoCodecType_AppleProRes422   = 'apcn',
    kCMVideoCodecType_AppleProRes422LT = 'apcs',
    kCMVideoCodecType_AppleProRes422Proxy = 'apco',

    kCMVideoCodecType_AppleProResRAW   = 'aprn',
    kCMVideoCodecType_AppleProResRAWHQ = 'aprh'
};

typedef CFTypeRef CMAttachmentBearerRef;

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
    CMTimeValue value;
    CMTimeScale timescale;
    CMTimeFlags flags;
    CMTimeEpoch epoch;
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

#endif