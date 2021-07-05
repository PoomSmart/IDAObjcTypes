#ifndef SPRINGBOARD_H_
#define SPRINGBOARD_H_

#import "../CoreFoundation/Types.h"
#import "../Foundation/Types.h"

PS_ENUM(NSInteger, SBApplicationClassicMode) {
    SBApplicationClassicModeNone = 0,
    SBApplicationClassicModePhone = 1,
    SBApplicationClassicModePhone4 = 2,
    SBApplicationClassicModePhone4_7 = 3,
    SBApplicationClassicModePhone5_5 = 4,
    SBApplicationClassicModePhone5_8_Zoomed = 5,
    SBApplicationClassicModePhone5_8 = 6,
    SBApplicationClassicModePhone6_1 = 7,
    SBApplicationClassicModePhone6_5 = 8,
    SBApplicationClassicModePhone6_7 = 9,
    SBApplicationClassicModePad = 10,
    SBApplicationClassicModePad_10_5 = 11,
    SBApplicationClassicModePad_12_9 = 12,
    SBApplicationClassicModePad_11 = 13
};

typedef struct SBIconImageInfo {
    CGSize size;
    CGFloat scale;
    CGFloat continuousCornerRadius;
} SBIconImageInfo;

#endif
