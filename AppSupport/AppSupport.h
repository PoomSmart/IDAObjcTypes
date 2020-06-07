#import "../CoreFoundation/Types.h"
#import "../Kernel/Types.h"
#import "Types.h"

BOOL CPIsInternalDevice(void);

void _CPLogLine(int64_t unk0, CFStringRef category, const char *file, const char *method, int64_t lineNumber, int64_t unk5, CFStringRef format, ...);

CFArrayRef CPBitmapCreateImagesFromData(CFDataRef cpbitmap, void *, int, void *);

CFStringRef CPCopyBundleIdentifierFromAuditToken(audit_token_t *token, bool *unknown);
CFStringRef CPCopySharedResourcesPreferencesDomainForDomain(CFStringRef domain);
CFStringRef CPGetDeviceRegionCode();
CFStringRef CPSystemRootDirectory();
CFStringRef CPSharedResourcesDirectory();