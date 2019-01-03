#import "../Types.h"

typedef NSObject *xpc_object_t;

typedef const struct _xpc_type_s *xpc_type_t;

typedef xpc_object_t xpc_connection_t;
typedef xpc_object_t xpc_endpoint_t;

typedef void (*xpc_handler_t)(xpc_object_t object);
typedef bool (*xpc_dictionary_applier_t)(const char *key, xpc_object_t value);
typedef bool (*xpc_array_applier_t)(size_t index, xpc_object_t value);