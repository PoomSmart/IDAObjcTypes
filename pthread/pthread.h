#import "../Types.h"
#import "pthreadTypes.h"

int pthread_getname_np(pthread_t thread, char *name, size_t len);
int pthread_setname_np(pthread_t thread, const char *name);
int pthread_cond_timedwait_relative_np(pthread_cond_t *cond, pthread_mutex_t *mutex, const struct timespec *abstime);

mach_port_t pthread_mach_thread_np(pthread_t thread);