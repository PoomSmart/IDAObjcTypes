#import "../Types.h"
#import "DarwinTypes.h"

struct __float2 { float __sinval; float __cosval; };
struct __double2 { double __sinval; double __cosval; };

struct __float2 __sincosf_stret(float);
struct __double2 __sincos_stret(double);
struct __float2 __sincospif_stret(float);
struct __double2 __sincospi_stret(double);

uint32_t notify_register_dispatch(const char *name, int *out_token, dispatch_queue_t queue, notify_handler_t handler);

size_t dispatch_data_get_size(dispatch_data_t data);

size_t __strlcpy_chk (char *dest, char *src, size_t len, size_t dstlen);

int backtrace(void **array, int size);

long dispatch_block_wait(dispatch_block_t block, dispatch_time_t timeout);

bool os_variant_has_internal_content(const char *subsystem);
bool dispatch_data_apply(dispatch_data_t data, dispatch_data_applier_t applier);

double __exp10(double);

char **backtrace_symbols(void * const *array, int size);
void *bsearch_b(const void *, const void *, size_t, size_t, int (*)(const void *, const void *));
void *__memcpy_chk(void *dest, const void *src, size_t len, size_t dstlen);
void *__memmove_chk (void *dest, const void *src, size_t len, size_t dstlen);
void *__strncpy_chk(char *dest, char *src, size_t len, size_t dstlen);

void abort_report_np(const char *, ...);
void backtrace_symbols_fd(void * const *array, int size, int fd);
void dispatch_once(dispatch_block_t block);
void dispatch_apply(size_t iterations, dispatch_queue_t queue, void (*block)(size_t));
void dispatch_sync(dispatch_queue_t queue, dispatch_block_t block);
void dispatch_async(dispatch_queue_t queue, dispatch_block_t block);
void dispatch_after(dispatch_time_t when, dispatch_queue_t queue, dispatch_block_t block);
void dispatch_source_set_event_handler(dispatch_source_t source, dispatch_block_t handler);
void dispatch_group_async(dispatch_group_t group, dispatch_queue_t queue, dispatch_block_t block);
void dispatch_group_notify(dispatch_group_t group, dispatch_queue_t queue, dispatch_block_t block);
void dispatch_activate(dispatch_object_t object);
void dispatch_barrier_sync(dispatch_queue_t queue, dispatch_block_t block);
void dispatch_block_cancel(dispatch_block_t block);

dispatch_block_t dispatch_block_create(dispatch_block_flags_t flags, dispatch_block_t block);

dispatch_data_t dispatch_data_create(const void *buffer, size_t size, dispatch_queue_t queue, dispatch_block_t destructor);
dispatch_data_t dispatch_data_create_map(dispatch_data_t data, const void **buffer_ptr, size_t *size_ptr);
dispatch_data_t dispatch_data_create_concat(dispatch_data_t data1, dispatch_data_t data2);
dispatch_data_t dispatch_data_create_subrange(dispatch_data_t data, size_t offset, size_t length);
dispatch_data_t dispatch_data_copy_region(dispatch_data_t data, size_t location, size_t *offset_ptr);

dispatch_queue_t dispatch_pthread_root_queue_create(const char *label, unsigned long flags,	const pthread_attr_t *attr, dispatch_block_t configure);

dispatch_queue_attr_t dispatch_queue_attr_make_with_qos_class(dispatch_queue_attr_t attr, dispatch_qos_class_t qos_class, int relative_priority);
dispatch_queue_attr_t dispatch_queue_attr_make_with_overcommit(dispatch_queue_attr_t attr, bool overcommit);