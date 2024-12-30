#import "../BaseTypes.h"
#import "../Kernel/Types.h"
#import "../Darwin/Types.h"
#import "Types.h"

xpc_type_t xpc_get_type(xpc_object_t object);

xpc_connection_t xpc_connection_create(const char *name, dispatch_queue_t targetq);
xpc_connection_t xpc_connection_create_from_endpoint(xpc_endpoint_t endpoint);
xpc_connection_t xpc_connection_create_mach_service(const char *name, dispatch_queue_t targetq, uint64_t flags);
xpc_connection_t xpc_dictionary_get_remote_connection(xpc_object_t xdict);
xpc_connection_t xpc_array_create_connection(xpc_object_t xarray, size_t index);

xpc_endpoint_t xpc_endpoint_create(xpc_connection_t connection);

xpc_object_t xpc_copy(xpc_object_t object);
xpc_object_t xpc_copy_entitlement_for_self(const char *);
xpc_object_t xpc_copy_entitlement_for_token(const char *, audit_token_t *);
xpc_object_t xpc_create_from_plist(void *data, size_t size);
xpc_object_t xpc_data_create(const void *bytes, size_t length);
xpc_object_t xpc_data_create_with_dispatch_data(dispatch_data_t ddata);
xpc_object_t xpc_connection_send_message_with_reply_sync(xpc_connection_t connection, xpc_object_t message);
xpc_object_t xpc_connection_copy_entitlement_value(xpc_connection_t, const char *entitlement);
xpc_object_t xpc_dictionary_create(const char *const *keys, xpc_object_t const *values, size_t count);
xpc_object_t xpc_dictionary_create_reply(xpc_object_t original);
xpc_object_t xpc_dictionary_get_value(xpc_object_t xdict, const char *key);
xpc_object_t xpc_dictionary_get_dictionary(xpc_object_t xdict, const char *key);
xpc_object_t xpc_dictionary_get_array(xpc_object_t xdict, const char *key);
xpc_object_t xpc_array_create(const xpc_object_t *objects, size_t count);
xpc_object_t xpc_array_get_value(xpc_object_t xarray, size_t index);
xpc_object_t xpc_array_get_dictionary(xpc_object_t xarray, size_t index);
xpc_object_t xpc_array_get_array(xpc_object_t xarray, size_t index);
xpc_object_t xpc_string_create(const char *string);
xpc_object_t xpc_string_create_with_format(const char *fmt, ...);
xpc_object_t xpc_string_create_with_format_and_arguments(const char *fmt, va_list ap);
xpc_object_t xpc_null_create(void);
xpc_object_t xpc_fd_create(int fd);
xpc_object_t xpc_date_create(int64_t interval);
xpc_object_t xpc_bool_create(bool value);
xpc_object_t xpc_double_create(double value);
xpc_object_t xpc_int64_create(int64_t value);
xpc_object_t xpc_uint64_create(uint64_t value);
xpc_object_t xpc_uuid_create(const unsigned char *uuid);
xpc_object_t xpc_shmem_create(void *region, size_t length);
xpc_object_t xpc_copy_bootstrap(void);
xpc_object_t xpc_retain(xpc_object_t);
xpc_object_t xpc_activity_copy_criteria(xpc_activity_t activity);
xpc_object_t xpc_bundle_get_info_dictionary(xpc_bundle_t bundle);

xpc_bundle_t xpc_bundle_create(const char *path, int64 __unk);

xpc_activity_state_t xpc_activity_get_state(xpc_activity_t activity);

OS_xpc_mach_send *xpc_mach_send_create(mach_port_t);

Class xpc_get_class4NSXPC(xpc_type_t type);

pid_t xpc_connection_get_pid(xpc_connection_t connection);

gid_t xpc_connection_get_egid(xpc_connection_t connection);

uid_t xpc_connection_get_euid(xpc_connection_t connection);

