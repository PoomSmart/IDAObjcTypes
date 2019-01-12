#ifndef DARWIN_H_
#define DARWIN_H_

#import "../Foundation/Types.h"

typedef NSObject *dispatch_group_t;
typedef NSObject *dispatch_data_t;
typedef NSObject *dispatch_queue_t;
typedef NSObject *dispatch_queue_attr_t;

typedef uint64_t dispatch_time_t;

typedef unsigned int qos_class_t;
typedef unsigned long dispatch_block_flags_t;
typedef unsigned long dispatch_autorelease_frequency_t;

typedef qos_class_t dispatch_qos_class_t;

typedef void (*notify_handler_t)(int token);
typedef void (*dispatch_block_t)(void);

typedef bool (*dispatch_data_applier_t)(dispatch_data_t region, size_t offset, const void *buffer, size_t size);

#endif