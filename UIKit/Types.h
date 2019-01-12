#ifndef UIKIT_H_
#define UIKIT_H_

#import "../CoreFoundation/Types.h"
#import "../Foundation/Types.h"

typedef struct __UIImage* UIImage;

typedef struct UIEdgeInsets {
    CGFloat top, left, bottom, right;
} UIEdgeInsets;

typedef struct UIOffset {
    CGFloat horizontal, vertical;
} UIOffset;

UIOffset UIOffsetZero;

UIEdgeInsets UIEdgeInsetsZero;

typedef NSString* UIContentSizeCategory;

const NSNotificationName UIApplicationDidReceiveMemoryWarningNotification;
const NSNotificationName UIApplicationBackgroundRefreshStatusDidChangeNotification;
const NSNotificationName UIApplicationDidChangeStatusBarFrameNotification;
const NSNotificationName UIApplicationDidBecomeActiveNotification;

#endif