#import "../Types.h"
#import "osTypes.h"

os_log_t os_log_create(const char *subsystem, const char *category);

bool os_log_type_enabled(os_log_t oslog, os_log_type_t type);

void _os_log_impl(void *dso, os_log_t log, os_log_type_t type, const char *format, uint8_t *buf, unsigned int size);