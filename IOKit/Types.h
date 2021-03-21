#ifndef IOKIT_H_
#define IOKIT_H_

#import "../BaseTypes.h"
#import "../CoreFoundation/Types.h"
#import "NXTypes.h"

#define IOHIDEventFieldBase(type) (type << 16)
#define IOHIDEventFieldOffsetOf(field) (field & 0xffff)

typedef OSObject *io_object_t;

typedef io_object_t *io_service_t;
typedef io_object_t *io_connect_t;
typedef io_object_t *io_registry_entry_t;
typedef io_object_t *io_iterator_t;

typedef char io_name_t[128];
typedef char io_string_t[512];
typedef char io_struct_inband_t[4096];

typedef kern_return_t IOReturn;

PS_ENUM(UInt32, IOOptionBits) {
    kIOHIDEventOptionNone = 0,
};

typedef SInt32 IOFixed;
typedef UInt32 IOVersion;
typedef UInt32 IOItemCount;
typedef UInt32 IOCacheMode;

typedef UInt32 IOByteCount32;
typedef UInt64 IOByteCount64;

typedef UInt32 IOPhysicalAddress32;
typedef UInt64 IOPhysicalAddress64;
typedef UInt32 IOPhysicalLength32;
typedef UInt64 IOPhysicalLength64;

#ifdef __EA64__
typedef mach_vm_address_t IOVirtualAddress;
#else
typedef vm_address_t IOVirtualAddress;
#endif

typedef IOVirtualAddress IOLogicalAddress;

typedef struct __IOHIDManager *IOHIDManagerRef;
typedef struct __IOHIDValue *IOHIDValueRef;
typedef struct __IOHIDDevice *IOHIDDeviceRef;
typedef struct IONotificationPort *IONotificationPortRef;
typedef struct __IOHIDEventSystemClient *IOHIDEventSystemClientRef;
typedef struct __IOHIDEventQueue *IOHIDEventQueueRef;
typedef struct __IOHIDServiceClient *IOHIDServiceClientRef;
typedef struct __IOHIDElement *IOHIDElementRef;
typedef struct __IOHIDUserDevice *IOHIDUserDeviceRef;
typedef struct __IOUSBDeviceController *IOUSBDeviceControllerRef;
typedef struct __IOUSBDeviceDescription *IOUSBDeviceDescriptionRef;

extern const mach_port_t kIOMasterPortDefault;

typedef struct IOGPoint {
    SInt16 x;
    SInt16 y;
} IOGPoint;

typedef struct __IOHIDEvent {
    CFRuntimeBase base;
    AbsoluteTime _timeStamp;
    int x10;
    int x14;
    IOOptionBits _options;
    unsigned _typeMask;
    CFMutableArrayRef _children;
    struct __IOHIDEvent *_parent;
    size_t recordSize;
    void *record;
} * IOHIDEventRef;

PS_ENUM(uint32_t, IOHIDEventType) {
    kIOHIDEventTypeNULL = 0,
    kIOHIDEventTypeVendorDefined,
    kIOHIDEventTypeButton,
    kIOHIDEventTypeKeyboard,
    kIOHIDEventTypeTranslation,
    kIOHIDEventTypeRotation,
    kIOHIDEventTypeScroll,
    kIOHIDEventTypeScale,
    kIOHIDEventTypeZoom,
    kIOHIDEventTypeVelocity,
    kIOHIDEventTypeOrientation,
    kIOHIDEventTypeDigitizer,
    kIOHIDEventTypeAmbientLightSensor,
    kIOHIDEventTypeAccelerometer,
    kIOHIDEventTypeProximity,
    kIOHIDEventTypeTemperature,
    kIOHIDEventTypeNavigationSwipe,
    kIOHIDEventTypePointer,
    kIOHIDEventTypeProgress,
    kIOHIDEventTypeMultiAxisPointer,
    kIOHIDEventTypeGyro,
    kIOHIDEventTypeCompass,
    kIOHIDEventTypeZoomToggle,
    kIOHIDEventTypeDockSwipe,
    kIOHIDEventTypeSymbolicHotKey,
    kIOHIDEventTypePower,
    kIOHIDEventTypeLED,
    kIOHIDEventTypeFluidTouchGesture,
    kIOHIDEventTypeBoundaryScroll,
    kIOHIDEventTypeBiometric,
    kIOHIDEventTypeUnicode,
    kIOHIDEventTypeAtmosphericPressure,
    kIOHIDEventTypeForce,
    kIOHIDEventTypeMotionActivity,
    kIOHIDEventTypeMotionGesture,
    kIOHIDEventTypeGameController,
    kIOHIDEventTypeHumidity,
    kIOHIDEventTypeCollection,
    kIOHIDEventTypeBrightness,
    kIOHIDEventTypeGenericGesture,
    kIOHIDEventTypeCount,

    kIOHIDEventTypeSwipe = kIOHIDEventTypeNavigationSwipe,
    kIOHIDEventTypeMouse = kIOHIDEventTypePointer
};

