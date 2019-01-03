#import "../Types.h"
#import "CoreFoundationTypes.h"

CFTypeRef CFRetain(CFTypeRef cf);
CFTypeRef CFAutorelease(CFTypeRef arg);
CFTypeRef CFDictionaryGetValue(CFDictionaryRef theDict, const void *key);

CFTypeID CFGetTypeID(CFTypeRef cf);
CFTypeID CFBooleanGetTypeID(void);
CFTypeID CFDictionaryGetTypeID(void);
CFTypeID CFCharacterSetGetTypeID(void);
CFTypeID CFDataGetTypeID(void);
CFTypeID CFStringGetTypeID(void);

double CFStringGetDoubleValue(CFStringRef str);

SInt32 CFStringGetIntValue(CFStringRef str);

CFHashCode CFHash(CFTypeRef cf);

CFComparisonResult CFStringCompare(CFStringRef theString1, CFStringRef theString2, CFStringCompareFlags compareOptions);

struct CFRange CFDataFind(CFDataRef theData, CFDataRef dataToFind, struct CFRange searchRange, CFDataSearchFlags compareOptions);
struct CFRange CFStringFind(CFStringRef theString, CFStringRef stringToFind, CFStringCompareFlags compareOptions);
struct CFRange CFStringGetRangeOfComposedCharactersAtIndex(CFStringRef theString, CFIndex theIndex);
struct CFRange CFStringGetRangeOfCharacterClusterAtIndex(CFStringRef string, CFIndex charIndex, CFStringCharacterClusterType type);

const char *CFStringGetCStringPtr(CFStringRef theString, CFStringEncoding encoding);
const void *CFArrayGetValueAtIndex(CFArrayRef theArray, CFIndex idx);
const void *CFDictionaryGetValue(CFDictionaryRef theDict, const void *key);

const UniChar *CFStringGetCharactersPtr(CFStringRef theString);
UniChar CFStringGetCharacterAtIndex(CFStringRef theString, CFIndex idx);
UniChar CFStringGetCharacterFromInlineBuffer(CFStringInlineBuffer *buf, CFIndex idx);

const UInt8 *CFDataGetBytePtr(CFDataRef theData);
UInt8 *CFDataGetMutableBytePtr(CFMutableDataRef theData);

