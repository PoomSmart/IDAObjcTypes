#import "../Types.h"
#import "../CoreFoundation/Types.h"

SInt32 MGGetSInt32Answer(CFStringRef key, SInt32 defaultVal);
SInt32 _imp__MGGetSInt32Answer(CFStringRef key, SInt32 defaultVal);

Float32 MGGetFloat32Answer(CFStringRef key, Float32 defaultVal);
Float32 _imp__MGGetFloat32Answer(CFStringRef key, Float32 defaultVal);

bool MGGetBoolAnswer(CFStringRef key);
bool _imp__MGGetBoolAnswer(CFStringRef key);
Boolean MGIsQuestionValid(CFStringRef key);
Boolean _imp__MGIsQuestionValid(CFStringRef key);

CFTypeRef MGCopyAnswer(CFStringRef question, CFDictionaryRef options);
CFTypeRef _imp__MGCopyAnswer(CFStringRef question, CFDictionaryRef options);
CFPropertyListRef MGCopyMultipleAnswers(CFArrayRef questions, int __unknown0);
CFPropertyListRef _imp__MGCopyMultipleAnswers(CFArrayRef questions, int __unknown0);

int MGSetAnswer(CFStringRef question, CFTypeRef answer);
int _imp__MGSetAnswer(CFStringRef question, CFTypeRef answer);
