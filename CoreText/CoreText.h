#import "../Types.h"
#import "CoreTextTypes.h"

CGPathRef CTFontCreatePathForGlyph(CTFontRef font, CGGlyph glyph, const struct CGAffineTransform *matrix);

CGGlyph CTFontGetGlyphWithName(CTFontRef font, CFStringRef glyphName);

const CGGlyph *CTRunGetGlyphsPtr(CTRunRef run);
const struct CGPoint *CTRunGetPositionsPtr(CTRunRef run);
const struct CGSize *CTRunGetAdvancesPtr(CTRunRef run);
const CFIndex *CTRunGetStringIndicesPtr(CTRunRef run);

CTRunStatus CTRunGetStatus(CTRunRef run);

struct CFRange CTRunGetStringRange(CTRunRef run);

void CTFontGetVerticalTranslationsForGlyphs(CTFontRef font, const CGGlyph *glyphs, struct CGSize *translations, CFIndex count);
void CTRunGetGlyphs(CTRunRef run, struct CFRange range, CGGlyph *buffer);
void CTRunGetPositions(CTRunRef run, struct CFRange range, struct CGPoint *buffer);
void CTRunGetAdvances(CTRunRef run, struct CFRange range, struct CGSize *buffer);
void CTRunGetStringIndices(CTRunRef run, struct CFRange range, CFIndex *buffer);
void CTFrameGetLineOrigins(CTFrameRef frame, struct CFRange range, struct CGPoint *origins);
void CTRunDraw(CTRunRef run, CGContextRef context, struct CFRange range);
void CTFontDrawGlyphs(CTFontRef font, const CGGlyph *glyphs, const struct CGPoint *positions, size_t count, CGContextRef context);

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

struct CGSize CTFramesetterSuggestFrameSizeWithConstraints(CTFramesetterRef framesetter, struct CFRange stringRange, CFDictionaryRef frameAttributes, struct CGSize constraints, struct CFRange *fitRange);

CFDictionaryRef CTRunGetAttributes(CTRunRef run);

CFArrayRef CTLineGetGlyphRuns(CTLineRef line);
CFArrayRef CTFrameGetLines(CTFrameRef frame);

CTFrameRef CTFramesetterCreateFrame(CTFramesetterRef framesetter, struct CFRange stringRange, CGPathRef path, CFDictionaryRef frameAttributes);

CTFramesetterRef CTFramesetterCreateWithAttributedString(CFAttributedStringRef string);

CTTypesetterRef CTFramesetterGetTypesetter(CTFramesetterRef framesetter);

CFIndex CTRunGetGlyphCount(CTRunRef run);

double CTFontGetAdvancesForGlyphs(CTFontRef font, CTFontOrientation orientation, const CGGlyph *glyphs, struct CGSize *advances, CFIndex count);