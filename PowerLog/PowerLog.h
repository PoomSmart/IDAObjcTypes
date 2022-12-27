#import "../CoreFoundation/Types.h"

bool PLShouldLogRegisteredEvent(int clientID, CFStringRef event);

void PLLogRegisteredEvent(int clientID, CFStringRef eventName, CFDictionaryRef eventDictionary);
void PLLogTimeSensitiveRegisteredEvent(int clientID, CFStringRef eventName, CFDictionaryRef eventDictionary);