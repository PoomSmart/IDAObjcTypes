#ifndef SYSTEMCONFIGURATION_H_
#define SYSTEMCONFIGURATION_H_

typedef struct __SCDynamicStore *SCDynamicStoreRef;
typedef struct __SCNetworkReachability *SCNetworkReachabilityRef;

typedef void (*SCDynamicStoreDisconnectCallBack)(SCDynamicStoreRef store);

#endif
