#ifndef COREAUDIO_H_
#define COREAUDIO_H_

#import "../BaseTypes.h"

typedef UInt32 AudioChannelLabel;
typedef UInt32 AudioChannelLayoutTag;

typedef struct AudioValueRange {
    Float64 mMinimum;
    Float64 mMaximum;
} AudioValueRange;

typedef struct AudioBuffer {
    UInt32 mNumberChannels;
    UInt32 mDataByteSize;
    void *mData;
} AudioBuffer;

typedef struct AudioBufferList {
    UInt32 mNumberBuffers;
    AudioBuffer mBuffers[1];
} AudioBufferList;

typedef struct AudioStreamBasicDescription {
    Float64 mSampleRate;
    UInt32 mFormatID;
    UInt32 mFormatFlags;
    UInt32 mBytesPerPacket;
    UInt32 mFramesPerPacket;
    UInt32 mBytesPerFrame;
    UInt32 mChannelsPerFrame;
    UInt32 mBitsPerChannel;
    UInt32 mReserved;
} AudioStreamBasicDescription;

typedef struct AudioStreamPacketDescription {
    SInt64 mStartOffset;
    UInt32 mVariableFramesInPacket;
    UInt32 mDataByteSize;
} AudioStreamPacketDescription;

typedef struct AudioChannelDescription {
    AudioChannelLabel  mChannelLabel;
    UInt32 mChannelFlags;
    Float32 mCoordinates[3];
} AudioChannelDescription;

typedef struct AudioChannelLayout {
    AudioChannelLayoutTag mChannelLayoutTag;
    UInt32 mChannelBitmap;
    UInt32 mNumberChannelDescriptions;
    AudioChannelDescription mChannelDescriptions[1];
} AudioChannelLayout;

#endif