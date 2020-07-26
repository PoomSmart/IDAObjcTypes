#import "../BaseTypes.h"
#import "../Kernel/Types.h"
#import "../CoreGraphics/Types.h"
#import "../CoreFoundation/Types.h"
#import "../IOKit/Types.h"
#import "Types.h"

Boolean IOSurfaceIsInUse(IOSurfaceRef buffer);
Boolean IOSurfaceIsTiled(IOSurfaceRef buffer);

CFTypeID IOSurfaceGetTypeID(void);

CFTypeRef IOSurfaceCopyValue(IOSurfaceRef buffer, CFStringRef key);

CGContextRef CGIOSurfaceContextCreate(IOSurfaceRef, size_t, size_t, size_t, size_t, CGColorSpaceRef, CGBitmapInfo);

CGImageRef CGIOSurfaceContextCreateImage(CGContextRef);

IOReturn IOSurfaceLock(IOSurfaceRef buffer, uint32_t options, uint32_t *seed);
IOReturn IOSurfaceSetPurgeable(IOSurfaceRef buffer, uint32_t newState, uint32_t *oldState);
IOReturn IOSurfaceUnlock(IOSurfaceRef buffer, uint32_t options, uint32_t *seed);

IOSurfaceID IOSurfaceGetID(IOSurfaceRef buffer);

IOSurfaceRef IOSurfaceCreate(CFDictionaryRef properties);
IOSurfaceRef IOSurfaceLookup(IOSurfaceID csid);
IOSurfaceRef IOSurfaceLookupFromMachPort(mach_port_t);

mach_port_t IOSurfaceCreateMachPort(IOSurfaceRef buffer);

OSType IOSurfaceGetPixelFormat(IOSurfaceRef buffer);

size_t IOSurfaceAlignProperty(CFStringRef property, size_t value);
size_t IOSurfaceGetAllocSize(IOSurfaceRef buffer);
size_t IOSurfaceGetBytesPerElement(IOSurfaceRef buffer);
size_t IOSurfaceGetBytesPerElementOfPlane(IOSurfaceRef buffer, size_t planeIndex);
size_t IOSurfaceGetBytesPerRow(IOSurfaceRef buffer);
size_t IOSurfaceGetBytesPerRowOfPlane(IOSurfaceRef buffer, size_t planeIndex);
size_t IOSurfaceGetElementHeight(IOSurfaceRef buffer);
size_t IOSurfaceGetElementHeightOfPlane(IOSurfaceRef buffer, size_t planeIndex);
size_t IOSurfaceGetElementWidth(IOSurfaceRef buffer);
size_t IOSurfaceGetElementWidthOfPlane(IOSurfaceRef buffer, size_t planeIndex);
size_t IOSurfaceGetHeight(IOSurfaceRef buffer);
size_t IOSurfaceGetHeightOfPlane(IOSurfaceRef buffer, size_t planeIndex);
size_t IOSurfaceGetPlaneCount(IOSurfaceRef buffer);
size_t IOSurfaceGetPropertyMaximum(CFStringRef property);
size_t IOSurfaceGetWidth(IOSurfaceRef buffer);
size_t IOSurfaceGetWidthOfPlane(IOSurfaceRef buffer, size_t planeIndex);

void *IOSurfaceGetBaseAddress(IOSurfaceRef buffer);
void *IOSurfaceGetBaseAddressOfPlane(IOSurfaceRef buffer, size_t planeIndex);

void IOSurfaceDecrementUseCount(IOSurfaceRef buffer);
void IOSurfaceIncrementUseCount(IOSurfaceRef buffer);
void IOSurfaceRemoveValue(IOSurfaceRef buffer, CFStringRef key);
void IOSurfaceSetValue(IOSurfaceRef buffer, CFStringRef key, CFTypeRef value);
