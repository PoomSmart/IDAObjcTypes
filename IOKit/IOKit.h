#import "../BaseTypes.h"
#import "../Kernel/Types.h"
#import "../CoreFoundation/Types.h"
#import "../Foundation/Types.h"
#import "Types.h"

kern_return_t IOConnectCallMethod(mach_port_t connection, uint32_t selector, const uint64_t *input, uint32_t inputCnt, const void *inputStruct, size_t inputStructCnt, uint64_t *output, uint32_t *outputCnt, void *outputStruct, size_t *outputStructCnt);
kern_return_t IOConnectCallAsyncMethod(mach_port_t connection, uint32_t selector, mach_port_t wake_port, uint64_t *reference, uint32_t referenceCnt, const uint64_t *input, uint32_t inputCnt, const void *inputStruct, size_t inputStructCnt, uint64_t *output, uint32_t *outputCnt, void *outputStruct, size_t *outputStructCnt);
kern_return_t IOConnectCallScalarMethod(mach_port_t connection, uint32_t selector, const uint64_t *input, uint32_t inputCnt, uint64_t *output, uint32_t *outputCnt);
kern_return_t IOConnectCallStructMethod(mach_port_t connection, uint32_t selector, const void *inputStruct, size_t inputStructCnt, void *outputStruct, size_t *outputStructCnt);
kern_return_t IOConnectCallAsyncStructMethod(mach_port_t connection, uint32_t selector, mach_port_t wake_port, uint64_t *reference, uint32_t referenceCnt, const void *inputStruct, size_t inputStructCnt, void *outputStruct, size_t *outputStructCnt);
kern_return_t IOConnectCallAsyncScalarMethod(mach_port_t connection, uint32_t selector, mach_port_t wake_port, uint64_t *reference, uint32_t referenceCnt, const uint64_t *input, uint32_t inputCnt, uint64_t *output, uint32_t *outputCnt);
kern_return_t IOConnectSetCFProperty(io_connect_t connect, CFStringRef propertyName, CFTypeRef property);
kern_return_t IOConnectSetCFProperties(io_connect_t connect, CFTypeRef properties);
kern_return_t IOObjectGetClass(io_object_t object, io_name_t className);
kern_return_t IOObjectRelease(io_object_t object);
kern_return_t IOObjectRetain(io_object_t object);
kern_return_t IOServiceOpen(io_service_t service, task_port_t owningTask, uint32_t type, io_connect_t *connect);
kern_return_t IOServiceClose(io_connect_t connect);
kern_return_t IOServiceGetMatchingServices(mach_port_t masterPort, CFDictionaryRef matching, io_iterator_t *existing);
kern_return_t IOServiceMatchPropertyTable(io_service_t service, CFDictionaryRef matching, boolean_t *matches);
kern_return_t IOServiceAddMatchingNotification(IONotificationPortRef notifyPort, const io_name_t notificationType, CFDictionaryRef matching, IOServiceMatchingCallback callback, void *refCon, io_iterator_t *notification);
kern_return_t IORegistryCreateIterator(mach_port_t masterPort, const io_name_t plane, IOOptionBits options, io_iterator_t *iterator);
kern_return_t IORegistryEntryGetPath(io_registry_entry_t entry, const io_name_t plane, io_string_t path);
kern_return_t IORegistryEntryGetName(io_registry_entry_t entry, io_name_t name);
kern_return_t IORegistryEntryGetNameInPlane(io_registry_entry_t entry, const io_name_t plane, io_name_t name);
kern_return_t IORegistryEntryGetLocationInPlane(io_registry_entry_t entry, const io_name_t plane, io_name_t location);
kern_return_t IORegistryEntryGetParentEntry(io_registry_entry_t entry, const io_name_t plane, io_registry_entry_t *parent);
kern_return_t IORegistryEntryGetChildEntry(io_registry_entry_t entry, const io_name_t plane, io_registry_entry_t *child);
kern_return_t IORegistryEntryGetChildIterator(io_registry_entry_t entry, const io_name_t plane, io_iterator_t *iterator);
kern_return_t IORegistryEntryGetParentIterator(io_registry_entry_t entry, const io_name_t plane, io_iterator_t *iterator);
kern_return_t IORegistryEntryGetProperty(io_registry_entry_t entry, const io_name_t propertyName, io_struct_inband_t buffer, uint32_t *size);
kern_return_t IORegistryEntryCreateCFProperties(io_registry_entry_t entry, CFMutableDictionaryRef *, CFAllocatorRef, NSInteger);
kern_return_t IORegistryEntryCreateIterator(io_registry_entry_t entry, const io_name_t plane, IOOptionBits options, io_iterator_t *iterator);
kern_return_t IORegistryEntrySetCFProperty(io_registry_entry_t entry, CFStringRef propertyName, CFTypeRef property);
kern_return_t IORegistryEntrySetCFProperties(io_registry_entry_t entry, CFTypeRef properties);
kern_return_t IORegistryIteratorEnterEntry(io_iterator_t iterator);
kern_return_t IORegistryIteratorExitEntry(io_iterator_t iterator);
kern_return_t IOHIDPostEvent(io_connect_t connect, UInt32 eventType, IOGPoint location, const NXEventData *eventData, UInt32 eventDataVersion, IOOptionBits eventFlags, IOOptionBits options);

