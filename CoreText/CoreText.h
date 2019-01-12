#import "../Types.h"
#import "../CoreGraphics/Types.h"
#import "Types.h"

CGPathRef CTFontCreatePathForGlyph(CTFontRef font, CGGlyph glyph, const CGAffineTransform* matrix);
CGPathRef _imp__CTFontCreatePathForGlyph(CTFontRef font, CGGlyph glyph, const CGAffineTransform* matrix);

CGGlyph CTFontGetGlyphWithName(CTFontRef font, CFStringRef glyphName);
CGGlyph _imp__CTFontGetGlyphWithName(CTFontRef font, CFStringRef glyphName);

const CGGlyph* CTRunGetGlyphsPtr(CTRunRef run);
const CGGlyph* _imp__CTRunGetGlyphsPtr(CTRunRef run);
const CGPoint* CTRunGetPositionsPtr(CTRunRef run);
const CGPoint* _imp__CTRunGetPositionsPtr(CTRunRef run);
const CGSize* CTRunGetAdvancesPtr(CTRunRef run);
const CGSize* _imp__CTRunGetAdvancesPtr(CTRunRef run);
const CFIndex* CTRunGetStringIndicesPtr(CTRunRef run);
const CFIndex* _imp__CTRunGetStringIndicesPtr(CTRunRef run);

CTRunStatus CTRunGetStatus(CTRunRef run);
CTRunStatus _imp__CTRunGetStatus(CTRunRef run);

CFRange CTRunGetStringRange(CTRunRef run);
CFRange _imp__CTRunGetStringRange(CTRunRef run);

void CTFontGetVerticalTranslationsForGlyphs(CTFontRef font, const CGGlyph* glyphs, CGSize* translations, CFIndex count);
void _imp__CTFontGetVerticalTranslationsForGlyphs(CTFontRef font, const CGGlyph* glyphs, CGSize* translations, CFIndex count);
void CTRunGetGlyphs(CTRunRef run, CFRange range, CGGlyph* buffer);
void _imp__CTRunGetGlyphs(CTRunRef run, CFRange range, CGGlyph* buffer);
void CTRunGetPositions(CTRunRef run, CFRange range, CGPoint* buffer);
void _imp__CTRunGetPositions(CTRunRef run, CFRange range, CGPoint* buffer);
void CTRunGetAdvances(CTRunRef run, CFRange range, CGSize* buffer);
void _imp__CTRunGetAdvances(CTRunRef run, CFRange range, CGSize* buffer);
void CTRunGetStringIndices(CTRunRef run, CFRange range, CFIndex* buffer);
void _imp__CTRunGetStringIndices(CTRunRef run, CFRange range, CFIndex* buffer);
void CTFrameGetLineOrigins(CTFrameRef frame, CFRange range, CGPoint* origins);
void _imp__CTFrameGetLineOrigins(CTFrameRef frame, CFRange range, CGPoint* origins);
void CTRunDraw(CTRunRef run, CGContextRef context, CFRange range);
void _imp__CTRunDraw(CTRunRef run, CGContextRef context, CFRange range);
void CTFontDrawGlyphs(CTFontRef font, const CGGlyph* glyphs, const CGPoint* positions, size_t count, CGContextRef context);
void _imp__CTFontDrawGlyphs(CTFontRef font, const CGGlyph* glyphs, const CGPoint* positions, size_t count, CGContextRef context);

