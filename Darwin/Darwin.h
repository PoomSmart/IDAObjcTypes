#import "../pthread/Types.h"
#import "Types.h"

bool dispatch_data_apply(dispatch_data_t data, dispatch_data_applier_t applier);
bool dispatch_mach_mig_demux(void *context, const struct mig_subsystem *const subsystems[], size_t count, dispatch_mach_msg_t dmsg);
bool notify_is_valid_token(int val);

char *__strcat_chk(char *dest, const char *src, size_t destlen);
char *__strcpy_chk(char *dest, const char *src, size_t destlen);
char *__strncat_chk(char *dest, const char *src, size_t len, size_t dstlen);
char **backtrace_symbols(void * const *array, int size);

dispatch_block_t dispatch_block_create(dispatch_block_flags_t flags, dispatch_block_t block);
dispatch_block_t dispatch_block_create_with_qos_class(dispatch_block_flags_t flags, dispatch_qos_class_t qos_class, int relative_priority, dispatch_block_t block);
dispatch_block_t dispatch_block_create_with_voucher(dispatch_block_flags_t flags, voucher_t voucher, dispatch_block_t block);
dispatch_block_t dispatch_block_create_with_voucher_and_qos_class(dispatch_block_flags_t flags, voucher_t voucher, dispatch_qos_class_t qos_class, int relative_priority, dispatch_block_t block);

dispatch_data_t dispatch_data_copy_region(dispatch_data_t data, size_t location, size_t *offset_ptr);
dispatch_data_t dispatch_data_create_alloc(size_t size, void** buffer_ptr);
dispatch_data_t dispatch_data_create_concat(dispatch_data_t data1, dispatch_data_t data2);
dispatch_data_t dispatch_data_create_map(dispatch_data_t data, const void **buffer_ptr, size_t *size_ptr);
dispatch_data_t dispatch_data_create_subrange(dispatch_data_t data, size_t offset, size_t length);
dispatch_data_t dispatch_data_create(const void *buffer, size_t size, dispatch_queue_t queue, dispatch_block_t destructor);

dispatch_io_t dispatch_io_create_with_io(dispatch_io_type_t type, dispatch_io_t io, dispatch_queue_t queue, void (*cleanup_handler)(int error));
dispatch_io_t dispatch_io_create_with_path(dispatch_io_type_t type, const char *path, int oflag, mode_t mode, dispatch_queue_t queue, void (*cleanup_handler)(int error));
dispatch_io_t dispatch_io_create(dispatch_io_type_t type, dispatch_fd_t fd, dispatch_queue_t queue, void (*cleanup_handler)(int error));

dispatch_mach_msg_t dispatch_mach_msg_create(mach_msg_header_t *msg, size_t size, dispatch_mach_msg_destructor_t destructor, mach_msg_header_t **msg_ptr);

dispatch_mach_t dispatch_mach_create_f(const char *label, dispatch_queue_t queue, void *context, dispatch_mach_handler_function_t handler);
dispatch_mach_t dispatch_mach_create(const char *label, dispatch_queue_t queue, dispatch_mach_handler_t handler);

dispatch_queue_attr_t dispatch_queue_attr_make_initially_inactive(dispatch_queue_attr_t attr);
dispatch_queue_attr_t dispatch_queue_attr_make_with_autorelease_frequency(dispatch_queue_attr_t attr, dispatch_autorelease_frequency_t frequency);
dispatch_queue_attr_t dispatch_queue_attr_make_with_overcommit(dispatch_queue_attr_t attr, bool overcommit);
dispatch_queue_attr_t dispatch_queue_attr_make_with_qos_class(dispatch_queue_attr_t attr, dispatch_qos_class_t qos_class, int relative_priority);

dispatch_queue_global_t _dispatch_pthread_root_queue_create_with_observer_hooks_4IOHID(const char *label, unsigned long flags, const pthread_attr_t *attr, dispatch_pthread_root_queue_observer_hooks_t observer_hooks, dispatch_block_t configure);
dispatch_queue_global_t dispatch_get_global_queue(intptr_t identifier, uintptr_t flags);

dispatch_queue_t dispatch_pthread_root_queue_create(const char *label, unsigned long flags,	const pthread_attr_t *attr, dispatch_block_t configure);
dispatch_queue_t dispatch_queue_create_with_target$V2(const char *label, dispatch_queue_attr_t attr, dispatch_queue_t target);

dispatch_semaphore_t dispatch_semaphore_create(intptr_t value);

dispatch_source_t dispatch_source_create(dispatch_source_type_t type, uintptr_t handle, uintptr_t mask, dispatch_queue_t queue);

dispatch_workloop_t dispatch_workloop_create_inactive(const char *label);
dispatch_workloop_t dispatch_workloop_create(const char *label);

double __exp10(double);

errno_t memset_s(void *dest, rsize_t destsz, int ch, rsize_t count);

float __exp10f(float);

int _stdlib_memcmp(const void *s1, const void *s2, size_t n);
int backtrace(void **array, int size);

intptr_t dispatch_block_testcancel(dispatch_block_t block);
intptr_t dispatch_block_wait(dispatch_block_t block, dispatch_time_t timeout);
intptr_t dispatch_group_wait(dispatch_group_t group, dispatch_time_t timeout);
intptr_t dispatch_semaphore_signal(dispatch_semaphore_t dsema);
intptr_t dispatch_semaphore_wait(dispatch_semaphore_t dsema, dispatch_time_t timeout);
intptr_t dispatch_source_testcancel(dispatch_source_t source);

