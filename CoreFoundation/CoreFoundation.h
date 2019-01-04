#import "../Types.h"
#import "CoreFoundationTypes.h"

double CFStringGetDoubleValue(CFStringRef str);

bool CFUniCharIsMemberOf(UTF32Char theChar, uint32_t charset);

SInt32 CFStringGetIntValue(CFStringRef str);

const char *CFStringGetCStringPtr(CFStringRef theString, CFStringEncoding encoding);
const void *CFArrayGetValueAtIndex(CFArrayRef theArray, CFIndex idx);
const void *CFDictionaryGetValue(CFDictionaryRef theDict, const void *key);
const void *CFSetGetValue(CFSetRef theSet, const void *value);
void *CFAllocatorAllocate(CFAllocatorRef allocator, CFIndex size, CFOptionFlags hint);
void *CFAllocatorReallocate(CFAllocatorRef allocator, void *ptr, CFIndex newsize, CFOptionFlags hint);
void *CFBundleGetFunctionPointerForName(CFBundleRef bundle, CFStringRef functionName);

const UniChar *CFStringGetCharactersPtr(CFStringRef theString);
UniChar CFStringGetCharacterAtIndex(CFStringRef theString, CFIndex idx);
UniChar CFStringGetCharacterFromInlineBuffer(CFStringInlineBuffer *buf, CFIndex idx);

const UInt8 *CFDataGetBytePtr(CFDataRef theData);
const UInt8 *CFReadStreamGetBuffer(CFReadStreamRef stream, CFIndex maxBytesToRead, CFIndex *numBytesRead);
UInt8 *CFDataGetMutableBytePtr(CFMutableDataRef theData);

