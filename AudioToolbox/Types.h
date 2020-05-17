#ifndef AUDIOTOOLBOX_H_
#define AUDIOTOOLBOX_H_

#import "../CoreAudio/Types.h"

typedef struct AudioFormatListItem {
    AudioStreamBasicDescription mASBD;
    AudioChannelLayoutTag mChannelLayoutTag;
} AudioFormatListItem;

#endif