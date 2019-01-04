#import "../Types.h"
#import "osTypes.h"

os_log_t os_log_create(const char *subsystem, const char *category);

os_activity_t _os_activity_create(void *dso, const char *description, os_activity_t activity, os_activity_flag_t flags);

bool os_log_type_enabled(os_log_t oslog, os_log_type_t type);
bool os_unfair_lock_trylock(os_unfair_lock_t lock);

void os_log_with_args(os_log_t oslog, os_log_type_t type, const char *format, va_list args, void *ret_addr);

void _os_log_impl(void *dso, os_log_t log, os_log_type_t type, const char *format, uint8_t *buf, unsigned int size);
void _os_log_error_impl(void *dso, os_log_t log, os_log_type_t type, const char *format, uint8_t *buf, unsigned int size);
void _os_log_fault_impl(void *dso, os_log_t log, os_log_type_t type, const char *format, uint8_t *buf, unsigned int size);
void _os_log_internal(void *dso, os_log_t log, os_log_type_t type, const char *message, ...);

void os_unfair_lock_lock(os_unfair_lock_t lock);
void os_unfair_lock_unlock(os_unfair_lock_t lock);
void os_release(void *object);

void *os_retain(void *object);