void CFLog(int32_t level, CFStringRef format, ...);
void CFShow(CFTypeRef obj);
void CFRelease(CFTypeRef cf);
void CFArrayAppendValue(CFMutableArrayRef mDict, const void *value);
void CFArrayAppendArray(CFMutableArrayRef theArray, CFArrayRef otherArray, CFRange otherRange);
void CFArrayRemoveValueAtIndex(CFMutableArrayRef theArray, CFIndex idx);
void CFArrayReplaceValues(CFMutableArrayRef theArray, CFRange range, const void **newValues, CFIndex newCount);
void CFArrayInsertValueAtIndex(CFMutableArrayRef theArray, CFIndex idx, const void *value);
void CFArrayGetValues(CFArrayRef theArray, CFRange range, const void **values);
void CFArraySetValueAtIndex(CFMutableArrayRef theArray, CFIndex idx, const void *value);
void CFArraySortValues(CFMutableArrayRef theArray, CFRange range, CFComparatorFunction comparator, void *context);
void CFArrayRemoveAllValues(CFMutableArrayRef theArray);
void CFArrayApplyFunction(CFArrayRef theArray, CFRange range, CFArrayApplierFunction applier, void *context);
void CFPreferencesSetValue(CFStringRef key, CFPropertyListRef value, CFStringRef applicationID, CFStringRef userName, CFStringRef hostName);
void CFPreferencesSetAppValue(CFStringRef key, CFPropertyListRef value, CFStringRef applicationID);
void CFPreferencesSetMultiple(CFDictionaryRef keysToSet, CFArrayRef keysToRemove, CFStringRef applicationID, CFStringRef userName, CFStringRef hostName);
void CFPreferencesAddSuitePreferencesToApp(CFStringRef applicationID, CFStringRef suiteID);
void CFPreferencesRemoveSuitePreferencesFromApp(CFStringRef applicationID, CFStringRef suiteID);
void CFNotificationCenterAddObserver(CFNotificationCenterRef center, const void *observer, CFNotificationCallback callBack, CFStringRef name, const void *object, CFNotificationSuspensionBehavior suspensionBehavior);
void CFNotificationCenterPostNotification(CFNotificationCenterRef center, CFNotificationName name, const void *object, CFDictionaryRef userInfo, Boolean deliverImmediately);
void CFNotificationCenterRemoveObserver(CFNotificationCenterRef center, const void *observer, CFNotificationName name, const void *object);
void CFCharacterSetAddCharactersInRange(CFMutableCharacterSetRef theSet, CFRange theRange);
void CFCharacterSetAddCharactersInString(CFMutableCharacterSetRef theSet, CFStringRef theString);
void CFCharacterSetIntersect(CFMutableCharacterSetRef theSet, CFCharacterSetRef theOtherSet);
void CFCharacterSetInvert(CFMutableCharacterSetRef theSet);
void CFCharacterSetUnion(CFMutableCharacterSetRef theSet, CFCharacterSetRef theOtherSet);
void CFCharacterSetInitInlineBuffer(CFCharacterSetRef cset, CFCharacterSetInlineBuffer *buffer);
void CFDataAppendBytes(CFMutableDataRef theData, const UInt8 *bytes, CFIndex length);
void CFDataDeleteBytes(CFMutableDataRef theData, CFRange range);
void CFDataReplaceBytes(CFMutableDataRef theData, CFRange range, const UInt8 *newBytes, CFIndex newLength);
void CFDataIncreaseLength(CFMutableDataRef theData, CFIndex extraLength);
void CFDataSetLength(CFMutableDataRef theData, CFIndex length);
void CFDataGetBytes(CFDataRef theData, CFRange range, UInt8 *buffer);
void CFDictionaryGetKeysAndValues(CFDictionaryRef theDict, const void **keys, const void **values);
void CFDictionaryApplyFunction(CFDictionaryRef theDict, CFDictionaryApplierFunction applier, void *context);
void CFDictionaryRemoveValue(CFMutableDictionaryRef theDict, const void *key);
void CFDictionarySetValue(CFMutableDictionaryRef theDict, const void *key, const void *value);
void CFDictionaryAddValue(CFMutableDictionaryRef theDict, const void *key, const void *value);
void CFDictionaryRemoveAllValues(CFMutableDictionaryRef theDict);
void CFDictionaryReplaceValue(CFMutableDictionaryRef theDict, const void *key, const void *value);
void CFStringGetLineBounds(CFStringRef theString, CFRange range, CFIndex *lineBeginIndex, CFIndex *lineEndIndex, CFIndex *contentsEndIndex);
void CFStringDelete(CFMutableStringRef theString, CFRange range);
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
void CFStringReplace(CFMutableStringRef theString, CFRange range, CFStringRef replacement);
void CFStringReplaceAll(CFMutableStringRef theString, CFStringRef replacement);
void CFStringSetExternalCharactersNoCopy(CFMutableStringRef theString, UniChar *chars, CFIndex length, CFIndex capacity);
void CFStringTrim(CFMutableStringRef theString, CFStringRef trimString);
void CFStringTrimWhitespace(CFMutableStringRef theString);
void CFStringGetCharacters(CFStringRef theString, CFRange range, UniChar *buffer);
void CFStringInitInlineBuffer(CFStringRef str, CFStringInlineBuffer *buf, CFRange range);
void CFStringGetParagraphBounds(CFStringRef string, CFRange range, CFIndex *parBeginIndex, CFIndex *parEndIndex, CFIndex *contentsEndIndex);
void CFSetAddValue(CFMutableSetRef theSet, const void *value);
void CFSetSetValue(CFMutableSetRef theSet, const void *value);
void CFSetReplaceValue(CFMutableSetRef theSet, const void *value);
void CFSetRemoveValue(CFMutableSetRef theSet, const void *value);
void CFSetRemoveAllValues(CFMutableSetRef theSet);
void CFSetGetValues(CFSetRef theSet, const void **values);
void CFSetApplyFunction(CFSetRef theSet, CFSetApplierFunction applier, void *context);
void CFAllocatorSetDefault(CFAllocatorRef allocator);
void CFAllocatorDeallocate(CFAllocatorRef allocator, void *ptr);
void CFReadStreamClose(CFReadStreamRef stream);
void CFReadStreamScheduleWithRunLoop(CFReadStreamRef stream, CFRunLoopRef runLoop, CFRunLoopMode runLoopMode);
void CFReadStreamUnscheduleFromRunLoop(CFReadStreamRef stream, CFRunLoopRef runLoop, CFRunLoopMode runLoopMode);
void CFWriteStreamClose(CFWriteStreamRef stream);
void CFBundleCloseBundleResourceMap(CFBundleRef bundle, CFBundleRefNum refNum);

