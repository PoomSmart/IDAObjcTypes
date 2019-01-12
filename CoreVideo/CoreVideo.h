#import "../Types.h"
#import "../CoreFoundation/Types.h"
#import "../IOSurface/Types.h"
#import "Types.h"

void* CVPixelBufferGetBaseAddress(CVPixelBufferRef pixelBuffer);
void* _imp__CVPixelBufferGetBaseAddress(CVPixelBufferRef pixelBuffer);
void* CVPixelBufferGetBaseAddressOfPlane(CVPixelBufferRef pixelBuffer, size_t planeIndex);
void* _imp__CVPixelBufferGetBaseAddressOfPlane(CVPixelBufferRef pixelBuffer, size_t planeIndex);

size_t CVPixelBufferGetWidth(CVPixelBufferRef pixelBuffer);
size_t _imp__CVPixelBufferGetWidth(CVPixelBufferRef pixelBuffer);
size_t CVPixelBufferGetWidthOfPlane(CVPixelBufferRef pixelBuffer, size_t planeIndex);
size_t _imp__CVPixelBufferGetWidthOfPlane(CVPixelBufferRef pixelBuffer, size_t planeIndex);
size_t CVPixelBufferGetHeight(CVPixelBufferRef pixelBuffer);
size_t _imp__CVPixelBufferGetHeight(CVPixelBufferRef pixelBuffer);
size_t CVPixelBufferGetHeightOfPlane(CVPixelBufferRef pixelBuffer, size_t planeIndex);
size_t _imp__CVPixelBufferGetHeightOfPlane(CVPixelBufferRef pixelBuffer, size_t planeIndex);
size_t CVPixelBufferGetBytesPerRow(CVPixelBufferRef pixelBuffer);
size_t _imp__CVPixelBufferGetBytesPerRow(CVPixelBufferRef pixelBuffer);
size_t CVPixelBufferGetBytesPerRowOfPlane(CVPixelBufferRef pixelBuffer, size_t planeIndex);
size_t _imp__CVPixelBufferGetBytesPerRowOfPlane(CVPixelBufferRef pixelBuffer, size_t planeIndex);
size_t CVPixelBufferGetPlaneCount(CVPixelBufferRef pixelBuffer);
size_t _imp__CVPixelBufferGetPlaneCount(CVPixelBufferRef pixelBuffer);
size_t CVPixelBufferGetDataSize(CVPixelBufferRef pixelBuffer);
size_t _imp__CVPixelBufferGetDataSize(CVPixelBufferRef pixelBuffer);

Boolean CVPixelBufferIsPlanar(CVPixelBufferRef pixelBuffer);
Boolean _imp__CVPixelBufferIsPlanar(CVPixelBufferRef pixelBuffer);

OSType CVPixelBufferGetPixelFormatType(CVPixelBufferRef pixelBuffer);
OSType _imp__CVPixelBufferGetPixelFormatType(CVPixelBufferRef pixelBuffer);

void CVPixelBufferGetExtendedPixels(CVPixelBufferRef pixelBuffer, size_t* extraColumnsOnLeft, size_t* extraColumnsOnRight, size_t* extraRowsOnTop, size_t* extraRowsOnBottom);
void _imp__CVPixelBufferGetExtendedPixels(CVPixelBufferRef pixelBuffer, size_t* extraColumnsOnLeft, size_t* extraColumnsOnRight, size_t* extraRowsOnTop, size_t* extraRowsOnBottom);
void CVPixelBufferRelease(CVPixelBufferRef texture);
void _imp__CVPixelBufferRelease(CVPixelBufferRef texture);

CVPixelBufferRef CVPixelBufferRetain(CVPixelBufferRef texture);
CVPixelBufferRef _imp__CVPixelBufferRetain(CVPixelBufferRef texture);

IOSurfaceRef CVPixelBufferGetIOSurface(CVPixelBufferRef pixelBuffer);
IOSurfaceRef _imp__CVPixelBufferGetIOSurface(CVPixelBufferRef pixelBuffer);

CFTypeID CVPixelBufferGetTypeID(void);
CFTypeID _imp__CVPixelBufferGetTypeID(void);

CFTypeRef CVBufferGetAttachment(CVBufferRef buffer, CFStringRef key, CVAttachmentMode* attachmentMode);
CFTypeRef _imp__CVBufferGetAttachment(CVBufferRef buffer, CFStringRef key, CVAttachmentMode* attachmentMode);

CVReturn CVPixelBufferCreateResolvedAttributesDictionary(CFAllocatorRef allocator, CFArrayRef attributes, CFDictionaryRef* resolvedDictionaryOut);
CVReturn _imp__CVPixelBufferCreateResolvedAttributesDictionary(CFAllocatorRef allocator, CFArrayRef attributes, CFDictionaryRef* resolvedDictionaryOut);