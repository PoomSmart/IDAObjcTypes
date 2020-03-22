#import "../Types.h"
#import "Types.h"

kern_return_t IOObjectRelease(io_object_t object);
kern_return_t IOObjectRetain(io_object_t object);
kern_return_t IOServiceOpen(io_service_t service, task_port_t owningTask, uint32_t type, io_connect_t *connect);
kern_return_t IOServiceClose(io_connect_t connect);

mach_port_t IOSurfaceCreateMachPort(IOSurfaceRef buffer);

io_service_t IOServiceGetMatchingService(mach_port_t masterPort, CFDictionaryRef matching);

CFTypeID IOHIDEventGetTypeID(void);
CFTypeID IOHIDManagerGetTypeID(void);

IOSurfaceID IOSurfaceGetID(IOSurfaceRef buffer);

CFMutableDictionaryRef IOServiceMatching(const char* name);
CFMutableDictionaryRef IOServiceNameMatching(const char *name);

CFMutableDataRef IOHIDEventCreateData(CFAllocatorRef allocator, IOHIDEventRef event);

CFArrayRef IOHIDEventGetChildren(IOHIDEventRef event);

IOHIDEventRef IOHIDEventCreateCopy(CFAllocatorRef allocator, IOHIDEventRef event);
IOHIDEventRef IOHIDEventCreate(CFAllocatorRef allocator, IOHIDEventType type, AbsoluteTime timeStamp, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateWithData(CFAllocatorRef allocator, CFDataRef data);
IOHIDEventRef IOHIDEventCreateProgressEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, uint32_t eventType, IOHIDFloat level, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateVendorDefinedEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, uint16_t usagePage, uint16_t usage, uint32_t version, const uint8_t* data, uint32_t length, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateSwipeEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, IOHIDSwipeMask swipeMask, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateDigitizerEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, IOHIDDigitizerTransducerType type, uint32_t index, uint32_t identity, uint32_t eventMask, uint32_t buttonMask, IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOHIDFloat tipPressure, IOHIDFloat barrelPressure, Boolean range, Boolean touch, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateDigitizerFingerEventWithQuality(CFAllocatorRef allocator, AbsoluteTime timeStamp, uint32_t index, uint32_t identity, uint32_t eventMask, IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOHIDFloat tipPressure, IOHIDFloat twist, IOHIDFloat minorRadius, IOHIDFloat majorRadius, IOHIDFloat quality, IOHIDFloat density, IOHIDFloat irregularity, Boolean range, Boolean touch, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateDigitizerFingerEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, uint32_t index, uint32_t identity, uint32_t eventMask, IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOHIDFloat tipPressure, IOHIDFloat twist, Boolean range, Boolean touch, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateDigitizerStylusEventWithPolarOrientation(CFAllocatorRef allocator, AbsoluteTime timeStamp, uint32_t index, uint32_t identity, uint32_t eventMask, uint32_t buttonMask, IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOHIDFloat tipPressure, IOHIDFloat barrelPressure, IOHIDFloat twist, IOHIDFloat altitude, IOHIDFloat azimuth,  Boolean range, Boolean invert, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateDigitizerStylusEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, uint32_t index, uint32_t identity, uint32_t eventMask, uint32_t buttonMask, IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOHIDFloat tipPressure, IOHIDFloat barrelPressure, IOHIDFloat twist, IOHIDFloat altitude, IOHIDFloat azimuth, Boolean range, Boolean invert, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateProximtyEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, IOHIDProximityDetectionMask detectionMask, IOOptionBits options);
#define IOHIDEventCreateProximityEvent IOHIDEventCreateProximtyEvent
IOHIDEventRef IOHIDEventCreateAmbientLightSensorEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, IOHIDFloat level, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateMouseEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, uint32_t buttonMask, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateMouseEventWithPressure(CFAllocatorRef allocator, AbsoluteTime timeStamp, IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, uint32_t buttonMask, IOHIDFloat pressure, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateButtonEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, uint32_t buttonMask, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateButtonEventWithPressure(CFAllocatorRef allocator, AbsoluteTime timeStamp, uint32_t buttonMask, IOHIDFloat pressure, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateKeyboardEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, uint16_t usagePage, uint16_t usage, Boolean down, IOHIDEventOptionBits flags);
IOHIDEventRef IOHIDEventCreateAccelerometerEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOOptionBits options);
IOHIDEventRef IOHIDEventCreatePolarOrientationEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateOrientationEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateVelocityEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateScaleEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateScrollEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateRotationEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateTranslationEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, IOHIDFloat x, IOHIDFloat y, IOHIDFloat z, IOOptionBits options);
IOHIDEventRef IOHIDEventGetParent(IOHIDEventRef event);
IOHIDEventRef IOHIDEventGetEventWithOptions(IOHIDEventRef event, IOHIDEventType type, IOOptionBits options);
IOHIDEventRef IOHIDEventGetEvent(IOHIDEventRef event, IOHIDEventType type);

IOHIDEventType IOHIDEventGetType(IOHIDEventRef event);

AbsoluteTime IOHIDEventGetTimeStamp(IOHIDEventRef event);

size_t IOSurfaceAlignProperty(CFStringRef property, size_t value);
size_t IOSurfaceGetAllocSize(IOSurfaceRef buffer);
size_t IOSurfaceGetBytesPerRow(IOSurfaceRef buffer);
size_t IOSurfaceGetHeight(IOSurfaceRef buffer);
size_t IOSurfaceGetPropertyMaximum(CFStringRef property);
size_t IOSurfaceGetWidth(IOSurfaceRef buffer);
size_t IOSurfaceGetWidthOfPlane(IOSurfaceRef buffer, size_t planeIndex);
size_t IOSurfaceGetHeightOfPlane(IOSurfaceRef buffer, size_t planeIndex);

uint32_t IOHIDEventGetEventFlags(IOHIDEventRef event);

IOSurfaceRef IOSurfaceCreate(CFDictionaryRef properties);
IOSurfaceRef IOSurfaceLookupFromMachPort(mach_port_t);

void IOHIDEventGetVendorDefinedData(IOHIDEventRef event, uint32_t* length, uint8_t** data);
void IOHIDEventSetFloatValueWithOptions(IOHIDEventRef event, IOHIDEventField field, IOHIDFloat value, IOOptionBits options);
void IOHIDEventSetFloatValue(IOHIDEventRef event, IOHIDEventField field, IOHIDFloat value);
void IOHIDEventSetIntegerValueWithOptions(IOHIDEventRef event, IOHIDEventField field, CFIndex value, IOOptionBits options);
void IOHIDEventSetIntegerValue(IOHIDEventRef event, IOHIDEventField field, CFIndex value);
void IOHIDEventSetPositionWithOptions(IOHIDEventRef event, IOHIDEventField field, IOHID3DPoint position, IOOptionBits options);
void IOHIDEventSetPosition(IOHIDEventRef event, IOHIDEventField field, IOHID3DPoint position);
void IOHIDEventSetEventFlags(IOHIDEventRef event, uint32_t eventFlags);
void IOHIDEventSetTimeStamp(IOHIDEventRef event, AbsoluteTime timeStamp);
void IOHIDEventRemoveEvent(IOHIDEventRef event, IOHIDEventRef childEvent);
void IOHIDEventAppendEvent(IOHIDEventRef event, IOHIDEventRef childEvent);

IOHIDFloat IOHIDEventGetFloatValueWithOptions(IOHIDEventRef event, IOHIDEventField field, IOOptionBits options);
IOHIDFloat IOHIDEventGetFloatValue(IOHIDEventRef event, IOHIDEventField field);
CFIndex IOHIDEventGetIntegerValueWithOptions(IOHIDEventRef event, IOHIDEventField field, IOOptionBits options);
CFIndex IOHIDEventGetIntegerValue(IOHIDEventRef event, IOHIDEventField field);
IOHID3DPoint IOHIDEventGetPositionWithOptions(IOHIDEventRef event, IOHIDEventField field, IOOptionBits options);
IOHID3DPoint IOHIDEventGetPosition(IOHIDEventRef event, IOHIDEventField field);

void *IOHIDEventGetDataValue(IOHIDEventRef event, IOHIDEventType type);
void *IOSurfaceGetBaseAddress(IOSurfaceRef buffer);

Boolean IOHIDEventIsAbsolute(IOHIDEventRef event);
Boolean IOHIDEventConformsToWithOptions(IOHIDEventRef event, IOHIDEventType type, IOOptionBits options);
Boolean IOHIDEventConformsTo(IOHIDEventRef event, IOHIDEventType type);
Boolean IOSurfaceIsInUse(IOSurfaceRef buffer);

CFSetRef IOHIDManagerCopyDevices(IOHIDManagerRef manager);
CFTypeRef IOHIDManagerGetProperty(IOHIDManagerRef manager, CFStringRef key);
IOHIDManagerRef IOHIDManagerCreate(CFAllocatorRef allocator, IOOptionBits options);

IOReturn IOHIDManagerOpen(IOHIDManagerRef manager, IOOptionBits options);
IOReturn IOHIDManagerClose(IOHIDManagerRef manager, IOOptionBits options);
IOReturn IOSurfaceLock(IOSurfaceRef buffer, uint32_t options, uint32_t *seed);
IOReturn IOSurfaceUnlock(IOSurfaceRef buffer, uint32_t options, uint32_t *seed);
IOReturn IOSurfaceSetPurgeable(IOSurfaceRef buffer, uint32_t newState, uint32_t *oldState);

void IOHIDManagerSetDeviceMatching(IOHIDManagerRef manager, CFDictionaryRef matching);
void IOHIDManagerScheduleWithRunLoop(IOHIDManagerRef manager, CFRunLoopRef runLoop, CFStringRef runLoopMode);
void IOHIDManagerUnscheduleFromRunLoop(IOHIDManagerRef manager, CFRunLoopRef runLoop, CFStringRef runLoopMode);
void IOHIDManagerRegisterDeviceMatchingCallback(IOHIDManagerRef manager, IOHIDDeviceCallback callback, void *context);
void IOHIDManagerRegisterDeviceRemovalCallback(IOHIDManagerRef manager, IOHIDDeviceCallback callback, void *context);
void IOHIDManagerRegisterInputReportCallback(IOHIDManagerRef manager, IOHIDReportCallback callback, void *context);
void IOHIDManagerRegisterInputValueCallback(IOHIDManagerRef manager, IOHIDValueCallback callback, void *context);