void _CFNonObjCRelease(CFTypeRef cf);
void _CFRuntimeBridgeClasses(CFTypeID cfType, const char *className);

CFTypeRef CFRetain(CFTypeRef cf);
CFTypeRef CFAutorelease(CFTypeRef arg);
CFTypeRef CFDictionaryGetValue(CFDictionaryRef theDict, const void *key);
CFTypeRef CFMakeCollectable(CFTypeRef cf);
CFTypeRef CFReadStreamCopyProperty(CFReadStreamRef stream, CFStreamPropertyKey propertyName);

CFTypeRef _CFRuntimeCreateInstance(CFAllocatorRef allocator, CFTypeID typeID, CFIndex extraBytes, unsigned char *category);
CFTypeRef _CFTryRetain(CFTypeRef);
CFTypeRef _CFNonObjCRetain(CFTypeRef cf);

CFTypeID CFGetTypeID(CFTypeRef cf);
CFTypeID CFBooleanGetTypeID(void);
CFTypeID CFDictionaryGetTypeID(void);
CFTypeID CFArrayGetTypeID(void);
CFTypeID CFCharacterSetGetTypeID(void);
CFTypeID CFDataGetTypeID(void);
CFTypeID CFStringGetTypeID(void);
CFTypeID CFNumberGetTypeID(void);
CFTypeID CFSetGetTypeID(void);
CFTypeID CFNotificationCenterGetTypeID(void);
CFTypeID CFAllocatorGetTypeID(void);
CFTypeID CFNullGetTypeID(void);

CFTypeID _CFRuntimeRegisterClass(const CFRuntimeClass *const cls);

CFHashCode CFHash(CFTypeRef cf);

CFHashCode _CFNonObjCHash(CFTypeRef cf);

CFStringEncoding CFStringGetSystemEncoding(void);
CFStringEncoding CFStringConvertNSStringEncodingToEncoding(unsigned long encoding);

CFComparisonResult CFStringCompare(CFStringRef theString1, CFStringRef theString2, CFStringCompareFlags compareOptions);
CFComparisonResult CFStringCompareWithOptions(CFStringRef theString1, CFStringRef theString2, CFRange rangeToCompare, CFStringCompareFlags compareOptions);
CFComparisonResult CFNumberCompare(CFNumberRef number, CFNumberRef otherNumber, void *context);

CFUUIDRef CFUUIDCreate(CFAllocatorRef alloc);
CFUUIDRef CFUUIDCreateFromString(CFAllocatorRef alloc, CFStringRef uuidStr);
CFUUIDRef CFUUIDCreateFromUUIDBytes(CFAllocatorRef alloc, CFUUIDBytes bytes);
CFUUIDRef CFUUIDCreateWithBytes(CFAllocatorRef alloc, UInt8 byte0, UInt8 byte1, UInt8 byte2, UInt8 byte3, UInt8 byte4, UInt8 byte5, UInt8 byte6, UInt8 byte7, UInt8 byte8, UInt8 byte9, UInt8 byte10, UInt8 byte11, UInt8 byte12, UInt8 byte13, UInt8 byte14, UInt8 byte15);

CFRange CFDataFind(CFDataRef theData, CFDataRef dataToFind, CFRange searchRange, CFDataSearchFlags compareOptions);
CFRange CFStringFind(CFStringRef theString, CFStringRef stringToFind, CFStringCompareFlags compareOptions);
CFRange CFStringGetRangeOfComposedCharactersAtIndex(CFStringRef theString, CFIndex theIndex);
CFRange CFStringGetRangeOfCharacterClusterAtIndex(CFStringRef string, CFIndex charIndex, CFStringCharacterClusterType type);

CFAllocatorRef CFAllocatorGetDefault(void);
CFAllocatorRef CFGetAllocator(CFTypeRef cf);
CFAllocatorRef CFAllocatorCreate(CFAllocatorRef allocator, CFAllocatorContext *context);

CFErrorRef CFErrorCreate(CFAllocatorRef allocator, CFErrorDomain domain, CFIndex code, CFDictionaryRef userInfo);
CFErrorRef CFErrorCreateWithUserInfoKeysAndValues(CFAllocatorRef allocator, CFErrorDomain domain, CFIndex code, const void *const *userInfoKeys, const void *const *userInfoValues, CFIndex numUserInfoValues);
CFErrorRef CFReadStreamCopyError(CFReadStreamRef stream);