PS_ENUM(uint32_t, IOHIDAccelerometerType) { kIOHIDAccelerometerTypeNormal = 0, kIOHIDAccelerometerTypeShake = 1 };

PS_ENUM(uint32_t, IOHIDSwipeMask) {
    kIOHIDSwipeNone = 0,
    kIOHIDSwipeUp = 1 << 0,
    kIOHIDSwipeDown = 1 << 1,
    kIOHIDSwipeLeft = 1 << 2,
    kIOHIDSwipeRight = 1 << 3,
    kIOHIDScaleExpand = 1 << 4,
    kIOHIDScaleContract = 1 << 5,
    kIOHIDRotateCW = 1 << 6,
    kIOHIDRotateCCW = 1 << 7,
};

PS_ENUM(uint32_t, IOHIDProximityDetectionMask) {
    kIOHIDProximityDetectionLargeBodyContact = 0x0001,
    kIOHIDProximityDetectionLargeBodyFarField = 0x0002,
    kIOHIDProximityDetectionIrregularObjects = 0x0004,
    kIOHIDProximityDetectionEdgeStraddling = 0x0008,
    kIOHIDProximityDetectionFlatFingerClasp = 0x0010,
    kIOHIDProximityDetectionFingerTouch = 0x0020,
    kIOHIDProximityDetectionReceiver = 0x0040,
    kIOHIDProximityDetectionSmallObjectsHovering = 0x0080,
    kIOHIDProximityDetectionReceiverCrude = 0x0100
};

PS_ENUM(uint32_t, IOHIDDigitizerTransducerType) {
    kIOHIDDigitizerTransducerTypeStylus = 0x20,
    kIOHIDDigitizerTransducerTypePuck,
    kIOHIDDigitizerTransducerTypeFinger,
    kIOHIDDigitizerTransducerTypeHand
};

PS_ENUM(uint32_t, IOHIDDigitizerEventMask) {
    kIOHIDDigitizerEventRange = 1 << 0,
    kIOHIDDigitizerEventTouch = 1 << 1,
    kIOHIDDigitizerEventPosition = 1 << 2,
    kIOHIDDigitizerEventStop = 1 << 3,
    kIOHIDDigitizerEventPeak = 1 << 4,
    kIOHIDDigitizerEventIdentity = 1 << 5,
    kIOHIDDigitizerEventAttribute = 1 << 6,
    kIOHIDDigitizerEventCancel = 1 << 7,
    kIOHIDDigitizerEventStart = 1 << 8,
    kIOHIDDigitizerEventResting = 1 << 9,
    kIOHIDDigitizerEventFromEdgeFlat = 1 << 10,
    kIOHIDDigitizerEventFromEdgeTip = 1 << 11,
    kIOHIDDigitizerEventFromCorner = 1 << 12,
    kIOHIDDigitizerEventSwipePending = 1 << 13,
    kIOHIDDigitizerEventFromEdgeForcePending = 1 << 14,
    kIOHIDDigitizerEventFromEdgeForceActive = 1 << 15,
    kIOHIDDigitizerEventForcePopped = 1 << 16,
    kIOHIDDigitizerEventSwipeUp = 1 << 24,
    kIOHIDDigitizerEventSwipeDown = 1 << 25,
    kIOHIDDigitizerEventSwipeLeft = 1 << 26,
    kIOHIDDigitizerEventSwipeRight = 1 << 27,
    kIOHIDDigitizerEventEstimatedAltitude = 1 << 28,
    kIOHIDDigitizerEventEstimatedAzimuth = 1 << 29,
    kIOHIDDigitizerEventEstimatedPressure = 1 << 30,
    kIOHIDDigitizerEventSwipeMask = 0xF << 24,
};

