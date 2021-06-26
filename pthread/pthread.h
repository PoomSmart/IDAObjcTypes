#import "../Kernel/Types.h"
#import "../Darwin/Types.h"
#import "Types.h"

bool pthread_main_np(void);

int pthread_attr_set_qos_class_np(pthread_attr_t *__attr, qos_class_t __qos_class, int __relative_priority);
int pthread_cond_timedwait_relative_np(pthread_cond_t *cond, pthread_mutex_t *mutex, const struct timespec *abstime);
int pthread_getname_np(pthread_t thread, char *name, size_t len);
int pthread_is_threaded_np(void);
int pthread_key_init_np(int, void (*)(void *));
int pthread_mutexattr_setpolicy_np(pthread_mutexattr_t *, int);
int pthread_set_qos_class_self_np(qos_class_t __qos_class, int __relative_priority);
int pthread_set_fixedpriority_self(void);
int pthread_setname_np(pthread_t thread, const char *name);

mach_port_t pthread_mach_thread_np(pthread_t thread);

pthread_t pthread_from_mach_thread_np(mach_port_t kernel_thread);
pthread_t pthread_main_thread_np(void);

size_t pthread_get_stacksize_np(pthread_t t);

void *pthread_get_stackaddr_np(pthread_t t);
