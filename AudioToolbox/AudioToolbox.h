#import "../BaseTypes.h"
#import "../Kernel/Types.h"
#import "../CoreFoundation/Types.h"
#import "Types.h"

OSStatus AudioServicesCreateSystemSoundID(CFURLRef inFileURL, SystemSoundID *outSystemSoundID);
OSStatus AudioServicesDisposeSystemSoundID(SystemSoundID inSystemSoundID);

void AudioServicesStartSystemSound(SystemSoundID inSystemSoundID);
void AudioServicesStopSystemSound(SystemSoundID inSystemSoundID, int64_t unk1);
void AudioServicesPlaySystemSound(SystemSoundID inSystemSoundID);
void AudioServicesPlayAlertSound(SystemSoundID inSystemSoundID);
void AudioServicesPlaySystemSoundWithCompletion(SystemSoundID inSystemSoundID, void (*inCompletionBlock)(void));