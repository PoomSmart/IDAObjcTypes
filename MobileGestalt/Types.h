#import "../BaseTypes.h"

PS_ENUM(int, MGProductType) {
    MGProductTypeUnknown = -1,
};

PS_ENUM(int, MGDeviceClass) {
    MGDeviceClassInvalid            = -1,
    MGDeviceClassiPhone             = 1,
    MGDeviceClassiPod               = 2,
    MGDeviceClassiPad               = 3,
    MGDeviceClassAppleTV            = 4,
    MGDeviceClassiFPGA              = 5,
    MGDeviceClassWatch              = 6,
    MGDeviceClassAudioAccessory     = 7,
    MGDeviceClassiBridge            = 8,
    MGDeviceClassMac                = 9,
    MGDeviceClassAppleDisplay       = 10,
    MGDeviceClassRealityDevice      = 11,
    MGDeviceClassComputeModule      = 12,
};
