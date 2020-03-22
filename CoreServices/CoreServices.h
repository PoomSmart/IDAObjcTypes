#import "../Types.h"
#import "../CoreFoundation/Types.h"
#import "Types.h"

Boolean UTTypeConformsTo(CFStringRef inUTI, CFStringRef inConformsToUTI);
Boolean UTTypeEqual(CFStringRef inUTI1, CFStringRef inUTI2);

CFStringRef UTTypeCopyDescription(CFStringRef inUTI);
CFStringRef UTTypeCopyPreferredTagWithClass(CFStringRef inUTI, CFStringRef inTagClass);
CFStringRef UTTypeCreatePreferredIdentifierForTag(CFStringRef inTagClass, CFStringRef inTag, CFStringRef inConformingToUTI);

CFArrayRef UTTypeCreateAllIdentifiersForTag(CFStringRef inTagClass, CFStringRef inTag, CFStringRef inConformingToUTI);