CFStreamStatus CFReadStreamGetStatus(CFReadStreamRef stream);

CFNumberRef CFNumberCreate(CFAllocatorRef allocator, CFNumberType theType, const void *valuePtr);

CFNumberType CFNumberGetType(CFNumberRef number);

CFDataRef CFDataCreate(CFAllocatorRef allocator, const UInt8 *bytes, CFIndex length);
CFDataRef CFDataCreateCopy(CFAllocatorRef allocator, CFDataRef theData);
CFDataRef CFDataCreateWithBytesNoCopy(CFAllocatorRef allocator, const UInt8 *bytes, CFIndex length, CFAllocatorRef bytesDeallocator);
CFDataRef CFPropertyListCreateData(CFAllocatorRef allocator, CFPropertyListRef propertyList, CFPropertyListFormat format, CFOptionFlags options, CFErrorRef *error);
CFDataRef CFCharacterSetCreateBitmapRepresentation(CFAllocatorRef alloc, CFCharacterSetRef theSet);
CFDataRef CFStringCreateExternalRepresentation(CFAllocatorRef alloc, CFStringRef theString, CFStringEncoding encoding, UInt8 lossByte);

CFMutableDataRef CFDataCreateMutable(CFAllocatorRef allocator, CFIndex capacity);
CFMutableDataRef CFDataCreateMutableCopy(CFAllocatorRef allocator, CFIndex capacity, CFDataRef theData);

CFMutableCharacterSetRef CFCharacterSetCreateMutable(CFAllocatorRef alloc);
CFMutableCharacterSetRef CFCharacterSetCreateMutableCopy(CFAllocatorRef alloc, CFCharacterSetRef theSet);

CFCharacterSetRef CFCharacterSetCreateCopy(CFAllocatorRef alloc, CFCharacterSetRef theSet);
CFCharacterSetRef CFCharacterSetCreateInvertedSet(CFAllocatorRef alloc, CFCharacterSetRef theSet);
CFCharacterSetRef CFCharacterSetCreateWithCharactersInRange(CFAllocatorRef alloc, CFRange theRange);
CFCharacterSetRef CFCharacterSetCreateWithCharactersInString(CFAllocatorRef alloc, CFStringRef theString);
CFCharacterSetRef CFCharacterSetCreateWithBitmapRepresentation(CFAllocatorRef alloc, CFDataRef theData);
CFCharacterSetRef CFCharacterSetGetPredefined(CFCharacterSetPredefinedSet theSetIdentifier);

CFMutableSetRef CFSetCreateMutable(CFAllocatorRef allocator, CFIndex capacity, const CFSetCallBacks *callBacks);
CFMutableSetRef CFSetCreateMutableCopy(CFAllocatorRef allocator, CFIndex capacity, CFSetRef theSet);

CFSetRef CFSetCreate(CFAllocatorRef allocator, const void **values, CFIndex numValues, const CFSetCallBacks *callBacks);

CFAbsoluteTime CFAbsoluteTimeGetCurrent(void);

CFNotificationCenterRef CFNotificationCenterGetDarwinNotifyCenter(void);
CFNotificationCenterRef CFNotificationCenterGetLocalCenter(void);

CFPropertyListRef CFPreferencesCopyValue(CFStringRef key, CFStringRef applicationID, CFStringRef userName, CFStringRef hostName);
CFPropertyListRef CFPreferencesCopyAppValue(CFStringRef key, CFStringRef applicationID);
CFPropertyListRef CFPropertyListCreateDeepCopy(CFAllocatorRef allocator, CFPropertyListRef propertyList, CFOptionFlags mutabilityOption);
CFPropertyListRef CFPropertyListCreateWithData(CFAllocatorRef allocator, CFDataRef data, CFOptionFlags options, CFPropertyListFormat *format, CFErrorRef *error);
CFPropertyListRef CFPropertyListCreateWithStream(CFAllocatorRef allocator, CFReadStreamRef stream, CFIndex streamLength, CFOptionFlags options, CFPropertyListFormat *format, CFErrorRef *error);

