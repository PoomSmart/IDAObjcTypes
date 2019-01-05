#import "../Types.h"
#import "../CoreFoundation/Types.h"

SInt32 MGGetSInt32Answer(CFStringRef key, SInt32 defaultVal);

Float32 MGGetFloat32Answer(CFStringRef key, Float32 defaultVal);

Boolean MGGetBoolAnswer(CFStringRef key);
Boolean MGIsQuestionValid(CFStringRef key);

CFTypeRef MGCopyAnswer(CFStringRef key, const void *unknown);
CFPropertyListRef MGCopyMultipleAnswers(CFArrayRef questions, int __unknown0);

int MGSetAnswer(CFStringRef question, CFTypeRef answer);