mach_msg_header_t *dispatch_mach_msg_get_msg(dispatch_mach_msg_t message, size_t *size_ptr);

mach_msg_return_t dispatch_mig_server(dispatch_source_t ds, size_t maxmsgsz, dispatch_mig_callback_t callback);

mach_port_t dispatch_mach_get_checkin_port(dispatch_mach_t channel);

size_t __strlcat_chk(char *dest, char *src, size_t len, size_t dstlen);
size_t __strlcpy_chk(char *dest, char *src, size_t len, size_t dstlen);
size_t _stdlib_malloc_size(const void *ptr);
size_t dispatch_data_get_size(dispatch_data_t data);

struct __double2 __sincos_stret(double);
struct __double2 __sincospi_stret(double);
struct __double2 { double __sinval; double __cosval; };
struct __float2 __sincosf_stret(float);
struct __float2 __sincospif_stret(float);
struct __float2 { float __sinval; float __cosval; };

uint32_t notify_register_dispatch(const char *name, int *out_token, dispatch_queue_t queue, notify_handler_t handler);

uintptr_t dispatch_source_get_mask(dispatch_source_t source);

void *__memcpy_chk(void *dest, const void *src, size_t len, size_t dstlen);
void *__memmove_chk(void *dest, const void *src, size_t len, size_t dstlen);
void *__memset_chk(void *dstpp, int c, size_t len, size_t dstlen);
void *__strncpy_chk(char *dest, char *src, size_t len, size_t dstlen);
void *bsearch_b(const void *, const void *, size_t, size_t, int (*)(const void *, const void *));
void *dispatch_mach_mig_demux_get_context(void);

void abort_report_np(const char *, ...);
void backtrace_symbols_fd(void * const *array, int size, int fd);
void dispatch_activate(dispatch_object_t object);
void dispatch_after(dispatch_time_t when, dispatch_queue_t queue, dispatch_block_t block);
void dispatch_apply(size_t iterations, dispatch_queue_t queue, void (*block)(size_t));
void dispatch_assert_queue_not$V2(dispatch_queue_t queue);
void dispatch_assert_queue(dispatch_queue_t queue);
void dispatch_assert_queue$V2(dispatch_queue_t queue);
void dispatch_async_and_wait(dispatch_queue_t queue, dispatch_block_t block);
void dispatch_async(dispatch_queue_t queue, dispatch_block_t block);
void dispatch_barrier_async(dispatch_queue_t queue, dispatch_block_t block);
void dispatch_barrier_sync(dispatch_queue_t queue, dispatch_block_t block);
void dispatch_block_cancel(dispatch_block_t block);
void dispatch_group_async(dispatch_group_t group, dispatch_queue_t queue, dispatch_block_t block);
void dispatch_group_notify(dispatch_group_t group, dispatch_queue_t queue, dispatch_block_t block);
void dispatch_io_barrier(dispatch_io_t channel, dispatch_block_t barrier);
void dispatch_io_close(dispatch_io_t channel, dispatch_io_close_flags_t flags);
void dispatch_io_read(dispatch_io_t channel, off_t offset, size_t length, dispatch_queue_t queue, dispatch_io_handler_t io_handler);
void dispatch_mach_cancel(dispatch_mach_t channel);
void dispatch_mach_connect(dispatch_mach_t channel, mach_port_t receive, mach_port_t send, dispatch_mach_msg_t checkin);
void dispatch_mach_receive_barrier_f(dispatch_mach_t channel, void *context, dispatch_function_t barrier);
void dispatch_mach_receive_barrier(dispatch_mach_t channel, dispatch_block_t barrier);
void dispatch_mach_reconnect(dispatch_mach_t channel, mach_port_t send, dispatch_mach_msg_t checkin);
void dispatch_mach_send_barrier_f(dispatch_mach_t channel, void *context, dispatch_function_t barrier);
void dispatch_mach_send_barrier(dispatch_mach_t channel, dispatch_block_t barrier);
void dispatch_once(dispatch_once_t *predicate, dispatch_block_t block);
void dispatch_queue_set_label_nocopy(dispatch_queue_t queue, const char *label);
void dispatch_read(dispatch_fd_t fd, size_t length, dispatch_queue_t queue, void (*handler)(dispatch_data_t data, int error));
void dispatch_set_qos_class_fallback(dispatch_object_t object, dispatch_qos_class_t qos_class);
void dispatch_set_qos_class_floor(dispatch_object_t object, dispatch_qos_class_t qos_class, int relative_priority);
void dispatch_source_merge_data(dispatch_source_t source, uintptr_t value);
void dispatch_source_set_cancel_handler(dispatch_source_t source, dispatch_block_t handler);
void dispatch_source_set_event_handler(dispatch_source_t source, dispatch_block_t handler);
void dispatch_source_set_mandatory_cancel_handler(dispatch_source_t source, dispatch_block_t handler);
void dispatch_sync(dispatch_queue_t queue, dispatch_block_t block);
void dispatch_workloop_set_autorelease_frequency(dispatch_workloop_t workloop, dispatch_autorelease_frequency_t frequency);
void dispatch_workloop_set_scheduler_priority(dispatch_workloop_t workloop, int priority, dispatch_workloop_param_flags_t flags);
void dispatch_write(dispatch_fd_t fd, dispatch_data_t data, dispatch_queue_t queue, void (*handler)(dispatch_data_t data, int error));
void qsort_b(void *base, size_t nel, size_t width, int (*compar)(const void *, const void *));
