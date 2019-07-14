#import "../Types.h"
#import "../CoreFoundation/Types.h"
#import "Types.h"

Boolean UTTypeConformsTo(CFStringRef inUTI, CFStringRef inConformsToUTI);

CFStringRef UTTypeCopyPreferredTagWithClass(CFStringRef inUTI, CFStringRef inTagClass);
CFStringRef UTTypeCreatePreferredIdentifierForTag(CFStringRef inTagClass, CFStringRef inTag, CFStringRef inConformingToUTI);
