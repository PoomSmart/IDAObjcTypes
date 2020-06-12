#import "../BaseTypes.h"
#import "Types.h"

uint64_t mach_continuous_time(void);
uint64_t mach_continuous_approximate_time(void);

int mig_strncpy_zerofill(char *dest, const char *src, int len);
int kdebug_trace(uint32_t debugid, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4);

kern_return_t mach_port_construct(ipc_space_t task, mach_port_options_ptr_t options, uint64_t context, mach_port_name_t *name);
kern_return_t mach_port_destruct(ipc_space_t task, mach_port_name_t name, mach_port_delta_t srdelta, uint64_t guard);
kern_return_t mach_port_peek(ipc_space_t task, mach_port_name_t name, mach_msg_trailer_type_t trailer_type, mach_port_seqno_t *request_seqnop, mach_msg_size_t *msg_sizep, mach_msg_id_t *msg_idp, mach_msg_trailer_info_t trailer_infop, mach_msg_type_number_t *trailer_infopCnt);