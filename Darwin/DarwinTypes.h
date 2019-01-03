#import "../Types.h"

typedef NSObject *dispatch_group_t;
typedef NSObject *dispatch_data_t;

typedef unsigned long dispatch_block_flags_t;

typedef void (*notify_handler_t)(int token);
typedef void (*dispatch_block_t)(void);

typedef bool (*dispatch_data_applier_t)(dispatch_data_t region, size_t offset, const void *buffer, size_t size);