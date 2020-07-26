#import "../BaseTypes.h"
#import "../Kernel/Types.h"
#import "../AudioToolbox/Types.h"
#import "../CoreGraphics/Types.h"
#import "../CoreFoundation/Types.h"
#import "../CoreVideo/Types.h"
#import "Types.h"

Boolean CMAudioFormatDescriptionEqual(CMAudioFormatDescriptionRef formatDescription, CMAudioFormatDescriptionRef otherFormatDescription, CMAudioFormatDescriptionMask equalityMask, CMAudioFormatDescriptionMask *equalityMaskOut);
Boolean CMDoesBigEndianSoundDescriptionRequireLegacyCBRSampleTableLayout(CMBlockBufferRef soundDescriptionBlockBuffer, CMSoundDescriptionFlavor flavor);
Boolean CMFormatDescriptionEqual(CMFormatDescriptionRef formatDescription, CMFormatDescriptionRef otherFormatDescription);
Boolean CMFormatDescriptionEqualIgnoringExtensionKeys(CMFormatDescriptionRef formatDescription, CMFormatDescriptionRef otherFormatDescription, CFTypeRef formatDescriptionExtensionKeysToIgnore, CFTypeRef sampleDescriptionExtensionAtomKeysToIgnore);
Boolean CMSampleBufferDataIsReady(CMSampleBufferRef sbuf);
Boolean CMSampleBufferHasDataFailed(CMSampleBufferRef sbuf, OSStatus *statusOut);
Boolean CMSampleBufferIsValid(CMSampleBufferRef sbuf);
Boolean CMTimeRangeContainsTime(CMTimeRange range, CMTime time);
Boolean CMTimeRangeContainsTimeRange(CMTimeRange range, CMTimeRange otherRange);
Boolean CMTimeRangeEqual(CMTimeRange range1, CMTimeRange range2);
Boolean CMVideoFormatDescriptionGetVideoDynamicRange(CMVideoFormatDescriptionRef desc);
Boolean CMVideoFormatDescriptionMatchesImageBuffer(CMVideoFormatDescriptionRef desc, CVImageBufferRef imageBuffer);

CFArrayRef CMSampleBufferGetSampleAttachmentsArray(CMSampleBufferRef sbuf, Boolean createIfNecessary);
CFArrayRef CMVideoFormatDescriptionGetExtensionKeysCommonWithImageBuffers(void);

CFDictionaryRef CMCopyDictionaryOfAttachments(CFAllocatorRef allocator, CMAttachmentBearerRef target, CMAttachmentMode attachmentMode);
CFDictionaryRef CMFormatDescriptionGetExtensions(CMFormatDescriptionRef desc);
CFDictionaryRef CMTimeCopyAsDictionary(CMTime time, CFAllocatorRef allocator);

CFNotificationCenterRef CMNotificationCenterCreate(void); // CMNotificationCenterRef ?

CFPropertyListRef CMFormatDescriptionGetExtension(CMFormatDescriptionRef desc, CFStringRef extensionKey);

CFStringRef CMTimeCopyDescription(CFAllocatorRef allocator, CMTime time);

CFTypeID CMFormatDescriptionGetTypeID(void);
CFTypeID FigEndpointManagerGetTypeID(void);

CFTypeRef CMGetAttachment(CMAttachmentBearerRef target, CFStringRef key, CMAttachmentMode *attachmentModeOut);

CGRect CMVideoFormatDescriptionGetCleanAperture(CMVideoFormatDescriptionRef videoDesc, Boolean originIsAtTopLeft);

CGSize CMVideoFormatDescriptionGetPresentationDimensions(CMVideoFormatDescriptionRef videoDesc, Boolean usePixelAspectRatio, Boolean useCleanAperture);

CMBlockBufferRef CMSampleBufferGetDataBuffer(CMSampleBufferRef sbuf);

CMClockRef CMClockGetHostTimeClock(void);

CMFormatDescriptionRef CMSampleBufferGetFormatDescription(CMSampleBufferRef sbuf);

