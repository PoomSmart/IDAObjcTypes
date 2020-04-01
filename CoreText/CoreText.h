#import "../Types.h"
#import "../CoreFoundation/Types.h"
#import "../CoreGraphics/Types.h"
#import "Types.h"

CGAffineTransform CTRunGetTextMatrix(CTRunRef run);

CGPathRef CTFontCreatePathForGlyph(CTFontRef font, CGGlyph glyph, const CGAffineTransform *matrix);
CGPathRef CTFrameGetPath(CTFrameRef frame);

CGFontRef CTFontCopyGraphicsFont(CTFontRef font, CTFontDescriptorRef *attributes);

CGGlyph CTFontGetGlyphWithName(CTFontRef font, CFStringRef glyphName);

const CGGlyph *CTRunGetGlyphsPtr(CTRunRef run);
const CGPoint *CTRunGetPositionsPtr(CTRunRef run);
const CGSize *CTRunGetAdvancesPtr(CTRunRef run);
const CFIndex *CTRunGetStringIndicesPtr(CTRunRef run);

CGFloat CTFontGetSize(CTFontRef font);
CGFloat CTFontGetAscent(CTFontRef font);
CGFloat CTFontGetDescent(CTFontRef font);
CGFloat CTFontGetLeading(CTFontRef font);
CGFloat CTFontGetUnderlinePosition(CTFontRef font);
CGFloat CTFontGetUnderlineThickness(CTFontRef font);
CGFloat CTFontGetSlantAngle(CTFontRef font);
CGFloat CTFontGetCapHeight(CTFontRef font);
CGFloat CTFontGetXHeight(CTFontRef font);
CGFloat CTLineGetOffsetForStringIndex(CTLineRef line, CFIndex charIndex, CGFloat *secondaryOffset);

CGRect CTFontGetBoundingRectsForGlyphs(CTFontRef font, CTFontOrientation orientation, const CGGlyph *glyphs, CGRect *boundingRects, CFIndex count);
CGRect CTFontGetOpticalBoundsForGlyphs(CTFontRef font, const CGGlyph *glyphs, CGRect *boundingRects, CFIndex count, CFOptionFlags options);
CGRect CTFontGetBoundingBox(CTFontRef font);
CGRect CTLineGetBoundsWithOptions(CTLineRef line, CTLineBoundsOptions options);
CGRect CTLineGetImageBounds(CTLineRef line, CGContextRef context);
CGRect CTRunGetImageBounds(CTRunRef run, CGContextRef context, CFRange range);

CGSize CTFramesetterSuggestFrameSizeWithConstraints(CTFramesetterRef framesetter, CFRange stringRange, CFDictionaryRef frameAttributes, CGSize constraints, CFRange *fitRange);

CGAffineTransform CTFontGetMatrix(CTFontRef font);

CFTypeID CTRunGetTypeID(void);
CFTypeID CTFontGetTypeID(void);
CFTypeID CTFontDescriptorGetTypeID(void);

CFRange CTRunGetStringRange(CTRunRef run);
CFRange CTLineGetStringRange(CTLineRef line);
CFRange CTFrameGetStringRange(CTFrameRef frame);
CFRange CTFrameGetVisibleStringRange(CTFrameRef frame);

CFStringEncoding CTFontGetStringEncoding(CTFontRef font);

CFIndex CTRunGetGlyphCount(CTRunRef run);
CFIndex CTFontGetGlyphCount(CTFontRef font);
CFIndex CTFontGetLigatureCaretPositions(CTFontRef font, CGGlyph glyph, CGFloat *positions, CFIndex maxPositions);
CFIndex CTLineGetGlyphCount(CTLineRef line);
CFIndex CTLineGetStringIndexForPosition(CTLineRef line, CGPoint position);

CFTypeRef CTFontDescriptorCopyAttribute(CTFontDescriptorRef descriptor, CFStringRef attribute);
CFTypeRef CTFontDescriptorCopyLocalizedAttribute(CTFontDescriptorRef descriptor, CFStringRef attribute, CFStringRef *language);

CFStringRef CTFontCopyFullName(CTFontRef font);
CFStringRef CTFontCopyPostScriptName(CTFontRef font);
CFStringRef CTFontCopyFamilyName(CTFontRef font);
CFStringRef CTFontCopyDisplayName(CTFontRef font);
CFStringRef CTFontCopyName(CTFontRef font, CFStringRef nameKey);
CFStringRef CTFontCopyLocalizedName(CTFontRef font, CFStringRef nameKey, CFStringRef *actualLanguage);

CFDictionaryRef CTRunGetAttributes(CTRunRef run);
CFDictionaryRef CTFrameGetFrameAttributes(CTFrameRef frame);
CFDictionaryRef CTFontDescriptorCopyAttributes(CTFontDescriptorRef descriptor);
CFDictionaryRef CTFontCopyTraits(CTFontRef font);

CFArrayRef CTLineGetGlyphRuns(CTLineRef line);
CFArrayRef CTFrameGetLines(CTFrameRef frame);
CFArrayRef CTFontCopySupportedLanguages(CTFontRef font);
CFArrayRef CTFontCopyFeatures(CTFontRef font);
CFArrayRef CTFontCollectionCreateMatchingFontDescriptors(CTFontCollectionRef collection);

CFCharacterSetRef CTFontCopyCharacterSet(CTFontRef font);

CTRunStatus CTRunGetStatus(CTRunRef run);

