#import "Types.h"

int CC_MD4_Init(CC_MD4_CTX* c);
int _imp__CC_MD4_Init(CC_MD4_CTX* c);
int CC_MD4_Update(CC_MD4_CTX* c, const void* data, CC_LONG len);
int _imp__CC_MD4_Update(CC_MD4_CTX* c, const void* data, CC_LONG len);
int CC_MD4_Final(unsigned char* md, CC_MD4_CTX* c);
int _imp__CC_MD4_Final(unsigned char* md, CC_MD4_CTX* c);

unsigned char* CC_MD4(const void* data, CC_LONG len, unsigned char* md);
unsigned char* _imp__CC_MD4(const void* data, CC_LONG len, unsigned char* md);

int CC_MD5_Init(CC_MD5_CTX* c);
int _imp__CC_MD5_Init(CC_MD5_CTX* c);
int CC_MD5_Update(CC_MD5_CTX* c, const void* data, CC_LONG len);
int _imp__CC_MD5_Update(CC_MD5_CTX* c, const void* data, CC_LONG len);
int CC_MD5_Final(unsigned char* md, CC_MD5_CTX* c);
int _imp__CC_MD5_Final(unsigned char* md, CC_MD5_CTX* c);

unsigned char* CC_MD5(const void* data, CC_LONG len, unsigned char* md);
unsigned char* _imp__CC_MD5(const void* data, CC_LONG len, unsigned char* md);

int CC_SHA1_Init(CC_SHA1_CTX* c);
int _imp__CC_SHA1_Init(CC_SHA1_CTX* c);
int CC_SHA1_Update(CC_SHA1_CTX* c, const void* data, CC_LONG len);
int _imp__CC_SHA1_Update(CC_SHA1_CTX* c, const void* data, CC_LONG len);
int CC_SHA1_Final(unsigned char* md, CC_SHA1_CTX* c);
int _imp__CC_SHA1_Final(unsigned char* md, CC_SHA1_CTX* c);

unsigned char* CC_SHA1(const void* data, CC_LONG len, unsigned char* md);
unsigned char* _imp__CC_SHA1(const void* data, CC_LONG len, unsigned char* md);

int CC_SHA256_Init(CC_SHA256_CTX* c);
int _imp__CC_SHA256_Init(CC_SHA256_CTX* c);
int CC_SHA256_Update(CC_SHA256_CTX* c, const void* data, CC_LONG len);
int _imp__CC_SHA256_Update(CC_SHA256_CTX* c, const void* data, CC_LONG len);
int CC_SHA256_Final(unsigned char* md, CC_SHA256_CTX* c);
int _imp__CC_SHA256_Final(unsigned char* md, CC_SHA256_CTX* c);

unsigned char* CC_SHA256(const void* data, CC_LONG len, unsigned char* md);
unsigned char* _imp__CC_SHA256(const void* data, CC_LONG len, unsigned char* md);

int CC_SHA384_Init(CC_SHA512_CTX* c);
int _imp__CC_SHA384_Init(CC_SHA512_CTX* c);
int CC_SHA384_Update(CC_SHA512_CTX* c, const void* data, CC_LONG len);
int _imp__CC_SHA384_Update(CC_SHA512_CTX* c, const void* data, CC_LONG len);
int CC_SHA384_Final(unsigned char* md, CC_SHA512_CTX* c);
int _imp__CC_SHA384_Final(unsigned char* md, CC_SHA512_CTX* c);

unsigned char* CC_SHA384(const void* data, CC_LONG len, unsigned char* md);
unsigned char* _imp__CC_SHA384(const void* data, CC_LONG len, unsigned char* md);

int CC_SHA512_Init(CC_SHA512_CTX* c);
int _imp__CC_SHA512_Init(CC_SHA512_CTX* c);
int CC_SHA512_Update(CC_SHA512_CTX* c, const void* data, CC_LONG len);
int _imp__CC_SHA512_Update(CC_SHA512_CTX* c, const void* data, CC_LONG len);
int CC_SHA512_Final(unsigned char* md, CC_SHA512_CTX* c);
int _imp__CC_SHA512_Final(unsigned char* md, CC_SHA512_CTX* c);

unsigned char* CC_SHA512(const void* data, CC_LONG len, unsigned char* md);
unsigned char* _imp__CC_SHA512(const void* data, CC_LONG len, unsigned char* md);