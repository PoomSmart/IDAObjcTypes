#ifndef AUDIOTOOLBOX_H_
#define AUDIOTOOLBOX_H_

#import "../CoreAudio/Types.h"

typedef struct AudioFormatListItem {
    AudioStreamBasicDescription mASBD;
    AudioChannelLayoutTag mChannelLayoutTag;
} AudioFormatListItem;

// Credits: https://github.com/TUNER88/iOSSystemSoundsLibrary
PS_ENUM(UInt32, SystemSoundID) {
    kSystemSoundID_MailSent = 1000,
    kSystemSoundID_MailReceived = 1001,
    kSystemSoundID_VoicemailReceived = 1002,
    kSystemSoundID_SMSReceivedMessage = 1003,
    kSystemSoundID_SMSSentMessage = 1004,
    kSystemSoundID_LowPower = 1006,
    kSystemSoundID_SMSSentTweet = 1016,
    kSystemSoundID_PinKeyPressed = 1057,
    kSystemSoundID_ScreenLocked = 1100,
    kSystemSoundID_ScreenUnlocked = 1101,
    kSystemSoundID_FailedUnlock = 1102,
    kSystemSoundID_ConnectedToPower = 1106,
    kSystemSoundID_RingerSwitchIndication = 1107,
    kSystemSoundID_CameraShutter = 1108,
    kSystemSoundID_ShakeToShuffle = 1109,
    kSystemSoundID_BeginRecording = 1113,
    kSystemSoundID_EndRecording = 1114,
    kSystemSoundID_StartRecording = 1117, // successor of 1113
    kSystemSoundID_StopRecording = 1118, // successor of 1114
    kSystemSoundID_BurstCapture = 1119,
    kSystemSoundID_RingerVibeChanged = 1350,
    kSystemSoundID_SilentVibeChanged = 1351,
    kSystemSoundID_Vibrate = 0x00000FFF,
    kSystemSoundID_UserPreferredAlert = 0x00001000,
    kSystemSoundID_FlashScreen = 0x00000FFE,
    kUserPreferredAlert = kSystemSoundID_UserPreferredAlert
};

PS_ENUM(UInt32, AudioServicesPropertyID) {
    kAudioServicesPropertyIsUISound = 'isui',
    kAudioServicesPropertyCompletePlaybackIfAppDies = 'ifdi',
    kAudioServicesPropertyBeingActive = 'actt' // Research
};

#endif