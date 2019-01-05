#ifndef COMMONCRYPTO_H_
#define COMMONCRYPTO_H_

#import "../Types.h"

typedef uint32_t CC_LONG;
typedef uint64_t CC_LONG64;

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
    CC_LONG A,B,C,D;
    CC_LONG Nl,Nh;
    CC_LONG data[CC_MD4_BLOCK_LONG];
    int num;
} CC_MD4_CTX;

#define CC_MD5_DIGEST_LENGTH 16
#define CC_MD5_BLOCK_BYTES 64
#define CC_MD5_BLOCK_LONG  (CC_MD5_BLOCK_BYTES / sizeof(CC_LONG))

typedef struct CC_MD5state_st {
    CC_LONG A,B,C,D;
    CC_LONG Nl,Nh;
    CC_LONG data[CC_MD5_BLOCK_LONG];
    int num;
} CC_MD5_CTX;

#define CC_SHA1_DIGEST_LENGTH  20
#define CC_SHA1_BLOCK_BYTES 64
#define CC_SHA1_BLOCK_LONG (CC_SHA1_BLOCK_BYTES / sizeof(CC_LONG))

typedef struct CC_SHA1state_st {
    CC_LONG h0, h1, h2, h3, h4;
    CC_LONG Nl, Nh;
    CC_LONG data[CC_SHA1_BLOCK_LONG];
    int num;
} CC_SHA1_CTX;

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

#endif