// #define SWIFT

// Uncomment ONE of these to match the minimum iOS version you are targeting.
// Cascading: defining IOS14 also implies IOS15, IOS16, IOS17.
// #define IOS14
// #define IOS15
// #define IOS16
// #define IOS17

// Cascading version implication — do not edit
#ifdef IOS14
    #define IOS15
#endif
#ifdef IOS15
    #define IOS16
#endif
#ifdef IOS16
    #define IOS17
#endif

#import "Types.h"
#import "Kernel/Kernel.h"
#import "dyld/dyld.h"
#import "pthread/pthread.h"
#import "Darwin/Darwin.h"
#import "icu/icu.h"
#import "AppSupport/AppSupport.h"
#import "AssetsLibraryServices/AssetsLibraryServices.h"
#import "AudioToolbox/AudioToolbox.h"
#import "AVFCapture/AVFCapture.h"
#import "AVFoundation/AVFoundation.h"
#import "CommonCrypto/CommonCrypto.h"
#import "CoreAnimation/CoreAnimation.h"
#import "CoreAudio/CoreAudio.h"
#import "CoreFoundation/CoreFoundation.h"
#import "CoreGraphics/CoreGraphics.h"
#import "CoreMedia/CoreMedia.h"
#import "CoreText/CoreText.h"
#import "CoreServices/CoreServices.h"
#import "CoreVideo/CoreVideo.h"
#import "CydiaSubstrate/CydiaSubstrate.h"
#import "Foundation/Foundation.h"
#import "GraphicsServices/GraphicsServices.h"
#import "IOMobileFramebuffer/IOMobileFramebuffer.h"
#import "IOKit/IOKit.h"
#import "IOSurface/IOSurface.h"
#import "MediaRemote/MediaRemote.h"
#import "MobileGestalt/MobileGestalt.h"
#import "PowerLog/PowerLog.h"
#import "QuartzCore/QuartzCore.h"
#import "UIKit/UIKit.h"
#import "objc/objc.h"
#import "os/os.h"
#import "sandbox/sandbox.h"
#import "Security/Security.h"
#import "SoftLinking/SoftLinking.h"
#import "xpc/xpc.h"
#import "sqlite/sqlite.h"
#ifdef SWIFT
#import "Swift/Swift.h"
#endif
#import "System/System.h"
#import "SystemConfiguration/SystemConfiguration.h"
#import "fishhook/fishhook.h"
