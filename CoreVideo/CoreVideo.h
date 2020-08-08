#import "../BaseTypes.h"
#import "../Kernel/Types.h"
#import "../CoreGraphics/Types.h"
#import "../CoreFoundation/Types.h"
#import "../IOSurface/Types.h"
#import "Types.h"

Boolean CVImageBufferIsFlipped(CVImageBufferRef imageBuffer);
Boolean CVPixelBufferIsPlanar(CVPixelBufferRef pixelBuffer);

CFDictionaryRef CVBufferGetAttachments(CVBufferRef buffer, CVAttachmentMode attachmentMode);
CFDictionaryRef CVPixelBufferPoolGetPixelBufferAttributes(CVPixelBufferPoolRef pool);

CFTypeID CVPixelBufferGetTypeID(void);

CFTypeRef CVBufferGetAttachment(CVBufferRef buffer, CFStringRef key, CVAttachmentMode *attachmentMode);

CGColorSpaceRef CVImageBufferCreateColorSpaceFromAttachments(CFDictionaryRef attachments);

CGRect CVImageBufferGetCleanRect(CVImageBufferRef imageBuffer);

CGSize CVImageBufferGetDisplaySize(CVImageBufferRef imageBuffer);
CGSize CVImageBufferGetEncodedSize(CVImageBufferRef imageBuffer);

CVPixelBufferRef CVPixelBufferRetain(CVPixelBufferRef texture);

CVPixelBufferPoolRef CVPixelBufferPoolRetain(CVPixelBufferPoolRef pixelBufferPool);

CVReturn CVPixelBufferCreate(CFAllocatorRef allocator, size_t width, size_t height, OSType pixelFormatType, CFDictionaryRef pixelBufferAttributes, CVPixelBufferRef *pixelBufferOut);
CVReturn CVPixelBufferCreateResolvedAttributesDictionary(CFAllocatorRef allocator, CFArrayRef attributes, CFDictionaryRef *resolvedDictionaryOut);
CVReturn CVPixelBufferCreateWithBytes(CFAllocatorRef allocator, size_t width, size_t height, OSType pixelFormatType, void *baseAddress, size_t bytesPerRow, CVPixelBufferReleaseBytesCallback releaseCallback, void *releaseRefCon, CFDictionaryRef pixelBufferAttributes, CVPixelBufferRef *pixelBufferOut);
CVReturn CVPixelBufferLockBaseAddress(CVPixelBufferRef pixelBuffer, CVPixelBufferLockFlags lockFlags);
CVReturn CVPixelBufferPoolCreate(CFAllocatorRef allocator, CFDictionaryRef poolAttributes, CFDictionaryRef pixelBufferAttributes, CVPixelBufferPoolRef *poolOut);
CVReturn CVPixelBufferPoolCreatePixelBuffer(CFAllocatorRef allocator, CVPixelBufferPoolRef pixelBufferPool, CVPixelBufferRef *pixelBufferOut);
CVReturn CVPixelBufferPoolCreatePixelBufferWithAuxAttributes(CFAllocatorRef allocator, CVPixelBufferPoolRef pixelBufferPool, CFDictionaryRef auxAttributes, CVPixelBufferRef *pixelBufferOut);
CVReturn CVPixelBufferUnlockBaseAddress(CVPixelBufferRef pixelBuffer, CVPixelBufferLockFlags unlockFlags);

IOSurfaceRef CVPixelBufferGetIOSurface(CVPixelBufferRef pixelBuffer);

OSType CVPixelBufferGetPixelFormatType(CVPixelBufferRef pixelBuffer);

size_t CVPixelBufferGetBytesPerRow(CVPixelBufferRef pixelBuffer);
size_t CVPixelBufferGetBytesPerRowOfPlane(CVPixelBufferRef pixelBuffer, size_t planeIndex);
size_t CVPixelBufferGetDataSize(CVPixelBufferRef pixelBuffer);
size_t CVPixelBufferGetHeight(CVPixelBufferRef pixelBuffer);
size_t CVPixelBufferGetHeightOfPlane(CVPixelBufferRef pixelBuffer, size_t planeIndex);
size_t CVPixelBufferGetPlaneCount(CVPixelBufferRef pixelBuffer);
size_t CVPixelBufferGetWidth(CVPixelBufferRef pixelBuffer);
size_t CVPixelBufferGetWidthOfPlane(CVPixelBufferRef pixelBuffer, size_t planeIndex);

void *CVPixelBufferGetBaseAddress(CVPixelBufferRef pixelBuffer);
void *CVPixelBufferGetBaseAddressOfPlane(CVPixelBufferRef pixelBuffer, size_t planeIndex);

void CVPixelBufferGetExtendedPixels(CVPixelBufferRef pixelBuffer, size_t *extraColumnsOnLeft, size_t *extraColumnsOnRight, size_t *extraRowsOnTop, size_t *extraRowsOnBottom);
void CVPixelBufferPoolFlush(CVPixelBufferPoolRef pool, CVPixelBufferPoolFlushFlags options);
void CVPixelBufferPoolRelease(CVPixelBufferPoolRef pixelBufferPool);
void CVPixelBufferRelease(CVPixelBufferRef texture);
