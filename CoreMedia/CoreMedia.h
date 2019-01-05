#import "../Types.h"
#import "../CoreFoundation/Types.h"
#import "../CoreVideo/Types.h"
#import "Types.h"

Boolean CMFormatDescriptionEqual(CMFormatDescriptionRef formatDescription, CMFormatDescriptionRef otherFormatDescription);
Boolean CMFormatDescriptionEqualIgnoringExtensionKeys(CMFormatDescriptionRef formatDescription, CMFormatDescriptionRef otherFormatDescription, CFTypeRef formatDescriptionExtensionKeysToIgnore, CFTypeRef sampleDescriptionExtensionAtomKeysToIgnore);
Boolean CMVideoFormatDescriptionMatchesImageBuffer(CMVideoFormatDescriptionRef desc, CVImageBufferRef imageBuffer);
Boolean CMVideoFormatDescriptionGetVideoDynamicRange(CMVideoFormatDescriptionRef desc);
Boolean CMAudioFormatDescriptionEqual(CMAudioFormatDescriptionRef formatDescription, CMAudioFormatDescriptionRef otherFormatDescription, CMAudioFormatDescriptionMask equalityMask, CMAudioFormatDescriptionMask *equalityMaskOut);
Boolean CMDoesBigEndianSoundDescriptionRequireLegacyCBRSampleTableLayout(CMBlockBufferRef soundDescriptionBlockBuffer, CMSoundDescriptionFlavor flavor);
Boolean CMSampleBufferDataIsReady(CMSampleBufferRef sbuf);
Boolean CMSampleBufferIsValid(CMSampleBufferRef sbuf);
Boolean CMSampleBufferHasDataFailed(CMSampleBufferRef sbuf, OSStatus *statusOut);

FourCharCode CMFormatDescriptionGetMediaSubType(CMFormatDescriptionRef desc);

Float64 CMTimeGetSeconds(CMTime time);

int32_t CMTimeCompare(CMTime time1, CMTime time2);

uint64_t CMClockConvertHostTimeToSystemUnits(CMTime hostTime);

size_t CMSampleBufferGetSampleSize(CMSampleBufferRef sbuf, CMItemIndex sampleIndex);
size_t CMSampleBufferGetTotalSampleSize(CMSampleBufferRef sbuf);

void CMTimeShow(CMTime time);
void CMNotificationCenterPostNotification(CFNotificationCenterRef center, CFNotificationName name, const void *object, CFDictionaryRef userInfo);

const AudioStreamBasicDescription *CMAudioFormatDescriptionGetStreamBasicDescription(CMAudioFormatDescriptionRef desc);
const AudioChannelLayout *CMAudioFormatDescriptionGetChannelLayout(CMAudioFormatDescriptionRef desc, size_t *sizeOut);
const AudioFormatListItem *CMAudioFormatDescriptionGetFormatList(CMAudioFormatDescriptionRef desc, size_t *sizeOut);
const AudioFormatListItem *CMAudioFormatDescriptionGetMostCompatibleFormat(CMAudioFormatDescriptionRef desc);
const AudioFormatListItem *CMAudioFormatDescriptionGetRichestDecodableFormat(CMAudioFormatDescriptionRef desc);
const void *CMAudioFormatDescriptionGetMagicCookie(CMAudioFormatDescriptionRef desc, size_t *sizeOut);

CGRect CMVideoFormatDescriptionGetCleanAperture(CMVideoFormatDescriptionRef videoDesc, Boolean originIsAtTopLeft);

CGSize CMVideoFormatDescriptionGetPresentationDimensions(CMVideoFormatDescriptionRef videoDesc, Boolean usePixelAspectRatio, Boolean useCleanAperture);

