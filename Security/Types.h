#ifndef SECURITY_H_
#define SECURITY_H_

#import "../Types.h"

typedef struct __SecCertificate *SecCertificateRef;
typedef struct __SecIdentity *SecIdentityRef;
typedef struct __SecKey *SecKeyRef;
typedef struct __SecPolicy *SecPolicyRef;
typedef struct __SecAccessControl *SecAccessControlRef;
typedef struct __SecKeychain *SecKeychainRef;
typedef struct __SecKeychainItem *SecKeychainItemRef;
typedef struct __SecKeychainSearch *SecKeychainSearchRef;
typedef struct __SecTrustedApplication *SecTrustedApplicationRef;
typedef struct __SecAccess *SecAccessRef;
typedef struct __SecTrust *SecACLRef;
typedef struct __SecPassword *SecPasswordRef;
typedef struct __SecTrust *SecTrustRef;
typedef struct __SecTask *SecTaskRef;

typedef uint32 CSSM_TP_ACTION;
typedef uint32 CSSM_TP_HANDLE;
typedef uint32 CSSM_EVIDENCE_FORM;
typedef uint32 CSSM_DL_HANDLE;
typedef uint32 CSSM_DB_HANDLE;

#define CSSM_EVIDENCE_FORM_UNSPECIFIC    0x0
#define CSSM_EVIDENCE_FORM_CERT          0x1
#define CSSM_EVIDENCE_FORM_CRL           0x2
#define CSSM_EVIDENCE_FORM_CERT_ID       0x3
#define CSSM_EVIDENCE_FORM_CRL_ID        0x4
#define CSSM_EVIDENCE_FORM_VERIFIER_TIME 0x5
#define CSSM_EVIDENCE_FORM_CRL_THISTIME  0x6
#define CSSM_EVIDENCE_FORM_CRL_NEXTTIME  0x7
#define CSSM_EVIDENCE_FORM_POLICYINFO    0x8
#define CSSM_EVIDENCE_FORM_TUPLEGROUP    0x9

typedef enum cssm_return {
    CSSM_OK = 0,
    CSSM_FAIL = -1
} CSSM_RETURN;

typedef struct cssm_evidence {
    CSSM_EVIDENCE_FORM EvidenceForm;
    void *Evidence;
} CSSM_EVIDENCE, *CSSM_EVIDENCE_PTR; 

typedef struct cssm_tp_verify_context_result {
    uint32 NumberOfEvidences;
    CSSM_EVIDENCE_PTR Evidence;
} CSSM_TP_VERIFY_CONTEXT_RESULT, *CSSM_TP_VERIFY_CONTEXT_RESULT_PTR;

typedef uint32 CSSM_TP_APPLE_CERT_STATUS; enum CSSM_TP_APPLE_CERT_STATUS {
    CSSM_CERT_STATUS_EXPIRED            = 0x00000001,
    CSSM_CERT_STATUS_NOT_VALID_YET      = 0x00000002,
    CSSM_CERT_STATUS_IS_IN_INPUT_CERTS  = 0x00000004,
    CSSM_CERT_STATUS_IS_IN_ANCHORS      = 0x00000008,
    CSSM_CERT_STATUS_IS_ROOT            = 0x00000010,
    CSSM_CERT_STATUS_IS_FROM_NET        = 0x00000020,
    CSSM_CERT_STATUS_TRUST_SETTINGS_FOUND_USER      = 0x00000040,
    CSSM_CERT_STATUS_TRUST_SETTINGS_FOUND_ADMIN     = 0x00000080,
    CSSM_CERT_STATUS_TRUST_SETTINGS_FOUND_SYSTEM    = 0x00000100,
    CSSM_CERT_STATUS_TRUST_SETTINGS_TRUST           = 0x00000200,
    CSSM_CERT_STATUS_TRUST_SETTINGS_DENY            = 0x00000400,
    CSSM_CERT_STATUS_TRUST_SETTINGS_IGNORED_ERROR   = 0x00000800
} CSSM_TP_APPLE_CERT_STATUS;

