#ifndef BASE_TYPES_H_
#define BASE_TYPES_H_

// Source annotation convention used throughout this project:
//   (no annotation)    — from Apple SDK / official headers
//   // RE:             — reverse-engineered; accuracy not guaranteed
//   // from research   — crowdsourced / community research
//   // WIP             — incomplete; contributions welcome

#ifndef GHIDRA
    #define PS_ENUM(_type, _name) enum _name : _type
#else
    #define PS_ENUM(_type, _name) typedef enum _name
#endif

typedef signed char int8;
typedef unsigned char uint8;
typedef signed short int16;
typedef unsigned short uint16;
typedef signed long int32;
typedef unsigned long uint32;
typedef signed long long int64;
typedef unsigned long long uint64;

typedef uint64 __darwin_size_t;
typedef __darwin_size_t size_t;

typedef uint8 UInt8;
typedef uint16 UInt16;
typedef uint32 UInt32;
typedef uint64 UInt64;
typedef int8 SInt8;
typedef int16 SInt16;
typedef int32 SInt32;
typedef int64 SInt64;
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;
typedef int64 int64_t;
typedef uint64 uint64_t;
typedef uint64 uintptr_t;
typedef long intptr_t;

typedef struct {
    unsigned int gp_offset;
    unsigned int fp_offset;
    void *overflow_arg_area;
    void *reg_save_area;
} va_list[1];

typedef int64 __darwin_time_t;

struct timespec {
    __darwin_time_t tv_sec;
    int64 tv_nsec;
};

typedef uint8 Boolean;
typedef int kern_return_t;
typedef unsigned int __darwin_natural_t;
typedef unsigned long long u_int64_t;
typedef uintptr_t vm_offset_t;
typedef vm_offset_t vm_address_t;
typedef uint64_t mach_vm_address_t;
typedef UInt64 AbsoluteTime;

typedef struct ipc_port *ipc_port_t;

typedef ipc_port_t mach_port_t;

typedef struct task *task_t;

// Just C
typedef struct _OSObject *OSObject;

typedef struct objc_class *Class;

typedef struct NSObject {
    Class isa;
} NSObject;

#ifdef __ARM__
typedef bool BOOL;
#else
typedef signed char BOOL;
#endif

// ARM64e pointer authentication (PAC) support.
// Define __ARM64E__ when analysing arm64e slices (iPhone XS / A12 and later).
// PAC strips the high bits of authenticated pointers; ptrauth_* macros let you
// annotate pointer fields so IDA / other tools know they carry auth codes.
#ifdef __ARM64E__
    // Strip pointer-authentication bits from a signed pointer value.
    #define ptrauth_strip(ptr, key)           ((void *)((uintptr_t)(ptr) & 0x0000007FFFFFFFFF))
    // Annotate a pointer field as carrying a PAC (no-op for analysis purposes).
    #define ptrauth_key_function_pointer       0
    #define ptrauth_key_process_dependent_data 2
    #define __ptrauth(key, addr, disc)         /* PAC-signed pointer */
#else
    #define ptrauth_strip(ptr, key)            (ptr)
    #define __ptrauth(key, addr, disc)         /* not PAC */
#endif

typedef float Float32;
typedef double Float64;
typedef unsigned long UniCharCount;
typedef UInt32 UTF32Char;
typedef UInt16 UniChar;
typedef UInt16 UTF16Char;
typedef UInt8 UTF8Char;

typedef int errno_t;
typedef int32_t integer_t;
typedef int64_t off_t;
typedef size_t rsize_t;

extern uintptr_t __stack_chk_guard;
__attribute__((noreturn)) void __stack_chk_fail(void);

#endif