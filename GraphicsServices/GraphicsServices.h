#import "../BaseTypes.h"
#import "../Kernel/Types.h"
#import "Types.h"

float GSEventGetDeltaX(GSEventRef event);
float GSEventGetDeltaY(GSEventRef event);
float GSEventAccelerometerAxisX(GSEventRef event);
float GSEventAccelerometerAxisY(GSEventRef event);
float GSEventAccelerometerAxisZ(GSEventRef event);

int GSEventDeviceOrientation(GSEventRef event);

uint64_t GSCurrentEventTimestamp();

UInt8 GSEventGetHardwareKeyboardCountry();
UInt8 GSEventGetHardwareKeyboardType();

UInt32 GSKeyboardGetHWKeyboardType();

Boolean GSEventIsHardwareKeyboardEvent(GSEventRef event);
Boolean GSEventIsHardwareKeyboardAttached(void);
Boolean GSEventIsKeyCharacterEventType(GSEventRef event, UniChar expected_keycode);
Boolean GSEventIsTabKeyEvent(GSEventRef event);
Boolean GSEventIsHandEvent(GSEventRef event);
Boolean GSEventIsChordingHandEvent(GSEventRef event);
Boolean GSEventShouldRouteToFrontMost(GSEventRef event);
Boolean GSEventQueueContainsMouseEvent();

void GSInitialize(void);
void GSEventPopRunLoopMode(CFStringRef mode);
void GSEventPushRunLoopMode(CFStringRef mode);
void GSEventStopModal();
void GSEventRunModal(Boolean disallow_restart);
void GSEventRun();
void GSEventInitialize(Boolean registerPurple);
void GSEventInitializeAsExtension();
void GSEventResetIdleTimer();
void GSEventResetIdleDuration(int a, int b);
void GSEventSetBacklightLevel(float level);
void GSEventSetBacklightFactor(int factor);
void GSEventSetType(GSEventRef event, GSEventType type);
void GSEventSetPathInfoAtIndex(GSEventRef event, GSPathInfo pathInfo, CFIndex index);
// void GSEventSetSensitivity(int (float) sensitivity);
void GSEventSetHardwareKeyboardAttached(Boolean attached);
void GSEventRemoveShouldRouteToFrontMost(GSEventRef event);
void GSEventRotateSimulator(int x);
void GSEventRestoreSensitivity();
void GSEventLockDevice();
void GSEventRegisterEventCallBack(void (*callback)(GSEventRef event));
void GSEventSendKeyEvent(GSEventType event, CFStringRef key);
void GSSendEvent(const GSEventRecord* record, mach_port_t port);
void GSSendSimpleEvent(GSEventType type, mach_port_t port);
void GSSendSystemEvent(const GSEventRecord* record);
void GSSendKeyEvent(GSEventType type, CGPoint windowLocation, CFStringRef characters, CFStringRef unmodifiedCharacters, GSEventFlags modifiers, uint16_t usagePage, unsigned short options7, unsigned short options8);
void GSKeyboardRelease(GSKeyboardRef keyboard);
void GSKeyboardReset(GSKeyboardRef keyboard);

mach_port_t GSGetPurpleApplicationPort();

mach_port_name_t GSCopyPurpleNamedPort(const char *appId);

CGPoint GSEventGetLocationInWindow(GSEventRef event);
CGPoint GSEventGetOuterMostPathPosition(GSEventRef event);
CGPoint GSEventGetInnerMostPathPosition(GSEventRef event);

OSStatus GSKeyTranslate(GSKeyboardRef keyboard, UInt16 virtualKeyCode, UInt16 keyAction, UInt32 modifierKeyState, UInt32 keyboardType, OptionBits keyTranslateOptions, UInt32 *deadKeyState, UniCharCount maxStringLength, UniCharCount *actualStringLength, UniChar unicodeString[]);
OSStatus GSKeyboardTranslateKey(GSKeyboardRef keyboard, UInt16 virtualKeyCode, UInt16 unknown, OptionBits keyTranslateOptions, UniCharCount maxStringLength, UniCharCount *actualStringLength, UniChar unicodeString[], UniCharCount *actualStringLength2, UniChar unicodeString2[]);

CFTypeID GSEventGetTypeID(void);
CFTypeID GSKeyboardGetTypeID(void);

CFAbsoluteTime GSEventGetTimestamp(GSEventRef event);
CFAbsoluteTime GSEventGetHIDTimestamp(GSEventRef event);

CFStringRef GSSystemRootDirectory();
CFStringRef GSEventCopyCharactersIgnoringModifiers(GSEventRef event);
CFStringRef GSEventCopyCharacters(GSEventRef event);
CFStringRef GSKeyboardGetLayout(GSKeyboardRef keyboard);

CFDictionaryRef GSEventCreatePlistRepresentation(GSEventRef event);

GSEventType GSEventGetType(GSEventRef event);
GSEventSubType GSEventGetSubType(GSEventRef event);

GSWindowRef GSEventGetWindow(GSEventRef event);

GSEventRef GSEventCopy(GSEventRef event);
GSEventRef GSEventCreateWithEventRecord(const GSEventRecord* record);
GSEventRef GSEventCreateWithPlist(CFDictionaryRef dictionary);

const GSEventRecord *GSEventRecordGetRecordDataWithPlist(CFDictionaryRef plist);

GSKeyboardRef GSKeyboardCreate(CFStringRef layoutName, UInt32 keyboardType);

GSHandInfo GSEventGetHandInfo(GSEventRef event);

GSPathInfo GSEventGetPathInfoAtIndex(GSEventRef event, CFIndex index);
