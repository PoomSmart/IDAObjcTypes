#import "../Types.h"
#import "Types.h"

struct __float2 { float __sinval; float __cosval; };
struct __double2 { double __sinval; double __cosval; };

struct __float2 __sincosf_stret(float);
struct __float2 _imp____sincosf_stret(float);
struct __double2 __sincos_stret(double);
struct __double2 _imp____sincos_stret(double);
struct __float2 __sincospif_stret(float);
struct __float2 _imp____sincospif_stret(float);
struct __double2 __sincospi_stret(double);
struct __double2 _imp____sincospi_stret(double);

uint32_t notify_register_dispatch(const char* name, int* out_token, dispatch_queue_t queue, notify_handler_t handler);
uint32_t _imp__notify_register_dispatch(const char* name, int* out_token, dispatch_queue_t queue, notify_handler_t handler);

size_t dispatch_data_get_size(dispatch_data_t data);
size_t _imp__dispatch_data_get_size(dispatch_data_t data);
size_t _stdlib_malloc_size(const void *ptr);
size_t _imp___stdlib_malloc_size(const void *ptr);

size_t __strlcpy_chk(char* dest, char* src, size_t len, size_t dstlen);
size_t _imp____strlcpy_chk(char* dest, char* src, size_t len, size_t dstlen);
size_t __strlcat_chk(char *dest, char *src, size_t len, size_t dstlen);
size_t _imp____strlcat_chk(char *rdest, char *src, size_t len, size_t dstlen);

int backtrace(void** array, int size);
int _imp__backtrace(void** array, int size);
int _stdlib_memcmp(const void *s1, const void *s2, size_t n);
int _imp___stdlib_memcmp(const void *s1, const void *s2, size_t n);

long dispatch_block_wait(dispatch_block_t block, dispatch_time_t timeout);
long _imp__dispatch_block_wait(dispatch_block_t block, dispatch_time_t timeout);

bool dispatch_data_apply(dispatch_data_t data, dispatch_data_applier_t applier);
bool _imp__dispatch_data_apply(dispatch_data_t data, dispatch_data_applier_t applier);

double __exp10(double);
double _imp____exp10(double);

char *__strcat_chk(char *dest, const char *src, size_t destlen);
char *_imp____strcat_chk(char *dest, const char *src, size_t destlen);
char *__strcpy_chk(char* dest, const char* src, size_t destlen);
char *_imp____strcpy_chk(char* dest, const char* src, size_t destlen);
char *__strncat_chk(char *dest, const char *src, size_t len, size_t dstlen);
char *_imp____strncat_chk(char *dest, const char *src, size_t len, size_t dstlen);

char** backtrace_symbols(void*  const* array, int size);
char** _imp__backtrace_symbols(void*  const* array, int size);

void* bsearch_b(const void* , const void* , size_t, size_t, int (*)(const void* , const void* ));
void* _imp__bsearch_b(const void* , const void* , size_t, size_t, int (*)(const void* , const void* ));
void* __memcpy_chk(void* dest, const void* src, size_t len, size_t dstlen);
void* _imp____memcpy_chk(void* dest, const void* src, size_t len, size_t dstlen);
void* __memmove_chk (void* dest, const void* src, size_t len, size_t dstlen);
void* _imp____memmove_chk (void* dest, const void* src, size_t len, size_t dstlen);
void* __memset_chk (void *dstpp, int c, size_t len, size_t dstlen);
void* _imp____memset_chk (void *dstpp, int c, size_t len, size_t dstlen);
void* __strncpy_chk(char* dest, char* src, size_t len, size_t dstlen);
void* _imp____strncpy_chk(char* dest, char* src, size_t len, size_t dstlen);

