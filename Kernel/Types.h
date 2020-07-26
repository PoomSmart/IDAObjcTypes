#ifndef KERNEL_H_
#define KERNEL_H_

#import "../BaseTypes.h"

typedef __darwin_natural_t natural_t;
typedef natural_t mach_port_name_t;
typedef natural_t mach_port_seqno_t;
typedef natural_t mach_port_msgcount_t;
typedef natural_t mach_msg_type_number_t;
typedef natural_t mach_msg_size_t;
typedef kern_return_t mach_msg_return_t;

#define BOOTSTRAP_MAX_NAME_LEN 128

typedef char name_t[BOOTSTRAP_MAX_NAME_LEN];

#ifdef __EA64__
typedef long __darwin_ptrdiff_t;
#else
typedef int __darwin_ptrdiff_t;
#endif

typedef unsigned char __darwin_uuid_t[16];

typedef __darwin_uuid_t uuid_t;

typedef __darwin_ptrdiff_t ptrdiff_t;

typedef struct task *task_t;
typedef task_t task_port_t;

typedef integer_t mach_msg_id_t;
typedef integer_t mach_port_delta_t;

typedef char *mach_msg_trailer_info_t;

typedef uint16_t mode_t;
typedef uint64_t mach_vm_size_t;
typedef u_int64_t user_addr_t;

typedef int boolean_t;

typedef char gid_t;
typedef short uid_t;
typedef int pid_t;

typedef unsigned int FourCharCode;
typedef unsigned int mach_msg_trailer_type_t;
typedef unsigned int mach_msg_trailer_size_t;
typedef unsigned int mach_msg_bits_t;

typedef SInt16 OSErr;
typedef SInt32 OSStatus;
typedef UInt32 OptionBits;

typedef FourCharCode OSType;

typedef struct ipc_space *ipc_space_t;

typedef struct mach_port_limits {
    mach_port_msgcount_t mpl_qlimit;
} mach_port_limits_t;

typedef struct mach_port_options {
    uint32_t flags;
    mach_port_limits_t mpl;
    uint64_t reserved[2];
} mach_port_options_t;

typedef struct mach_msg_header {
    mach_msg_bits_t msgh_bits;
    mach_msg_size_t msgh_size;
    mach_port_t msgh_remote_port;
    mach_port_t msgh_local_port;
    mach_msg_size_t msgh_reserved;
    mach_msg_id_t msgh_id;
} mach_msg_header_t;

typedef mach_vm_address_t mach_port_context_t;
typedef mach_port_options_t *mach_port_options_ptr_t;

typedef struct security_token {
    unsigned int val[2];
} security_token_t;

typedef struct audit_token {
    unsigned int val[8];
} audit_token_t;

typedef struct mach_msg_context_trailer {
    mach_msg_trailer_type_t msgh_trailer_type;
    mach_msg_trailer_size_t msgh_trailer_size;
    mach_port_seqno_t msgh_seqno;
    security_token_t msgh_sender;
    audit_token_t msgh_audit;
    mach_port_context_t msgh_context;
} mach_msg_context_trailer_t;

#endif