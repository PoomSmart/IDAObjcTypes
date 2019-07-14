#import "../Types.h"
#import "../CoreFoundation/Types.h"

SInt32 MGGetSInt32Answer(CFStringRef key, SInt32 defaultVal);

Float32 MGGetFloat32Answer(CFStringRef key, Float32 defaultVal);

bool MGGetBoolAnswer(CFStringRef key);
Boolean MGIsQuestionValid(CFStringRef key);

CFTypeRef MGCopyAnswer(CFStringRef question, CFDictionaryRef options);
CFPropertyListRef MGCopyMultipleAnswers(CFArrayRef questions, int __unknown0);

int MGSetAnswer(CFStringRef question, CFTypeRef answer);
