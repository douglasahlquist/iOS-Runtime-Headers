/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class ACAccount, NSString;

@interface AAUpdateProvisioningRequest : AARequest {
    ACAccount *_account;
    NSString *_authToken;
}

@property(retain) ACAccount * account;
@property(copy) NSString * authToken;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)account;
- (id)authToken;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 token:(id)arg2;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (void)setAccount:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (id)urlCredential;
- (id)urlRequest;
- (id)urlString;

@end