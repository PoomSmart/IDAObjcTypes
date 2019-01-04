#import "../Types.h"
#import "IOKitTypes.h"

kern_return_t IOObjectRelease(io_object_t object);
kern_return_t IOObjectRetain(io_object_t object);