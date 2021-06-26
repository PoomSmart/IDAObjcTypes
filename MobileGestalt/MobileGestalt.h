#import "../BaseTypes.h"
#import "../CoreFoundation/Types.h"
#import "../Foundation/Types.h"

SInt32 MGGetSInt32Answer(CFStringRef key, SInt32 defaultVal);
SInt64 MGGetSInt64Answer(CFStringRef key, SInt64 defaultVal);

Float32 MGGetFloat32Answer(CFStringRef key, Float32 defaultVal);

bool MGGetBoolAnswer(CFStringRef key);
bool MGIsQuestionValid(CFStringRef key);

CFTypeRef MGCopyAnswer(CFStringRef key, CFDictionaryRef options);
CFTypeRef MGCopyAnswerWithError(CFStringRef key, int unk, int *error);
CFPropertyListRef MGCopyMultipleAnswers(CFArrayRef keys, CFDictionaryRef unk);
CFStringRef MGGetStringAnswer(CFStringRef key);

int MGSetAnswer(CFStringRef key, CFTypeRef answer);

void _MGLog(CFStringRef fileName, NSInteger lineNumber, CFStringRef format, ...);