double CTFontGetAdvancesForGlyphs(CTFontRef font, CTFontOrientation orientation, const CGGlyph *glyphs, CGSize *advances, CFIndex count);
double CTLineGetPenOffsetForFlush(CTLineRef line, CGFloat flushFactor, double flushWidth);
double CTLineGetTypographicBounds(CTLineRef line, CGFloat *ascent, CGFloat *descent, CGFloat *leading);
double CTLineGetTrailingWhitespaceWidth(CTLineRef line);
double CTRunGetTypographicBounds(CTRunRef run, CFRange range, CGFloat *ascent, CGFloat *descent, CGFloat *leading);

unsigned int CTFontGetUnitsPerEm(CTFontRef font);

bool CTFontGetGlyphsForCharacters(CTFontRef font, const UniChar *characters, CGGlyph *glyphs, CFIndex count);
bool CTFontIsAppleColorEmoji(CTFontRef font);

void CTFontGetVerticalTranslationsForGlyphs(CTFontRef font, const CGGlyph *glyphs, CGSize *translations, CFIndex count);
void CTFontDrawGlyphs(CTFontRef font, const CGGlyph *glyphs, const CGPoint *positions, size_t count, CGContextRef context);
void CTRunGetGlyphs(CTRunRef run, CFRange range, CGGlyph *buffer);
void CTRunGetPositions(CTRunRef run, CFRange range, CGPoint *buffer);
void CTRunGetAdvances(CTRunRef run, CFRange range, CGSize *buffer);
void CTRunGetStringIndices(CTRunRef run, CFRange range, CFIndex *buffer);
void CTRunGetBaseAdvancesAndOrigins(CTRunRef runRef, CFRange range, CGSize *advancesBuffer, CGPoint *originsBuffer);
void CTRunDraw(CTRunRef run, CGContextRef context, CFRange range);
void CTFrameDraw(CTFrameRef frame, CGContextRef context);
void CTFrameGetLineOrigins(CTFrameRef frame, CFRange range, CGPoint *origins);
void CTLineDraw(CTLineRef line, CGContextRef context);

CTFontRef CTFontCreateWithName(CFStringRef name, CGFloat size, const CGAffineTransform *matrix);
CTFontRef CTFontCreateWithNameAndOptions(CFStringRef name, CGFloat size, const CGAffineTransform *matrix, CTFontOptions options);
CTFontRef CTFontCreateWithFontDescriptor(CTFontDescriptorRef descriptor, CGFloat size, const CGAffineTransform *matrix);
CTFontRef CTFontCreateWithFontDescriptorAndOptions(CTFontDescriptorRef descriptor, CGFloat size, const CGAffineTransform *matrix, CTFontOptions options);
CTFontRef CTFontCreateWithGraphicsFont(CGFontRef graphicsFont, CGFloat size, const CGAffineTransform *matrix, CTFontDescriptorRef attributes);
CTFontRef CTFontCreateUIFontForLanguage(CTFontUIFontType uiType, CGFloat size, CFStringRef language);
CTFontRef CTFontCreateCopyWithAttributes(CTFontRef font, CGFloat size, const CGAffineTransform *matrix, CTFontDescriptorRef attributes);
CTFontRef CTFontCreateCopyWithSymbolicTraits(CTFontRef font, CGFloat size, const CGAffineTransform *matrix, CTFontSymbolicTraits symTraitValue, CTFontSymbolicTraits symTraitMask);
CTFontRef CTFontCreateCopyWithFamily(CTFontRef font, CGFloat size, const CGAffineTransform *matrix, CFStringRef family);
CTFontRef CTFontCreateForString(CTFontRef currentFont, CFStringRef string, CFRange range);

CTFontDescriptorRef CTFontDescriptorCreateMatchingFontDescriptor(CTFontDescriptorRef descriptor, CFSetRef mandatoryAttributes);
CTFontDescriptorRef CTFontDescriptorCreateWithAttributes(CFDictionaryRef attributes);
CTFontDescriptorRef CTFontDescriptorCreateWithAttributesAndOptions(CFDictionaryRef attributes, CTFontDescriptorOptions);
CTFontDescriptorRef CTFontDescriptorCreateWithNameAndSize(CFStringRef name, CGFloat size);
CTFontDescriptorRef CTFontDescriptorCreateWithTextStyle(CFStringRef style, CFStringRef size, CFStringRef language);
CTFontDescriptorRef CTFontDescriptorCreateForUIType(CTFontUIFontType, CGFloat size, CFStringRef language);
CTFontDescriptorRef CTFontDescriptorCreateCopyWithSymbolicTraits(CTFontDescriptorRef original, CTFontSymbolicTraits symTraitValue, CTFontSymbolicTraits symTraitMask);
CTFontDescriptorRef CTFontDescriptorCreateCopyWithAttributes(CTFontDescriptorRef original, CFDictionaryRef attributes);
CTFontDescriptorRef CTFontDescriptorCreateLastResort(void);
CTFontDescriptorRef CTFontCopyFontDescriptor(CTFontRef font);

CTFontSymbolicTraits CTFontGetSymbolicTraits(CTFontRef font);

CTFrameRef CTFramesetterCreateFrame(CTFramesetterRef framesetter, CFRange stringRange, CGPathRef path, CFDictionaryRef frameAttributes);

CTFramesetterRef CTFramesetterCreateWithAttributedString(CFAttributedStringRef string);

CTTypesetterRef CTFramesetterGetTypesetter(CTFramesetterRef framesetter);

CTLineRef CTLineCreateWithAttributedString(CFAttributedStringRef attrString);
CTLineRef CTLineCreateTruncatedLine(CTLineRef line, double width, CTLineTruncationType truncationType, CTLineRef truncationToken);
CTLineRef CTLineCreateJustifiedLine(CTLineRef line, CGFloat justificationFactor, double justificationWidth);
