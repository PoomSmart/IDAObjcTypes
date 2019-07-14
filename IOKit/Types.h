#ifndef IOKIT_H_
#define IOKIT_H_

#define IOHIDEventFieldBase(type) (type << 16)

typedef OSObject* io_object_t;

typedef io_object_t* io_service_t;

typedef UInt32 IOOptionBits;
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

#ifdef __LP64__
typedef mach_vm_address_t IOVirtualAddress;
#else
typedef vm_address_t IOVirtualAddress;
#endif

typedef IOVirtualAddress IOLogicalAddress;

typedef struct __IOHIDEvent* IOHIDEventRef;

const mach_port_t kIOMasterPortDefault;

typedef uint32_t IOHIDEventType; enum IOHIDEventType {
    kIOHIDEventTypeNULL,
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
} IOHIDEventType;

typedef uint32_t IOHIDAccelerometerType; enum IOHIDAccelerometerType {
    kIOHIDAccelerometerTypeNormal   = 0,
    kIOHIDAccelerometerTypeShake    = 1
} IOHIDAccelerometerType;

typedef uint32_t IOHIDSwipeMask; enum IOHIDSwipeMask {
    kIOHIDSwipeUp                             = 0x00000001,
    kIOHIDSwipeDown                           = 0x00000002,
    kIOHIDSwipeLeft                           = 0x00000004,
    kIOHIDSwipeRight                          = 0x00000008,
} IOHIDSwipeMask;

typedef uint32_t IOHIDProximityDetectionMask; enum IOHIDProximityDetectionMask {
    kIOHIDProximityDetectionLargeBodyContact                = 0x0001,
    kIOHIDProximityDetectionLargeBodyFarField               = 0x0002,
    kIOHIDProximityDetectionIrregularObjects                = 0x0004,
    kIOHIDProximityDetectionEdgeStraddling                  = 0x0008,
    kIOHIDProximityDetectionFlatFingerClasp                 = 0x0010,
    kIOHIDProximityDetectionFingerTouch                     = 0x0020,
    kIOHIDProximityDetectionReceiver                        = 0x0040,
    kIOHIDProximityDetectionSmallObjectsHovering            = 0x0080,
    kIOHIDProximityDetectionReceiverCrude                   = 0x0100
} IOHIDProximityDetectionMask;

typedef uint32_t IOHIDDigitizerTransducerType; enum IOHIDDigitizerTransducerType {   
    kIOHIDDigitizerTransducerTypeStylus  = 0x20,
    kIOHIDDigitizerTransducerTypePuck,
    kIOHIDDigitizerTransducerTypeFinger,
    kIOHIDDigitizerTransducerTypeHand
} IOHIDDigitizerTransducerType;

typedef uint32_t IOHIDDigitizerEventMask; enum IOHIDDigitizerEventMask {
    kIOHIDDigitizerEventRange                               = 0x00000001,
    kIOHIDDigitizerEventTouch                               = 0x00000002,
    kIOHIDDigitizerEventPosition                            = 0x00000004,
    kIOHIDDigitizerEventStop                                = 0x00000008,
    kIOHIDDigitizerEventPeak                                = 0x00000010,
    kIOHIDDigitizerEventIdentity                            = 0x00000020,
    kIOHIDDigitizerEventAttribute                           = 0x00000040,
    kIOHIDDigitizerEventCancel                              = 0x00000080,
    kIOHIDDigitizerEventStart                               = 0x00000100,
    kIOHIDDigitizerEventResting                             = 0x00000200,
    kIOHIDDigitizerEventSwipeUp                             = 0x01000000,
    kIOHIDDigitizerEventSwipeDown                           = 0x02000000,
    kIOHIDDigitizerEventSwipeLeft                           = 0x04000000,
    kIOHIDDigitizerEventSwipeRight                          = 0x08000000,
    kIOHIDDigitizerEventSwipeMask                           = 0xFF000000,
} IOHIDDigitizerEventMask;

typedef uint32_t IOHIDEventOptionBits; enum IOHIDEventOptionBits {
    kIOHIDEventOptionIsAbsolute                             = 0x00000001,
    kIOHIDEventOptionIsCollection                           = 0x00000002,
    kIOHIDEventOptionPixelUnits                             = 0x00000004
} IOHIDEventOptionBits;

#ifdef __LP64__
typedef double IOHIDFloat;
#else
typedef float IOHIDFloat;
#endif

typedef struct _IOHID3DPoint {
    IOHIDFloat  x;
    IOHIDFloat  y;
    IOHIDFloat  z;
} IOHID3DPoint;

typedef uint32_t IOHIDEventField; enum IOHIDEventField {
    kIOHIDEventFieldAccelerometerX = IOHIDEventFieldBase(kIOHIDEventTypeAccelerometer),
    kIOHIDEventFieldAccelerometerY,
    kIOHIDEventFieldAccelerometerZ,
    kIOHIDEventFieldAccelerometerType,
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
    kIOHIDEventFieldOrientationRadius   = IOHIDEventFieldBase(kIOHIDEventTypeOrientation),
    kIOHIDEventFieldOrientationAzimuth,
    kIOHIDEventFieldOrientationAltitude,
    kIOHIDEventFieldKeyboardUsagePage = IOHIDEventFieldBase(kIOHIDEventTypeKeyboard),
    kIOHIDEventFieldKeyboardUsage,
    kIOHIDEventFieldKeyboardDown,
    kIOHIDEventFieldKeyboardRepeat,
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
    kIOHIDEventFieldSwipeMask = IOHIDEventFieldBase(kIOHIDEventTypeSwipe),
    kIOHIDEventFieldProgressEventType = IOHIDEventFieldBase(kIOHIDEventTypeProgress),
    kIOHIDEventFieldProgressLevel
} IOHIDEventField;

#endif