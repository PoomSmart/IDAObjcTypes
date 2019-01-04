#import "../Types.h"

typedef struct AudioFormatListItem {
    AudioStreamBasicDescription mASBD;
    AudioChannelLayoutTag mChannelLayoutTag;
} AudioFormatListItem;