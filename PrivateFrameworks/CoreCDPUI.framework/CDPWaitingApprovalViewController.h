/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPWaitingApprovalViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate> {
    UIButton * _escapeButton;
    CDPRemoteValidationEscapeOffer * _escapeOffer;
    UIActivityIndicatorView * _spinner;
    UILabel * _waitingLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)escapeOfferSelectedWithOption:(id)arg1;
- (id)initWithEscapeOffer:(id)arg1;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)remoteApprovalSucceeded;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end