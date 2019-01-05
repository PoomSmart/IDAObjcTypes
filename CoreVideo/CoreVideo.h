#import "../Types.h"
#import "../CoreFoundation/Types.h"
#import "../IOSurface/Types.h"
#import "Types.h"

void *CVPixelBufferGetBaseAddress(CVPixelBufferRef pixelBuffer);
void *CVPixelBufferGetBaseAddressOfPlane(CVPixelBufferRef pixelBuffer, size_t planeIndex);

size_t CVPixelBufferGetWidth(CVPixelBufferRef pixelBuffer);
size_t CVPixelBufferGetWidthOfPlane(CVPixelBufferRef pixelBuffer, size_t planeIndex);
size_t CVPixelBufferGetHeight(CVPixelBufferRef pixelBuffer);
size_t CVPixelBufferGetHeightOfPlane(CVPixelBufferRef pixelBuffer, size_t planeIndex);
size_t CVPixelBufferGetBytesPerRow(CVPixelBufferRef pixelBuffer);
size_t CVPixelBufferGetBytesPerRowOfPlane(CVPixelBufferRef pixelBuffer, size_t planeIndex);
size_t CVPixelBufferGetPlaneCount(CVPixelBufferRef pixelBuffer);
size_t CVPixelBufferGetDataSize(CVPixelBufferRef pixelBuffer);

Boolean CVPixelBufferIsPlanar(CVPixelBufferRef pixelBuffer);

OSType CVPixelBufferGetPixelFormatType(CVPixelBufferRef pixelBuffer);

void CVPixelBufferGetExtendedPixels(CVPixelBufferRef pixelBuffer, size_t *extraColumnsOnLeft, size_t *extraColumnsOnRight, size_t *extraRowsOnTop, size_t *extraRowsOnBottom);
void CVPixelBufferRelease(CVPixelBufferRef texture);

CVPixelBufferRef CVPixelBufferRetain(CVPixelBufferRef texture);

IOSurfaceRef CVPixelBufferGetIOSurface(CVPixelBufferRef pixelBuffer);

CFTypeID CVPixelBufferGetTypeID(void);

CVReturn CVPixelBufferCreateResolvedAttributesDictionary(CFAllocatorRef allocator, CFArrayRef attributes, CFDictionaryRef *resolvedDictionaryOut);