CMItemCount CMSampleBufferGetNumSamples(CMSampleBufferRef sbuf);

CMMediaType CMFormatDescriptionGetMediaType(CMFormatDescriptionRef desc);

CMNotificationCenterRef CMNotificationCenterGetDefaultLocalCenter(void);

CMTime CMClockGetTime(CMClockRef clock);
CMTime CMClockMakeHostTimeFromSystemUnits(uint64_t hostTime);
CMTime CMSampleBufferGetDecodeTimeStamp(CMSampleBufferRef sbuf);
CMTime CMSampleBufferGetDuration(CMSampleBufferRef sbuf);
CMTime CMSampleBufferGetOutputDecodeTimeStamp(CMSampleBufferRef sbuf);
CMTime CMSampleBufferGetOutputDuration(CMSampleBufferRef sbuf);
CMTime CMSampleBufferGetOutputPresentationTimeStamp(CMSampleBufferRef sbuf);
CMTime CMSampleBufferGetPresentationTimeStamp(CMSampleBufferRef sbuf);
CMTime CMTimeAbsoluteValue(CMTime time);
CMTime CMTimeAdd(CMTime lhs, CMTime rhs);
CMTime CMTimeClampToRange(CMTime time, CMTimeRange range);
CMTime CMTimeConvertScale(CMTime time, int32_t newTimescale, CMTimeRoundingMethod method);
CMTime CMTimeMake(int64_t value, int32_t timescale);
CMTime CMTimeMakeFromDictionary(CFDictionaryRef dictionaryRepresentation);
CMTime CMTimeMakeWithEpoch(int64_t value, int32_t timescale, int64_t epoch);
CMTime CMTimeMakeWithSeconds(Float64 seconds, int32_t preferredTimescale);
CMTime CMTimeMaximum(CMTime time1, CMTime time2);
CMTime CMTimeMinimum(CMTime time1, CMTime time2);
CMTime CMTimeMultiply(CMTime time, int32_t multiplier);
CMTime CMTimeMultiplyByFloat64(CMTime time, Float64 multiplier);
CMTime CMTimeMultiplyByRatio(CMTime time, int32_t multiplier, int32_t divisor);
CMTime CMTimeRangeGetEnd(CMTimeRange range);
CMTime CMTimeSubtract(CMTime lhs, CMTime rhs);

CMTimeRange CMTimeRangeFromTimeToTime(CMTime start, CMTime end);
CMTimeRange CMTimeRangeGetIntersection(CMTimeRange range, CMTimeRange otherRange);
CMTimeRange CMTimeRangeGetUnion(CMTimeRange range, CMTimeRange otherRange);
CMTimeRange CMTimeRangeMake(CMTime start, CMTime duration);
CMTimeRange CMTimeRangeMakeFromDictionary(CFDictionaryRef dictionaryRepresentation);

CMVideoDimensions CMVideoFormatDescriptionGetDimensions(CMVideoFormatDescriptionRef videoDesc);

const AudioChannelLayout *CMAudioFormatDescriptionGetChannelLayout(CMAudioFormatDescriptionRef desc, size_t *sizeOut);
const AudioFormatListItem *CMAudioFormatDescriptionGetFormatList(CMAudioFormatDescriptionRef desc, size_t *sizeOut);
const AudioFormatListItem *CMAudioFormatDescriptionGetMostCompatibleFormat(CMAudioFormatDescriptionRef desc);
const AudioFormatListItem *CMAudioFormatDescriptionGetRichestDecodableFormat(CMAudioFormatDescriptionRef desc);
const AudioStreamBasicDescription *CMAudioFormatDescriptionGetStreamBasicDescription(CMAudioFormatDescriptionRef desc);

const void *CMAudioFormatDescriptionGetMagicCookie(CMAudioFormatDescriptionRef desc, size_t *sizeOut);

CVImageBufferRef CMSampleBufferGetImageBuffer(CMSampleBufferRef sbuf);

Float64 CMTimeGetSeconds(CMTime time);

