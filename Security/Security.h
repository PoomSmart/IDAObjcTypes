#import "../BaseTypes.h"
#import "../CoreFoundation/Types.h"
#import "../Darwin/Types.h"
#import "../Kernel/Types.h"
#import "../xpc/Types.h"
#import "Types.h"

Boolean SecTaskEntitlementsValidated(SecTaskRef task);

CFAbsoluteTime SecTrustGetVerifyTime(SecTrustRef trust);

CFArrayRef CFArrayCreateForCFTypes(CFAllocatorRef allocator, ...);

CFArrayRef SecCertificateCopyCommonNames(SecCertificateRef certificate);
CFArrayRef SecTrustCopyProperties(SecTrustRef trust);

CFDataRef SecCertificateCopyData(SecCertificateRef certificate);
CFDataRef SecCertificateCopyNormalizedIssuerSequence(SecCertificateRef certificate);
CFDataRef SecCertificateCopyNormalizedSubjectSequence(SecCertificateRef certificate);
#ifdef TARGET_OS_MAC
CFDataRef SecCertificateCopySerialNumber(SecCertificateRef certificate, CFErrorRef *error);
#else
CFDataRef SecCertificateCopySerialNumber(SecCertificateRef certificate);
#endif
CFDataRef SecCertificateCopySerialNumberData(SecCertificateRef certificate, CFErrorRef *error);
CFDataRef SecTrustCopyExceptions(SecTrustRef trust);
CFDataRef SecTrustSerialize(SecTrustRef trust, CFErrorRef *error);

CFDictionaryRef SecTrustCopyResult(SecTrustRef trust);

CFIndex SecTrustGetCertificateCount(SecTrustRef trust);

CFStringRef SecCertificateCopySubjectSummary(SecCertificateRef certificate);
CFStringRef SecCopyErrorMessageString(OSStatus status, void *reserved);
CFStringRef SecTaskCopySigningIdentifier(SecTaskRef task, CFErrorRef *error);
CFStringRef SecTaskCopyDebugDescription(CFTypeRef cfTask);
CFStringRef SecTaskCopyIdentifier(SecTaskRef task, int op, CFErrorRef *error);

CFTypeID SecAccessControlGetTypeID(void);
CFTypeID SecCertificateGetTypeID(void);
CFTypeID SecPolicyGetTypeID(void);
CFTypeID SecTaskGetTypeID(void);
CFTypeID SecTrustGetTypeID(void);

CFTypeRef SecTaskCopyValueForEntitlement(SecTaskRef task, CFStringRef entitlement, CFErrorRef *error);

