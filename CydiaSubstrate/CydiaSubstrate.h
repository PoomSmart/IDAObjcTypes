/* Cydia Substrate - Powerful Code Insertion Platform
 * Copyright (C) 2008-2012  Jay Freeman (saurik)
*/

/* GNU Lesser General Public License, Version 3 {{{ */
/*
 * Substrate is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * Substrate is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Substrate.  If not, see <http://www.gnu.org/licenses/>.
**/
/* }}} */


#ifndef SUBSTRATE_H_
#define SUBSTRATE_H_

#import "../objc/Types.h"

bool MSHookProcess(pid_t pid, const char *library);

typedef const void *MSImageRef;

MSImageRef MSGetImageByName(const char *file);
void *MSFindSymbol(MSImageRef image, const char *name);

void MSHookFunction(void *symbol, void *replace, void** result);
void MSHookMemory(void *target, const void *data, size_t size);
void MSHookMessageEx(Class _class, const char *sel, IMP imp, IMP *result);

#endif