CFReadStreamRef CFReadStreamCreateWithFile(CFAllocatorRef alloc, CFURLRef fileURL);
CFReadStreamRef CFReadStreamCreateWithBytesNoCopy(CFAllocatorRef alloc, const UInt8 *bytes, CFIndex length, CFAllocatorRef bytesDeallocator);

CFWriteStreamRef CFWriteStreamCreateWithFile(CFAllocatorRef alloc, CFURLRef fileURL);
CFWriteStreamRef CFWriteStreamCreateWithBuffer(CFAllocatorRef alloc, UInt8 *buffer, CFIndex bufferCapacity);
CFWriteStreamRef CFWriteStreamCreateWithAllocatedBuffers(CFAllocatorRef alloc, CFAllocatorRef bufferAllocator);

CFDictionaryRef CFDictionaryCreate(CFAllocatorRef allocator, const void **keys, const void **values, CFIndex numValues, const CFDictionaryKeyCallBacks *keyCallBacks, const CFDictionaryValueCallBacks *valueCallBacks);
CFDictionaryRef CFDictionaryCreateCopy(CFAllocatorRef allocator, CFDictionaryRef theDict);
CFDictionaryRef CFPreferencesCopyMultiple(CFArrayRef keysToFetch, CFStringRef applicationID, CFStringRef userName, CFStringRef hostName);

CFMutableDictionaryRef CFDictionaryCreateMutable(CFAllocatorRef allocator, CFIndex capacity, const CFDictionaryKeyCallBacks *keyCallBacks, const CFDictionaryValueCallBacks *valueCallBacks);
CFMutableDictionaryRef CFDictionaryCreateMutableCopy(CFAllocatorRef allocator, CFIndex capacity, CFDictionaryRef theDict);

CFMutableArrayRef CFArrayCreateMutable(CFAllocatorRef allocator, CFIndex capacity, const CFArrayCallBacks *callBacks);
CFMutableArrayRef CFArrayCreateMutableCopy(CFAllocatorRef allocator, CFIndex capacity, CFArrayRef theArray);

CFArrayRef CFArrayCreate(CFAllocatorRef allocator, const void **values, CFIndex numValues, const CFArrayCallBacks *callBacks);
CFArrayRef CFArrayCreateCopy(CFAllocatorRef allocator, CFArrayRef theArray);
CFArrayRef CFStringCreateArrayBySeparatingStrings(CFAllocatorRef alloc, CFStringRef theString, CFStringRef separatorString);
CFArrayRef CFStringCreateArrayWithFindResults(CFAllocatorRef alloc, CFStringRef theString, CFStringRef stringToFind, CFRange rangeToSearch, CFStringCompareFlags compareOptions);
CFArrayRef CFPreferencesCopyKeyList(CFStringRef applicationID, CFStringRef userName, CFStringRef hostName);
CFArrayRef CFBundleCreateBundlesFromDirectory(CFAllocatorRef allocator, CFURLRef directoryURL, CFStringRef bundleType);
CFArrayRef CFBundleGetAllBundles(void);
CFArrayRef CFBundleCopyResourceURLsOfType(CFBundleRef bundle, CFStringRef resourceType, CFStringRef subDirName);
CFArrayRef CFBundleCopyResourceURLsOfTypeInDirectory(CFURLRef bundleURL, CFStringRef resourceType, CFStringRef subDirName);
CFArrayRef CFBundleCopyResourceURLsOfTypeForLocalization(CFBundleRef bundle, CFStringRef resourceType, CFStringRef subDirName, CFStringRef localizationName);
CFArrayRef CFBundleCopyLocalizationsForPreferences(CFArrayRef locArray, CFArrayRef prefArray);
CFArrayRef CFBundleCopyBundleLocalizations(CFBundleRef bundle);

CFMutableStringRef CFStringCreateMutable(CFAllocatorRef alloc, CFIndex maxLength);
CFMutableStringRef CFStringCreateMutableCopy(CFAllocatorRef alloc, CFIndex maxLength, CFStringRef theString);
CFMutableStringRef CFStringCreateMutableWithExternalCharactersNoCopy(CFAllocatorRef alloc, UniChar *chars, CFIndex numChars, CFIndex capacity, CFAllocatorRef externalCharactersAllocator);