void CFLog(int32_t level, CFStringRef format, ...);
void CFShow(CFTypeRef obj);
void CFRelease(CFTypeRef cf);
void CFDataGetBytes(CFDataRef theData, CFRange range, UInt8 *buffer);
void CFArrayAppendValue(CFMutableArrayRef mDict, const void *value);
void CFArrayAppendArray(CFMutableArrayRef theArray, CFArrayRef otherArray, struct CFRange otherRange);
void CFPreferencesSetAppValue(CFStringRef key, CFPropertyListRef value, CFStringRef applicationID);
void CFArrayRemoveValueAtIndex(CFMutableArrayRef theArray, CFIndex idx);
void CFNotificationCenterAddObserver(CFNotificationCenterRef center, const void *observer, CFNotificationCallback callBack, CFStringRef name, const void *object, CFNotificationSuspensionBehavior suspensionBehavior);
void CFNotificationCenterPostNotification(CFNotificationCenterRef center, CFNotificationName name, const void *object, CFDictionaryRef userInfo, Boolean deliverImmediately);
void CFCharacterSetAddCharactersInRange(CFMutableCharacterSetRef theSet, struct CFRange theRange);
void CFCharacterSetAddCharactersInString(CFMutableCharacterSetRef theSet, CFStringRef theString);
void CFCharacterSetIntersect(CFMutableCharacterSetRef theSet, CFCharacterSetRef theOtherSet);
void CFCharacterSetInvert(CFMutableCharacterSetRef theSet);
void CFCharacterSetUnion(CFMutableCharacterSetRef theSet, CFCharacterSetRef theOtherSet);
void CFCharacterSetInitInlineBuffer(CFCharacterSetRef cset, CFCharacterSetInlineBuffer *buffer);
void CFDataAppendBytes(CFMutableDataRef theData, const UInt8 *bytes, CFIndex length);
void CFDataDeleteBytes(CFMutableDataRef theData, struct CFRange range);
void CFDataReplaceBytes(CFMutableDataRef theData, struct CFRange range, const UInt8 *newBytes, CFIndex newLength);
void CFDataIncreaseLength(CFMutableDataRef theData, CFIndex extraLength);
void CFDataSetLength(CFMutableDataRef theData, CFIndex length);
void CFDataGetBytes(CFDataRef theData, struct CFRange range, UInt8 *buffer);
void CFDictionaryGetKeysAndValues(CFDictionaryRef theDict, const void **keys, const void **values);
void CFDictionaryApplyFunction(CFDictionaryRef theDict, CFDictionaryApplierFunction applier, void *context);
void CFDictionaryRemoveValue(CFMutableDictionaryRef theDict, const void *key);
void CFDictionarySetValue(CFMutableDictionaryRef theDict, const void *key, const void *value);
void CFDictionaryAddValue(CFMutableDictionaryRef theDict, const void *key, const void *value);
void CFDictionaryRemoveAllValues(CFMutableDictionaryRef theDict);
void CFDictionaryReplaceValue(CFMutableDictionaryRef theDict, const void *key, const void *value);
void CFStringGetLineBounds(CFStringRef theString, struct CFRange range, CFIndex *lineBeginIndex, CFIndex *lineEndIndex, CFIndex *contentsEndIndex);
void CFStringDelete(CFMutableStringRef theString, struct CFRange range);
void CFStringFold(CFMutableStringRef theString, CFStringCompareFlags theFlags, CFLocaleRef theLocale);
void CFStringNormalize(CFMutableStringRef theString, CFStringNormalizationForm theForm);
void CFStringCapitalize(CFMutableStringRef theString, CFLocaleRef locale);
void CFStringUppercase(CFMutableStringRef theString, CFLocaleRef locale);
void CFStringLowercase(CFMutableStringRef theString, CFLocaleRef locale);
void CFStringInsert(CFMutableStringRef str, CFIndex idx, CFStringRef insertedStr);
void CFStringAppend(CFMutableStringRef theString, CFStringRef appendedString);
void CFStringAppendCharacters(CFMutableStringRef theString, const UniChar *chars, CFIndex numChars);
void CFStringAppendCString(CFMutableStringRef theString, const char *cStr, CFStringEncoding encoding);
void CFStringAppendFormat(CFMutableStringRef theString, CFDictionaryRef formatOptions, CFStringRef format, ...);
void CFStringAppendFormatAndArguments(CFMutableStringRef theString, CFDictionaryRef formatOptions, CFStringRef format, va_list arguments);
void CFStringPad(CFMutableStringRef theString, CFStringRef padString, CFIndex length, CFIndex indexIntoPad);
void CFStringReplace(CFMutableStringRef theString, struct CFRange range, CFStringRef replacement);
void CFStringReplaceAll(CFMutableStringRef theString, CFStringRef replacement);
void CFStringSetExternalCharactersNoCopy(CFMutableStringRef theString, UniChar *chars, CFIndex length, CFIndex capacity);
void CFStringTrim(CFMutableStringRef theString, CFStringRef trimString);
void CFStringTrimWhitespace(CFMutableStringRef theString);
void CFStringGetCharacters(CFStringRef theString, struct CFRange range, UniChar *buffer);
void CFStringInitInlineBuffer(CFStringRef str, CFStringInlineBuffer *buf, struct CFRange range);
void CFStringGetParagraphBounds(CFStringRef string, struct CFRange range, CFIndex *parBeginIndex, CFIndex *parEndIndex, CFIndex *contentsEndIndex);

CFErrorRef CFErrorCreate(CFAllocatorRef allocator, CFErrorDomain domain, CFIndex code, CFDictionaryRef userInfo);
CFErrorRef CFErrorCreateWithUserInfoKeysAndValues(CFAllocatorRef allocator, CFErrorDomain domain, CFIndex code, const void *const *userInfoKeys, const void *const *userInfoValues, CFIndex numUserInfoValues);

CFDataRef CFDataCreate(CFAllocatorRef allocator, const UInt8 *bytes, CFIndex length);
CFDataRef CFDataCreateCopy(CFAllocatorRef allocator, CFDataRef theData);
CFDataRef CFDataCreateWithBytesNoCopy(CFAllocatorRef allocator, const UInt8 *bytes, CFIndex length, CFAllocatorRef bytesDeallocator);
CFDataRef CFCharacterSetCreateBitmapRepresentation(CFAllocatorRef alloc, CFCharacterSetRef theSet);

CFMutableDataRef CFDataCreateMutable(CFAllocatorRef allocator, CFIndex capacity);
CFMutableDataRef CFDataCreateMutableCopy(CFAllocatorRef allocator, CFIndex capacity, CFDataRef theData);

CFMutableCharacterSetRef CFCharacterSetCreateMutable(CFAllocatorRef alloc);
CFMutableCharacterSetRef CFCharacterSetCreateMutableCopy(CFAllocatorRef alloc, CFCharacterSetRef theSet);

