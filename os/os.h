#import "../BaseTypes.h"
#import "../Darwin/Types.h"
#import "../CoreFoundation/Types.h"
#import "Types.h"

bool _os_feature_enabled_impl(const char *domain, const char *feature);
bool _os_nospin_lock_trylock(_os_nospin_lock_t lock);
bool os_log_shim_enabled(void *);
bool os_log_type_enabled(os_log_t oslog, os_log_type_t type);
bool os_signpost_enabled(os_log_t log);
bool os_unfair_lock_trylock(os_unfair_lock_t lock);
bool os_unfair_recursive_lock_trylock(os_unfair_recursive_lock_t lock);
bool os_unfair_recursive_lock_tryunlock4objc(os_unfair_recursive_lock_t lock);
bool os_variant_allows_internal_security_policies(const char *subsystem);
bool os_variant_has_factory_content(const char *subsystem);
bool os_variant_has_internal_content(const char *subsystem);
bool os_variant_has_internal_diagnostics(const char *subsystem);
bool os_variant_has_internal_ui(const char *subsystem);
bool os_variant_is_darwinos(const char *subsystem);
bool os_workgroup_testcancel(os_workgroup_t wg);
bool os_parse_boot_arg_int(const char *which, int64_t *where);

int os_workgroup_copy_port(os_workgroup_t wg, mach_port_t *mach_port_out);
int os_workgroup_interval_finish(os_workgroup_interval_t wg, os_workgroup_interval_data_t data);
int os_workgroup_interval_start(os_workgroup_interval_t wg, uint64_t start, uint64_t deadline, os_workgroup_interval_data_t data);
int os_workgroup_interval_update(os_workgroup_interval_t wg, uint64_t deadline, os_workgroup_interval_data_t data);
int os_workgroup_join_self(os_workgroup_t wg, os_workgroup_join_token_t token_out, os_workgroup_index *id_out);
int os_workgroup_max_parallel_threads(os_workgroup_t wh, os_workgroup_mpt_attr_t attr);

uint64_t os_simple_hash(const void *buff, size_t len);
uint64_t os_simple_hash_string(const char *string);
uint64_t os_simple_hash_string_with_seed(const char *string, uint64_t seed);

char *_os_assert_log(uint64_t code);

os_activity_id_t os_activity_get_identifier(os_activity_t activity, os_activity_id_t *parent_id);

os_activity_t _os_activity_create(void *dso, const char *description, os_activity_t activity, os_activity_flag_t flags);
os_activity_t _os_activity_start(void *dso, const char *description, os_activity_flag_t flags);

os_log_t _os_log_create(void *dso, const char *subsystem, const char *category);
os_log_t os_log_create(const char *subsystem, const char *category);

os_signpost_id_t os_signpost_id_generate(os_log_t log);
os_signpost_id_t os_signpost_id_make_with_pointer(os_log_t log, const void *ptr);

os_state_handle_t os_state_add_handler(dispatch_queue_t, os_state_block_t);

os_transaction_t os_transaction_create(const char *description);

os_workgroup_t os_workgroup_create_with_port(const char *name, mach_port_t mach_port);
os_workgroup_t os_workgroup_create_with_workgroup(const char *name, os_workgroup_t wg);

_os_object_t _os_object_alloc(const void *cls, size_t size);

size_t os_proc_available_memory(void);
size_t _os_log_pack_size(size_t os_log_format_buffer_size);

uint8_t *_os_log_pack_fill(os_log_pack_t pack, size_t size, int saved_errno, const void *dso, const char *fmt);

void _os_assumes_log(kern_return_t);
void _os_crash(const char *message);
void _os_log_debug_impl(void *dso, os_log_t log, os_log_type_t type, const char *format, uint8_t *buf, uint32_t size);
void _os_log_error_impl(void *dso, os_log_t log, os_log_type_t type, const char *format, uint8_t *buf, unsigned int size);
void _os_log_fault_impl(void *dso, os_log_t log, os_log_type_t type, const char *format, uint8_t *buf, unsigned int size);
void _os_log_impl(void *dso, os_log_t log, os_log_type_t type, const char *format, uint8_t *buf, unsigned int size);
void _os_log_internal(void *dso, os_log_t log, os_log_type_t type, const char *message, ...);
void _os_log_set_nscf_formatter(_os_log_NSCF_callback function);
void _os_nospin_lock_lock(_os_nospin_lock_t lock);
void _os_nospin_lock_unlock(_os_nospin_lock_t lock);
void _os_once(os_once_t *val, void *ctxt, os_function_t func);
void _os_signpost_emit_with_name_impl(void *dso, os_log_t log, os_signpost_type_t type, os_signpost_id_t spid, const char *name, const char *format, uint8_t *buf, uint32_t size);
void _os_signpost_emit_unreliably_with_name_impl(void *dso, os_log_t log, os_signpost_type_t type, os_signpost_id_t spid, const char *name, const char *format, uint8_t *buf, uint32_t size);

void *_os_alloc_once(struct _os_alloc_once_s *slot, size_t sz, os_function_t init);
void *os_retain(void *object);
void *os_workgroup_get_context(os_workgroup_t wg);
void *os_workgroup_set_context(os_workgroup_t wg, void *context);

void os_activity_apply_f(os_activity_t activity, void *context, os_function_t function);
void os_activity_apply(os_activity_t activity, os_block_t block);
void os_activity_end(os_activity_t activity);
void os_activity_scope_enter(os_activity_t activity, os_activity_scope_state_t state);
void os_activity_scope_leave(os_activity_scope_state_t state);
void os_lock_lock(os_lock_t lock);
void os_lock_unlock(os_lock_t lock);
void os_log_pack_send(os_log_pack_t pack, os_log_t log, os_log_type_t type);
void os_log_shim_with_CFString(void *, os_log_type_t, const uint8_t, CFStringRef, va_list args, void *ret_addr);
void os_log_with_args(os_log_t oslog, os_log_type_t type, const char *format, va_list args, void *ret_addr);
void os_release(void *object);
void os_state_remove_handler(os_state_handle_t);
void os_unfair_lock_assert_not_owner(os_unfair_lock_t lock);
void os_unfair_lock_assert_owner(os_unfair_lock_t lock);
void os_unfair_lock_lock_with_options(os_unfair_lock_t lock, os_unfair_lock_options_t options);
void os_unfair_lock_lock(os_unfair_lock_t lock);
void os_unfair_lock_unlock(os_unfair_lock_t lock);
void os_unfair_recursive_lock_lock_with_options(os_unfair_recursive_lock_t lock, os_unfair_lock_options_t options);
void os_unfair_recursive_lock_unlock(os_unfair_recursive_lock_t lock);
void os_workgroup_cancel(os_workgroup_t wg);
void os_workgroup_leave_self(os_workgroup_t wg, os_workgroup_join_token_t token);