typedef enum cssm_db_index_type {
    CSSM_DB_INDEX_UNIQUE = 0,
    CSSM_DB_INDEX_NONUNIQUE = 1
} CSSM_DB_INDEX_TYPE;

typedef enum cssm_db_indexed_data_location {
    CSSM_DB_INDEX_ON_UNKNOWN = 0,
    CSSM_DB_INDEX_ON_ATTRIBUTE = 1,
    CSSM_DB_INDEX_ON_RECORD = 2
} CSSM_DB_INDEXED_DATA_LOCATION;

typedef struct cssm_dl_db_handle {
    CSSM_DL_HANDLE DLHandle;
    CSSM_DB_HANDLE DBHandle;
} CSSM_DL_DB_HANDLE, *CSSM_DL_DB_HANDLE_PTR;

typedef enum cssm_db_attribute_name_format {
    CSSM_DB_ATTRIBUTE_NAME_AS_STRING = 0, 
    CSSM_DB_ATTRIBUTE_NAME_AS_OID = 1,
    CSSM_DB_ATTRIBUTE_NAME_AS_NUMBER = 2
} CSSM_DB_ATTRIBUTE_NAME_FORMAT, *CSSM_DB_ATTRIBUTE_NAME_FORMAT_PTR;

typedef struct cssm_data {
    uint32 Length;
    uint8* Data;
} CSSM_DATA, *CSSM_DATA_PTR;
typedef CSSM_DATA CSSM_OID, *CSSM_OID_PTR;

typedef struct cssm_db_attribute_info {
    CSSM_DB_ATTRIBUTE_NAME_FORMAT AttributeNameFormat;
    union {
        char *AttributeName;
        CSSM_OID AttributeID;
        uint32 AttributeNumber;
    };
} CSSM_DB_ATTRIBUTE_INFO, *CSSM_DB_ATTRIBUTE_INFO_PTR;

typedef struct cssm_db_index_info {
    CSSM_DB_INDEX_TYPE IndexType; 
    CSSM_DB_INDEXED_DATA_LOCATION IndexedDataLocation; 
    CSSM_DB_ATTRIBUTE_INFO Info;
} CSSM_DB_INDEX_INFO, *CSSM_DB_INDEX_INFO_PTR;

typedef struct cssm_db_unique_record {
    CSSM_DB_INDEX_INFO RecordLocator; 
    CSSM_DATA RecordIdentifier;
} CSSM_DB_UNIQUE_RECORD, *CSSM_DB_UNIQUE_RECORD_PTR;

typedef struct CSSM_TP_APPLE_EVIDENCE_INFO {
    CSSM_TP_APPLE_CERT_STATUS   StatusBits;
    uint32                      NumStatusCodes;
    CSSM_RETURN                 *StatusCodes;
    uint32                      Index;   
    CSSM_DL_DB_HANDLE           DlDbHandle;
    CSSM_DB_UNIQUE_RECORD_PTR   UniqueRecord;
} CSSM_TP_APPLE_EVIDENCE_INFO;

typedef OSType SecKeychainAttrType;

typedef struct SecKeychainAttribute {
    SecKeychainAttrType tag;
    UInt32 length;
    void *data;
} SecKeychainAttribute;

typedef SecKeychainAttribute *SecKeychainAttributePtr;

typedef struct SecKeychainAttributeList {
    UInt32 count;
    SecKeychainAttribute *attr;
} SecKeychainAttributeList;

typedef struct SecKeychainAttributeInfo {
    UInt32 count;
    UInt32 *tag;
    UInt32 *format;
} SecKeychainAttributeInfo;

typedef UInt32 SecKeychainStatus;

typedef uint32_t SecTrustResultType; enum SecTrustResultType {
    kSecTrustResultInvalid = 0,
    kSecTrustResultProceed = 1,
    kSecTrustResultConfirm = 2,
    kSecTrustResultDeny = 3,
    kSecTrustResultUnspecified = 4,
    kSecTrustResultRecoverableTrustFailure = 5,
    kSecTrustResultFatalTrustFailure = 6,
    kSecTrustResultOtherError = 7
} SecTrustResultType;

