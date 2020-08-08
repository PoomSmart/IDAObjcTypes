#ifndef SUBSTRATE_H_
#define SUBSTRATE_H_

#ifndef __EA64__
typedef struct mach_header MSImageHeader;
#else
typedef struct mach_header_64 MSImageHeader;
#endif

typedef const void *MSImageRef;

#endif