bool xpc_equal(xpc_object_t object1, xpc_object_t object2);
bool xpc_dictionary_apply(xpc_object_t xdict, xpc_dictionary_applier_t applier);
bool xpc_dictionary_get_bool(xpc_object_t xdict, const char *key);
bool xpc_array_apply(xpc_object_t xarray, xpc_array_applier_t applier);
bool xpc_array_get_bool(xpc_object_t xarray, size_t index);
bool xpc_bool_get_value(xpc_object_t xbool);
bool xpc_activity_set_state(xpc_activity_t activity, xpc_activity_state_t state);
bool xpc_activity_should_defer(xpc_activity_t activity);

double xpc_dictionary_get_double(xpc_object_t xdict, const char *key);
double xpc_array_get_double(xpc_object_t xarray, size_t index);
double xpc_double_get_value(xpc_object_t xdouble);

int64_t xpc_dictionary_get_date(xpc_object_t xdict, const char *key);
int64_t xpc_dictionary_get_int64(xpc_object_t xdict, const char *key);
int64_t xpc_array_get_date(xpc_object_t xarray, size_t index);
int64_t xpc_array_get_int64(xpc_object_t xarray, size_t index);
int64_t xpc_int64_get_value(xpc_object_t xint);
int64_t xpc_date_get_value(xpc_object_t xdate);

uint64_t xpc_dictionary_get_uint64(xpc_object_t xdict, const char *key);
uint64_t xpc_array_get_uint64(xpc_object_t xarray, size_t index);
uint64_t xpc_uint64_get_value(xpc_object_t xuint);

size_t xpc_dictionary_get_count(xpc_object_t xdict);
size_t xpc_array_get_count(xpc_object_t xarray);
size_t xpc_data_get_length(xpc_object_t xdata);
size_t xpc_string_get_length(xpc_object_t xstring);
size_t xpc_shmem_map(xpc_object_t xshmem, void **region);

int xpc_pipe_routine(xpc_pipe_t pipe, xpc_object_t request, xpc_object_t* reply);
int xpc_dictionary_dup_fd(xpc_object_t xdict, const char *key);
int xpc_array_dup_fd(xpc_object_t xarray, size_t index);
int xpc_fd_dup(xpc_object_t xfd);

int _xpc_runtime_is_app_sandboxed();

mach_port_t xpc_dictionary_copy_mach_send(xpc_object_t, const char *);
mach_port_t xpc_mach_send_copy_right(OS_xpc_mach_send *);

pointer_t xpc_array_get_pointer(xpc_object_t xarray, size_t index);

void xpc_release(xpc_object_t object);
void xpc_connection_activate(xpc_connection_t connection);
void xpc_connection_resume(xpc_connection_t connection);
void xpc_connection_suspend(xpc_connection_t connection);
void xpc_connection_cancel(xpc_connection_t connection);
void xpc_connection_send_barrier(xpc_connection_t connection, dispatch_block_t barrier);
void xpc_connection_send_message(xpc_connection_t connection, xpc_object_t message);
void xpc_connection_send_message_with_reply(xpc_connection_t connection, xpc_object_t message, dispatch_queue_t replyq, xpc_handler_t handler);
void xpc_connection_send_notification(xpc_connection_t connection, xpc_object_t notification);
void xpc_connection_set_context(xpc_connection_t connection, void *context);
void xpc_connection_set_event_handler(xpc_connection_t connection, xpc_handler_t handler);
void xpc_connection_set_legacy(xpc_connection_t connection);
void xpc_connection_set_target_queue(xpc_connection_t connection, dispatch_queue_t targetq);
void xpc_connection_set_target_uid(xpc_connection_t connection, uid_t uid);
void xpc_connection_set_bootstrap(xpc_connection_t, xpc_object_t bootstrap);
void xpc_connection_set_instance(xpc_connection_t, uuid_t);
void xpc_connection_set_oneshot_instance(xpc_connection_t, uuid_t instance);
void xpc_connection_set_finalizer_f(xpc_connection_t connection, xpc_finalizer_t finalizer);
void xpc_connection_set_privileged(xpc_connection_t connection);
void xpc_connection_get_audit_token(xpc_connection_t, audit_token_t *);
void xpc_connection_kill(xpc_connection_t, int);

