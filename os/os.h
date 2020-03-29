#import "../Types.h"
#import "Types.h"

os_log_t os_log_create(const char *subsystem, const char *category);

os_activity_id_t os_activity_get_identifier(os_activity_t activity, os_activity_id_t *parent_id);

os_activity_t _os_activity_create(void *dso, const char *description, os_activity_t activity, os_activity_flag_t flags);

os_transaction_t os_transaction_create(const char *description);

os_signpost_id_t os_signpost_id_make_with_pointer(os_log_t log, const void *ptr);

bool os_log_type_enabled(os_log_t oslog, os_log_type_t type);
bool os_unfair_lock_trylock(os_unfair_lock_t lock);
bool os_log_shim_enabled(void *);
bool os_signpost_enabled(os_log_t log);
bool os_variant_has_internal_content(const char *subsystem);
bool os_variant_has_internal_diagnostics(const char *subsystem);

void os_activity_scope_enter(os_activity_t activity, os_activity_scope_state_t state);
void os_activity_scope_leave(os_activity_scope_state_t state);
void os_activity_apply(os_activity_t activity, os_block_t block);
void os_activity_apply_f(os_activity_t activity, void *context, os_function_t function);

void os_log_with_args(os_log_t oslog, os_log_type_t type, const char *format, va_list args, void *ret_addr);
void os_log_shim_with_CFString(void *, os_log_type_t, const uint8_t, CFStringRef, va_list args, void *ret_addr);

void _os_log_impl(void *dso, os_log_t log, os_log_type_t type, const char *format, uint8_t *buf, unsigned int size);
void _os_log_debug_impl(void *dso, os_log_t log, os_log_type_t type, const char *format, uint8_t *buf, uint32_t size);
void _os_log_error_impl(void *dso, os_log_t log, os_log_type_t type, const char *format, uint8_t *buf, unsigned int size);
void _os_log_fault_impl(void *dso, os_log_t log, os_log_type_t type, const char *format, uint8_t *buf, unsigned int size);
void _os_log_internal(void *dso, os_log_t log, os_log_type_t type, const char *message, ...);

void _os_signpost_emit_with_name_impl(void *dso, os_log_t log, os_signpost_type_t type, os_signpost_id_t spid, const char *name, const char *format, uint8_t *buf, uint32_t size);

bool _os_feature_enabled_impl(const char *domain, const char *feature);

void os_lock_lock(os_lock_t lock);
void os_lock_unlock(os_lock_t lock);

void os_unfair_lock_lock(os_unfair_lock_t lock);
void os_unfair_lock_lock_with_options(os_unfair_lock_t lock, os_unfair_lock_options_t options);
void os_unfair_lock_assert_owner(os_unfair_lock_t lock);
void os_unfair_lock_assert_not_owner(os_unfair_lock_t lock);

void os_unfair_lock_unlock(os_unfair_lock_t lock);
void os_release(void *object);

void *os_retain(void *object);
