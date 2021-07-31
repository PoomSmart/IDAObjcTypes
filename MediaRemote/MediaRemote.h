#import "../BaseTypes.h"
#import "../Darwin/Types.h"
#import "../CoreFoundation/Types.h"
#import "../Foundation/Types.h"
#import "Types.h"

Boolean MRMediaRemotePickedRouteHasVolumeControl();
Boolean MRMediaRemoteSendCommand(MRMediaRemoteCommand command, NSDictionary *userInfo);
Boolean MRMediaRemoteSetCanBeNowPlayingApplication(Boolean can);

CFArrayRef MRMediaRemoteCopyPickableRoutes();
CFArrayRef MRMediaRemoteCopyPickableRoutesForCategory(NSString *category);

int MRMediaRemoteSelectSourceWithID(CFStringRef identifier);

void MRMediaRemoteBeginRouteDiscovery();
void MRMediaRemoteEndRouteDiscovery();
void MRMediaRemoteGetNowPlayingApplicationIsPlaying(dispatch_queue_t queue, MRMediaRemoteGetNowPlayingApplicationIsPlayingCompletion completion);
void MRMediaRemoteGetNowPlayingApplicationPID(dispatch_queue_t queue, MRMediaRemoteGetNowPlayingApplicationPIDCompletion completion);
void MRMediaRemoteGetNowPlayingInfo(dispatch_queue_t queue, MRMediaRemoteGetNowPlayingInfoCompletion completion);
void MRMediaRemoteKeepAlive();
void MRMediaRemoteRegisterForNowPlayingNotifications(dispatch_queue_t queue);
void MRMediaRemoteSetElapsedTime(double elapsedTime);
void MRMediaRemoteSetElapsedTime(double time);
void MRMediaRemoteSetNowPlayingApplicationOverrideEnabled(Boolean enabled);
void MRMediaRemoteSetNowPlayingInfo(CFDictionaryRef information);
void MRMediaRemoteSetPickedRouteWithPassword(CFStringRef route, CFStringRef password);
void MRMediaRemoteSetPlaybackSpeed(int speed);
void MRMediaRemoteSetRepeatMode(int mode);
void MRMediaRemoteSetShuffleMode(int mode);
void MRMediaRemoteUnregisterForNowPlayingNotifications();