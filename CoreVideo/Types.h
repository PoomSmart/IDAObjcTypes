#ifndef COREVIDEO_H_
#define COREVIDEO_H_

#import "../BaseTypes.h"

typedef struct __CVBuffer *CVBufferRef;
typedef struct __CVPixelBufferPool *CVPixelBufferPoolRef;

typedef CVBufferRef CVImageBufferRef;
typedef CVImageBufferRef CVPixelBufferRef;

typedef uint64_t CVOptionFlags;

typedef int32_t CVReturn;

PS_ENUM(uint32_t, CVAttachmentMode) {
    kCVAttachmentMode_ShouldNotPropagate    = 0,
    kCVAttachmentMode_ShouldPropagate       = 1
};

PS_ENUM(CVOptionFlags, CVPixelBufferLockFlags) {
    kCVPixelBufferLock_ReadOnly = 0x00000001,
};

PS_ENUM(CVOptionFlags, CVPixelBufferPoolFlushFlags) {
    kCVPixelBufferPoolFlushExcessBuffers = 1,
};

typedef void (*CVPixelBufferReleaseBytesCallback)(void *releaseRefCon, const void *baseAddress);

#endif