void xpc_array_append_value(xpc_object_t xarray, xpc_object_t value);
void xpc_array_set_double(xpc_object_t xarray, size_t index, double value);
void xpc_array_set_int64(xpc_object_t xarray, size_t index, int64_t value);
void xpc_array_set_uint64(xpc_object_t xarray, size_t index, uint64_t value);
void xpc_array_set_uuid(xpc_object_t xarray, size_t index, const uuid_t uuid);
void xpc_array_set_fd(xpc_object_t xarray, size_t index, int fd);
void xpc_array_set_string(xpc_object_t xarray, size_t index, const char *string);
void xpc_array_set_data(xpc_object_t xarray, size_t index, const void *bytes, size_t length);
void xpc_array_set_date(xpc_object_t xarray, size_t index, int64_t value);
void xpc_array_set_value(xpc_object_t xarray, size_t index, xpc_object_t value);
void xpc_array_set_pointer(xpc_object_t xarray, size_t index, pointer_t value);

void xpc_dictionary_send_reply(xpc_object_t xdict);
void xpc_dictionary_set_mach_send(xpc_object_t, const char *, mach_port_t);
void xpc_dictionary_set_uuid(xpc_object_t xdict, const char *key, const uuid_t uuid);
void xpc_dictionary_set_connection(xpc_object_t xdict, const char *key,	xpc_connection_t connection);
void xpc_dictionary_set_bool(xpc_object_t xdict, const char *key, bool value);
void xpc_dictionary_set_double(xpc_object_t xdict, const char *key, double value);
void xpc_dictionary_set_string(xpc_object_t xdict, const char *key, const char *string);
void xpc_dictionary_set_int64(xpc_object_t xdict, const char *key, int64_t value);
void xpc_dictionary_set_uint64(xpc_object_t xdict, const char *key, uint64_t value);
void xpc_dictionary_set_data(xpc_object_t xdict, const char *key, const void *bytes, size_t length);
void xpc_dictionary_set_date(xpc_object_t xdict, const char *key, int64_t value);
void xpc_dictionary_set_value(xpc_object_t xdict, const char *key, xpc_object_t value);
void xpc_dictionary_set_fd(xpc_object_t xdict, const char *key, int fd);
void xpc_dictionary_set_mach_recv(xpc_object_t xdict, const char *, mach_port_t);
void xpc_dictionary_set_mach_send(xpc_object_t xdict, const char *, mach_port_t);
void xpc_dictionary_get_audit_token(xpc_object_t xdict, audit_token_t *);

void xpc_set_event(const char *stream, const char *key, xpc_object_t event);
void xpc_set_event_with_flags(const char *stream, const char *key, xpc_object_t event, uint64_t flags);

void xpc_transaction_begin(void);
void xpc_transaction_end(void);
void xpc_transaction_exit_clean(void);
void xpc_track_activity(void);

void xpc_activity_register(const char *identifier, xpc_object_t criteria, xpc_activity_handler_t handler);
void xpc_activity_unregister(const char *identifier);
void xpc_activity_set_criteria(xpc_activity_t activity, xpc_object_t criteria);

void xpc_handle_service(const char *service_name, void (*)(xpc_connection_t), int);

const uint8_t *xpc_uuid_get_bytes(xpc_object_t xuuid);
const void *xpc_data_get_bytes_ptr(xpc_object_t xdata);
const void *xpc_dictionary_get_data(xpc_object_t xdict, const char *key, size_t *length);
const void *xpc_array_get_data(xpc_object_t xarray, size_t index, size_t *length);
void *xpc_connection_get_context(xpc_connection_t connection);

char *xpc_activity_copy_identifier(xpc_activity_t activity);
char *xpc_copy_description(xpc_object_t object);
char *xpc_copy_short_description(xpc_object_t object);
const char *xpc_connection_copy_bundle_id(xpc_object_t object);
const char *xpc_connection_get_name(xpc_connection_t connection);
const char *xpc_dictionary_get_string(xpc_object_t xdict, const char *key);
const char *xpc_array_get_string(xpc_object_t xarray, size_t index);
const char *xpc_string_get_string_ptr(xpc_object_t);
const char *xpc_bundle_get_executable_path(xpc_object_t bundle);
const char *xpc_strerror(int error);
