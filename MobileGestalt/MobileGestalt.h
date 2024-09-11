#import "../BaseTypes.h"
#import "../CoreFoundation/Types.h"
#import "../Foundation/Types.h"
#import "Types.h"

SInt32 MGGetSInt32Answer(CFStringRef key, SInt32 defaultVal);
SInt64 MGGetSInt64Answer(CFStringRef key, SInt64 defaultVal);

Float32 MGGetFloat32Answer(CFStringRef key, Float32 defaultVal);

bool MGGetBoolAnswer(CFStringRef key);
bool MGIsQuestionValid(CFStringRef key);
bool MGIsDeviceOfType(uint8_t *type);
bool MGIsDeviceOneOfType(uint8_t *type, ...) __attribute__((sentinel));

CFTypeRef MGCopyAnswer(CFStringRef key, CFDictionaryRef options);
CFTypeRef MGCopyAnswerWithError(CFStringRef key, CFDictionaryRef options, int *error);
CFPropertyListRef MGCopyMultipleAnswers(CFArrayRef keys, CFDictionaryRef options);
CFStringRef MGGetStringAnswer(CFStringRef key);

// MGProductType MGGetProductType(void);

int MGSetAnswer(CFStringRef key, CFTypeRef answer);

void _MGLog(CFStringRef filePath, NSInteger lineNumber, CFStringRef format, ...);
