#import "../Darwin/Types.h"

void pl_dispatch_after(dispatch_time_t when, dispatch_queue_t queue, dispatch_block_t block);
void pl_dispatch_async(dispatch_queue_t queue, dispatch_block_t block);
void pl_dispatch_sync(dispatch_queue_t queue, dispatch_block_t block);
void pl_dispatch_group_notify(dispatch_group_t group, dispatch_queue_t queue, dispatch_block_t block);