io_service_t IOServiceGetMatchingService(mach_port_t masterPort, CFDictionaryRef matching);

io_registry_entry_t IORegistryEntryFromPath(mach_port_t masterPort, const io_string_t path);
io_registry_entry_t IORegistryEntryCopyFromPath(mach_port_t masterPort, CFStringRef path);

AbsoluteTime IOHIDEventGetTimeStamp(IOHIDEventRef event);

boolean_t IOHIDServiceClientConformsTo(IOHIDServiceClientRef service, uint32_t usagePage, uint32_t usage);
boolean_t IORegistryEntryInPlane(io_registry_entry_t entry, const io_name_t plane);

CFTypeID IOHIDEventGetTypeID(void);
CFTypeID IOHIDEventQueueGetTypeID(void);
CFTypeID IOHIDDeviceGetTypeID(void);
CFTypeID IOHIDManagerGetTypeID(void);
CFTypeID IOHIDUserDeviceGetTypeID(void);

CFMutableDictionaryRef IOBSDNameMatching(mach_port_t masterPort, uint32_t options, const char *bsdName);
CFMutableDictionaryRef IOServiceMatching(const char *name);
CFMutableDictionaryRef IOServiceNameMatching(const char *name);
CFMutableDictionaryRef IORegistryEntryIDMatching(uint64_t entryID);

CFMutableDataRef IOHIDEventCreateData(CFAllocatorRef allocator, IOHIDEventRef event);

CFArrayRef IOHIDDeviceCopyMatchingElements(IOHIDDeviceRef device, CFDictionaryRef matching, IOOptionBits options);
CFArrayRef IOHIDEventGetChildren(IOHIDEventRef event);
CFArrayRef IOHIDEventSystemClientCopyServices(IOHIDEventSystemClientRef client);

CFIndex IOHIDEventGetIntegerValueWithOptions(IOHIDEventRef event, IOHIDEventField field, IOOptionBits options);
CFIndex IOHIDEventGetIntegerValue(IOHIDEventRef event, IOHIDEventField field);
CFIndex IOHIDElementGetLogicalMax(IOHIDElementRef element);
CFIndex IOHIDElementGetLogicalMin(IOHIDElementRef element);
CFIndex IOHIDValueGetIntegerValue(IOHIDValueRef value);

CFSetRef IOHIDManagerCopyDevices(IOHIDManagerRef manager);

CFTypeRef IOHIDDeviceGetProperty(IOHIDDeviceRef device, CFStringRef key);
CFTypeRef IOHIDManagerGetProperty(IOHIDManagerRef manager, CFStringRef key);
CFTypeRef IOHIDServiceClientCopyProperty(IOHIDServiceClientRef service, CFStringRef key);
CFTypeRef IORegistryEntryCreateCFProperty(io_registry_entry_t entry, CFStringRef key, CFAllocatorRef allocator, IOOptionBits options);
CFTypeRef IORegistryEntrySearchCFProperty(io_registry_entry_t entry, const io_name_t plane, CFStringRef key, CFAllocatorRef allocator, IOOptionBits options);

CFStringRef IORegistryEntryCopyPath(io_registry_entry_t entry, const io_name_t plane);
CFStringRef IOHIDEventTypeGetName(IOHIDEventType type);

IOHIDUserDeviceRef IOHIDUserDeviceCreate(CFAllocatorRef allocator, CFDictionaryRef properties);

IOHIDEventQueueRef IOHIDEventQueueCreateWithToken(CFAllocatorRef allocator, uint32_t token);
IOHIDEventQueueRef IOHIDEventQueueCreate(CFAllocatorRef allocator, int notificationPortType, uint32_t token);