CMTime CMTimeMake(int64_t value, int32_t timescale);
CMTime CMTimeMakeWithSeconds(Float64 seconds, int32_t preferredTimescale);
CMTime CMTimeMakeFromDictionary(CFDictionaryRef dictionaryRepresentation);
CMTime CMTimeMakeWithEpoch(int64_t value, int32_t timescale, int64_t epoch);
CMTime CMTimeMaximum(CMTime time1, CMTime time2);
CMTime CMTimeMinimum(CMTime time1, CMTime time2);
CMTime CMTimeAbsoluteValue(CMTime time);
CMTime CMTimeAdd(CMTime lhs, CMTime rhs);
CMTime CMTimeSubtract(CMTime lhs, CMTime rhs);
CMTime CMTimeMultiply(CMTime time, int32_t multiplier);
CMTime CMTimeMultiplyByRatio(CMTime time, int32_t multiplier, int32_t divisor);
CMTime CMTimeMultiplyByFloat64(CMTime time, Float64 multiplier);
CMTime CMTimeConvertScale(CMTime time, int32_t newTimescale, CMTimeRoundingMethod method);
CMTime CMClockGetTime(CMClockRef clock);
CMTime CMClockMakeHostTimeFromSystemUnits(uint64_t hostTime);
CMTime CMSampleBufferGetDecodeTimeStamp(CMSampleBufferRef sbuf);
CMTime CMSampleBufferGetDuration(CMSampleBufferRef sbuf);
CMTime CMSampleBufferGetPresentationTimeStamp(CMSampleBufferRef sbuf);
CMTime CMSampleBufferGetOutputDuration(CMSampleBufferRef sbuf);
CMTime CMSampleBufferGetOutputPresentationTimeStamp(CMSampleBufferRef sbuf);
CMTime CMSampleBufferGetOutputDecodeTimeStamp(CMSampleBufferRef sbuf);

CMTimeRange CMTimeRangeMake(CMTime start, CMTime duration);

CMNotificationCenterRef CMNotificationCenterGetDefaultLocalCenter(void);

CMMediaType CMFormatDescriptionGetMediaType(CMFormatDescriptionRef desc);

CMClockRef CMClockGetHostTimeClock(void);

CMFormatDescriptionRef CMSampleBufferGetFormatDescription(CMSampleBufferRef sbuf);

CMBlockBufferRef CMSampleBufferGetDataBuffer(CMSampleBufferRef sbuf);

CMVideoDimensions CMVideoFormatDescriptionGetDimensions(CMVideoFormatDescriptionRef videoDesc);

CMItemCount CMSampleBufferGetNumSamples(CMSampleBufferRef sbuf);

CVImageBufferRef CMSampleBufferGetImageBuffer(CMSampleBufferRef sbuf);

CFNotificationCenterRef CMNotificationCenterCreate(void); // CMNotificationCenterRef ?

CFTypeID CMFormatDescriptionGetTypeID(void);
CFTypeID FigEndpointManagerGetTypeID(void);

CFStringRef CMTimeCopyDescription(CFAllocatorRef allocator, CMTime time);

CFDictionaryRef CMTimeCopyAsDictionary(CMTime time, CFAllocatorRef allocator);
CFDictionaryRef CMFormatDescriptionGetExtensions(CMFormatDescriptionRef desc);

CFArrayRef CMVideoFormatDescriptionGetExtensionKeysCommonWithImageBuffers(void);
CFArrayRef CMSampleBufferGetSampleAttachmentsArray(CMSampleBufferRef sbuf, Boolean createIfNecessary);

CFPropertyListRef CMFormatDescriptionGetExtension(CMFormatDescriptionRef desc, CFStringRef extensionKey);