typedef void (*SecTrustCallback)(SecTrustRef trustRef, SecTrustResultType trustResult);

typedef SecTrustResultType SecTrustUserSetting;

typedef uint32_t SecTrustOptionFlags; enum SecTrustOptionFlags {
    kSecTrustOptionAllowExpired       = 0x00000001,
    kSecTrustOptionLeafIsCA           = 0x00000002,
    kSecTrustOptionFetchIssuerFromNet = 0x00000004,
    kSecTrustOptionAllowExpiredRoot   = 0x00000008,
    kSecTrustOptionRequireRevPerCert  = 0x00000010,
    kSecTrustOptionUseTrustSettings   = 0x00000020,
    kSecTrustOptionImplicitAnchors    = 0x00000040
} SecTrustOptionFlags;

typedef CFOptionFlags SecAccessControlCreateFlags; enum SecAccessControlCreateFlags {
    kSecAccessControlUserPresence           = 1u << 0,
    kSecAccessControlBiometryAny            = 1u << 1,
    kSecAccessControlTouchIDAny             = 1u << 1,
    kSecAccessControlBiometryCurrentSet     = 1u << 3,
    kSecAccessControlTouchIDCurrentSet      = 1u << 3,
    kSecAccessControlDevicePasscode         = 1u << 4,
    kSecAccessControlWatch                  = 1u << 5,
    kSecAccessControlOr                     = 1u << 14,
    kSecAccessControlAnd                    = 1u << 15,
    kSecAccessControlPrivateKeyUsage        = 1u << 30,
    kSecAccessControlApplicationPassword    = 1u << 31
} SecAccessControlCreateFlags;

extern const CFStringRef kSecPropertyTypeTitle;
extern const CFStringRef kSecPropertyTypeError;
extern const CFStringRef kSecTrustEvaluationDate;
extern const CFStringRef kSecTrustExtendedValidation;
extern const CFStringRef kSecTrustOrganizationName;
extern const CFStringRef kSecTrustResultValue;
extern const CFStringRef kSecTrustRevocationChecked;
extern const CFStringRef kSecTrustRevocationValidUntilDate;
extern const CFStringRef kSecTrustCertificateTransparency;
extern const CFStringRef kSecTrustCertificateTransparencyWhiteList;

extern const CFStringRef kSecClassInternetPassword;
extern const CFStringRef kSecClassGenericPassword;
extern const CFStringRef kSecClassCertificate;
extern const CFStringRef kSecClassKey;
extern const CFStringRef kSecClassIdentity;

extern const CFStringRef kSecAttrAccessible;
extern const CFStringRef kSecAttrAccess;
extern const CFStringRef kSecAttrAccessControl;
extern const CFStringRef kSecAttrAccessGroup;
extern const CFStringRef kSecAttrSynchronizable;
extern const CFStringRef kSecAttrSynchronizableAny;
extern const CFStringRef kSecAttrCreationDate;
extern const CFStringRef kSecAttrModificationDate;
extern const CFStringRef kSecAttrDescription;
extern const CFStringRef kSecAttrComment;
extern const CFStringRef kSecAttrCreator;
extern const CFStringRef kSecAttrType;
extern const CFStringRef kSecAttrLabel;
extern const CFStringRef kSecAttrIsInvisible;
extern const CFStringRef kSecAttrIsNegative;
extern const CFStringRef kSecAttrAccount;
extern const CFStringRef kSecAttrService;
extern const CFStringRef kSecAttrGeneric;
extern const CFStringRef kSecAttrSecurityDomain;
extern const CFStringRef kSecAttrServer;
extern const CFStringRef kSecAttrProtocol;
extern const CFStringRef kSecAttrAuthenticationType;
extern const CFStringRef kSecAttrPort;
extern const CFStringRef kSecAttrPath;
extern const CFStringRef kSecAttrSubject;
extern const CFStringRef kSecAttrIssuer;
extern const CFStringRef kSecAttrSerialNumber;
extern const CFStringRef kSecAttrSubjectKeyID;
extern const CFStringRef kSecAttrPublicKeyHash;
extern const CFStringRef kSecAttrCertificateType;
extern const CFStringRef kSecAttrCertificateEncoding;
extern const CFStringRef kSecAttrKeyClass;
extern const CFStringRef kSecAttrApplicationLabel;
extern const CFStringRef kSecAttrIsPermanent;
extern const CFStringRef kSecAttrIsSensitive;
extern const CFStringRef kSecAttrIsExtractable;
extern const CFStringRef kSecAttrApplicationTag;
extern const CFStringRef kSecAttrKeyType;
extern const CFStringRef kSecAttrPRF;
extern const CFStringRef kSecAttrSalt;
extern const CFStringRef kSecAttrRounds;
extern const CFStringRef kSecAttrKeySizeInBits;
extern const CFStringRef kSecAttrEffectiveKeySize;
extern const CFStringRef kSecAttrCanEncrypt;
extern const CFStringRef kSecAttrCanDecrypt;
extern const CFStringRef kSecAttrCanDerive;
extern const CFStringRef kSecAttrCanSign;
extern const CFStringRef kSecAttrCanVerify;
extern const CFStringRef kSecAttrCanWrap;
extern const CFStringRef kSecAttrCanUnwrap;
extern const CFStringRef kSecAttrSyncViewHint;
extern const CFStringRef kSecAttrTokenID;
extern const CFStringRef kSecAttrPersistantReference;
extern const CFStringRef kSecAttrPersistentReference;

