#ifndef IOMOBILEFRAMEBUFFER_H_
#define IOMOBILEFRAMEBUFFER_H_

#import "../CoreGraphics/Types.h"
#import "../IOKit/Types.h"

typedef struct __IOMobileFramebuffer *IOMobileFramebufferRef;

typedef IOReturn IOMobileFramebufferReturn;

typedef io_service_t IOMobileFramebufferService;

typedef CGSize IOMobileFramebufferDisplaySize;
typedef CGFloat IOMobileFramebufferDisplayArea;

typedef CFTypeID IOMobileFramebufferID;

typedef CFStringRef IOMobileFramebufferDisplayType;

typedef int IOMobileFramebufferContrastLevel;
typedef int IOMobileFramebufferDotPitch;

#endif
