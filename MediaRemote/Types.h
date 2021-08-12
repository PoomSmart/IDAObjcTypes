#ifndef MEDIAREMOTE_H_
#define MEDIAREMOTE_H_

#import "../CoreFoundation/Types.h"
#import "../Foundation/Types.h"

PS_ENUM(NSInteger, MRMediaRemoteCommand) {
    MRMediaRemoteCommandPlay = 0,
    MRMediaRemoteCommandPause = 1,
    MRMediaRemoteCommandTogglePlayPause = 2,
    MRMediaRemoteCommandStop = 3,
    MRMediaRemoteCommandNextTrack = 4,
    MRMediaRemoteCommandPreviousTrack = 5,
    MRMediaRemoteCommandAdvanceShuffleMode = 6,
    MRMediaRemoteCommandAdvanceRepeatMode = 7,
    MRMediaRemoteCommandBeginFastForward = 8,
    MRMediaRemoteCommandEndFastForward = 9,
    MRMediaRemoteCommandBeginRewind = 10,
    MRMediaRemoteCommandEndRewind = 11,
    MRMediaRemoteCommandRewind15Seconds = 12,
    MRMediaRemoteCommandFastForward15Seconds = 13,
    MRMediaRemoteCommandRewind30Seconds = 14,
    MRMediaRemoteCommandFastForward30Seconds = 15,
    MRMediaRemoteCommandToggleRecord = 16,
    MRMediaRemoteCommandSkipForward = 17,
    MRMediaRemoteCommandSkipBackward = 18,
    MRMediaRemoteCommandChangePlaybackRate = 19,

    MRMediaRemoteCommandRateTrack = 20,
    MRMediaRemoteCommandLikeTrack = 21,
    MRMediaRemoteCommandDislikeTrack = 22,
    MRMediaRemoteCommandBookmarkTrack = 23,

    MRMediaRemoteCommandSeekToPlaybackPosition = 24,
    MRMediaRemoteCommandChangeRepeatMode = 25,
    MRMediaRemoteCommandChangeShuffleMode = 26,
    MRMediaRemoteCommandEnableLanguageOption = 27,
    MRMediaRemoteCommandDisableLanguageOption = 28,

    MRMediaRemoteCommandNextChapter = 100,
    MRMediaRemoteCommandPreviousChapter = 101,
    MRMediaRemoteCommandNextAlbum = 102,
    MRMediaRemoteCommandPreviousAlbum = 103,
    MRMediaRemoteCommandNextPlaylist = 104,
    MRMediaRemoteCommandPreviousPlaylist = 105,

    MRMediaRemoteCommandBanTrack = 106,
    MRMediaRemoteCommandAddTrackToWishList = 107,
    MRMediaRemoteCommandRemoveTrackFromWishList = 108,
    MRMediaRemoteCommandNextInContext = 109,
    MRMediaRemoteCommandPreviousInContext = 110,

    MRMediaRemoteCommandMenu = 111,
    MRMediaRemoteCommandSelect = 112,
    MRMediaRemoteCommandUpArrow = 113,
    MRMediaRemoteCommandDownArrow = 114,
    MRMediaRemoteCommandBacklightOff = 115,

    MRMediaRemoteCommandResetPlaybackTimeout = 116,
    MRMediaRemoteCommandBuyTrack = 117,
    MRMediaRemoteCommandBuyAlbum = 118,
    MRMediaRemoteCommandPreOrderAlbum = 119,
    MRMediaRemoteCommandCancelDownload = 120,
    MRMediaRemoteCommandCreateRadioStation = 121,
    MRMediaRemoteCommandSetPlaybackQueue = 122,
    MRMediaRemoteCommandPresentUpNext = 123,
    MRMediaRemoteCommandSetSleepTimer = 124,
    MRMediaRemoteCommandInsertIntoPlaybackQueue = 125,
    MRMediaRemoteCommandPresentSharingOptions = 126,

    MRMediaRemoteCommandAddNowPlayingItemToLibrary = 127,
    MRMediaRemoteCommandAddItemToLibrary = 128,
    MRMediaRemoteCommandRemoveFromPlaybackQueue = 129,
    MRMediaRemoteCommandReorderPlaybackQueue = 130,
    MRMediaRemoteCommandPlayItemInPlaybackQueue = 131,
    MRMediaRemoteCommandPrepareForSetQueue = 132,
    MRMediaRemoteCommandSetPlaybackSession = 133,
    MRMediaRemoteCommandReshuffle = 134,
    MRMediaRemoteCommandChangeQueueEndAction = 135,
    MRMediaRemoteCommandPreloadPlaybackSession = 136,
    MRMediaRemoteCommandSetPriorityForPlaybackSession = 137,
    MRMediaRemoteCommandDiscardPlaybackSession = 138
};

