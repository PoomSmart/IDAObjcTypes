#ifndef CORETEXT_H_
#define CORETEXT_H_

#import "../Types.h"

typedef struct __CTFont *CTFontRef;
typedef struct __CTFontDescriptor *CTFontDescriptorRef;
typedef struct __CTFontCollection *CTFontCollectionRef;
typedef struct __CTRun *CTRunRef;
typedef struct __CTLine *CTLineRef;
typedef struct __CTTypesetter *CTTypesetterRef;
typedef struct __CTFrame *CTFrameRef;
typedef struct __CTFramesetter *CTFramesetterRef;

enum {
    kCTFontOptionsPreferSystemFont = 1 << 2
};

typedef uint32_t CTFontOrientation;

CF_ENUM(uint32_t, CTFontDescriptorOptions) {
    kCTFontDescriptorOptionSystemUIFont = 1 << 1,
    kCTFontDescriptorOptionPreferAppleSystemFont = kCTFontOptionsPreferSystemFont
};

enum {
    kCTFontClassMaskShift = 28
};

CF_ENUM(uint32_t, CTFontSymbolicTraits) {
    kCTFontTraitItalic              = (1 << 0),
    kCTFontTraitBold                = (1 << 1),
    kCTFontTraitExpanded            = (1 << 5),
    kCTFontTraitCondensed           = (1 << 6),
    kCTFontTraitMonoSpace           = (1 << 10),
    kCTFontTraitVertical            = (1 << 11),
    kCTFontTraitUIOptimized         = (1 << 12),
    kCTFontTraitColorGlyphs         = (1 << 13),
    kCTFontTraitComposite           = (1 << 14),
    kCTFontTraitClassMask           = (15U << kCTFontClassMaskShift),
    kCTFontItalicTrait = kCTFontTraitItalic,
    kCTFontBoldTrait = kCTFontTraitBold,
    kCTFontExpandedTrait = kCTFontTraitExpanded,
    kCTFontCondensedTrait = kCTFontTraitCondensed,
    kCTFontMonoSpaceTrait = kCTFontTraitMonoSpace,
    kCTFontVerticalTrait = kCTFontTraitVertical,
    kCTFontUIOptimizedTrait = kCTFontTraitUIOptimized,
    kCTFontColorGlyphsTrait = kCTFontTraitColorGlyphs,
    kCTFontCompositeTrait = kCTFontTraitComposite,
    kCTFontClassMaskTrait = kCTFontTraitClassMask
};

CF_ENUM(uint32_t, CTFontUIFontType) {
    kCTFontUIFontNone = (uint32_t)-1,
    kCTFontUIFontUser = 0,
    kCTFontUIFontUserFixedPitch = 1,
    kCTFontUIFontSystem = 2,
    kCTFontUIFontEmphasizedSystem = 3,
    kCTFontUIFontSmallSystem = 4,
    kCTFontUIFontSmallEmphasizedSystem = 5,
    kCTFontUIFontMiniSystem = 6,
    kCTFontUIFontMiniEmphasizedSystem = 7,
    kCTFontUIFontViews = 8,
    kCTFontUIFontApplication = 9,
    kCTFontUIFontLabel = 10,
    kCTFontUIFontMenuTitle = 11,
    kCTFontUIFontMenuItem = 12,
    kCTFontUIFontMenuItemMark = 13,
    kCTFontUIFontMenuItemCmdKey = 14,
    kCTFontUIFontWindowTitle = 15,
    kCTFontUIFontPushButton = 16,
    kCTFontUIFontUtilityWindowTitle = 17,
    kCTFontUIFontAlertHeader = 18,
    kCTFontUIFontSystemDetail = 19,
    kCTFontUIFontEmphasizedSystemDetail = 20,
    kCTFontUIFontToolbar = 21,
    kCTFontUIFontSmallToolbar = 22,
    kCTFontUIFontMessage = 23,
    kCTFontUIFontPalette = 24,
    kCTFontUIFontToolTip = 25,
    kCTFontUIFontControlContent = 26,

    kCTFontNoFontType = kCTFontUIFontNone,
    kCTFontUserFontType = kCTFontUIFontUser,
    kCTFontUserFixedPitchFontType = kCTFontUIFontUserFixedPitch,
    kCTFontSystemFontType = kCTFontUIFontSystem,
    kCTFontEmphasizedSystemFontType = kCTFontUIFontEmphasizedSystem,
    kCTFontSmallSystemFontType = kCTFontUIFontSmallSystem,
    kCTFontSmallEmphasizedSystemFontType = kCTFontUIFontSmallEmphasizedSystem,
    kCTFontMiniSystemFontType = kCTFontUIFontMiniSystem,
    kCTFontMiniEmphasizedSystemFontType = kCTFontUIFontMiniEmphasizedSystem,
    kCTFontViewsFontType = kCTFontUIFontViews,
    kCTFontApplicationFontType = kCTFontUIFontApplication,
    kCTFontLabelFontType = kCTFontUIFontLabel,
    kCTFontMenuTitleFontType = kCTFontUIFontMenuTitle,
    kCTFontMenuItemFontType = kCTFontUIFontMenuItem,
    kCTFontMenuItemMarkFontType = kCTFontUIFontMenuItemMark,
    kCTFontMenuItemCmdKeyFontType = kCTFontUIFontMenuItemCmdKey,
    kCTFontWindowTitleFontType = kCTFontUIFontWindowTitle,
    kCTFontPushButtonFontType = kCTFontUIFontPushButton,
    kCTFontUtilityWindowTitleFontType = kCTFontUIFontUtilityWindowTitle,
    kCTFontAlertHeaderFontType = kCTFontUIFontAlertHeader,
    kCTFontSystemDetailFontType = kCTFontUIFontSystemDetail,
    kCTFontEmphasizedSystemDetailFontType = kCTFontUIFontEmphasizedSystemDetail,
    kCTFontToolbarFontType = kCTFontUIFontToolbar,
    kCTFontSmallToolbarFontType = kCTFontUIFontSmallToolbar,
    kCTFontMessageFontType = kCTFontUIFontMessage,
    kCTFontPaletteFontType = kCTFontUIFontPalette,
    kCTFontToolTipFontType = kCTFontUIFontToolTip,
    kCTFontControlContentFontType = kCTFontUIFontControlContent
};

CF_ENUM(uint32_t, CTRunStatus) {
    kCTRunStatusNoStatus = 0,
    kCTRunStatusRightToLeft = (1 << 0),
    kCTRunStatusNonMonotonic = (1 << 1),
    kCTRunStatusHasNonIdentityMatrix = (1 << 2)
};

CF_ENUM(uint32_t, CTLineBoundsOptions) {
    kCTLineBoundsExcludeTypographicLeading  = 1 << 0,
    kCTLineBoundsExcludeTypographicShifts   = 1 << 1,
    kCTLineBoundsUseHangingPunctuation      = 1 << 2,
    kCTLineBoundsUseGlyphPathBounds         = 1 << 3,
    kCTLineBoundsUseOpticalBounds           = 1 << 4,
    kCTLineBoundsIncludeLanguageExtents = 1 << 5,
};

CF_ENUM(uint32_t, CTLineTruncationType) {
    kCTLineTruncationStart = 0,
    kCTLineTruncationEnd = 1,
    kCTLineTruncationMiddle = 2
};

typedef CFOptionFlags CTFontOptions;

#endif