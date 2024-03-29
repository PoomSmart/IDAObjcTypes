/* Cydia Substrate - Powerful Code Insertion Platform
 * Copyright (C) 2008-2019  Jay Freeman (saurik)
*/

/*
 *        Redistribution and use in source and binary
 * forms, with or without modification, are permitted
 * provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the
 *    above copyright notice, this list of conditions
 *    and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the
 *    above copyright notice, this list of conditions
 *    and the following disclaimer in the documentation
 *    and/or other materials provided with the
 *    distribution.
 * 3. The name of the author may not be used to endorse
 *    or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
 * TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/


#import "Types.h"
#import "../Kernel/Types.h"
#import "../objc/Types.h"

bool MSHookProcess(pid_t pid, const char *library);

MSImageRef MSMapImage(const char *file);
MSImageRef MSGetImageByName(const char *file);

const MSImageHeader *MSImageAddress(MSImageRef image);

void *MSFindSymbol(MSImageRef image, const char *name);

char *MSFindAddress(MSImageRef image, void **address);

void MSCloseImage(MSImageRef);
void MSHookFunction(void *symbol, void *replace, void **result);
void MSHookMemory(void *target, const void *data, size_t size);
void MSHookMessageEx(Class _class, SEL sel, IMP imp, IMP *result);
void _MSHookMessageEx(Class _class, SEL sel, IMP imp, IMP *result);
void MSHookClassPair(Class target, Class hook, Class old);

#ifdef __arm__
IMP MSHookMessage(Class _class, SEL sel, IMP imp, const char *prefix);
#endif
