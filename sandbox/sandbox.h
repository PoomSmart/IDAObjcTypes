#import "../Types.h"
#import "Types.h"

char *sandbox_extension_issue_file(const char *extension_class, const char *path, uint32_t flags);
char *sandbox_extension_issue_file_to_process(const char *extension_class, const char *path, uint32_t flags, audit_token_t);
char *sandbox_extension_issue_mach(const char *ext, const char *name, int reserved, uint32_t flags);
char *sandbox_extension_issue_generic(const char *extension_class, uint32_t flags);

const char *_amkrtemp(const char *);

int sandbox_check(pid_t, const char *operation, enum sandbox_filter_type, ...);
int sandbox_check_by_audit_token(audit_token_t, const char *operation, enum sandbox_filter_type, ...);
int sandbox_container_path_for_pid(pid_t, char *buffer, size_t bufsize);
int sandbox_extension_release(int64_t extension_handle);
int sandbox_init_with_parameters(const char *profile, uint64_t flags, const char *const parameters[], char **errorbuf);
int sandbox_apply(sandbox_profile_t);
int sandbox_set_param(sandbox_params_t, const char *key, const char *value);

int64_t sandbox_extension_consume(const char *extension_token);

void sandbox_free_params(sandbox_params_t);
void sandbox_free_profile(sandbox_profile_t);

sandbox_params_t sandbox_create_params(void);

sandbox_profile_t sandbox_compile_file(const char *path, sandbox_params_t, char **error);
sandbox_profile_t sandbox_compile_string(const char *data, sandbox_params_t, char **error);