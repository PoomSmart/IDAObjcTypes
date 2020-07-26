#import "../BaseTypes.h"
#import "../Kernel/Types.h"
#import "../CoreFoundation/Types.h"
#import "Types.h"

OSStatus AudioServicesCreateSystemSoundID(CFURLRef inFileURL, SystemSoundID *outSystemSoundID);
OSStatus AudioServicesDisposeSystemSoundID(SystemSoundID inSystemSoundID);
OSStatus AudioServicesSetProperty(AudioServicesPropertyID inPropertyID, UInt32 inSpecifierSize, const void *inSpecifier, UInt32 inPropertyDataSize, const void *inPropertyData);

void AudioServicesStartSystemSound(SystemSoundID inSystemSoundID);
void AudioServicesStopSystemSound(SystemSoundID inSystemSoundID, int64_t unk1);
void AudioServicesPlaySystemSound(SystemSoundID inSystemSoundID);
void AudioServicesPlayAlertSound(SystemSoundID inSystemSoundID);
void AudioServicesPlaySystemSoundWithCompletion(SystemSoundID inSystemSoundID, void (*inCompletionBlock)(void));