OSStatus SecCertificateAddToKeychain(SecCertificateRef certificate, SecKeychainRef keychain);
OSStatus SecCertificateCopyCommonName(SecCertificateRef certificate, CFStringRef *commonName);
OSStatus SecCertificateCopyEmailAddresses(SecCertificateRef certificate, CFArrayRef *emailAddresses);
OSStatus SecCertificateGetData(SecCertificateRef certificate, CSSM_DATA_PTR data);
OSStatus SecCodeCheckValidity(SecCodeRef code, SecCSFlags flags, SecRequirementRef requirement);
OSStatus SecIdentityCopyCertificate(SecIdentityRef identityRef, SecCertificateRef *certificateRef);
OSStatus SecItemAdd(CFDictionaryRef attributes, CFTypeRef *result);
OSStatus SecItemCopyMatching(CFDictionaryRef query, CFTypeRef *result);
OSStatus SecItemDelete(CFDictionaryRef query);
OSStatus SecItemUpdate(CFDictionaryRef query, CFDictionaryRef attributesToUpdate);
OSStatus SecKeyRawVerify(SecKeyRef key, SecPadding padding, const uint8_t *signedData, size_t signedDataLen, const uint8_t *sig, size_t sigLen);
OSStatus SecPKCS12Import(CFDataRef pkcs12_data, CFDictionaryRef options, CFArrayRef *items);
OSStatus SecTrustCopyAnchorCertificates(CFArrayRef *anchors);
OSStatus SecTrustCopyCustomAnchorCertificates(SecTrustRef trust, CFArrayRef *anchors);
OSStatus SecTrustCopyPolicies(SecTrustRef trust, CFArrayRef *policies);
OSStatus SecTrustCreateWithCertificates(CFTypeRef certificates, CFTypeRef policies, SecTrustRef *trust);
OSStatus SecTrustEvaluate(SecTrustRef trust, SecTrustResultType *result);
OSStatus SecTrustEvaluateAsync(SecTrustRef trust, dispatch_queue_t queue, SecTrustCallback result);
OSStatus SecTrustEvaluateWithError(SecTrustRef trust, CFErrorRef *error);
OSStatus SecTrustGetCssmResult(SecTrustRef trust, CSSM_TP_VERIFY_CONTEXT_RESULT_PTR *result);
OSStatus SecTrustGetCssmResultCode(SecTrustRef trust, OSStatus *resultCode);
OSStatus SecTrustGetNetworkFetchAllowed(SecTrustRef trust, Boolean *allowFetch);
OSStatus SecTrustGetResult(SecTrustRef trustRef, SecTrustResultType *result, CFArrayRef *certChain, CSSM_TP_APPLE_EVIDENCE_INFO **statusChain);
OSStatus SecTrustGetTPHandle(SecTrustRef trust, CSSM_TP_HANDLE *handle);
OSStatus SecTrustGetTrustResult(SecTrustRef trust, SecTrustResultType *result);
OSStatus SecTrustSetAnchorCertificates(SecTrustRef trust, CFArrayRef anchorCertificates);
OSStatus SecTrustSetAnchorCertificatesOnly(SecTrustRef trust, Boolean anchorCertificatesOnly);
OSStatus SecTrustSetKeychains(SecTrustRef trust, CFTypeRef keychainOrArray);
OSStatus SecTrustSetNetworkFetchAllowed(SecTrustRef trust, Boolean allowFetch);
OSStatus SecTrustSetOCSPResponse(SecTrustRef trust, CFTypeRef responseData);
OSStatus SecTrustSetOptions(SecTrustRef trustRef, SecTrustOptionFlags options);
OSStatus SecTrustSetParameters(SecTrustRef trustRef, CSSM_TP_ACTION action, CFDataRef actionData);
OSStatus SecTrustSetPolicies(SecTrustRef trust, CFTypeRef policies);
OSStatus SecTrustSetSignedCertificateTimestamps(SecTrustRef trust, CFArrayRef sctArray);
OSStatus SecTrustSetVerifyDate(SecTrustRef trust, CFDateRef verifyDate);

SecSignatureHashAlgorithm SecCertificateGetSignatureHashAlgorithm(SecCertificateRef certificate);

SecAccessControlRef SecAccessControlCreateWithFlags(CFAllocatorRef allocator, CFTypeRef protection, SecAccessControlCreateFlags flags, CFErrorRef *error);

SecCertificateRef SecCertificateCreateWithData(CFAllocatorRef allocator, CFDataRef data);
SecCertificateRef SecTrustGetCertificateAtIndex(SecTrustRef trust, CFIndex ix);

SecKeyRef SecCertificateCopyKey(SecCertificateRef certificate);
SecKeyRef SecKeyCreateRSAPublicKey(CFAllocatorRef allocator, const uint8_t *keyData, CFIndex keyDataLength, SecKeyEncoding encoding);
SecKeyRef SecKeyCreateWithData(CFDataRef keyData, CFDictionaryRef attributes, CFErrorRef *error);
SecKeyRef SecTrustCopyPublicKey(SecTrustRef trust);

SecPolicyRef SecPolicyCreateBasicX509(void);
SecPolicyRef SecPolicyCreateRevocation(CFOptionFlags revocationFlags);
SecPolicyRef SecPolicyCreateSSL(Boolean server, CFStringRef hostname);
SecPolicyRef SecPolicyCreateAppleIDAuthorityPolicy(void);

SecTaskRef SecTaskCreateFromSelf(CFAllocatorRef allocator);
SecTaskRef SecTaskCreateWithAuditToken(CFAllocatorRef allocator, audit_token_t token);
SecTaskRef SecTaskCreateWithXPCMessage(xpc_object_t message);

SecTrustRef SecTrustDeserialize(CFDataRef serializedTrust, CFErrorRef *error);

uint32_t SecTaskGetCodeSignStatus(SecTaskRef task);

int SecRandomCopyBytes(SecRandomRef rnd, size_t count, void *bytes);

bool SecTaskLoadEntitlements(SecTaskRef task, CFErrorRef *error);
bool SecTrustSetExceptions(SecTrustRef trust, CFDataRef exceptions);

void SecTaskFinalize(CFTypeRef cfTask);

#if TARGET_OS_OSX
OSStatus SecCertificateCopyPublicKey(SecCertificateRef certificate, SecKeyRef *key);
#else
SecKeyRef SecCertificateCopyPublicKey(SecCertificateRef certificate);
#endif