CFStringRef CFStringCreateWithCString(CFAllocatorRef alloc, const char *cStr, CFStringEncoding encoding);
CFStringRef CFCopyDescription(CFTypeRef cf);
CFStringRef CFCopyTypeIDDescription(CFTypeID type_id);
CFStringRef CFErrorCopyFailureReason(CFErrorRef err);
CFStringRef CFStringCreateWithPascalString(CFAllocatorRef alloc, ConstStr255Param pStr, CFStringEncoding encoding);
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
CFStringRef CFStringCreateWithSubstring(CFAllocatorRef alloc, CFStringRef str, CFRange range);
CFStringRef CFStringCreateWithFileSystemRepresentation(CFAllocatorRef alloc, const char *buffer);
CFStringRef CFStringTokenizerCopyBestStringLanguage(CFStringRef string, CFRange range);
CFStringRef CFBundleGetIdentifier(CFBundleRef bundle);
CFStringRef CFBundleCopyLocalizedString(CFBundleRef bundle, CFStringRef key, CFStringRef value, CFStringRef tableName);
CFStringRef CFBundleCopyLocalizedStringForLocalization(CFBundleRef bundle, CFStringRef key, CFStringRef value, CFStringRef tableName, CFStringRef localizationName);
CFStringRef CFUUIDCreateString(CFAllocatorRef alloc, CFUUIDRef uuid);

CFStringRef _CFGetProductName(void);

CFBundleRef CFBundleCreate(CFAllocatorRef allocator, CFURLRef bundleURL);
CFBundleRef CFBundleGetBundleWithIdentifier(CFStringRef bundleID);
CFBundleRef CFBundleGetMainBundle(void);

CFURLRef CFBundleCopyBundleURL(CFBundleRef bundle);
CFURLRef CFBundleCopyResourcesDirectoryURL(CFBundleRef bundle);
CFURLRef CFBundleCopyResourceURL(CFBundleRef bundle, CFStringRef resourceName, CFStringRef resourceType, CFStringRef subDirName);
CFURLRef CFBundleCopyResourceURLInDirectory(CFURLRef bundleURL, CFStringRef resourceName, CFStringRef resourceType, CFStringRef subDirName);
CFURLRef CFBundleCopyResourceURLForLocalization(CFBundleRef bundle, CFStringRef resourceName, CFStringRef resourceType, CFStringRef subDirName, CFStringRef localizationName);

Boolean CFEqual(CFTypeRef cf1, CFTypeRef cf2);
Boolean CFBooleanGetValue(CFBooleanRef boolean);
Boolean CFArrayContainsValue(CFArrayRef theArray, CFRange range, const void *value);
Boolean CFPreferencesAppSynchronize(CFStringRef appID);
Boolean CFPreferencesAppValueIsForced(CFStringRef key, CFStringRef applicationID);
Boolean CFPreferencesGetAppBooleanValue(CFStringRef key, CFStringRef applicationID, Boolean *keyExistsAndHasValidFormat);
Boolean CFPreferencesSynchronize(CFStringRef applicationID, CFStringRef userName, CFStringRef hostName);
Boolean CFCharacterSetHasMemberInPlane(CFCharacterSetRef theSet, CFIndex thePlane);
Boolean CFCharacterSetIsCharacterMember(CFCharacterSetRef theSet, UniChar theChar);
Boolean CFCharacterSetIsLongCharacterMember(CFCharacterSetRef theSet, UTF32Char theChar);
Boolean CFCharacterSetIsSupersetOfSet(CFCharacterSetRef theSet, CFCharacterSetRef theOtherset);
Boolean CFDictionaryContainsKey(CFDictionaryRef theDict, const void *key);
Boolean CFDictionaryContainsValue(CFDictionaryRef theDict, const void *value);
Boolean CFDictionaryGetValueIfPresent(CFDictionaryRef theDict, const void *key, const void **value);
Boolean CFStringFindCharacterFromSet(CFStringRef theString, CFCharacterSetRef theSet, CFRange rangeToSearch, CFStringCompareFlags searchOptions, CFRange *result);
Boolean CFStringFindWithOptions(CFStringRef theString, CFStringRef stringToFind, CFRange rangeToSearch, CFStringCompareFlags searchOptions, CFRange *result);
Boolean CFStringFindWithOptionsAndLocale(CFStringRef theString, CFStringRef stringToFind, CFRange rangeToSearch, CFStringCompareFlags searchOptions, CFLocaleRef locale, CFRange *result);
Boolean CFStringHasPrefix(CFStringRef theString, CFStringRef prefix);
Boolean CFStringHasSuffix(CFStringRef theString, CFStringRef suffix);
Boolean CFStringTransform(CFMutableStringRef string, CFRange *range, CFStringRef transform, Boolean reverse);
Boolean CFStringGetCString(CFStringRef theString, char *buffer, CFIndex bufferSize, CFStringEncoding encoding);
Boolean CFStringGetFileSystemRepresentation(CFStringRef string, char *buffer, CFIndex maxBufLen);
Boolean CFNumberGetValue(CFNumberRef number, CFNumberType theType, void *valuePtr);
Boolean CFNumberIsFloatType(CFNumberRef number);
Boolean CFSetContainsValue(CFSetRef theSet, const void *value);
Boolean CFSetGetValueIfPresent(CFSetRef theSet, const void *candidate, const void **value);
Boolean CFReadStreamOpen(CFReadStreamRef stream);
Boolean CFReadStreamHasBytesAvailable(CFReadStreamRef stream);
Boolean CFWriteStreamOpen(CFWriteStreamRef stream);

