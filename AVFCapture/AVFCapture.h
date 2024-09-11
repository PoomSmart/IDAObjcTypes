#import "../CoreFoundation/Types.h"
#import "../Foundation/Types.h"

CFStringRef AVGestaltGetStringAnswer(CFStringRef key);
CFStringRef AVGestaltGetStringAnswerWithDefault(CFStringRef key, CFStringRef defaultVal);
CFStringRef AVGestaltGetStringAnswerWithError(CFStringRef key, NSError **error);

NSInteger AVGestaltGetIntegerAnswer(CFStringRef key);
NSInteger AVGestaltGetIntegerAnswerWithDefault(CFStringRef key, NSInteger defaultVal);
NSInteger AVGestaltGetIntegerAnswerWithError(CFStringRef key, NSError **error);

float AVGestaltGetFloatAnswer(CFStringRef key);
float AVGestaltGetFloatAnswerWithDefault(CFStringRef key, float defaultVal);
float AVGestaltGetFloatAnswerWithError(CFStringRef key, NSError **error);

bool AVGestaltGetBoolAnswer(CFStringRef key);
bool AVGestaltGetBoolAnswerWithDefault(CFStringRef key, bool defaultVal);
bool AVGestaltGetBoolAnswerWithError(CFStringRef key, NSError **error);

bool AVGestaltIsQuestionValid(CFStringRef key, int *result);
