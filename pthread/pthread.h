#import "../Types.h"
#import "pthreadTypes.h"

int pthread_getname_np(pthread_t thread, char *name, size_t len);
int pthread_setname_np(pthread_t thread, const char *name);