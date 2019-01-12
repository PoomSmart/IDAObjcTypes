#ifndef OS_H_
#define OS_H_

typedef struct os_log_s* os_log_t;
typedef struct os_unfair_lock_s* os_unfair_lock_t;
typedef struct os_activity_s* os_activity_t;
typedef struct os_transaction_s* os_transaction_t;
typedef struct os_activity_scope_state_s* os_activity_scope_state_t;

typedef uint8_t os_log_type_t;

typedef uint32_t os_activity_flag_t;
typedef uint32_t os_unfair_lock_options_t;

typedef uint64_t os_activity_id_t;
typedef uint64_t os_signpost_id_t;

typedef void (*os_function_t)(void* );
typedef void (*os_block_t)(void);

#define OS_LOCK_TYPE_STRUCT(type) const struct _os_lock_type_##type##_s
#define OS_LOCK_TYPE_REF(type) _os_lock_type_##type
#define OS_LOCK(type) os_lock_##type##_s
#define OS_LOCK_STRUCT(type) struct OS_LOCK(type)

#define OS_LOCK_DECL(type, size) \
		typedef OS_LOCK_STRUCT(type) { \
			OS_LOCK_TYPE_STRUCT(type)*  const osl_type; \
			uintptr_t _osl_##type##_opaque[size-1]; \
		} OS_LOCK(type)

#define OS_LOCK_T_MEMBER(type) OS_LOCK_STRUCT(type)* _osl_##type

typedef union os_lock {
	OS_LOCK_T_MEMBER(base);
	OS_LOCK_T_MEMBER(unfair);
	OS_LOCK_T_MEMBER(nospin);
	OS_LOCK_T_MEMBER(spin);
	OS_LOCK_T_MEMBER(handoff);
	OS_LOCK_T_MEMBER(eliding);
	OS_LOCK_T_MEMBER(transactional);
} os_lock_t;

#endif