CFCharacterSetRef CFCharacterSetCreateCopy(CFAllocatorRef alloc, CFCharacterSetRef theSet);
CFCharacterSetRef CFCharacterSetCreateInvertedSet(CFAllocatorRef alloc, CFCharacterSetRef theSet);
CFCharacterSetRef CFCharacterSetCreateWithCharactersInRange(CFAllocatorRef alloc, struct CFRange theRange);
CFCharacterSetRef CFCharacterSetCreateWithCharactersInString(CFAllocatorRef alloc, CFStringRef theString);
CFCharacterSetRef CFCharacterSetCreateWithBitmapRepresentation(CFAllocatorRef alloc, CFDataRef theData);
CFCharacterSetRef CFCharacterSetGetPredefined(CFCharacterSetPredefinedSet theSetIdentifier);

CFAbsoluteTime CFAbsoluteTimeGetCurrent(void);

CFNotificationCenterRef CFNotificationCenterGetDarwinNotifyCenter(void);
CFNotificationCenterRef CFNotificationCenterGetLocalCenter(void);

CFPropertyListRef CFPreferencesCopyValue(CFStringRef key, CFStringRef applicationID, CFStringRef userName, CFStringRef hostName);
CFPropertyListRef CFPreferencesCopyAppValue(CFStringRef key, CFStringRef applicationID);
CFPropertyListRef CFPropertyListCreateDeepCopy(CFAllocatorRef allocator, CFPropertyListRef propertyList, CFOptionFlags mutabilityOption);

CFDictionaryRef CFDictionaryCreate(CFAllocatorRef allocator, const void **keys, const void **values, CFIndex numValues, const CFDictionaryKeyCallBacks *keyCallBacks, const CFDictionaryValueCallBacks *valueCallBacks);
CFDictionaryRef CFDictionaryCreateCopy(CFAllocatorRef allocator, CFDictionaryRef theDict);

CFMutableDictionaryRef CFDictionaryCreateMutable(CFAllocatorRef allocator, CFIndex capacity, const CFDictionaryKeyCallBacks *keyCallBacks, const CFDictionaryValueCallBacks *valueCallBacks);
CFMutableDictionaryRef CFDictionaryCreateMutableCopy(CFAllocatorRef allocator, CFIndex capacity, CFDictionaryRef theDict);

CFMutableArrayRef CFArrayCreateMutable(CFAllocatorRef allocator, CFIndex capacity, const CFArrayCallBacks *callBacks);

CFArrayRef CFStringCreateArrayBySeparatingStrings(CFAllocatorRef alloc, CFStringRef theString, CFStringRef separatorString);
CFArrayRef CFStringCreateArrayWithFindResults(CFAllocatorRef alloc, CFStringRef theString, CFStringRef stringToFind, struct CFRange rangeToSearch, CFStringCompareFlags compareOptions);

CFMutableStringRef CFStringCreateMutable(CFAllocatorRef alloc, CFIndex maxLength);
CFMutableStringRef CFStringCreateMutableCopy(CFAllocatorRef alloc, CFIndex maxLength, CFStringRef theString);
CFMutableStringRef CFStringCreateMutableWithExternalCharactersNoCopy(CFAllocatorRef alloc, UniChar *chars, CFIndex numChars, CFIndex capacity, CFAllocatorRef externalCharactersAllocator);

CFStringRef CFStringCreateWithCString(CFAllocatorRef alloc, const char *cStr, CFStringEncoding encoding);
CFStringRef CFCopyDescription(CFTypeRef cf);
CFStringRef CFCopyTypeIDDescription(CFTypeID type_id);
CFStringRef CFStringCreateWithBytes(CFAllocatorRef alloc, const UInt8 *bytes, CFIndex numBytes, CFStringEncoding encoding, Boolean isExternalRepresentation);
CFStringRef CFStringCreateWithBytesNoCopy(CFAllocatorRef alloc, const UInt8 *bytes, CFIndex numBytes, CFStringEncoding encoding, Boolean isExternalRepresentation, CFAllocatorRef contentsDeallocator);
CFStringRef CFStringCreateByCombiningStrings(CFAllocatorRef alloc, CFArrayRef theArray, CFStringRef separatorString);
CFStringRef CFStringCreateCopy(CFAllocatorRef alloc, CFStringRef theString);
CFStringRef CFStringCreateFromExternalRepresentation(CFAllocatorRef alloc, CFDataRef data, CFStringEncoding encoding);
CFStringRef CFStringCreateWithCharacters(CFAllocatorRef alloc, const UniChar *chars, CFIndex numChars);
CFStringRef CFStringCreateWithCharactersNoCopy(CFAllocatorRef alloc, const UniChar *chars, CFIndex numChars, CFAllocatorRef contentsDeallocator);
CFStringRef CFStringCreateWithFormat(CFAllocatorRef alloc, CFDictionaryRef formatOptions, CFStringRef format, ...);
CFStringRef CFStringCreateWithFormatAndArguments(CFAllocatorRef alloc, CFDictionaryRef formatOptions, CFStringRef format, va_list arguments);
CFStringRef CFStringCreateWithCString(CFAllocatorRef alloc, const char *cStr, CFStringEncoding encoding);
CFStringRef CFStringCreateWithCStringNoCopy(CFAllocatorRef alloc, const char *cStr, CFStringEncoding encoding, CFAllocatorRef contentsDeallocator);
CFStringRef CFStringCreateWithSubstring(CFAllocatorRef alloc, CFStringRef str, struct CFRange range);