extern const CFStringRef kSecAttrAccessibleWhenUnlocked;
extern const CFStringRef kSecAttrAccessibleAfterFirstUnlock;
extern const CFStringRef kSecAttrAccessibleAlways;
extern const CFStringRef kSecAttrAccessibleWhenPasscodeSetThisDeviceOnly;
extern const CFStringRef kSecAttrAccessibleWhenUnlockedThisDeviceOnly;
extern const CFStringRef kSecAttrAccessibleAfterFirstUnlockThisDeviceOnly;
extern const CFStringRef kSecAttrAccessibleAlwaysThisDeviceOnly;

extern const CFStringRef kSecAttrProtocolFTP;
extern const CFStringRef kSecAttrProtocolFTPAccount;
extern const CFStringRef kSecAttrProtocolHTTP;
extern const CFStringRef kSecAttrProtocolIRC;
extern const CFStringRef kSecAttrProtocolNNTP;
extern const CFStringRef kSecAttrProtocolPOP3;
extern const CFStringRef kSecAttrProtocolSMTP;
extern const CFStringRef kSecAttrProtocolSOCKS;
extern const CFStringRef kSecAttrProtocolIMAP;
extern const CFStringRef kSecAttrProtocolLDAP;
extern const CFStringRef kSecAttrProtocolAppleTalk;
extern const CFStringRef kSecAttrProtocolAFP;
extern const CFStringRef kSecAttrProtocolTelnet;
extern const CFStringRef kSecAttrProtocolSSH;
extern const CFStringRef kSecAttrProtocolFTPS;
extern const CFStringRef kSecAttrProtocolHTTPS;
extern const CFStringRef kSecAttrProtocolHTTPProxy;
extern const CFStringRef kSecAttrProtocolHTTPSProxy;
extern const CFStringRef kSecAttrProtocolFTPProxy;
extern const CFStringRef kSecAttrProtocolSMB;
extern const CFStringRef kSecAttrProtocolRTSP;
extern const CFStringRef kSecAttrProtocolRTSPProxy;
extern const CFStringRef kSecAttrProtocolDAAP;
extern const CFStringRef kSecAttrProtocolEPPC;
extern const CFStringRef kSecAttrProtocolIPP;
extern const CFStringRef kSecAttrProtocolNNTPS;
extern const CFStringRef kSecAttrProtocolLDAPS;
extern const CFStringRef kSecAttrProtocolTelnetS;
extern const CFStringRef kSecAttrProtocolIMAPS;
extern const CFStringRef kSecAttrProtocolIRCS;
extern const CFStringRef kSecAttrProtocolPOP3S;

