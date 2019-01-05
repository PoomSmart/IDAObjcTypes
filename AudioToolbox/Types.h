#ifndef AUDIOTOOLBOX_H_
#define AUDIOTOOLBOX_H_

#import "../Types.h"

typedef struct AudioFormatListItem {
    AudioStreamBasicDescription mASBD;
    AudioChannelLayoutTag mChannelLayoutTag;
} AudioFormatListItem;

#endif