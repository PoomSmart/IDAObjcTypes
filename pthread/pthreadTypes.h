#import "../Types.h"

#ifdef x86
#define __PTHREAD_SIZE__ 4088
#else
#define __PTHREAD_SIZE__ 8176
#endif

struct __darwin_pthread_handler_rec {
	void (*__routine)(void *);
	void *__arg;
	struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_t {
	long __sig;
	struct __darwin_pthread_handler_rec *__cleanup_stack;
	char __opaque[__PTHREAD_SIZE__];
};

typedef struct _opaque_pthread_t *__darwin_pthread_t;
typedef __darwin_pthread_t pthread_t;