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

typedef NSInteger UIUserInterfaceSizeClass; enum UIUserInterfaceSizeClass {
    UIUserInterfaceSizeClassUnspecified = 0,
    UIUserInterfaceSizeClassCompact     = 1,
    UIUserInterfaceSizeClassRegular     = 2,
} UIUserInterfaceSizeClass;

typedef NSInteger UIUserInterfaceStyle; enum UIUserInterfaceStyle {
    UIUserInterfaceStyleUnspecified,
    UIUserInterfaceStyleLight,
    UIUserInterfaceStyleDark,
} UIUserInterfaceStyle;

UIOffset UIOffsetZero;

UIEdgeInsets UIEdgeInsetsZero;

typedef NSString* UIContentSizeCategory;

extern const float UITableCellDefaultFontSize;
extern const float UITableViewCellDefaultFontSize;
extern const float UIWebViewGrowsAndShrinksToFitHeight;
extern const float UIWebViewScalesToFitScale;
extern const float UIWebViewStandardViewportWidth;

extern NSString * const UIWindowDidMoveToScreenNotification;
extern NSString * const UIWindowDidRotateNotification;
extern NSString * const UIWindowNewScreenUserInfoKey;
extern NSString * const UIWindowWillRotateNotification;
extern NSString * const UIKeyboardIsLocalUserInfoKey;
extern NSString * const UIKeyInputPageUp;
extern NSString * const UIKeyInputPageDown;

const NSNotificationName UIApplicationDidReceiveMemoryWarningNotification;
const NSNotificationName UIApplicationBackgroundRefreshStatusDidChangeNotification;
const NSNotificationName UIApplicationDidChangeStatusBarFrameNotification;
const NSNotificationName UIApplicationDidBecomeActiveNotification;

#endif