OSStatus CMVideoFormatDescriptionCreate(CFAllocatorRef allocator, CMVideoCodecType codecType, int32_t width, int32_t height, CFDictionaryRef extensions, CMVideoFormatDescriptionRef *formatDescriptionOut);
OSStatus CMVideoFormatDescriptionCreateForImageBuffer(CFAllocatorRef allocator, CVImageBufferRef imageBuffer, CMVideoFormatDescriptionRef *formatDescriptionOut);
OSStatus CMClockGetAnchorTime(CMClockRef clock, CMTime *clockTimeOut, CMTime *referenceClockTimeOut);
OSStatus CMFormatDescriptionCreate(CFAllocatorRef allocator, CMMediaType mediaType, FourCharCode mediaSubType, CFDictionaryRef extensions, CMFormatDescriptionRef *formatDescriptionOut);
OSStatus CMNotificationCenterAddListener(CMNotificationCenterRef inCenter, const void *inListener, CMNotificationCallback inCallBack, CFStringRef inNotificationName, const void *inObjectToObserve, UInt32 inFlags);
OSStatus CMNotificationCenterRemoveListener(CMNotificationCenterRef inCenter, const void *inListener, CMNotificationCallback inCallBack, CFStringRef inNotificationName, const void *inObject);
OSStatus CMSampleBufferCreate(CFAllocatorRef allocator, CMBlockBufferRef dataBuffer, Boolean dataReady, CMSampleBufferMakeDataReadyCallback makeDataReadyCallback, void *makeDataReadyRefcon, CMFormatDescriptionRef formatDescription, CMItemCount numSamples, CMItemCount numSampleTimingEntries, const CMSampleTimingInfo *sampleTimingArray, CMItemCount numSampleSizeEntries, const size_t *sampleSizeArray, CMSampleBufferRef *sampleBufferOut);
OSStatus CMSampleBufferCreateCopy(CFAllocatorRef allocator, CMSampleBufferRef sbuf, CMSampleBufferRef *sampleBufferOut);
OSStatus CMSampleBufferCreateCopyWithNewTiming(CFAllocatorRef allocator, CMSampleBufferRef originalSBuf, CMItemCount numSampleTimingEntries, const CMSampleTimingInfo *sampleTimingArray, CMSampleBufferRef *sampleBufferOut);
OSStatus CMSampleBufferCreateReady(CFAllocatorRef allocator, CMBlockBufferRef dataBuffer, CMFormatDescriptionRef formatDescription, CMItemCount numSamples, CMItemCount numSampleTimingEntries, const CMSampleTimingInfo *sampleTimingArray, CMItemCount numSampleSizeEntries, const size_t *sampleSizeArray, CMSampleBufferRef *sampleBufferOut);
OSStatus CMSampleBufferCreateForImageBuffer(CFAllocatorRef allocator, CVImageBufferRef imageBuffer, Boolean dataReady, CMSampleBufferMakeDataReadyCallback makeDataReadyCallback, void *makeDataReadyRefcon, CMVideoFormatDescriptionRef formatDescription, const CMSampleTimingInfo *sampleTiming, CMSampleBufferRef *sampleBufferOut);
OSStatus CMSampleBufferCreateReadyWithImageBuffer(CFAllocatorRef allocator, CVImageBufferRef imageBuffer, CMVideoFormatDescriptionRef formatDescription, const CMSampleTimingInfo *sampleTiming, CMSampleBufferRef *sampleBufferOut);
OSStatus CMSampleBufferMakeDataReady(CMSampleBufferRef sbuf);
OSStatus CMSampleBufferInvalidate(CMSampleBufferRef sbuf);
OSStatus CMSampleBufferSetDataReady(CMSampleBufferRef sbuf);
OSStatus CMSampleBufferSetDataFailed(CMSampleBufferRef sbuf, OSStatus status);
OSStatus CMSampleBufferSetDataBuffer(CMSampleBufferRef sbuf, CMBlockBufferRef dataBuffer);
OSStatus CMSampleBufferSetInvalidateHandler(CMSampleBufferRef sbuf, CMSampleBufferInvalidateHandler invalidateHandler);
OSStatus CMSampleBufferSetInvalidateCallback(CMSampleBufferRef sbuf, CMSampleBufferInvalidateCallback invalidateCallback, uint64_t invalidateRefCon);
OSStatus CMSampleBufferSetOutputPresentationTimeStamp(CMSampleBufferRef sbuf, CMTime outputPresentationTimeStamp);
OSStatus CMSampleBufferCopySampleBufferForRange(CFAllocatorRef allocator, CMSampleBufferRef sbuf, CFRange sampleRange, CMSampleBufferRef *sampleBufferOut);
OSStatus CMSampleBufferTrackDataReadiness(CMSampleBufferRef sbuf, CMSampleBufferRef sampleBufferToTrack);
OSStatus CMSampleBufferGetSampleTimingInfoArray(CMSampleBufferRef sbuf, CMItemCount numSampleTimingEntries, CMSampleTimingInfo *timingArrayOut, CMItemCount *timingArrayEntriesNeededOut);
OSStatus CMSampleBufferGetOutputSampleTimingInfoArray(CMSampleBufferRef sbuf, CMItemCount timingArrayEntries, CMSampleTimingInfo *timingArrayOut, CMItemCount *timingArrayEntriesNeededOut);
OSStatus CMSampleBufferGetSampleTimingInfo(CMSampleBufferRef sbuf, CMItemIndex sampleIndex, CMSampleTimingInfo *timingInfoOut);
OSStatus CMSampleBufferGetSampleSizeArray(CMSampleBufferRef sbuf, CMItemCount sizeArrayEntries, size_t *sizeArrayOut, CMItemCount *sizeArrayEntriesNeededOut);
OSStatus CMSampleBufferCallForEachSample(CMSampleBufferRef sbuf, OSStatus (*callback)(CMSampleBufferRef sampleBuffer, CMItemCount index, void *refcon), void *refcon);
OSStatus CMSampleBufferCallBlockForEachSample(CMSampleBufferRef sbuf, OSStatus (*handler)(CMSampleBufferRef sampleBuffer, CMItemCount index));
OSStatus CMSampleBufferSetDataBufferFromAudioBufferList(CMSampleBufferRef sbuf, CFAllocatorRef blockBufferStructureAllocator, CFAllocatorRef blockBufferBlockAllocator, uint32_t flags, const AudioBufferList *bufferList);
OSStatus CMSampleBufferGetAudioBufferListWithRetainedBlockBuffer(CMSampleBufferRef sbuf, size_t *bufferListSizeNeededOut, AudioBufferList *bufferListOut, size_t bufferListSize, CFAllocatorRef blockBufferStructureAllocator, CFAllocatorRef blockBufferBlockAllocator, uint32_t flags, CMBlockBufferRef *blockBufferOut);
OSStatus CMSampleBufferCopyPCMDataIntoAudioBufferList(CMSampleBufferRef sbuf, int32_t frameOffset, int32_t numFrames, AudioBufferList *bufferList);
OSStatus CMSampleBufferGetAudioStreamPacketDescriptionsPtr(CMSampleBufferRef sbuf, const AudioStreamPacketDescription **packetDescriptionsPtrOut, size_t *packetDescriptionsSizeOut);
OSStatus CMSampleBufferGetAudioStreamPacketDescriptions(CMSampleBufferRef sbuf, size_t packetDescriptionsSize, AudioStreamPacketDescription *packetDescriptionsOut, size_t *packetDescriptionsSizeNeededOut);
OSStatus CMAudioSampleBufferCreateWithPacketDescriptions(CFAllocatorRef allocator, CMBlockBufferRef dataBuffer, Boolean dataReady, CMSampleBufferMakeDataReadyCallback makeDataReadyCallback, void *makeDataReadyRefcon, CMFormatDescriptionRef formatDescription, CMItemCount numSamples, CMTime presentationTimeStamp, const AudioStreamPacketDescription *packetDescriptions, CMSampleBufferRef *sampleBufferOut);
OSStatus CMAudioSampleBufferCreateReadyWithPacketDescriptions(CFAllocatorRef allocator, CMBlockBufferRef dataBuffer, CMFormatDescriptionRef formatDescription, CMItemCount numSamples, CMTime presentationTimeStamp, const AudioStreamPacketDescription *packetDescriptions, CMSampleBufferRef *sampleBufferOut);
OSStatus CMAudioFormatDescriptionCreate(CFAllocatorRef allocator, const AudioStreamBasicDescription *asbd, size_t layoutSize, const AudioChannelLayout *layout, size_t magicCookieSize, const void *magicCookie, CFDictionaryRef extensions, CMAudioFormatDescriptionRef *formatDescriptionOut);
OSStatus CMAudioFormatDescriptionCreateSummary(CFAllocatorRef allocator, CFArrayRef formatDescriptionArray, uint32_t flags, CMAudioFormatDescriptionRef  *formatDescriptionOut);
OSStatus CMAudioFormatDescriptionCreateFromBigEndianSoundDescriptionData(CFAllocatorRef allocator, const uint8_t *soundDescriptionData, size_t size, CMSoundDescriptionFlavor flavor, CMAudioFormatDescriptionRef *formatDescriptionOut);
OSStatus CMAudioFormatDescriptionCreateFromBigEndianSoundDescriptionBlockBuffer(CFAllocatorRef allocator, CMBlockBufferRef soundDescriptionBlockBuffer, CMSoundDescriptionFlavor flavor, CMAudioFormatDescriptionRef *formatDescriptionOut);
OSStatus CMAudioFormatDescriptionCopyAsBigEndianSoundDescriptionBlockBuffer(CFAllocatorRef allocator, CMAudioFormatDescriptionRef audioFormatDescription, CMSoundDescriptionFlavor flavor, CMBlockBufferRef *blockBufferOut);
OSStatus CMSwapBigEndianSoundDescriptionToHost(uint8_t *soundDescriptionData, size_t soundDescriptionSize);
OSStatus CMSwapHostEndianSoundDescriptionToBig(uint8_t *soundDescriptionData, size_t soundDescriptionSize);