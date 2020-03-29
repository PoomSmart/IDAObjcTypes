#import "./Types.h"
#import "Types.h"

void asl_release(asl_object_t obj);

int renamex_np(const char *from, const char *to, unsigned int flags);
int memorystatus_get_level(user_addr_t level);
int memorystatus_control(uint32_t command, int32_t pid, uint32_t flags, void *buffer, size_t buffersize);

asl_object_t asl_next(asl_object_t obj);

kern_return_t bootstrap_look_up2(mach_port_t bp, const name_t service_name, mach_port_t *sp, pid_t target_pid, uint64_t flags);

boolean_t voucher_mach_msg_set(mach_msg_header_t *msg);