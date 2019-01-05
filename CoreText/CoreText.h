#import "../Types.h"
#import "../CoreGraphics/Types.h"
#import "Types.h"

CGPathRef CTFontCreatePathForGlyph(CTFontRef font, CGGlyph glyph, const CGAffineTransform *matrix);

CGGlyph CTFontGetGlyphWithName(CTFontRef font, CFStringRef glyphName);

const CGGlyph *CTRunGetGlyphsPtr(CTRunRef run);
const CGPoint *CTRunGetPositionsPtr(CTRunRef run);
const CGSize *CTRunGetAdvancesPtr(CTRunRef run);
const CFIndex *CTRunGetStringIndicesPtr(CTRunRef run);

CTRunStatus CTRunGetStatus(CTRunRef run);

CFRange CTRunGetStringRange(CTRunRef run);

void CTFontGetVerticalTranslationsForGlyphs(CTFontRef font, const CGGlyph *glyphs, CGSize *translations, CFIndex count);
void CTRunGetGlyphs(CTRunRef run, CFRange range, CGGlyph *buffer);
void CTRunGetPositions(CTRunRef run, CFRange range, CGPoint *buffer);
void CTRunGetAdvances(CTRunRef run, CFRange range, CGSize *buffer);
void CTRunGetStringIndices(CTRunRef run, CFRange range, CFIndex *buffer);
void CTFrameGetLineOrigins(CTFrameRef frame, CFRange range, CGPoint *origins);
void CTRunDraw(CTRunRef run, CGContextRef context, CFRange range);
void CTFontDrawGlyphs(CTFontRef font, const CGGlyph *glyphs, const CGPoint *positions, size_t count, CGContextRef context);

CTFontRef CTFontCreateWithName(CFStringRef name, CGFloat size, const CGAffineTransform *matrix);
CTFontRef CTFontCreateWithNameAndOptions(CFStringRef name, CGFloat size, const CGAffineTransform *matrix, CTFontOptions options);
CTFontRef CTFontCreateWithFontDescriptor(CTFontDescriptorRef descriptor, CGFloat size, const CGAffineTransform *matrix);
CTFontRef CTFontCreateWithFontDescriptorAndOptions(CTFontDescriptorRef descriptor, CGFloat size, const CGAffineTransform *matrix, CTFontOptions options);
CTFontRef CTFontCreateUIFontForLanguage(CTFontUIFontType uiType, CGFloat size, CFStringRef language);
CTFontRef CTFontCreateCopyWithAttributes(CTFontRef font, CGFloat size, const CGAffineTransform *matrix, CTFontDescriptorRef attributes);
CTFontRef CTFontCreateCopyWithSymbolicTraits(CTFontRef font, CGFloat size, const CGAffineTransform *matrix, CTFontSymbolicTraits symTraitValue, CTFontSymbolicTraits symTraitMask);
CTFontRef CTFontCreateCopyWithFamily(CTFontRef font, CGFloat size, const CGAffineTransform *matrix, CFStringRef family);
CTFontRef CTFontCreateForString(CTFontRef currentFont, CFStringRef string, CFRange range);

CGRect CTFontGetBoundingRectsForGlyphs(CTFontRef font, CTFontOrientation orientation, const CGGlyph *glyphs, CGRect *boundingRects, CFIndex count);

CGSize CTFramesetterSuggestFrameSizeWithConstraints(CTFramesetterRef framesetter, CFRange stringRange, CFDictionaryRef frameAttributes, CGSize constraints, CFRange *fitRange);

CFDictionaryRef CTRunGetAttributes(CTRunRef run);

CFArrayRef CTLineGetGlyphRuns(CTLineRef line);
CFArrayRef CTFrameGetLines(CTFrameRef frame);

CTFrameRef CTFramesetterCreateFrame(CTFramesetterRef framesetter, CFRange stringRange, CGPathRef path, CFDictionaryRef frameAttributes);

CTFramesetterRef CTFramesetterCreateWithAttributedString(CFAttributedStringRef string);

CTTypesetterRef CTFramesetterGetTypesetter(CTFramesetterRef framesetter);

CFIndex CTRunGetGlyphCount(CTRunRef run);

double CTFontGetAdvancesForGlyphs(CTFontRef font, CTFontOrientation orientation, const CGGlyph *glyphs, CGSize *advances, CFIndex count);