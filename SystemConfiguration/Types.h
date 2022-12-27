#ifndef SYSTEMCONFIGURATION_H_
#define SYSTEMCONFIGURATION_H_

typedef struct __SCDynamicStore *SCDynamicStoreRef;

typedef void (*SCDynamicStoreDisconnectCallBack)(SCDynamicStoreRef store);

#endif
