#ifndef COMMONCRYPTO_H_
#define COMMONCRYPTO_H_

#import "../BaseTypes.h"

typedef uint32_t CC_LONG;
typedef uint64_t CC_LONG64;

typedef struct _CCCryptor *CCCryptorRef;

#define CC_MD2_DIGEST_LENGTH 16
#define CC_MD2_BLOCK_BYTES 64
#define CC_MD2_BLOCK_LONG (CC_MD2_BLOCK_BYTES / sizeof(CC_LONG))

typedef struct CC_MD2state_st {
    int num;
    unsigned char data[CC_MD2_DIGEST_LENGTH];
    CC_LONG cksm[CC_MD2_BLOCK_LONG];
    CC_LONG state[CC_MD2_BLOCK_LONG];
} CC_MD2_CTX;

int CC_MD2_Init(CC_MD2_CTX *c);
int CC_MD2_Update(CC_MD2_CTX *c, const void *data, CC_LONG len);
int CC_MD2_Final(unsigned char *md, CC_MD2_CTX *c);

#define CC_MD4_DIGEST_LENGTH 16
#define CC_MD4_BLOCK_BYTES 64
#define CC_MD4_BLOCK_LONG (CC_MD4_BLOCK_BYTES / sizeof(CC_LONG))

typedef struct CC_MD4state_st {
    CC_LONG A, B, C, D;
    CC_LONG Nl, Nh;
    CC_LONG data[CC_MD4_BLOCK_LONG];
    int num;
} CC_MD4_CTX;

#define CC_MD5_DIGEST_LENGTH 16
#define CC_MD5_BLOCK_BYTES 64
#define CC_MD5_BLOCK_LONG (CC_MD5_BLOCK_BYTES / sizeof(CC_LONG))

typedef struct CC_MD5state_st {
    CC_LONG A, B, C, D;
    CC_LONG Nl, Nh;
    CC_LONG data[CC_MD5_BLOCK_LONG];
    int num;
} CC_MD5_CTX;

#define CC_SHA1_DIGEST_LENGTH 20
#define CC_SHA1_BLOCK_BYTES 64
#define CC_SHA1_BLOCK_LONG (CC_SHA1_BLOCK_BYTES / sizeof(CC_LONG))

typedef struct CC_SHA1state_st {
    CC_LONG h0, h1, h2, h3, h4;
    CC_LONG Nl, Nh;
    CC_LONG data[CC_SHA1_BLOCK_LONG];
    int num;
} CC_SHA1_CTX;

typedef struct CC_SHA224state_st {
    CC_LONG count[2];
    CC_LONG hash[8];
    CC_LONG wbuf[16];
} CC_SHA224_CTX;

#define CC_SHA256_DIGEST_LENGTH 32
#define CC_SHA256_BLOCK_BYTES 64

typedef struct CC_SHA256state_st {
    CC_LONG count[2];
    CC_LONG hash[8];
    CC_LONG wbuf[16];
} CC_SHA256_CTX;

#define CC_SHA384_DIGEST_LENGTH 48
#define CC_SHA384_BLOCK_BYTES 128

typedef struct CC_SHA512state_st {
    CC_LONG64 count[2];
    CC_LONG64 hash[8];
    CC_LONG64 wbuf[16];
} CC_SHA512_CTX;

#define CC_SHA512_DIGEST_LENGTH 64
#define CC_SHA512_BLOCK_BYTES 128

PS_ENUM(int32_t, CCStatus) {
    kCCSuccess = 0,
    kCCParamError = -4300,
    kCCBufferTooSmall = -4301,
    kCCMemoryFailure = -4302,
    kCCAlignmentError = -4303,
    kCCDecodeError = -4304,
    kCCUnimplemented = -4305,
    kCCOverflow = -4306,
    kCCRNGFailure = -4307,
    kCCUnspecifiedError = -4308,
    kCCCallSequenceError = -4309,
    kCCKeySizeError = -4310,
    kCCInvalidKey = -4311,
};
typedef int32_t CCCryptorStatus;

PS_ENUM(uint32_t, CCOperation) {
    kCCEncrypt = 0,
    kCCDecrypt,
};

PS_ENUM(uint32_t, CCAlgorithm) {
    kCCAlgorithmAES128 = 0,
    kCCAlgorithmAES = 0,
    kCCAlgorithmDES,
    kCCAlgorithm3DES,
    kCCAlgorithmCAST,
    kCCAlgorithmRC4,
    kCCAlgorithmRC2,
    kCCAlgorithmBlowfish
};

PS_ENUM(uint32_t, CCOptions) { kCCOptionPKCS7Padding = 0x0001, kCCOptionECBMode = 0x0002 };

PS_ENUM(uint32_t, CCMode) {
    kCCModeECB = 1,
    kCCModeCBC = 2,
    kCCModeCFB = 3,
    kCCModeCTR = 4,
    kCCModeOFB = 7,
    kCCModeRC4 = 9,
    kCCModeCFB8 = 10,
};

PS_ENUM(uint32_t, CCModeOptions) { kCCModeOptionCTR_BE = 2 };

PS_ENUM(uint32_t, CCPadding) {
    ccNoPadding = 0,
    ccPKCS7Padding = 1,
};

/*
enum {
    kCCKeySizeAES128          = 16,
    kCCKeySizeAES192          = 24,
    kCCKeySizeAES256          = 32,
    kCCKeySizeDES             = 8,
    kCCKeySize3DES            = 24,
    kCCKeySizeMinCAST         = 5,
    kCCKeySizeMaxCAST         = 16,
    kCCKeySizeMinRC4          = 1,
    kCCKeySizeMaxRC4          = 512,
    kCCKeySizeMinRC2          = 1,
    kCCKeySizeMaxRC2          = 128,
    kCCKeySizeMinBlowfish     = 8,
    kCCKeySizeMaxBlowfish     = 56,
};

enum {
    kCCBlockSizeAES128        = 16,
    kCCBlockSizeDES           = 8,
    kCCBlockSize3DES          = 8,
    kCCBlockSizeCAST          = 8,
    kCCBlockSizeRC2           = 8,
    kCCBlockSizeBlowfish      = 8,
};

enum {
    kCCContextSizeAES128	= 404,
    kCCContextSizeDES		= 240,
    kCCContextSize3DES		= 496,
    kCCContextSizeCAST		= 240,
    kCCContextSizeRC4		= 1072
};
*/

PS_ENUM(uint32_t, CCHmacAlgorithm) {
    kCCHmacAlgSHA1,
    kCCHmacAlgMD5,
    kCCHmacAlgSHA256,
    kCCHmacAlgSHA384,
    kCCHmacAlgSHA512,
    kCCHmacAlgSHA224
};

#define CC_HMAC_CONTEXT_SIZE 96
typedef struct CCHmacContext {
    uint32_t ctx[CC_HMAC_CONTEXT_SIZE];
} CCHmacContext;

PS_ENUM(uint32_t, CCPBKDFAlgorithm) {
    kCCPBKDF2 = 2,
};

PS_ENUM(uint32_t, CCPseudoRandomAlgorithm) {
    kCCPRFHmacAlgSHA1 = 1,
    kCCPRFHmacAlgSHA224 = 2,
    kCCPRFHmacAlgSHA256 = 3,
    kCCPRFHmacAlgSHA384 = 4,
    kCCPRFHmacAlgSHA512 = 5,
};

#endif