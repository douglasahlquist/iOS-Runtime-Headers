/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class UIImageView, UILabel;

@interface RemoteUIIconHeader : UIView <RemoteUITableHeader> {
    int _alignment;
    UILabel *_header;
    UIImageView *_iconView;
    BOOL _isFirstSection;
    UILabel *_subHeader;
}

- (void)dealloc;
- (float)headerHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)setIconImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSectionIsFirst:(BOOL)arg1;

@end