IOHIDEventSystemClientRef IOHIDEventSystemClientCreate(CFAllocatorRef allocator);
IOHIDEventSystemClientRef IOHIDEventSystemClientCreateSimpleClient(CFAllocatorRef allocator);

IOHIDEventRef IOHIDEventQueueDequeueCopy(IOHIDEventQueueRef queue);
IOHIDEventRef IOHIDEventCreateCopy(CFAllocatorRef allocator, IOHIDEventRef event);
IOHIDEventRef IOHIDEventCreate(CFAllocatorRef allocator, IOHIDEventType type, AbsoluteTime timeStamp, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateWithData(CFAllocatorRef allocator, CFDataRef data);
IOHIDEventRef IOHIDEventCreateProgressEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, uint32_t eventType, IOHIDFloat level, IOOptionBits options);
IOHIDEventRef IOHIDEventCreateVendorDefinedEvent(CFAllocatorRef allocator, AbsoluteTime timeStamp, uint16_t usagePage, uint16_t usage, uint32_t version, const uint8_t *data, uint32_t length, IOOptionBits options);
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

IOHIDEventRef _IOHIDEventGetContext(IOHIDEventRef event); // get record size

IOHIDEventType IOHIDEventGetType(IOHIDEventRef event);

IOHIDElementRef IOHIDValueGetElement(IOHIDValueRef value);

int IOHIDEventSystemClientSetMatching(IOHIDEventSystemClientRef client, CFDictionaryRef match);
int IOHIDServiceClientSetProperty(IOHIDServiceClientRef, CFStringRef, CFNumberRef);

uint32_t IOHIDEventGetEventFlags(IOHIDEventRef event);
uint32_t IOHIDEventQueueGetToken(IOHIDEventQueueRef queue);
uint32_t IOHIDElementGetUsage(IOHIDElementRef element);
uint32_t IOHIDElementGetUsagePage(IOHIDElementRef element);

uint64_t IOHIDEventGetSenderID(IOHIDEventRef event);

void IOHIDDeviceRegisterInputReportCallback(IOHIDDeviceRef device, uint8_t *report, CFIndex reportLength, IOHIDReportCallback callback, void *context);
void IOHIDDeviceRegisterInputValueCallback(IOHIDDeviceRef device, IOHIDValueCallback callback, void *context);
void IOHIDDeviceRegisterRemovalCallback(IOHIDDeviceRef device, IOHIDCallback callback, void *context);
void IOHIDDeviceUnscheduleFromRunLoop(IOHIDDeviceRef device, CFRunLoopRef runLoop, CFStringRef runLoopMode);
void IOHIDEventGetVendorDefinedData(IOHIDEventRef event, uint32_t *length, uint8_t **data);
void IOHIDEventSetFloatValueWithOptions(IOHIDEventRef event, IOHIDEventField field, IOHIDFloat value, IOOptionBits options);
void IOHIDEventSetFloatValue(IOHIDEventRef event, IOHIDEventField field, IOHIDFloat value);
void IOHIDEventSetIntegerValueWithOptions(IOHIDEventRef event, IOHIDEventField field, CFIndex value, IOOptionBits options);
void IOHIDEventSetIntegerValue(IOHIDEventRef event, IOHIDEventField field, CFIndex value);
void IOHIDEventSetPositionWithOptions(IOHIDEventRef event, IOHIDEventField field, IOHID3DPoint position, IOOptionBits options);
void IOHIDEventSetPosition(IOHIDEventRef event, IOHIDEventField field, IOHID3DPoint position);
void IOHIDEventSetEventFlags(IOHIDEventRef event, uint32_t eventFlags);
void IOHIDEventSetTimeStamp(IOHIDEventRef event, AbsoluteTime timeStamp);
void IOHIDEventSetSenderID(IOHIDEventRef event, uint64_t senderID);
void IOHIDEventRemoveEvent(IOHIDEventRef event, IOHIDEventRef childEvent);
void IOHIDEventAppendEvent(IOHIDEventRef event, IOHIDEventRef childEvent);
void IOHIDEventQueueEnqueue(IOHIDEventQueueRef queue, IOHIDEventRef event);
void IOHIDEventSystemClientDispatchEvent(IOHIDEventSystemClientRef client, IOHIDEventRef event);
void IOHIDEventSystemClientSetMatchingMultiple(IOHIDEventSystemClientRef, CFArrayRef);
void IOHIDEventSystemClientRegisterEventCallback(IOHIDEventSystemClientRef client, IOHIDEventSystemClientEventCallback callback, void *target, void *refcon);
void IOHIDEventSystemClientUnregisterEventCallback(IOHIDEventSystemClientRef client);
void IOHIDEventSystemClientUnregisterEventFilterCallback(IOHIDEventSystemClientRef client, IOHIDEventSystemEventFilterCallback callback, void *target, void *refcon);
void IOHIDEventSystemClientUnscheduleWithRunLoop(IOHIDEventSystemClientRef client, CFRunLoopRef runloop, CFStringRef mode);
void IOHIDEventSystemClientScheduleWithRunLoop(IOHIDEventSystemClientRef client, CFRunLoopRef runloop, CFStringRef mode);
void IOHIDManagerSetDeviceMatching(IOHIDManagerRef manager, CFDictionaryRef matching);
void IOHIDManagerSetDeviceMatchingMultiple(IOHIDManagerRef manager, CFArrayRef multiple);
void IOHIDManagerScheduleWithRunLoop(IOHIDManagerRef manager, CFRunLoopRef runLoop, CFStringRef runLoopMode);
void IOHIDManagerUnscheduleFromRunLoop(IOHIDManagerRef manager, CFRunLoopRef runLoop, CFStringRef runLoopMode);
void IOHIDManagerRegisterDeviceMatchingCallback(IOHIDManagerRef manager, IOHIDDeviceCallback callback, void *context);
void IOHIDManagerRegisterDeviceRemovalCallback(IOHIDManagerRef manager, IOHIDDeviceCallback callback, void *context);
void IOHIDManagerRegisterInputReportCallback(IOHIDManagerRef manager, IOHIDReportCallback callback, void *context);
void IOHIDManagerRegisterInputValueCallback(IOHIDManagerRef manager, IOHIDValueCallback callback, void *context);
void IOHIDUserDeviceScheduleWithRunLoop(IOHIDUserDeviceRef device, CFRunLoopRef runLoop, CFStringRef runLoopMode);
void IOHIDUserDeviceUnscheduleFromRunLoop(IOHIDUserDeviceRef device, CFRunLoopRef runLoop, CFStringRef runLoopMode);
void IOHIDUserDeviceRegisterGetReportCallback(IOHIDUserDeviceRef device, IOHIDUserDeviceReportCallback callback, void *refcon);
void IOHIDUserDeviceRegisterSetReportCallback(IOHIDUserDeviceRef device, IOHIDUserDeviceReportCallback callback, void *refcon);