void abort_report_np(const char* , ...);
void _imp__abort_report_np(const char* , ...);
void backtrace_symbols_fd(void*  const* array, int size, int fd);
void _imp__backtrace_symbols_fd(void*  const* array, int size, int fd);
void dispatch_once(dispatch_block_t block);
void _imp__dispatch_once(dispatch_block_t block);
void dispatch_apply(size_t iterations, dispatch_queue_t queue, void (*block)(size_t));
void _imp__dispatch_apply(size_t iterations, dispatch_queue_t queue, void (*block)(size_t));
void dispatch_assert_queue(dispatch_queue_t queue);
void _imp__dispatch_assert_queue(dispatch_queue_t queue);
void dispatch_assert_queue$V2(dispatch_queue_t queue);
void _imp__dispatch_assert_queue$V2(dispatch_queue_t queue);
void dispatch_sync(dispatch_queue_t queue, dispatch_block_t block);
void _imp__dispatch_sync(dispatch_queue_t queue, dispatch_block_t block);
void dispatch_async(dispatch_queue_t queue, dispatch_block_t block);
void _imp__dispatch_async(dispatch_queue_t queue, dispatch_block_t block);
void dispatch_after(dispatch_time_t when, dispatch_queue_t queue, dispatch_block_t block);
void _imp__dispatch_after(dispatch_time_t when, dispatch_queue_t queue, dispatch_block_t block);
void dispatch_source_set_event_handler(dispatch_source_t source, dispatch_block_t handler);
void _imp__dispatch_source_set_event_handler(dispatch_source_t source, dispatch_block_t handler);
void dispatch_group_async(dispatch_group_t group, dispatch_queue_t queue, dispatch_block_t block);
void _imp__dispatch_group_async(dispatch_group_t group, dispatch_queue_t queue, dispatch_block_t block);
void dispatch_group_notify(dispatch_group_t group, dispatch_queue_t queue, dispatch_block_t block);
void _imp__dispatch_group_notify(dispatch_group_t group, dispatch_queue_t queue, dispatch_block_t block);
void dispatch_activate(dispatch_object_t object);
void _imp__dispatch_activate(dispatch_object_t object);
void dispatch_barrier_sync(dispatch_queue_t queue, dispatch_block_t block);
void _imp__dispatch_barrier_sync(dispatch_queue_t queue, dispatch_block_t block);
void dispatch_barrier_async(dispatch_queue_t queue, dispatch_block_t block);
void _imp__dispatch_barrier_async(dispatch_queue_t queue, dispatch_block_t block);
void dispatch_block_cancel(dispatch_block_t block);
void _imp__dispatch_block_cancel(dispatch_block_t block);
void qsort_b(void *base, size_t nel, size_t width, int (*compar)(const void *, const void *));
void _imp__qsort_b(void *base, size_t nel, size_t width, int (*compar)(const void *, const void *));

dispatch_block_t dispatch_block_create(dispatch_block_flags_t flags, dispatch_block_t block);
dispatch_block_t _imp__dispatch_block_create(dispatch_block_flags_t flags, dispatch_block_t block);

dispatch_data_t dispatch_data_create(const void* buffer, size_t size, dispatch_queue_t queue, dispatch_block_t destructor);
dispatch_data_t _imp__dispatch_data_create(const void* buffer, size_t size, dispatch_queue_t queue, dispatch_block_t destructor);
dispatch_data_t dispatch_data_create_map(dispatch_data_t data, const void** buffer_ptr, size_t* size_ptr);
dispatch_data_t _imp__dispatch_data_create_map(dispatch_data_t data, const void** buffer_ptr, size_t* size_ptr);
dispatch_data_t dispatch_data_create_concat(dispatch_data_t data1, dispatch_data_t data2);
dispatch_data_t _imp__dispatch_data_create_concat(dispatch_data_t data1, dispatch_data_t data2);
dispatch_data_t dispatch_data_create_subrange(dispatch_data_t data, size_t offset, size_t length);
dispatch_data_t _imp__dispatch_data_create_subrange(dispatch_data_t data, size_t offset, size_t length);
dispatch_data_t dispatch_data_copy_region(dispatch_data_t data, size_t location, size_t* offset_ptr);
dispatch_data_t _imp__dispatch_data_copy_region(dispatch_data_t data, size_t location, size_t* offset_ptr);

dispatch_queue_t dispatch_pthread_root_queue_create(const char* label, unsigned long flags,	const pthread_attr_t* attr, dispatch_block_t configure);
dispatch_queue_t _imp__dispatch_pthread_root_queue_create(const char* label, unsigned long flags,	const pthread_attr_t* attr, dispatch_block_t configure);

dispatch_queue_attr_t dispatch_queue_attr_make_with_qos_class(dispatch_queue_attr_t attr, dispatch_qos_class_t qos_class, int relative_priority);
dispatch_queue_attr_t _imp__dispatch_queue_attr_make_with_qos_class(dispatch_queue_attr_t attr, dispatch_qos_class_t qos_class, int relative_priority);
dispatch_queue_attr_t dispatch_queue_attr_make_with_autorelease_frequency(dispatch_queue_attr_t attr, dispatch_autorelease_frequency_t frequency);
dispatch_queue_attr_t _imp__dispatch_queue_attr_make_with_autorelease_frequency(dispatch_queue_attr_t attr, dispatch_autorelease_frequency_t frequency);
dispatch_queue_attr_t dispatch_queue_attr_make_with_overcommit(dispatch_queue_attr_t attr, bool overcommit);
dispatch_queue_attr_t _imp__dispatch_queue_attr_make_with_overcommit(dispatch_queue_attr_t attr, bool overcommit);