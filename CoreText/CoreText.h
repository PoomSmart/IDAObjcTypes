#import "../Types.h"
#import "CoreTextTypes.h"

CGPathRef CTFontCreatePathForGlyph(CTFontRef font, CGGlyph glyph, const struct CGAffineTransform *matrix);

CGGlyph CTFontGetGlyphWithName(CTFontRef font, CFStringRef glyphName);

CTFontRef CTFontCreateWithName(CFStringRef name, CGFloat size, const struct CGAffineTransform *matrix);
CTFontRef CTFontCreateWithNameAndOptions(CFStringRef name, CGFloat size, const struct CGAffineTransform *matrix, CTFontOptions options);
CTFontRef CTFontCreateWithFontDescriptor(CTFontDescriptorRef descriptor, CGFloat size, const struct CGAffineTransform *matrix);
CTFontRef CTFontCreateWithFontDescriptorAndOptions(CTFontDescriptorRef descriptor, CGFloat size, const struct CGAffineTransform *matrix, CTFontOptions options);
CTFontRef CTFontCreateUIFontForLanguage(CTFontUIFontType uiType, CGFloat size, CFStringRef language);
CTFontRef CTFontCreateCopyWithAttributes(CTFontRef font, CGFloat size, const struct CGAffineTransform *matrix, CTFontDescriptorRef attributes);
CTFontRef CTFontCreateCopyWithSymbolicTraits(CTFontRef font, CGFloat size, const struct CGAffineTransform *matrix, CTFontSymbolicTraits symTraitValue, CTFontSymbolicTraits symTraitMask);
CTFontRef CTFontCreateCopyWithFamily(CTFontRef font, CGFloat size, const struct CGAffineTransform *matrix, CFStringRef family);
CTFontRef CTFontCreateForString(CTFontRef currentFont, CFStringRef string, struct CFRange range);

struct CGRect CTFontGetBoundingRectsForGlyphs(CTFontRef font, CTFontOrientation orientation, const CGGlyph *glyphs, struct CGRect *boundingRects, CFIndex count);

double CTFontGetAdvancesForGlyphs(CTFontRef font, CTFontOrientation orientation, const CGGlyph *glyphs, struct CGSize *advances, CFIndex count);

void CTFontGetVerticalTranslationsForGlyphs(CTFontRef font, const CGGlyph *glyphs, struct CGSize *translations, CFIndex count);