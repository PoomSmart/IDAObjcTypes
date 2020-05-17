#ifndef DYLD_H_
#define DYLD_H_

#import "../BaseTypes.h"

typedef struct dyld_unwind_sections {
	const struct mach_header *mh;
	const void *dwarf_section;
	uintptr_t dwarf_section_length;
	const void *compact_unwind_section;
	uintptr_t compact_unwind_section_length;
} dyld_unwind_sections;

#endif