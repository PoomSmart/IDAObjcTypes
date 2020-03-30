#ifndef KERNEL_H_
#define KERNEL_H_

#import "../IOKit/Types.h"

#define kVariableLengthArray 1

typedef __darwin_natural_t natural_t;
typedef natural_t mach_port_seqno_t;
typedef natural_t mach_port_msgcount_t;
typedef natural_t mach_msg_size_t;

typedef integer_t mach_msg_id_t;

typedef char *mach_msg_trailer_info_t;

typedef u_int64_t user_addr_t;

typedef int boolean_t;

typedef unsigned int FourCharCode;
typedef	unsigned int mach_msg_trailer_type_t;
typedef	unsigned int mach_msg_trailer_size_t;
typedef unsigned int mach_msg_bits_t;

typedef struct mach_port_limits {
	mach_port_msgcount_t	mpl_qlimit;
} mach_port_limits_t;

typedef struct mach_port_options {
	uint32_t		flags;
	mach_port_limits_t	mpl;
	uint64_t		reserved[2];
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

typedef SInt16 OSErr;
typedef SInt32 OSStatus;

typedef FourCharCode OSType;

typedef struct security_token {
  unsigned int			val[2];
} security_token_t;

typedef struct audit_token {
  unsigned int			val[8];
} audit_token_t;

class OSObject;

typedef struct mach_msg_context_trailer {
  mach_msg_trailer_type_t	msgh_trailer_type;
  mach_msg_trailer_size_t	msgh_trailer_size;
  mach_port_seqno_t		msgh_seqno;
  security_token_t		msgh_sender;
  audit_token_t			msgh_audit;
  mach_port_context_t		msgh_context;
} mach_msg_context_trailer_t;

#endif