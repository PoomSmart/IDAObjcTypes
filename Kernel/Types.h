#ifndef KERNEL_H_
#define KERNEL_H_

#import "../IOKit/Types.h"

#define kVariableLengthArray 1

typedef __darwin_natural_t natural_t;
typedef natural_t mach_port_seqno_t;

typedef u_int64_t user_addr_t;

typedef unsigned int FourCharCode;

typedef	unsigned int mach_msg_trailer_type_t;
typedef	unsigned int mach_msg_trailer_size_t;

typedef mach_vm_address_t mach_port_context_t;

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