CTFontRef CTFontCreateWithName(CFStringRef name, CGFloat size, const CGAffineTransform* matrix);
CTFontRef _imp__CTFontCreateWithName(CFStringRef name, CGFloat size, const CGAffineTransform* matrix);
CTFontRef CTFontCreateWithNameAndOptions(CFStringRef name, CGFloat size, const CGAffineTransform* matrix, CTFontOptions options);
CTFontRef _imp__CTFontCreateWithNameAndOptions(CFStringRef name, CGFloat size, const CGAffineTransform* matrix, CTFontOptions options);
CTFontRef CTFontCreateWithFontDescriptor(CTFontDescriptorRef descriptor, CGFloat size, const CGAffineTransform* matrix);
CTFontRef _imp__CTFontCreateWithFontDescriptor(CTFontDescriptorRef descriptor, CGFloat size, const CGAffineTransform* matrix);
CTFontRef CTFontCreateWithFontDescriptorAndOptions(CTFontDescriptorRef descriptor, CGFloat size, const CGAffineTransform* matrix, CTFontOptions options);
CTFontRef _imp__CTFontCreateWithFontDescriptorAndOptions(CTFontDescriptorRef descriptor, CGFloat size, const CGAffineTransform* matrix, CTFontOptions options);
CTFontRef CTFontCreateUIFontForLanguage(CTFontUIFontType uiType, CGFloat size, CFStringRef language);
CTFontRef _imp__CTFontCreateUIFontForLanguage(CTFontUIFontType uiType, CGFloat size, CFStringRef language);
CTFontRef CTFontCreateCopyWithAttributes(CTFontRef font, CGFloat size, const CGAffineTransform* matrix, CTFontDescriptorRef attributes);
CTFontRef _imp__CTFontCreateCopyWithAttributes(CTFontRef font, CGFloat size, const CGAffineTransform* matrix, CTFontDescriptorRef attributes);
CTFontRef CTFontCreateCopyWithSymbolicTraits(CTFontRef font, CGFloat size, const CGAffineTransform* matrix, CTFontSymbolicTraits symTraitValue, CTFontSymbolicTraits symTraitMask);
CTFontRef _imp__CTFontCreateCopyWithSymbolicTraits(CTFontRef font, CGFloat size, const CGAffineTransform* matrix, CTFontSymbolicTraits symTraitValue, CTFontSymbolicTraits symTraitMask);
CTFontRef CTFontCreateCopyWithFamily(CTFontRef font, CGFloat size, const CGAffineTransform* matrix, CFStringRef family);
CTFontRef _imp__CTFontCreateCopyWithFamily(CTFontRef font, CGFloat size, const CGAffineTransform* matrix, CFStringRef family);
CTFontRef CTFontCreateForString(CTFontRef currentFont, CFStringRef string, CFRange range);
CTFontRef _imp__CTFontCreateForString(CTFontRef currentFont, CFStringRef string, CFRange range);

CGRect CTFontGetBoundingRectsForGlyphs(CTFontRef font, CTFontOrientation orientation, const CGGlyph* glyphs, CGRect* boundingRects, CFIndex count);
CGRect _imp__CTFontGetBoundingRectsForGlyphs(CTFontRef font, CTFontOrientation orientation, const CGGlyph* glyphs, CGRect* boundingRects, CFIndex count);

CGSize CTFramesetterSuggestFrameSizeWithConstraints(CTFramesetterRef framesetter, CFRange stringRange, CFDictionaryRef frameAttributes, CGSize constraints, CFRange* fitRange);
CGSize _imp__CTFramesetterSuggestFrameSizeWithConstraints(CTFramesetterRef framesetter, CFRange stringRange, CFDictionaryRef frameAttributes, CGSize constraints, CFRange* fitRange);

CFDictionaryRef CTRunGetAttributes(CTRunRef run);
CFDictionaryRef _imp__CTRunGetAttributes(CTRunRef run);

CFArrayRef CTLineGetGlyphRuns(CTLineRef line);
CFArrayRef _imp__CTLineGetGlyphRuns(CTLineRef line);
CFArrayRef CTFrameGetLines(CTFrameRef frame);
CFArrayRef _imp__CTFrameGetLines(CTFrameRef frame);

CTFrameRef CTFramesetterCreateFrame(CTFramesetterRef framesetter, CFRange stringRange, CGPathRef path, CFDictionaryRef frameAttributes);
CTFrameRef _imp__CTFramesetterCreateFrame(CTFramesetterRef framesetter, CFRange stringRange, CGPathRef path, CFDictionaryRef frameAttributes);

CTFramesetterRef CTFramesetterCreateWithAttributedString(CFAttributedStringRef string);
CTFramesetterRef _imp__CTFramesetterCreateWithAttributedString(CFAttributedStringRef string);

CTTypesetterRef CTFramesetterGetTypesetter(CTFramesetterRef framesetter);
CTTypesetterRef _imp__CTFramesetterGetTypesetter(CTFramesetterRef framesetter);

CFIndex CTRunGetGlyphCount(CTRunRef run);
CFIndex _imp__CTRunGetGlyphCount(CTRunRef run);

double CTFontGetAdvancesForGlyphs(CTFontRef font, CTFontOrientation orientation, const CGGlyph* glyphs, CGSize* advances, CFIndex count);
double _imp__CTFontGetAdvancesForGlyphs(CTFontRef font, CTFontOrientation orientation, const CGGlyph* glyphs, CGSize* advances, CFIndex count);