#import "../CoreFoundation/Types.h"
#import "Types.h"

CFDictionaryRef SCDynamicStoreCopyDHCPInfo(SCDynamicStoreRef store, CFStringRef serviceID);
CFDictionaryRef CNCopyCurrentNetworkInfo(CFStringRef interfaceName);

CFArrayRef CNCopySupportedInterfaces(void);

SCNetworkReachabilityRef SCNetworkReachabilityCreateWithOptions(CFAllocatorRef allocator, CFDictionaryRef options);

void SCDynamicStoreSetDisconnectCallBack(SCDynamicStoreRef store, SCDynamicStoreDisconnectCallBack callback);