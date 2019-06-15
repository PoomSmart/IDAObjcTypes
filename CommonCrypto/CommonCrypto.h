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

size_t CCCryptorGetOutputLength(CCCryptorRef cryptorRef, size_t inputLength, bool final);
size_t _imp__CCCryptorGetOutputLength(CCCryptorRef cryptorRef, size_t inputLength, bool final);

int CCKeyDerivationPBKDF(CCPBKDFAlgorithm algorithm, const char *password, size_t passwordLen, const uint8_t *salt, size_t saltLen, CCPseudoRandomAlgorithm prf, unsigned rounds, uint8_t *derivedKey, size_t derivedKeyLen);
int _imp__CCKeyDerivationPBKDF(CCPBKDFAlgorithm algorithm, const char *password, size_t passwordLen, const uint8_t *salt, size_t saltLen, CCPseudoRandomAlgorithm prf, unsigned rounds, uint8_t *derivedKey, size_t derivedKeyLen);

unsigned CCCalibratePBKDF(CCPBKDFAlgorithm algorithm, size_t passwordLen, size_t saltLen, CCPseudoRandomAlgorithm prf, size_t derivedKeyLen, uint32_t msec);
unsigned _imp__CCCalibratePBKDF(CCPBKDFAlgorithm algorithm, size_t passwordLen, size_t saltLen, CCPseudoRandomAlgorithm prf, size_t derivedKeyLen, uint32_t msec);

void CCHmacInit(CCHmacContext *ctx, CCHmacAlgorithm algorithm, const void *key, size_t keyLength);
void _imp__CCHmacInit(CCHmacContext *ctx, CCHmacAlgorithm algorithm, const void *key, size_t keyLength);
void CCHmacUpdate(CCHmacContext *ctx, const void *data, size_t dataLength);
void _imp__CCHmacUpdate(CCHmacContext *ctx, const void *data, size_t dataLength);
void CCHmacFinal(CCHmacContext *ctx, void *macOut);
void _imp__CCHmacFinal(CCHmacContext *ctx, void *macOut);
void CCHmac(CCHmacAlgorithm algorithm, const void *key, size_t keyLength, const void *data, size_t dataLength, void *macOut);
void _imp__CCHmac(CCHmacAlgorithm algorithm, const void *key, size_t keyLength, const void *data, size_t dataLength, void *macOut);

CCCryptorStatus CCCryptorCreate(CCOperation op, CCAlgorithm alg, CCOptions options, const void *key, size_t keyLength, const void *iv, CCCryptorRef *cryptorRef);
CCCryptorStatus _imp__CCCryptorCreate(CCOperation op, CCAlgorithm alg, CCOptions options, const void *key, size_t keyLength, const void *iv, CCCryptorRef *cryptorRef);
CCCryptorStatus CCCryptorCreateFromData(CCOperation op, CCAlgorithm alg, CCOptions options, const void *key, size_t keyLength, const void *iv, const void *data, size_t dataLength, CCCryptorRef *cryptorRef, size_t *dataUsed);
CCCryptorStatus _imp__CCCryptorCreateFromData(CCOperation op, CCAlgorithm alg, CCOptions options, const void *key, size_t keyLength, const void *iv, const void *data, size_t dataLength, CCCryptorRef *cryptorRef, size_t *dataUsed);
CCCryptorStatus CCCryptorRelease(CCCryptorRef cryptorRef);
CCCryptorStatus _imp__CCCryptorRelease(CCCryptorRef cryptorRef);
CCCryptorStatus CCCryptorUpdate(CCCryptorRef cryptorRef, const void *dataIn, size_t dataInLength, void *dataOut, size_t dataOutAvailable, size_t *dataOutMoved);
CCCryptorStatus _imp__CCCryptorUpdate(CCCryptorRef cryptorRef, const void *dataIn, size_t dataInLength, void *dataOut, size_t dataOutAvailable, size_t *dataOutMoved);
CCCryptorStatus CCCryptorFinal(CCCryptorRef cryptorRef, void *dataOut, size_t dataOutAvailable, size_t *dataOutMoved);
CCCryptorStatus _imp__CCCryptorFinal(CCCryptorRef cryptorRef, void *dataOut, size_t dataOutAvailable, size_t *dataOutMoved);
CCCryptorStatus CCCryptorReset(CCCryptorRef cryptorRef, const void *iv);
CCCryptorStatus _imp__CCCryptorReset(CCCryptorRef cryptorRef, const void *iv);
CCCryptorStatus CCCrypt(CCOperation op, CCAlgorithm alg, CCOptions options, const void *key, size_t keyLength, const void *iv, const void *dataIn, size_t dataInLength, void *dataOut, size_t dataOutAvailable, size_t *dataOutMoved);
CCCryptorStatus _imp__CCCrypt(CCOperation op, CCAlgorithm alg, CCOptions options, const void *key, size_t keyLength, const void *iv, const void *dataIn, size_t dataInLength, void *dataOut, size_t dataOutAvailable, size_t *dataOutMoved);
CCCryptorStatus CCCryptorCreateWithMode(CCOperation op, CCMode mode, CCAlgorithm alg, CCPadding padding, const void *iv, const void *key, size_t keyLength, const void *tweak, size_t tweakLength, int numRounds, CCModeOptions options, CCCryptorRef *cryptorRef);
CCCryptorStatus _imp__CCCryptorCreateWithMode(CCOperation op, CCMode mode, CCAlgorithm alg, CCPadding padding, const void *iv, const void *key, size_t keyLength, const void *tweak, size_t tweakLength, int numRounds, CCModeOptions options, CCCryptorRef *cryptorRef);