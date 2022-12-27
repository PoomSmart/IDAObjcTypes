#ifndef XPC_H_
#define XPC_H_

#import "../Foundation/Types.h"

typedef NSObject *xpc_object_t;
typedef NSObject *OS_xpc_mach_send;

typedef const struct _xpc_type_s *xpc_type_t;
typedef struct _xpc_pipe_s *xpc_pipe_t;

typedef xpc_object_t xpc_connection_t;
typedef xpc_object_t xpc_bundle_t;
typedef xpc_object_t xpc_endpoint_t;
typedef xpc_object_t xpc_activity_t;

typedef void (*xpc_handler_t)(xpc_object_t object);
typedef void (*xpc_finalizer_t)(void *value);
typedef void (*xpc_activity_handler_t)(xpc_activity_t activity);
typedef bool (*xpc_dictionary_applier_t)(const char *key, xpc_object_t value);
typedef bool (*xpc_array_applier_t)(size_t index, xpc_object_t value);

typedef long xpc_activity_state_t;

extern const struct _xpc_type_s _xpc_type_array;
extern const struct _xpc_type_s _xpc_type_bool;
extern const struct _xpc_type_s _xpc_type_connection;
extern const struct _xpc_type_s _xpc_type_dictionary;
extern const struct _xpc_type_s _xpc_type_endpoint;
extern const struct _xpc_type_s _xpc_type_error;
extern const struct _xpc_type_s _xpc_type_string;
extern const struct _xpc_type_s _xpc_type_null;

#endif