PS_ENUM(uint32_t, IOHIDEventOptionBits) {
    kIOHIDEventOptionIsAbsolute = 0x00000001,
    kIOHIDEventOptionIsCollection = 0x00000002,
    kIOHIDEventOptionPixelUnits = 0x00000004
};

PS_ENUM(uint32_t, IOHIDReportType) { kIOHIDReportTypeInput = 0, kIOHIDReportTypeOutput, kIOHIDReportTypeFeature, kIOHIDReportTypeCount };

#ifdef __EA64__
typedef double IOHIDFloat;
#else
typedef float IOHIDFloat;
#endif

typedef struct _IOHID3DPoint {
    IOHIDFloat x;
    IOHIDFloat y;
    IOHIDFloat z;
} IOHID3DPoint;

PS_ENUM(uint32_t, IOHIDEventField) {
    kIOHIDEventFieldAccelerometerX = IOHIDEventFieldBase(kIOHIDEventTypeAccelerometer),
    kIOHIDEventFieldAccelerometerY,
    kIOHIDEventFieldAccelerometerZ,
    kIOHIDEventFieldAccelerometerType,
    kIOHIDEventFieldAccelerometerSubType,
    kIOHIDEventFieldAccelerometerSequence,
    kIOHIDEventFieldMouseX = IOHIDEventFieldBase(kIOHIDEventTypeMouse),
    kIOHIDEventFieldMouseY,
    kIOHIDEventFieldMouseZ,
    kIOHIDEventFieldMouseButtonMask,
    kIOHIDEventFieldMouseNumber,
    kIOHIDEventFieldMouseClickCount,
    kIOHIDEventFieldMousePressure,
    kIOHIDEventFieldAmbientLightSensorLevel = IOHIDEventFieldBase(kIOHIDEventTypeAmbientLightSensor),
    kIOHIDEventFieldAmbientLightSensorRawChannel0,
    kIOHIDEventFieldAmbientLightSensorRawChannel1,
    kIOHIDEventFieldAmbientLightDisplayBrightnessChanged,
    kIOHIDEventFieldTemperatureLevel = IOHIDEventFieldBase(kIOHIDEventTypeTemperature),
    kIOHIDEventFieldProximityDetectionMask = IOHIDEventFieldBase(kIOHIDEventTypeProximity),
    kIOHIDEventFieldOrientationRadius = IOHIDEventFieldBase(kIOHIDEventTypeOrientation),
    kIOHIDEventFieldOrientationAzimuth,
    kIOHIDEventFieldOrientationAltitude,
    kIOHIDEventFieldKeyboardUsagePage = IOHIDEventFieldBase(kIOHIDEventTypeKeyboard),
    kIOHIDEventFieldKeyboardUsage,
    kIOHIDEventFieldKeyboardDown,
    kIOHIDEventFieldKeyboardRepeat,
    kIOHIDEventFieldKeyboardPressCount,
    kIOHIDEventFieldKeyboardLongPress,
    kIOHIDEventFieldKeyboardClickSpeed,
    kIOHIDEventFieldKeyboardSlowKeyPhase,
    kIOHIDEventFieldKeyboardMouseKeyToggle,
    kIOHIDEventFieldDigitizerX = IOHIDEventFieldBase(kIOHIDEventTypeDigitizer),
    kIOHIDEventFieldDigitizerY,
    kIOHIDEventFieldDigitizerZ,
    kIOHIDEventFieldDigitizerButtonMask,
    kIOHIDEventFieldDigitizerType,
    kIOHIDEventFieldDigitizerIndex,
    kIOHIDEventFieldDigitizerIdentity,
    kIOHIDEventFieldDigitizerEventMask,
    kIOHIDEventFieldDigitizerRange,
    kIOHIDEventFieldDigitizerTouch,
    kIOHIDEventFieldDigitizerPressure,
    kIOHIDEventFieldDigitizerBarrelPressure,
    kIOHIDEventFieldDigitizerTwist,
    kIOHIDEventFieldDigitizerTiltX,
    kIOHIDEventFieldDigitizerTiltY,
    kIOHIDEventFieldDigitizerAltitude,
    kIOHIDEventFieldDigitizerAzimuth,
    kIOHIDEventFieldDigitizerQuality,
    kIOHIDEventFieldDigitizerDensity,
    kIOHIDEventFieldDigitizerIrregularity,
    kIOHIDEventFieldDigitizerMajorRadius,
    kIOHIDEventFieldDigitizerMinorRadius,
    kIOHIDEventFieldDigitizerCollection,
    kIOHIDEventFieldDigitizerCollectionChord,
    kIOHIDEventFieldDigitizerChildEventMask,
    kIOHIDEventFieldDigitizerIsDisplayIntegrated,
    kIOHIDEventFieldDigitizerQualityRadiiAccuracy,
    kIOHIDEventFieldDigitizerGenerationCount,
    kIOHIDEventFieldDigitizerWillUpdateMask,
    kIOHIDEventFieldDigitizerDidUpdateMask,
    kIOHIDEventFieldDigitizerEstimatedMask,
    kIOHIDEventFieldDigitizerAuxiliaryPressure = kIOHIDEventFieldDigitizerBarrelPressure,
    kIOHIDEventFieldGenericGestureType = IOHIDEventFieldBase(kIOHIDEventTypeGenericGesture),
    kIOHIDEventFieldGenericGestureTypeTapCount,
    kIOHIDEventFieldGenericGestureTypeSwipeProgress,
    kIOHIDEventFieldSwipeMask = IOHIDEventFieldBase(kIOHIDEventTypeSwipe),
    kIOHIDEventFieldSwipeMotion,
    kIOHIDEventFieldSwipeProgress,
    kIOHIDEventFieldSwipePositionX,
    kIOHIDEventFieldSwipePositionY,
    kIOHIDEventFieldSwipeFlavor,
    kIOHIDEventFieldProgressEventType = IOHIDEventFieldBase(kIOHIDEventTypeProgress),
    kIOHIDEventFieldProgressLevel,
    kIOHIDEventFieldFluidTouchGestureMask = IOHIDEventFieldBase(kIOHIDEventTypeFluidTouchGesture),
    kIOHIDEventFieldFluidTouchGestureMotion,
    kIOHIDEventFieldFluidTouchGestureProgress,
    kIOHIDEventFieldFluidTouchGesturePositionX,
    kIOHIDEventFieldFluidTouchGesturePositionY,
    kIOHIDEventFieldFluidTouchGestureFlavor,
    kIOHIDEventFieldBoundaryScrollMask = IOHIDEventFieldBase(kIOHIDEventTypeBoundaryScroll),
    kIOHIDEventFieldBoundaryScrollMotion,
    kIOHIDEventFieldBoundaryScrollProgress,
    kIOHIDEventFieldBoundaryScrollPositionX,
    kIOHIDEventFieldBoundaryScrollPositionY,
    kIOHIDEventFieldBoundaryScrollFlavor,
    kIOHIDEventFieldDockSwipeMask = IOHIDEventFieldBase(kIOHIDEventTypeDockSwipe),
    kIOHIDEventFieldDockSwipeMotion,
    kIOHIDEventFieldDockSwipeProgress,
    kIOHIDEventFieldDockSwipePositionX,
    kIOHIDEventFieldDockSwipePositionY,
    kIOHIDEventFieldDockSwipeFlavor,
    kIOHIDEventFieldNavigationSwipeMask = IOHIDEventFieldBase(kIOHIDEventTypeNavigationSwipe),
    kIOHIDEventFieldNavigationSwipeMotion,
    kIOHIDEventFieldNavigationSwipeProgress,
    kIOHIDEventFieldNavigationSwipePositionX,
    kIOHIDEventFieldNavigationSwipePositionY,
    kIOHIDEventFieldNavagationSwipeFlavor,
    kIOHIDEventFieldButtonMask = IOHIDEventFieldBase(kIOHIDEventTypeButton),
    kIOHIDEventFieldButtonNumber,
    kIOHIDEventFieldButtonClickCount,
    kIOHIDEventFieldButtonPressure,
    kIOHIDEventFieldButtonState,
    kIOHIDEventFieldPointerX = IOHIDEventFieldBase(kIOHIDEventTypePointer),
    kIOHIDEventFieldPointerY,
    kIOHIDEventFieldPointerZ,
    kIOHIDEventFieldPointerButtonMask,
    kIOHIDEventFieldPointerButtonNumber = kIOHIDEventFieldButtonNumber,
    kIOHIDEventFieldPointerButtonClickCount = kIOHIDEventFieldButtonClickCount,
    kIOHIDEventFieldPointerButtonPressure = kIOHIDEventFieldButtonPressure,
    kIOHIDEventFieldVelocityX = IOHIDEventFieldBase(kIOHIDEventTypeVelocity),
    kIOHIDEventFieldVelocityY,
    kIOHIDEventFieldVelocityZ,
    kIOHIDEventFieldScaleX = IOHIDEventFieldBase(kIOHIDEventTypeScale),
    kIOHIDEventFieldScaleY,
    kIOHIDEventFieldScaleZ,
    kIOHIDEventFieldScrollX = IOHIDEventFieldBase(kIOHIDEventTypeScroll),
    kIOHIDEventFieldScrollY,
    kIOHIDEventFieldScrollZ,
    kIOHIDEventFieldScrollIsPixels,
    kIOHIDEventFieldRotationX = IOHIDEventFieldBase(kIOHIDEventTypeRotation),
    kIOHIDEventFieldRotationY,
    kIOHIDEventFieldRotationZ,
    kIOHIDEventFieldTranslationX = IOHIDEventFieldBase(kIOHIDEventTypeTranslation),
    kIOHIDEventFieldTranslationY,
    kIOHIDEventFieldTranslationZ,
    kIOHIDEventFieldVendorDefinedUsagePage = IOHIDEventFieldBase(kIOHIDEventTypeVendorDefined),
    kIOHIDEventFieldVendorDefinedUsage,
    kIOHIDEventFieldVendorDefinedVersion,
    kIOHIDEventFieldVendorDefinedDataLength,
    kIOHIDEventFieldVendorDefinedData,
    kIOHIDEventFieldIsRelative = IOHIDEventFieldBase(kIOHIDEventTypeNULL),
    kIOHIDEventFieldIsCollection,
    kIOHIDEventFieldIsPixelUnits,
    kIOHIDEventFieldIsCenterOrigin,
    kIOHIDEventFieldIsBuiltIn,
    kIOHIDEventFieldMultiAxisPointerX = IOHIDEventFieldBase(kIOHIDEventTypeMultiAxisPointer),
    kIOHIDEventFieldMultiAxisPointerY,
    kIOHIDEventFieldMultiAxisPointerZ,
    kIOHIDEventFieldMultiAxisPointerRx,
    kIOHIDEventFieldMultiAxisPointerRy,
    kIOHIDEventFieldMultiAxisPointerRz,
    kIOHIDEventFieldMultiAxisPointerButtonMask,
    kIOHIDEventFieldMultiAxisPointerButtonNumber = kIOHIDEventFieldButtonNumber,
    kIOHIDEventFieldMultiAxisPointerButtonClickCount = kIOHIDEventFieldButtonClickCount,
    kIOHIDEventFieldMultiAxisPointerButtonPressure = kIOHIDEventFieldButtonPressure,
};