Boolean CFEqual(CFTypeRef cf1, CFTypeRef cf2);
Boolean CFBooleanGetValue(CFBooleanRef boolean);
Boolean CFArrayContainsValue(CFArrayRef theArray, struct CFRange range, const void *value);
Boolean CFPreferencesAppSynchronize(CFStringRef appID);
Boolean CFPreferencesGetAppBooleanValue(CFStringRef key, CFStringRef applicationID, Boolean *keyExistsAndHasValidFormat);
Boolean CFCharacterSetHasMemberInPlane(CFCharacterSetRef theSet, CFIndex thePlane);
Boolean CFCharacterSetIsCharacterMember(CFCharacterSetRef theSet, UniChar theChar);
Boolean CFCharacterSetIsLongCharacterMember(CFCharacterSetRef theSet, UTF32Char theChar);
Boolean CFCharacterSetIsSupersetOfSet(CFCharacterSetRef theSet, CFCharacterSetRef theOtherset);
Boolean CFDictionaryContainsKey(CFDictionaryRef theDict, const void *key);
Boolean CFDictionaryContainsValue(CFDictionaryRef theDict, const void *value);
Boolean CFDictionaryGetValueIfPresent(CFDictionaryRef theDict, const void *key, const void **value);
Boolean CFStringFindCharacterFromSet(CFStringRef theString, CFCharacterSetRef theSet, struct CFRange rangeToSearch, CFStringCompareFlags searchOptions, struct CFRange *result);
Boolean CFStringFindWithOptions(CFStringRef theString, CFStringRef stringToFind, struct CFRange rangeToSearch, CFStringCompareFlags searchOptions, struct CFRange *result);
Boolean CFStringFindWithOptionsAndLocale(CFStringRef theString, CFStringRef stringToFind, struct CFRange rangeToSearch, CFStringCompareFlags searchOptions, CFLocaleRef locale, struct CFRange *result);
Boolean CFStringHasPrefix(CFStringRef theString, CFStringRef prefix);
Boolean CFStringHasSuffix(CFStringRef theString, CFStringRef suffix);
Boolean CFStringTransform(CFMutableStringRef string, struct CFRange *range, CFStringRef transform, Boolean reverse);
Boolean CFStringGetCString(CFStringRef theString, char *buffer, CFIndex bufferSize, CFStringEncoding encoding);
Boolean _CFExecutableLinkedOnOrAfter(CFSystemVersion version);

CFIndex CFArrayGetCount(const void *dict);
CFIndex CFPreferencesGetAppIntegerValue(CFStringRef key, CFStringRef applicationID, Boolean *keyExistsAndHasValidFormat);
CFIndex CFDataGetLength(CFDataRef theData);
CFIndex CFDictionaryGetCount(CFDictionaryRef theDict);
CFIndex CFDictionaryGetCountOfKey(CFDictionaryRef theDict, const void *key);
CFIndex CFDictionaryGetCountOfValue(CFDictionaryRef theDict, const void *value);
CFIndex CFGetRetainCount(CFTypeRef cf);
CFIndex CFStringFindAndReplace(CFMutableStringRef theString, CFStringRef stringToFind, CFStringRef replacementString, struct CFRange rangeToSearch, CFStringCompareFlags compareOptions);
CFIndex CFStringGetLength(CFStringRef theString);
CFIndex CFStringGetBytes(CFStringRef theString, struct CFRange range, CFStringEncoding encoding, UInt8 lossByte, Boolean isExternalRepresentation, UInt8 *buffer, CFIndex maxBufLen, CFIndex *usedBufLen);
CFIndex CFStringGetMaximumSizeForEncoding(CFIndex length, CFStringEncoding encoding);