Boolean _CFExecutableLinkedOnOrAfter(CFSystemVersion version);
Boolean _CFIsDeallocating(CFTypeRef);
Boolean _CFIsObjC(CFTypeID typeID, CFTypeRef obj);
Boolean _CFNonObjCEqual(CFTypeRef cf1, CFTypeRef cf2);

CFIndex CFArrayGetFirstIndexOfValue(CFArrayRef theArray, CFRange range, const void *value);
CFIndex CFArrayGetLastIndexOfValue(CFArrayRef theArray, CFRange range, const void *value);
CFIndex CFArrayGetCount(const void *dict);
CFIndex CFArrayBSearchValues(CFArrayRef theArray, CFRange range, const void *value, CFComparatorFunction comparator, void *context);
CFIndex CFPreferencesGetAppIntegerValue(CFStringRef key, CFStringRef applicationID, Boolean *keyExistsAndHasValidFormat);
CFIndex CFDataGetLength(CFDataRef theData);
CFIndex CFDictionaryGetCount(CFDictionaryRef theDict);
CFIndex CFDictionaryGetCountOfKey(CFDictionaryRef theDict, const void *key);
CFIndex CFDictionaryGetCountOfValue(CFDictionaryRef theDict, const void *value);
CFIndex CFGetRetainCount(CFTypeRef cf);
CFIndex CFStringFindAndReplace(CFMutableStringRef theString, CFStringRef stringToFind, CFStringRef replacementString, CFRange rangeToSearch, CFStringCompareFlags compareOptions);
CFIndex CFStringGetLength(CFStringRef theString);
CFIndex CFStringGetBytes(CFStringRef theString, CFRange range, CFStringEncoding encoding, UInt8 lossByte, Boolean isExternalRepresentation, UInt8 *buffer, CFIndex maxBufLen, CFIndex *usedBufLen);
CFIndex CFStringGetMaximumSizeForEncoding(CFIndex length, CFStringEncoding encoding);
CFIndex CFStringGetMaximumSizeOfFileSystemRepresentation(CFStringRef string);
CFIndex CFNumberGetByteSize(CFNumberRef number);
CFIndex CFSetGetCount(CFSetRef theSet);
CFIndex CFReadStreamRead(CFReadStreamRef stream, UInt8 *buffer, CFIndex bufferLength);
CFIndex CFWriteStreamWrite(CFWriteStreamRef stream, const UInt8 *buffer, CFIndex bufferLength);
CFIndex CFErrorGetCode(CFErrorRef err);
CFIndex CFAllocatorGetPreferredSizeForSize(CFAllocatorRef allocator, CFIndex size, CFOptionFlags hint);
CFIndex CFPropertyListWrite(CFPropertyListRef propertyList, CFWriteStreamRef stream, CFPropertyListFormat format, CFOptionFlags options, CFErrorRef *error);