PS_ENUM(uint32_t, IOHIDDigitizerEventUpdateMask) {
    kIOHIDDigitizerEventUpdateXMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerX),
    kIOHIDDigitizerEventUpdateYMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerY),
    kIOHIDDigitizerEventUpdateZMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerZ),
    kIOHIDDigitizerEventUpdateButtonMaskMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerButtonMask),
    kIOHIDDigitizerEventUpdateTypeMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerType),
    kIOHIDDigitizerEventUpdateIndexMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerIndex),
    kIOHIDDigitizerEventUpdateIdentityMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerIdentity),
    kIOHIDDigitizerEventUpdateEventMaskMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerEventMask),
    kIOHIDDigitizerEventUpdateRangeMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerRange),
    kIOHIDDigitizerEventUpdateTouchMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerTouch),
    kIOHIDDigitizerEventUpdatePressureMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerPressure),
    kIOHIDDigitizerEventUpdateAuxiliaryPressureMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerAuxiliaryPressure),
    kIOHIDDigitizerEventUpdateTwistMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerTwist),
    kIOHIDDigitizerEventUpdateTiltXMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerTiltX),
    kIOHIDDigitizerEventUpdateTiltYMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerTiltY),
    kIOHIDDigitizerEventUpdateAltitudeMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerAltitude),
    kIOHIDDigitizerEventUpdateAzimuthMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerAzimuth),
    kIOHIDDigitizerEventUpdateQualityMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerQuality),
    kIOHIDDigitizerEventUpdateDensityMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerDensity),
    kIOHIDDigitizerEventUpdateIrregularityMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerIrregularity),
    kIOHIDDigitizerEventUpdateMajorRadiusMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerMajorRadius),
    kIOHIDDigitizerEventUpdateMinorRadiusMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerMinorRadius),
    kIOHIDDigitizerEventUpdateCollectionMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerCollection),
    kIOHIDDigitizerEventUpdateCollectionChordMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerCollectionChord),
    kIOHIDDigitizerEventUpdateChildEventMaskMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerChildEventMask),
    kIOHIDDigitizerEventUpdateIsDisplayIntegratedMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerIsDisplayIntegrated),
    kIOHIDDigitizerEventUpdateQualityRadiiAccuracyMask = 1 << IOHIDEventFieldOffsetOf(kIOHIDEventFieldDigitizerQualityRadiiAccuracy),
};

