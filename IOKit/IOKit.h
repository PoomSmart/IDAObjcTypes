#import "../Types.h"
#import "Types.h"

kern_return_t IOObjectRelease(io_object_t object);
kern_return_t _imp__IOObjectRelease(io_object_t object);
kern_return_t IOObjectRetain(io_object_t object);
kern_return_t _imp__IOObjectRetain(io_object_t object);

io_service_t IOServiceGetMatchingService(mach_port_t masterPort, CFDictionaryRef matching);
io_service_t _imp__IOServiceGetMatchingService(mach_port_t masterPort, CFDictionaryRef matching);

CFMutableDictionaryRef IOServiceMatching(const char* name);
CFMutableDictionaryRef _imp__IOServiceMatching(const char* name);