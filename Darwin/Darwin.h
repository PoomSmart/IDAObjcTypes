#import "../Types.h"
#import "DarwinTypes.h"

uint32_t notify_register_dispatch(const char *name, int *out_token, dispatch_queue_t queue, notify_handler_t handler);

void dispatch_once(dispatch_block_t block);
void dispatch_sync(dispatch_queue_t queue, dispatch_block_t block);
void dispatch_async(dispatch_queue_t queue, dispatch_block_t block);
void dispatch_after(dispatch_time_t when, dispatch_queue_t queue, dispatch_block_t block);
void dispatch_source_set_event_handler(dispatch_source_t source, dispatch_block_t handler);