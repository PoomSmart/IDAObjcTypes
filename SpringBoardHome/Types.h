#ifndef SPRINGBOARDHOME_H_
#define SPRINGBOARDHOME_H_

#import "../Foundation/Types.h"

PS_ENUM(NSUInteger, SBHScreenType) {
    SBHScreenTypeiPhone5,
    SBHScreenTypeiPhone6,
    SBHScreenTypeiPhone6Plus,
    SBHScreenTypeiPhoneX,
    SBHScreenTypeiPhoneXZoomed,
    SBHScreenTypeiPhoneXsMax,
    SBHScreenTypeiPhoneXsMaxZoomed,
    SBHScreenTypeiPhoneXr,
    SBHScreenTypeiPhoneXrZoomed,
    SBHScreenTypeiPhone12Mini,
    SBHScreenTypeiPhone12MiniZoomed,
    SBHScreenTypeiPhone12,
    SBHScreenTypeiPhone12Zoomed,
    SBHScreenTypeiPhone12ProMax,
    SBHScreenTypeiPhone12ProMaxZoomed,
#ifndef IOS14
    SBHScreenTypeiPhone13Mini,
    SBHScreenTypeiPhone13MiniZoomed,
    SBHScreenTypeiPhone13Pro,
    SBHScreenTypeiPhone13ProZoomed,
    SBHScreenTypeiPhone13ProMax,
    SBHScreenTypeiPhone13ProMaxZoomed,
#endif
#ifndef IOS15
    SBHScreenTypeiPhone14,
    SBHScreenTypeiPhone14Zoomed,
    SBHScreenTypeiPhone14Plus,
    SBHScreenTypeiPhone14PlusZoomed,
    SBHScreenTypeiPhone14Pro,
    SBHScreenTypeiPhone14ProZoomed,
    SBHScreenTypeiPhone14ProMax,
    SBHScreenTypeiPhone14ProMaxZoomed,
#endif
#ifndef IOS16
    SBHScreenTypeiPhone15,
    SBHScreenTypeiPhone15Zoomed,
    SBHScreenTypeiPhone15Plus,
    SBHScreenTypeiPhone15PlusZoomed,
    SBHScreenTypeiPhone15Pro,
    SBHScreenTypeiPhone15ProZoomed,
    SBHScreenTypeiPhone15ProMax,
    SBHScreenTypeiPhone15ProMaxZoomed,
#endif
#ifndef IOS17
    SBHScreenTypeiPhone16,
    SBHScreenTypeiPhone16Zoomed,
    SBHScreenTypeiPhone16Plus,
    SBHScreenTypeiPhone16PlusZoomed,
    SBHScreenTypeiPhone16Pro,
    SBHScreenTypeiPhone16ProZoomed,
    SBHScreenTypeiPhone16ProMax,
    SBHScreenTypeiPhone16ProMaxZoomed,
#endif
    SBHScreenTypeiPad3,
    SBHScreenTypeiPadMini2,
    SBHScreenTypeiPad7,
    SBHScreenTypeiPadPro1,
    SBHScreenTypeiPadPro2,
#ifndef IOS14
    SBHScreenTypeiPadMini6,
#endif
#ifndef IOS16
    SBHScreenTypeiPadMini7,
#endif
    SBHScreenTypeiPadAir4,
    SBHScreenTypeiPadPro3,
    SBHScreenTypeiPadPro3Large,
    SBHScreenTypeiPadPro3LargeZoomed,
};

#endif
