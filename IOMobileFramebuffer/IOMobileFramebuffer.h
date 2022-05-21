#import "../Kernel/Types.h"
#import "../IOSurface/Types.h"
#import "Types.h"

IOMobileFramebufferReturn IOMobileFramebufferOpen(IOMobileFramebufferService service, task_port_t owningTask, unsigned int type, IOMobileFramebufferRef *pointer);
IOMobileFramebufferReturn IOMobileFramebufferOpenByName(IOMobileFramebufferDisplayType name, IOMobileFramebufferRef *pointer);
IOMobileFramebufferReturn IOMobileFramebufferGetMainDisplay(IOMobileFramebufferRef *pointer);
IOMobileFramebufferReturn IOMobileFramebufferGetDisplayArea(IOMobileFramebufferRef pointer, IOMobileFramebufferDisplayArea *displayArea);
IOMobileFramebufferReturn IOMobileFramebufferGetDisplaySize(IOMobileFramebufferRef pointer, IOMobileFramebufferDisplaySize *size);
IOMobileFramebufferReturn IOMobileFramebufferSwapBegin(IOMobileFramebufferRef pointer, int *token);
IOMobileFramebufferReturn IOMobileFramebufferSwapEnd(IOMobileFramebufferRef pointer);
IOMobileFramebufferReturn IOMobileFramebufferSwapSetLayer(IOMobileFramebufferRef pointer, int layerid, IOSurfaceRef buffer);
IOMobileFramebufferReturn IOMobileFramebufferSwapWait(IOMobileFramebufferRef pointer, int token, int something);
