#import "Types.h"

int CC_MD4_Init(CC_MD4_CTX *c);
int CC_MD4_Update(CC_MD4_CTX *c, const void *data, CC_LONG len);
int CC_MD4_Final(unsigned char *md, CC_MD4_CTX *c);

int CC_MD5_Init(CC_MD5_CTX *c);
int CC_MD5_Update(CC_MD5_CTX *c, const void *data, CC_LONG len);
int CC_MD5_Final(unsigned char *md, CC_MD5_CTX *c);

int CC_SHA1_Init(CC_SHA1_CTX *c);
int CC_SHA1_Update(CC_SHA1_CTX *c, const void *data, CC_LONG len);
int CC_SHA1_Final(unsigned char *md, CC_SHA1_CTX *c);

int CC_SHA256_Init(CC_SHA256_CTX *c);
int CC_SHA256_Update(CC_SHA256_CTX *c, const void *data, CC_LONG len);
int CC_SHA256_Final(unsigned char *md, CC_SHA256_CTX *c);

int CC_SHA384_Init(CC_SHA512_CTX *c);
int CC_SHA384_Update(CC_SHA512_CTX *c, const void *data, CC_LONG len);
int CC_SHA384_Final(unsigned char *md, CC_SHA512_CTX *c);

int CC_SHA512_Init(CC_SHA512_CTX *c);
int CC_SHA512_Update(CC_SHA512_CTX *c, const void *data, CC_LONG len);
int CC_SHA512_Final(unsigned char *md, CC_SHA512_CTX *c);