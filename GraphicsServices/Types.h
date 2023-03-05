#ifndef GRAPHICSSERVICES_H_
#define GRAPHICSSERVICES_H_

#import "../CoreFoundation/Types.h"
#import "../CoreGraphics/Types.h"

typedef void *GSWindowRef;
typedef struct __GSKeyboard * GSKeyboardRef;

PS_ENUM(int, GSEventType) {
    kGSEventLeftMouseDown    = 1,
    kGSEventLeftMouseUp      = 2,
    kGSEventMouseMoved       = 5,
    kGSEventLeftMouseDragged = 6,

    kGSEventKeyDown = 10,
    kGSEventKeyUp = 11,
    kGSEventModifiersChanged = 12,
    kGSEventSimulatorKeyDown = 13,
    kGSEventHardwareKeyDown = 14,
    kGSEventScrollWheel = 22,
    kGSEventAccelerate = 23,
    kGSEventProximityStateChanged = 24,
    kGSEventDeviceOrientationChanged = 50,
    kGSAppPreferencesChanged = 60,
    kGSEventUserDefaultsDidChange = 60,

    kGSEventResetIdleTimer = 100,
    kGSEventResetIdleDuration = 101,
    kGSEventProcessScript = 200,
    kGSEventDumpUIHierarchy = 500,
    kGSEventDumpScreenContents = 501,

    kGSEventMenuButtonDown = 1000,
    kGSEventMenuButtonUp = 1001,
    kGSEventVolumeChanged = 1006,
    kGSEventVolumeUpButtonDown = 1006,
    kGSEventVolumeUpButtonUp = 1007,
    kGSEventVolumeDownButtonDown = 1008,
    kGSEventVolumeDownButtonUp = 1009,
    kGSEventLockButtonDown = 1010,
    kGSEventLockButtonUp = 1011,
    kGSEventRingerOff = 1012,
    kGSEventRingerOn = 1013,
    kGSEventRingerChanged = 1013,
    kGSEventLockDevice = 1014,
    kGSEventStatusBarMouseDown = 1015,
    kGSEventStatusBarMouseDragged = 1016,
    kGSEventStatusBarMouseUp = 1017,
    kGSEventHeadsetButtonDown = 1018,
    kGSEventHeadsetButtonUp = 1019,
    kGSEventMotionBegin = 1020,
    kGSEventHeadsetAvailabilityChanged = 1021,
    kGSEventMediaKeyDown = 1022,
    kGSEventMediaKeyUp = 1023,

    kGSEventVibrate = 1100,
    kGSEventSetBacklightFactor = 1102,
    kGSEventSetBacklightLevel = 1103,

    kGSEventApplicationLaunch = 2000,
    kGSEventAnotherApplicationFinishedLaunching = 2001,
    kGSEventSetAppThreadPriority = 2002,
    kGSEventApplicationResume = 2003,
    kGSEventApplicationDidEndResumeAnimation = 2004,
    kGSEventApplicationBeginSuspendAnimation = 2005,
    kGSEventApplicationHandleTestURL = 2006,
    kGSEventApplicationSuspendEventsOnly = 2007,
    kGSEventApplicationSuspend = 2008,
    kGSEventApplicationExit = 2009,
    kGSEventQuitTopApplication = 2010,
    kGSEventApplicationUpdateSuspendedSettings = 2011,

    kGSEventHand = 3001,

    kGSEventAccessoryAvailabilityChanged = 4000,
    kGSEventAccessoryKeyStateChanged = 4001,
    kGSEventAccessory = 4002,

    kGSEventOutOfLineDataRequest = 5000,
    kGSEventOutOfLineDataResponse = 5001,

    kGSEventUrgentMemoryWarning = 6000,

    kGSEventShouldRouteToFrontMost = 1<<17
};

PS_ENUM(unsigned, GSEventSubType) {
    kGSEventSubTypeUnknown,
};

PS_ENUM(unsigned, GSEventFlags) {
    kGSEventFlagMaskShift = 1 << 17,
    kGSEventFlagMaskControl = 1 << 18,
    kGSEventFlagMaskAlternate = 1 << 19,
    kGSEventFlagMaskCommand = 1 << 20
};

PS_ENUM(unsigned, GSHandInfoType) {
    kGSHandInfoTypeTouchDown = 0,
    kGSHandInfoTypeTouchDragged = 1,
    kGSHandInfoTypeTouchMoved = 4,
    kGSHandInfoTypeTouchUp = 5,
    kGSHandInfoTypeCancel = 8
};

typedef struct GSAccelerometerInfo {
	float axisX, axisY, axisZ;
} GSAccelerometerInfo;

typedef struct GSDeviceOrientationInfo {
	int orientation;
} GSDeviceOrientationInfo;

typedef struct GSHardwareKeyInfo {
    UniChar keyCode;
    UniChar characterIgnoringModifier;
    UniChar charCode;
    unsigned short characterSet;
    uint16_t characters_length;
    UniChar characters[32];
    uint16_t unmodified_characters_length;
    UniChar unmodified_characters[32];
    int unknown0 : 1;
    int isKeyVariant : 1;
    int unknown2 : 14;
    int unknown10 : 16;
} GSHardwareKeyInfo;

typedef struct GSKeyInfo {
	UniChar keyCode, characterIgnoringModifier, charCode;
	unsigned short characterSet;
	Boolean isKeyRepeating;
} GSKeyInfo;

typedef struct GSPathInfo {
    unsigned char pathIndex;
    unsigned char pathIdentity;
    unsigned char pathProximity;
    CGFloat pathPressure;
    CGFloat pathMajorRadius;
    CGPoint pathLocation;
    GSWindowRef pathWindow;
} GSPathInfo;

typedef struct GSHandInfo {
	GSHandInfoType type;
	short deltaX, deltaY;
	float _0x44;
	float _0x48;
	float width;
	float _0x50;
	float height;
	float _0x58;
	unsigned char _0x5C;
	unsigned char pathInfosCount;
	GSPathInfo pathInfos[0];
} GSHandInfo;

typedef struct GSScrollWheelInfo {
    int deltaY;
    int deltaX;
} GSScrollWheelInfo;

typedef struct GSEventRecord {
    GSEventType type;
    GSEventSubType subtype;
    CGPoint location;
    CGPoint windowLocation;
    int windowContextId;
    uint64_t timestamp;
    GSWindowRef window;
    GSEventFlags flags;
    pid_t senderPID;
    CFIndex infoSize;
#if !TARGET_OS_SIMULATOR && !TARGET_OS_OSX
    uint64_t    HIDtime;
#endif
    uint8_t data[];
} GSEventRecord;

typedef struct __GSEvent *GSEventRef;

#endif