FourCharCode CMFormatDescriptionGetMediaSubType(CMFormatDescriptionRef desc);

int32_t CMTimeCompare(CMTime time1, CMTime time2);

OSStatus CMAudioFormatDescriptionCopyAsBigEndianSoundDescriptionBlockBuffer(CFAllocatorRef allocator, CMAudioFormatDescriptionRef audioFormatDescription, CMSoundDescriptionFlavor flavor, CMBlockBufferRef *blockBufferOut);
OSStatus CMAudioFormatDescriptionCreate(CFAllocatorRef allocator, const AudioStreamBasicDescription *asbd, size_t layoutSize, const AudioChannelLayout *layout, size_t magicCookieSize, const void *magicCookie, CFDictionaryRef extensions, CMAudioFormatDescriptionRef *formatDescriptionOut);
OSStatus CMAudioFormatDescriptionCreateFromBigEndianSoundDescriptionBlockBuffer(CFAllocatorRef allocator, CMBlockBufferRef soundDescriptionBlockBuffer, CMSoundDescriptionFlavor flavor, CMAudioFormatDescriptionRef *formatDescriptionOut);
OSStatus CMAudioFormatDescriptionCreateFromBigEndianSoundDescriptionData(CFAllocatorRef allocator, const uint8_t *soundDescriptionData, size_t size, CMSoundDescriptionFlavor flavor, CMAudioFormatDescriptionRef *formatDescriptionOut);
OSStatus CMAudioFormatDescriptionCreateSummary(CFAllocatorRef allocator, CFArrayRef formatDescriptionArray, uint32_t flags, CMAudioFormatDescriptionRef  *formatDescriptionOut);
OSStatus CMAudioSampleBufferCreateReadyWithPacketDescriptions(CFAllocatorRef allocator, CMBlockBufferRef dataBuffer, CMFormatDescriptionRef formatDescription, CMItemCount numSamples, CMTime presentationTimeStamp, const AudioStreamPacketDescription *packetDescriptions, CMSampleBufferRef *sampleBufferOut);
OSStatus CMAudioSampleBufferCreateWithPacketDescriptions(CFAllocatorRef allocator, CMBlockBufferRef dataBuffer, Boolean dataReady, CMSampleBufferMakeDataReadyCallback makeDataReadyCallback, void *makeDataReadyRefcon, CMFormatDescriptionRef formatDescription, CMItemCount numSamples, CMTime presentationTimeStamp, const AudioStreamPacketDescription *packetDescriptions, CMSampleBufferRef *sampleBufferOut);
OSStatus CMClockGetAnchorTime(CMClockRef clock, CMTime *clockTimeOut, CMTime *referenceClockTimeOut);
OSStatus CMFormatDescriptionCreate(CFAllocatorRef allocator, CMMediaType mediaType, FourCharCode mediaSubType, CFDictionaryRef extensions, CMFormatDescriptionRef *formatDescriptionOut);
OSStatus CMNotificationCenterAddListener(CMNotificationCenterRef inCenter, const void *inListener, CMNotificationCallback inCallBack, CFStringRef inNotificationName, const void *inObjectToObserve, UInt32 inFlags);
OSStatus CMNotificationCenterRemoveListener(CMNotificationCenterRef inCenter, const void *inListener, CMNotificationCallback inCallBack, CFStringRef inNotificationName, const void *inObject);
OSStatus CMSampleBufferCallBlockForEachSample(CMSampleBufferRef sbuf, OSStatus (*handler)(CMSampleBufferRef sampleBuffer, CMItemCount index));
OSStatus CMSampleBufferCallForEachSample(CMSampleBufferRef sbuf, OSStatus (*callback)(CMSampleBufferRef sampleBuffer, CMItemCount index, void *refcon), void *refcon);
OSStatus CMSampleBufferCopyPCMDataIntoAudioBufferList(CMSampleBufferRef sbuf, int32_t frameOffset, int32_t numFrames, AudioBufferList *bufferList);
OSStatus CMSampleBufferCopySampleBufferForRange(CFAllocatorRef allocator, CMSampleBufferRef sbuf, CFRange sampleRange, CMSampleBufferRef *sampleBufferOut);
OSStatus CMSampleBufferCreate(CFAllocatorRef allocator, CMBlockBufferRef dataBuffer, Boolean dataReady, CMSampleBufferMakeDataReadyCallback makeDataReadyCallback, void *makeDataReadyRefcon, CMFormatDescriptionRef formatDescription, CMItemCount numSamples, CMItemCount numSampleTimingEntries, const CMSampleTimingInfo *sampleTimingArray, CMItemCount numSampleSizeEntries, const size_t *sampleSizeArray, CMSampleBufferRef *sampleBufferOut);
OSStatus CMSampleBufferCreateCopy(CFAllocatorRef allocator, CMSampleBufferRef sbuf, CMSampleBufferRef *sampleBufferOut);
OSStatus CMSampleBufferCreateCopyWithNewTiming(CFAllocatorRef allocator, CMSampleBufferRef originalSBuf, CMItemCount numSampleTimingEntries, const CMSampleTimingInfo *sampleTimingArray, CMSampleBufferRef *sampleBufferOut);
OSStatus CMSampleBufferCreateForImageBuffer(CFAllocatorRef allocator, CVImageBufferRef imageBuffer, Boolean dataReady, CMSampleBufferMakeDataReadyCallback makeDataReadyCallback, void *makeDataReadyRefcon, CMVideoFormatDescriptionRef formatDescription, const CMSampleTimingInfo *sampleTiming, CMSampleBufferRef *sampleBufferOut);
OSStatus CMSampleBufferCreateReady(CFAllocatorRef allocator, CMBlockBufferRef dataBuffer, CMFormatDescriptionRef formatDescription, CMItemCount numSamples, CMItemCount numSampleTimingEntries, const CMSampleTimingInfo *sampleTimingArray, CMItemCount numSampleSizeEntries, const size_t *sampleSizeArray, CMSampleBufferRef *sampleBufferOut);
OSStatus CMSampleBufferCreateReadyWithImageBuffer(CFAllocatorRef allocator, CVImageBufferRef imageBuffer, CMVideoFormatDescriptionRef formatDescription, const CMSampleTimingInfo *sampleTiming, CMSampleBufferRef *sampleBufferOut);
OSStatus CMSampleBufferGetAudioBufferListWithRetainedBlockBuffer(CMSampleBufferRef sbuf, size_t *bufferListSizeNeededOut, AudioBufferList *bufferListOut, size_t bufferListSize, CFAllocatorRef blockBufferStructureAllocator, CFAllocatorRef blockBufferBlockAllocator, uint32_t flags, CMBlockBufferRef *blockBufferOut);
OSStatus CMSampleBufferGetAudioStreamPacketDescriptions(CMSampleBufferRef sbuf, size_t packetDescriptionsSize, AudioStreamPacketDescription *packetDescriptionsOut, size_t *packetDescriptionsSizeNeededOut);
OSStatus CMSampleBufferGetAudioStreamPacketDescriptionsPtr(CMSampleBufferRef sbuf, const AudioStreamPacketDescription **packetDescriptionsPtrOut, size_t *packetDescriptionsSizeOut);
OSStatus CMSampleBufferGetOutputSampleTimingInfoArray(CMSampleBufferRef sbuf, CMItemCount timingArrayEntries, CMSampleTimingInfo *timingArrayOut, CMItemCount *timingArrayEntriesNeededOut);
OSStatus CMSampleBufferGetSampleSizeArray(CMSampleBufferRef sbuf, CMItemCount sizeArrayEntries, size_t *sizeArrayOut, CMItemCount *sizeArrayEntriesNeededOut);
OSStatus CMSampleBufferGetSampleTimingInfo(CMSampleBufferRef sbuf, CMItemIndex sampleIndex, CMSampleTimingInfo *timingInfoOut);
OSStatus CMSampleBufferGetSampleTimingInfoArray(CMSampleBufferRef sbuf, CMItemCount numSampleTimingEntries, CMSampleTimingInfo *timingArrayOut, CMItemCount *timingArrayEntriesNeededOut);
OSStatus CMSampleBufferInvalidate(CMSampleBufferRef sbuf);
OSStatus CMSampleBufferMakeDataReady(CMSampleBufferRef sbuf);
OSStatus CMSampleBufferSetDataBuffer(CMSampleBufferRef sbuf, CMBlockBufferRef dataBuffer);
OSStatus CMSampleBufferSetDataBufferFromAudioBufferList(CMSampleBufferRef sbuf, CFAllocatorRef blockBufferStructureAllocator, CFAllocatorRef blockBufferBlockAllocator, uint32_t flags, const AudioBufferList *bufferList);
OSStatus CMSampleBufferSetDataFailed(CMSampleBufferRef sbuf, OSStatus status);
OSStatus CMSampleBufferSetDataReady(CMSampleBufferRef sbuf);
OSStatus CMSampleBufferSetInvalidateCallback(CMSampleBufferRef sbuf, CMSampleBufferInvalidateCallback invalidateCallback, uint64_t invalidateRefCon);
OSStatus CMSampleBufferSetInvalidateHandler(CMSampleBufferRef sbuf, CMSampleBufferInvalidateHandler invalidateHandler);
OSStatus CMSampleBufferSetOutputPresentationTimeStamp(CMSampleBufferRef sbuf, CMTime outputPresentationTimeStamp);
OSStatus CMSampleBufferTrackDataReadiness(CMSampleBufferRef sbuf, CMSampleBufferRef sampleBufferToTrack);
OSStatus CMSwapBigEndianSoundDescriptionToHost(uint8_t *soundDescriptionData, size_t soundDescriptionSize);
OSStatus CMSwapHostEndianSoundDescriptionToBig(uint8_t *soundDescriptionData, size_t soundDescriptionSize);
OSStatus CMVideoFormatDescriptionCreate(CFAllocatorRef allocator, CMVideoCodecType codecType, int32_t width, int32_t height, CFDictionaryRef extensions, CMVideoFormatDescriptionRef *formatDescriptionOut);
OSStatus CMVideoFormatDescriptionCreateForImageBuffer(CFAllocatorRef allocator, CVImageBufferRef imageBuffer, CMVideoFormatDescriptionRef *formatDescriptionOut);
OSStatus CMVideoFormatDescriptionCreateFromH264ParameterSets(CFAllocatorRef allocator, size_t parameterSetCount, const uint8_t *const *parameterSetPointers, const size_t *parameterSetSizes, int NALUnitHeaderLength, CMFormatDescriptionRef *formatDescriptionOut);
OSStatus CMVideoFormatDescriptionCreateFromHEVCParameterSets(CFAllocatorRef allocator, size_t parameterSetCount, const uint8_t *const *parameterSetPointers, const size_t *parameterSetSizes, int NALUnitHeaderLength, CFDictionaryRef extensions, CMFormatDescriptionRef *formatDescriptionOut);
OSStatus CMVideoFormatDescriptionGetH264ParameterSetAtIndex(CMFormatDescriptionRef videoDesc, size_t parameterSetIndex, const uint8_t ** parameterSetPointerOut, size_t *parameterSetSizeOut, size_t *parameterSetCountOut, int *NALUnitHeaderLengthOut);

size_t CMSampleBufferGetSampleSize(CMSampleBufferRef sbuf, CMItemIndex sampleIndex);
size_t CMSampleBufferGetTotalSampleSize(CMSampleBufferRef sbuf);

uint64_t CMClockConvertHostTimeToSystemUnits(CMTime hostTime);

void CMNotificationCenterPostNotification(CFNotificationCenterRef center, CFNotificationName name, const void *object, CFDictionaryRef userInfo);
void CMSetAttachment(CMAttachmentBearerRef target, CFStringRef key, CFTypeRef value, CMAttachmentMode attachmentMode);
void CMTimeShow(CMTime time);
