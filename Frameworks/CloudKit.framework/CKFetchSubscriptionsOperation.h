/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary;

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fetchSubscriptionCompletionBlock;

    BOOL _isFetchAllSubscriptionsOperation;
    NSMutableDictionary *_subscriptionErrors;
    NSArray *_subscriptionIDs;
    NSArray *_subscriptions;
    NSMutableDictionary *_subscriptionsBySubscriptionID;
}

@property(copy) id fetchSubscriptionCompletionBlock;
@property BOOL isFetchAllSubscriptionsOperation;
@property(retain) NSMutableDictionary * subscriptionErrors;
@property(copy) NSArray * subscriptionIDs;
@property(retain) NSArray * subscriptions;
@property(retain) NSMutableDictionary * subscriptionsBySubscriptionID;

+ (id)fetchAllSubscriptionsOperation;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)fetchSubscriptionCompletionBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (id)initWithSubscriptionIDs:(id)arg1;
- (BOOL)isFetchAllSubscriptionsOperation;
- (void)performCKOperation;
- (void)setFetchSubscriptionCompletionBlock:(id)arg1;
- (void)setIsFetchAllSubscriptionsOperation:(BOOL)arg1;
- (void)setSubscriptionErrors:(id)arg1;
- (void)setSubscriptionIDs:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (void)setSubscriptionsBySubscriptionID:(id)arg1;
- (id)subscriptionErrors;
- (id)subscriptionIDs;
- (id)subscriptions;
- (id)subscriptionsBySubscriptionID;

@end