/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSData, NSDictionary, NSInputStream, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface SSURLRequestProperties : NSObject <NSCoding, NSCopying, NSMutableCopying, SSXPCCoding> {
    int _allowedRetryCount;
    BOOL _allowsBootstrapCellularData;
    unsigned int _cachePolicy;
    NSString *_clientAuditBundleIdentifier;
    NSData *_clientAuditTokenData;
    NSString *_clientIdentifier;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _expectedContentLength;
    NSData *_httpBody;
    NSInputStream *_httpBodyStream;
    NSDictionary *_httpHeaders;
    NSString *_httpMethod;
    BOOL _isITunesStoreRequest;
    int _kbsyncType;
    BOOL _largeDownload;
    unsigned int _networkServiceType;
    NSDictionary *_requestParameters;
    BOOL _requiresExtendedValidationCertificates;
    BOOL _requiresHTTPS;
    BOOL _shouldDecodeResponse;
    BOOL _shouldDisableCellular;
    BOOL _shouldDisableCellularFallback;
    BOOL _shouldProcessProtocol;
    BOOL _shouldSendSecureToken;
    BOOL _shouldSetCookies;
    double _timeoutInterval;
    NSString *_urlBagKey;
    int _urlBagType;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _urlBagURLBlock;

    NSArray *_urls;
    NSArray *_userAgentComponents;
}

@property(copy,readonly) NSData * HTTPBody;
@property(retain,readonly) NSInputStream * HTTPBodyStream;
@property(copy,readonly) NSDictionary * HTTPHeaders;
@property(copy,readonly) NSString * HTTPMethod;
@property(getter=isITunesStoreRequest,readonly) BOOL ITunesStoreRequest;
@property(readonly) int KBSyncType;
@property(retain,readonly) NSURL * URL;
@property(copy,readonly) NSString * URLBagKey;
@property(readonly) int URLBagType;
@property(copy,readonly) id URLBagURLBlock;
@property(copy,readonly) NSArray * URLs;
@property(readonly) int allowedRetryCount;
@property(readonly) BOOL allowsBootstrapCellularData;
@property(readonly) unsigned int cachePolicy;
@property(readonly) BOOL canBeResolved;
@property(copy,readonly) NSString * clientAuditBundleIdentifier;
@property(copy,readonly) NSData * clientAuditTokenData;
@property(copy,readonly) NSString * clientIdentifier;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) long long expectedContentLength;
@property(readonly) unsigned int hash;
@property(getter=isLargeDownload,readonly) BOOL largeDownload;
@property(readonly) unsigned int networkServiceType;
@property(copy,readonly) NSDictionary * requestParameters;
@property(readonly) BOOL requiresExtendedValidationCertificates;
@property(readonly) BOOL requiresHTTPS;
@property(readonly) BOOL shouldAddKBSyncData;
@property(readonly) BOOL shouldDecodeResponse;
@property(readonly) BOOL shouldDisableCellular;
@property(readonly) BOOL shouldDisableCellularFallback;
@property(readonly) BOOL shouldProcessProtocol;
@property(readonly) BOOL shouldSendSecureToken;
@property(readonly) BOOL shouldSetCookies;
@property(readonly) Class superclass;
@property(readonly) double timeoutInterval;
@property(copy,readonly) NSArray * userAgentComponents;

- (id)HTTPBody;
- (id)HTTPBodyStream;
- (id)HTTPHeaders;
- (id)HTTPMethod;
- (int)KBSyncType;
- (id)URL;
- (id)URLBagKey;
- (int)URLBagType;
- (id)URLBagURLBlock;
- (id)URLs;
- (id)_initCommon;
- (int)allowedRetryCount;
- (BOOL)allowsBootstrapCellularData;
- (unsigned int)cachePolicy;
- (BOOL)canBeResolved;
- (id)clientAuditBundleIdentifier;
- (id)clientAuditTokenData;
- (id)clientIdentifier;
- (id)copyURLRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedContentLength;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isITunesStoreRequest;
- (BOOL)isLargeDownload;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)networkServiceType;
- (id)requestParameters;
- (BOOL)requiresExtendedValidationCertificates;
- (BOOL)requiresHTTPS;
- (BOOL)shouldAddKBSyncData;
- (BOOL)shouldDecodeResponse;
- (BOOL)shouldDisableCellular;
- (BOOL)shouldDisableCellularFallback;
- (BOOL)shouldProcessProtocol;
- (BOOL)shouldSendSecureToken;
- (BOOL)shouldSetCookies;
- (double)timeoutInterval;
- (id)userAgentComponents;

@end