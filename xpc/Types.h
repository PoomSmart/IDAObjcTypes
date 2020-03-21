#ifndef XPC_H_
#define XPC_H_

#import "../Foundation/Types.h"

typedef NSObject* xpc_object_t;

typedef const struct _xpc_type_s* xpc_type_t;

typedef xpc_object_t xpc_connection_t;
typedef xpc_object_t xpc_endpoint_t;
typedef xpc_object_t xpc_activity_t;

typedef void (*xpc_handler_t)(xpc_object_t object);
typedef void (*xpc_finalizer_t)(void* value);
typedef void (*xpc_activity_handler_t)(xpc_activity_t activity);
typedef bool (*xpc_dictionary_applier_t)(const char* key, xpc_object_t value);
typedef bool (*xpc_array_applier_t)(size_t index, xpc_object_t value);

typedef long xpc_activity_state_t;

#endif