typedef void (*MRMediaRemoteGetMediaPlaybackVolumeCompletion)(float volume);
typedef void (*MRMediaRemoteGetNowPlayingInfoCompletion)(CFDictionaryRef information);
typedef void (*MRMediaRemoteGetNowPlayingApplicationPIDCompletion)(int PID);
typedef void (*MRMediaRemoteGetNowPlayingApplicationIsPlayingCompletion)(Boolean isPlaying);
typedef void (*MRMediaRemoteGetSavedAVRoutePasswordCompletion)(CFStringRef password);
typedef void (*MRMediaRemoteGetSupportedCommandsCompletion)(CFArrayRef commands);
typedef void (*MRMediaRemoteSetMediaPlaybackVolumeCompletion)(CFErrorRef error);

CFStringRef kMRMediaRemoteNowPlayingInfoDidChangeNotification;
CFStringRef kMRMediaRemoteNowPlayingPlaybackQueueDidChangeNotification;
CFStringRef kMRMediaRemotePickableRoutesDidChangeNotification;
CFStringRef kMRMediaRemoteNowPlayingApplicationDidChangeNotification;
CFStringRef kMRMediaRemoteNowPlayingApplicationIsPlayingDidChangeNotification;
CFStringRef kMRMediaRemoteRouteStatusDidChangeNotification;

CFStringRef kMRMediaRemoteNowPlayingApplicationPIDUserInfoKey;
CFStringRef kMRMediaRemoteNowPlayingApplicationIsPlayingUserInfoKey;
CFStringRef kMRMediaRemoteNowPlayingInfoAlbum;
CFStringRef kMRMediaRemoteNowPlayingInfoArtist;
CFStringRef kMRMediaRemoteNowPlayingInfoArtworkData;
CFStringRef kMRMediaRemoteNowPlayingInfoArtworkMIMEType;
CFStringRef kMRMediaRemoteNowPlayingInfoChapterNumber;
CFStringRef kMRMediaRemoteNowPlayingInfoComposer;
CFStringRef kMRMediaRemoteNowPlayingInfoDuration;
CFStringRef kMRMediaRemoteNowPlayingInfoElapsedTime;
CFStringRef kMRMediaRemoteNowPlayingInfoGenre;
CFStringRef kMRMediaRemoteNowPlayingInfoIsAdvertisement;
CFStringRef kMRMediaRemoteNowPlayingInfoIsBanned;
CFStringRef kMRMediaRemoteNowPlayingInfoIsInWishList;
CFStringRef kMRMediaRemoteNowPlayingInfoIsLiked;
CFStringRef kMRMediaRemoteNowPlayingInfoIsMusicApp;
CFStringRef kMRMediaRemoteNowPlayingInfoPlaybackRate;
CFStringRef kMRMediaRemoteNowPlayingInfoProhibitsSkip;
CFStringRef kMRMediaRemoteNowPlayingInfoQueueIndex;
CFStringRef kMRMediaRemoteNowPlayingInfoRadioStationIdentifier;
CFStringRef kMRMediaRemoteNowPlayingInfoRepeatMode;
CFStringRef kMRMediaRemoteNowPlayingInfoShuffleMode;
CFStringRef kMRMediaRemoteNowPlayingInfoStartTime;
CFStringRef kMRMediaRemoteNowPlayingInfoSupportsFastForward15Seconds;
CFStringRef kMRMediaRemoteNowPlayingInfoSupportsIsBanned;
CFStringRef kMRMediaRemoteNowPlayingInfoSupportsIsLiked;
CFStringRef kMRMediaRemoteNowPlayingInfoSupportsRewind15Seconds;
CFStringRef kMRMediaRemoteNowPlayingInfoTimestamp;
CFStringRef kMRMediaRemoteNowPlayingInfoTitle;
CFStringRef kMRMediaRemoteNowPlayingInfoTotalChapterCount;
CFStringRef kMRMediaRemoteNowPlayingInfoTotalDiscCount;
CFStringRef kMRMediaRemoteNowPlayingInfoTotalQueueCount;
CFStringRef kMRMediaRemoteNowPlayingInfoTotalTrackCount;
CFStringRef kMRMediaRemoteNowPlayingInfoTrackNumber;
CFStringRef kMRMediaRemoteNowPlayingInfoUniqueIdentifier;
CFStringRef kMRMediaRemoteNowPlayingInfoRadioStationHash;
CFStringRef kMRMediaRemoteOptionMediaType;
CFStringRef kMRMediaRemoteOptionSourceID;
CFStringRef kMRMediaRemoteOptionTrackID;
CFStringRef kMRMediaRemoteOptionStationID;
CFStringRef kMRMediaRemoteOptionStationHash;
CFStringRef kMRMediaRemoteRouteDescriptionUserInfoKey;
CFStringRef kMRMediaRemoteRouteStatusUserInfoKey;

#endif
