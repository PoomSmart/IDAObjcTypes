// #define SWIFT
// #define IOS14
#import "Types.h"
#import "Kernel/Kernel.h"
#import "dyld/dyld.h"
#import "pthread/pthread.h"
#import "Darwin/Darwin.h"
#import "icu/icu.h"
#import "AppSupport/AppSupport.h"
#import "AssetsLibraryServices/AssetsLibraryServices.h"
#import "AudioToolbox/AudioToolbox.h"
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

/*
*  Copyright (C) Apple Inc. All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*  1. Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*  2. Redistributions in binary form must reproduce the above copyright
*     notice, this list of conditions and the following disclaimer in the
*     documentation and/or other materials provided with the distribution.
*
*  THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
*  EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
*  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
*  PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
*  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
*  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
*  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
*  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
*  OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
* /