IOHIDFloat IOHIDEventGetFloatValueWithOptions(IOHIDEventRef event, IOHIDEventField field, IOOptionBits options);
IOHIDFloat IOHIDEventGetFloatValue(IOHIDEventRef event, IOHIDEventField field);

double IOHIDEventGetDoubleValue(IOHIDEventRef event, IOHIDEventField field);
double IOHIDEventGetDoubleValueWithOptions(IOHIDEventRef event, IOHIDEventField field, IOOptionBits options);

IOHID3DPoint IOHIDEventGetPositionWithOptions(IOHIDEventRef event, IOHIDEventField field, IOOptionBits options);
IOHID3DPoint IOHIDEventGetPosition(IOHIDEventRef event, IOHIDEventField field);

void *IOHIDEventGetDataValue(IOHIDEventRef event, IOHIDEventType type);

Boolean IOHIDDeviceConformsTo(IOHIDDeviceRef device, uint32_t usagePage, uint32_t usage);
Boolean IOHIDEventIsAbsolute(IOHIDEventRef event);
Boolean IOHIDEventConformsToWithOptions(IOHIDEventRef event, IOHIDEventType type, IOOptionBits options);
Boolean IOHIDEventConformsTo(IOHIDEventRef event, IOHIDEventType type);

IOHIDManagerRef IOHIDManagerCreate(CFAllocatorRef allocator, IOOptionBits options);

IOReturn IOHIDDeviceOpen(IOHIDDeviceRef device, IOOptionBits options);
IOReturn IOHIDDeviceClose(IOHIDDeviceRef device, IOOptionBits options);
IOReturn IOHIDManagerOpen(IOHIDManagerRef manager, IOOptionBits options);
IOReturn IOHIDManagerClose(IOHIDManagerRef manager, IOOptionBits options);
IOReturn IOHIDUserDeviceHandleReport(IOHIDUserDeviceRef device, uint8_t *report, CFIndex reportLength);
IOReturn IOHIDUserDeviceHandleReportAsync(IOHIDUserDeviceRef device, uint8_t *report, CFIndex reportLength, IOHIDUserDeviceHandleReportAsyncCallback callback, void *refcon);
