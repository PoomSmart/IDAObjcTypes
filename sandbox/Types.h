#ifndef SANDBOX_H_
#define SANDBOX_H_

enum sandbox_filter_type {
    SANDBOX_FILTER_NONE,
    SANDBOX_FILTER_GLOBAL_NAME = 2,
} sandbox_filter_type;

typedef struct sandbox_profile {
    char* builtin;
    unsigned char* data;
    size_t size;
}* sandbox_profile_t;

typedef struct sandbox_params {
    const char** params;
    size_t size;
    size_t available;
}* sandbox_params_t;

extern const char* const APP_SANDBOX_READ;
extern const char* const APP_SANDBOX_READ_WRITE;
extern const enum sandbox_filter_type SANDBOX_CHECK_NO_REPORT;

#endif