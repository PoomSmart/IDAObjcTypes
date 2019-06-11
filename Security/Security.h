#import "../Types.h"
#import "Types.h"

bool SecTrustSetExceptions(SecTrustRef trust, CFDataRef exceptions);

CFTypeID SecTrustGetTypeID(void);

CFStringRef SecCopyErrorMessageString(OSStatus status, void *reserved);

CFAbsoluteTime SecTrustGetVerifyTime(SecTrustRef trust);

CFIndex SecTrustGetCertificateCount(SecTrustRef trust);

CFDataRef SecTrustCopyExceptions(SecTrustRef trust);

CFArrayRef SecTrustCopyProperties(SecTrustRef trust);

CFDictionaryRef SecTrustCopyResult(SecTrustRef trust);

OSStatus SecTrustEvaluate(SecTrustRef trust, SecTrustResultType *result);
OSStatus SecTrustEvaluateAsync(SecTrustRef trust, dispatch_queue_t queue, SecTrustCallback result);
OSStatus SecTrustEvaluateWithError(SecTrustRef trust, CFErrorRef *error);
OSStatus SecTrustCreateWithCertificates(CFTypeRef certificates, CFTypeRef policies, SecTrustRef *trust);
OSStatus SecTrustSetPolicies(SecTrustRef trust, CFTypeRef policies);
OSStatus SecTrustCopyPolicies(SecTrustRef trust, CFArrayRef *policies);
OSStatus SecTrustSetNetworkFetchAllowed(SecTrustRef trust, Boolean allowFetch);
OSStatus SecTrustGetNetworkFetchAllowed(SecTrustRef trust, Boolean *allowFetch);
OSStatus SecTrustSetAnchorCertificates(SecTrustRef trust, CFArrayRef anchorCertificates);
OSStatus SecTrustSetAnchorCertificatesOnly(SecTrustRef trust, Boolean anchorCertificatesOnly);
OSStatus SecTrustCopyCustomAnchorCertificates(SecTrustRef trust, CFArrayRef *anchors);
OSStatus SecTrustSetVerifyDate(SecTrustRef trust, CFDateRef verifyDate);
OSStatus SecTrustGetTrustResult(SecTrustRef trust, SecTrustResultType *result);
OSStatus SecTrustSetOCSPResponse(SecTrustRef trust, CFTypeRef responseData);
OSStatus SecTrustSetSignedCertificateTimestamps(SecTrustRef trust, CFArrayRef sctArray);
OSStatus SecTrustSetOptions(SecTrustRef trustRef, SecTrustOptionFlags options);
OSStatus SecTrustSetParameters(SecTrustRef trustRef, CSSM_TP_ACTION action, CFDataRef actionData);
OSStatus SecTrustSetKeychains(SecTrustRef trust, CFTypeRef keychainOrArray);
OSStatus SecTrustGetResult(SecTrustRef trustRef, SecTrustResultType *result, CFArrayRef *certChain, CSSM_TP_APPLE_EVIDENCE_INFO **statusChain);
OSStatus SecTrustGetCssmResult(SecTrustRef trust, CSSM_TP_VERIFY_CONTEXT_RESULT_PTR *result);
OSStatus SecTrustGetCssmResultCode(SecTrustRef trust, OSStatus *resultCode);
OSStatus SecTrustGetTPHandle(SecTrustRef trust, CSSM_TP_HANDLE *handle);
OSStatus SecTrustCopyAnchorCertificates(CFArrayRef *anchors);

SecKeyRef SecTrustCopyPublicKey(SecTrustRef trust);

SecCertificateRef SecTrustGetCertificateAtIndex(SecTrustRef trust, CFIndex ix);