enum { kIOHIDGenericGestureTypeTap = 0, kIOHIDGenericGestureTypeSwipe };

typedef struct IOHIDEventData {
    uint32_t size;
    IOHIDEventType type;
    uint32_t options;
    uint8_t depth;
    uint8_t reserved[3];
} IOHIDEventData;

typedef void (*IOHIDCallback)(void *context, IOReturn result, void *sender);
typedef void (*IOHIDValueCallback)(void *context, IOReturn result, void *sender, IOHIDValueRef value);
typedef void (*IOHIDReportCallback)(void *context, IOReturn result, void *sender, IOHIDReportType type, uint32_t reportID, uint8_t *report,
                                    CFIndex reportLength);
typedef void (*IOHIDDeviceCallback)(void *context, IOReturn result, void *sender, IOHIDDeviceRef device);
typedef void (*IOServiceMatchingCallback)(void *refcon, io_iterator_t iterator);
typedef void (*IOHIDEventSystemClientEventCallback)(void *target, void *refcon, IOHIDEventQueueRef queue, IOHIDEventRef event);
typedef bool (*IOHIDEventSystemEventFilterCallback)(void *target, void *refcon, void *sender, IOHIDEventRef event);
typedef IOReturn (*IOHIDUserDeviceReportCallback)(void *refcon, IOHIDReportType type, uint32_t reportID, uint8_t *report, CFIndex reportLength);
typedef IOReturn (*IOHIDUserDeviceHandleReportAsyncCallback)(void *refcon, IOReturn result);

#endif