#import "../BaseTypes.h"
#import "../CoreFoundation/Types.h"
#import "Types.h"

Boolean UTTypeConformsTo(CFStringRef inUTI, CFStringRef inConformsToUTI);
Boolean UTTypeEqual(CFStringRef inUTI1, CFStringRef inUTI2);

CFArrayRef UTTypeCreateAllIdentifiersForTag(CFStringRef inTagClass, CFStringRef inTag, CFStringRef inConformingToUTI);

CFStringRef UTTypeCopyDescription(CFStringRef inUTI);
CFStringRef UTTypeCopyPreferredTagWithClass(CFStringRef inUTI, CFStringRef inTagClass);
CFStringRef UTTypeCreatePreferredIdentifierForTag(CFStringRef inTagClass, CFStringRef inTag, CFStringRef inConformingToUTI);
