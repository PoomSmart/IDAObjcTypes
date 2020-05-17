#ifndef DARWIN_H_
#define DARWIN_H_

#ifdef __EA64__
#define __PTHREAD_SIZE__ 8176
#define __PTHREAD_ATTR_SIZE__ 56
#define __PTHREAD_COND_SIZE__ 40
#else
#define __PTHREAD_SIZE__ 4088
#define __PTHREAD_ATTR_SIZE__ 36
#define __PTHREAD_COND_SIZE__ 24
#endif

typedef unsigned int qos_class_t;

struct __darwin_pthread_handler_rec {
    void (*__routine)(void *);
    void *__arg;
    struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
    long __sig;
    char __opaque[__PTHREAD_ATTR_SIZE__];
};

struct _opaque_pthread_t {
    long __sig;
    struct __darwin_pthread_handler_rec *__cleanup_stack;
    char __opaque[__PTHREAD_SIZE__];
};

struct _opaque_pthread_mutex_t {
    __int64 __sig;
    char __opaque[56];
};

typedef _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef __darwin_pthread_mutex_t pthread_mutex_t;

struct _opaque_pthread_cond_t {
    long __sig;
    char __opaque[__PTHREAD_COND_SIZE__];
};

typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef __darwin_pthread_cond_t pthread_cond_t;

typedef struct pthread_mutexattr_t {
    int pshared;
    int kind;
    int protocol;
    int robustness;
} pthread_mutexattr_t;

typedef struct _opaque_pthread_t *__darwin_pthread_t;
typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;

typedef __darwin_pthread_t pthread_t;
typedef __darwin_pthread_attr_t pthread_attr_t;

#endif