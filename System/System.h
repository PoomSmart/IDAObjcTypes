#import "../BaseTypes.h"
#import "../Kernel/Types.h"
#import "Types.h"

void asl_release(asl_object_t obj);

void *__memccpy_chk(void *dest, const void *src, int c, size_t len, size_t dstlen);

int renamex_np(const char *from, const char *to, unsigned int flags);
int memorystatus_get_level(user_addr_t level);
int memorystatus_control(uint32_t command, int32_t pid, uint32_t flags, void *buffer, size_t buffersize);
int csops(pid_t pid, unsigned int ops, void *useraddr, size_t usersize);
int csops_audittoken(pid_t pid, unsigned int ops, void *useraddr, size_t usersize, audit_token_t *token);

asl_object_t asl_next(asl_object_t obj);

qos_class_t qos_class_main(void);

kern_return_t bootstrap_look_up2(mach_port_t bp, const name_t service_name, mach_port_t *sp, pid_t target_pid, uint64_t flags);

boolean_t voucher_mach_msg_set(mach_msg_header_t *msg);