extern const CFStringRef kSecAttrAuthenticationTypeNTLM;
extern const CFStringRef kSecAttrAuthenticationTypeMSN;
extern const CFStringRef kSecAttrAuthenticationTypeDPA;
extern const CFStringRef kSecAttrAuthenticationTypeRPA;
extern const CFStringRef kSecAttrAuthenticationTypeHTTPBasic;
extern const CFStringRef kSecAttrAuthenticationTypeHTTPDigest;
extern const CFStringRef kSecAttrAuthenticationTypeHTMLForm;
extern const CFStringRef kSecAttrAuthenticationTypeDefault;

extern const CFStringRef kSecAttrKeyClassPublic;
extern const CFStringRef kSecAttrKeyClassPrivate;
extern const CFStringRef kSecAttrKeyClassSymmetric;

extern const CFStringRef kSecAttrKeyTypeRSA;
extern const CFStringRef kSecAttrKeyTypeDSA;
extern const CFStringRef kSecAttrKeyTypeAES;
extern const CFStringRef kSecAttrKeyTypeDES;
extern const CFStringRef kSecAttrKeyType3DES;
extern const CFStringRef kSecAttrKeyTypeRC4;
extern const CFStringRef kSecAttrKeyTypeRC2;
extern const CFStringRef kSecAttrKeyTypeCAST;
extern const CFStringRef kSecAttrKeyTypeECDSA;
extern const CFStringRef kSecAttrKeyTypeEC;
extern const CFStringRef kSecAttrKeyTypeECSECPrimeRandom;

extern const CFStringRef kSecAttrPRFHmacAlgSHA1;
extern const CFStringRef kSecAttrPRFHmacAlgSHA224;
extern const CFStringRef kSecAttrPRFHmacAlgSHA256;
extern const CFStringRef kSecAttrPRFHmacAlgSHA384;
extern const CFStringRef kSecAttrPRFHmacAlgSHA512;

extern const CFStringRef kSecMatchPolicy;
extern const CFStringRef kSecMatchItemList;
extern const CFStringRef kSecMatchSearchList;
extern const CFStringRef kSecMatchIssuers;
extern const CFStringRef kSecMatchEmailAddressIfPresent;
extern const CFStringRef kSecMatchSubjectContains;
extern const CFStringRef kSecMatchSubjectStartsWith;
extern const CFStringRef kSecMatchSubjectEndsWith;
extern const CFStringRef kSecMatchSubjectWholeString;
extern const CFStringRef kSecMatchCaseInsensitive;
extern const CFStringRef kSecMatchDiacriticInsensitive;
extern const CFStringRef kSecMatchWidthInsensitive;
extern const CFStringRef kSecMatchTrustedOnly;
extern const CFStringRef kSecMatchValidOnDate;
extern const CFStringRef kSecMatchLimit;
extern const CFStringRef kSecMatchLimitOne;
extern const CFStringRef kSecMatchLimitAll;

extern const CFStringRef kSecReturnData;
extern const CFStringRef kSecReturnAttributes;
extern const CFStringRef kSecReturnRef;
extern const CFStringRef kSecReturnPersistentRef;

extern const CFStringRef kSecValueData;
extern const CFStringRef kSecValueRef;
extern const CFStringRef kSecValuePersistentRef;

extern const CFStringRef kSecUseItemList;
extern const CFStringRef kSecUseKeychain;
extern const CFStringRef kSecUseOperationPrompt;
extern const CFStringRef kSecUseNoAuthenticationUI;
extern const CFStringRef kSecUseAuthenticationUI;
extern const CFStringRef kSecUseAuthenticationContext;
extern const CFStringRef kSecUseDataProtectionKeychain;
extern const CFStringRef kSecUseAuthenticationUIAllow;
extern const CFStringRef kSecUseAuthenticationUIFail;
extern const CFStringRef kSecUseAuthenticationUISkip;

extern const CFStringRef kSecAttrTokenIDSecureEnclave;
extern const CFStringRef kSecAttrAccessGroupToken;

#endif