#ifndef MY_DARWIN_H_
#define MY_DARWIN_H_

#import "../Kernel/Types.h"
#import "../Foundation/Types.h"
#import "../BaseTypes.h"

typedef uint32_t mach_error_t;
typedef uint32_t dispatch_lock;
typedef uint32_t dispatch_priority_t;
typedef uint64_t dispatch_time_t;
typedef intptr_t dispatch_once_t;
typedef unsigned int qos_class_t;
typedef unsigned long dispatch_block_flags_t;
typedef unsigned long dispatch_workloop_param_flags_t;
typedef unsigned long dispatch_autorelease_frequency_t;
typedef int opaque_t;
typedef int dispatch_fd_t;
typedef long dispatch_queue_priority_t;

typedef NSObject *dispatch_object_t;
typedef NSObject *dispatch_source_t;
typedef NSObject *dispatch_group_t;
typedef NSObject *dispatch_data_t;
typedef NSObject *dispatch_workloop_t;
typedef NSObject *dispatch_queue_global_t;

typedef struct dispatch_queue_s *dispatch_queue_t;
typedef struct dispatch_queue_attr_s *dispatch_queue_attr_t;
typedef struct dispatch_mach_s *dispatch_mach_t;
typedef struct dispatch_mach_msg_s *dispatch_mach_msg_t;

typedef struct dispatch_unfair_lock_s {
	dispatch_lock dul_lock;
} dispatch_unfair_lock_s, *dispatch_unfair_lock_t;

typedef struct dispatch_pthread_root_queue_observer_hooks_s {
	void (*queue_will_execute)(dispatch_queue_t queue);
	void (*queue_did_execute)(dispatch_queue_t queue);
} *dispatch_pthread_root_queue_observer_hooks_t;

typedef qos_class_t dispatch_qos_class_t;

enum dispatch_mach_reason_t {
	DISPATCH_MACH_CONNECTED = 1,
	DISPATCH_MACH_MESSAGE_RECEIVED,
	DISPATCH_MACH_MESSAGE_SENT,
	DISPATCH_MACH_MESSAGE_SEND_FAILED,
	DISPATCH_MACH_MESSAGE_NOT_SENT,
	DISPATCH_MACH_BARRIER_COMPLETED,
	DISPATCH_MACH_DISCONNECTED,
	DISPATCH_MACH_CANCELED,
	DISPATCH_MACH_REASON_LAST,
};

enum dispatch_mach_msg_destructor_t {
	DISPATCH_MACH_MSG_DESTRUCTOR_DEFAULT = 0,
	DISPATCH_MACH_MSG_DESTRUCTOR_FREE,
	DISPATCH_MACH_MSG_DESTRUCTOR_VM_DEALLOCATE,
};

typedef mach_msg_context_trailer_t dispatch_mach_trailer_t;

#define DISPATCH_MACH_RECEIVE_MAX_INLINE_MESSAGE_SIZE (0x4000 - sizeof(dispatch_mach_trailer_t))

typedef void (*notify_handler_t)(int token);
typedef void (*dispatch_block_t)(void);
typedef void (*dispatch_function_t)(void *);
typedef void (*dispatch_mach_handler_t)(dispatch_mach_reason_t reason, dispatch_mach_msg_t message, mach_error_t error);
typedef void (*dispatch_mach_handler_function_t)(void *context, dispatch_mach_reason_t reason, dispatch_mach_msg_t message, mach_error_t error);

typedef bool (*dispatch_data_applier_t)(dispatch_data_t region, size_t offset, const void *buffer, size_t size);

typedef boolean_t (*dispatch_mig_callback_t)(mach_msg_header_t *message, mach_msg_header_t *reply);

// problematic
extern struct dispatch_queue_s _dispatch_main_q;
extern struct dispatch_queue_attr_s _dispatch_queue_attr_concurrent;

#endif