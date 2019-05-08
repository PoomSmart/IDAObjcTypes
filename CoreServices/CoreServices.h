#import "../Types.h"
#import "../CoreFoundation/Types.h"
#import "Types.h"

Boolean UTTypeConformsTo(CFStringRef inUTI, CFStringRef inConformsToUTI);
Boolean _imp__UTTypeConformsTo(CFStringRef inUTI, CFStringRef inConformsToUTI);

CFStringRef UTTypeCopyPreferredTagWithClass(CFStringRef inUTI, CFStringRef inTagClass);
CFStringRef _imp__UTTypeCopyPreferredTagWithClass(CFStringRef inUTI, CFStringRef inTagClass);
CFStringRef UTTypeCreatePreferredIdentifierForTag(CFStringRef inTagClass, CFStringRef inTag, CFStringRef inConformingToUTI);
CFStringRef _imp__UTTypeCreatePreferredIdentifierForTag(CFStringRef inTagClass, CFStringRef inTag, CFStringRef inConformingToUTI);