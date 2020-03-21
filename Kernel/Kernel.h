#import "../Types.h"
#import "Types.h"

uint64_t mach_continuous_time(void);

int mig_strncpy_zerofill(char *dest, const char *src, int len);
int kdebug_trace(uint32_t debugid, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4);