#import "../Types.h"
#import "../CoreFoundation/Types.h"

SInt32 MGGetSInt32Answer(CFStringRef key, SInt32 defaultVal);
SInt64 MGGetSInt64Answer(CFStringRef key, SInt64 defaultVal);

Float32 MGGetFloat32Answer(CFStringRef key, Float32 defaultVal);

bool MGGetBoolAnswer(CFStringRef key);
bool MGIsQuestionValid(CFStringRef key);

CFTypeRef MGCopyAnswer(CFStringRef key, CFDictionaryRef options);
CFPropertyListRef MGCopyMultipleAnswers(CFArrayRef keys, CFDictionaryRef unk);
CFStringRef MGGetStringAnswer(CFStringRef key);

int MGSetAnswer(CFStringRef key, CFTypeRef answer);
