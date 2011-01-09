/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIButton;



@interface SUBannerCell : SUTableCell <SUCellConfigurationView>
{
    UIButton *_leftButton;
    UIButton *_rightButton;
}


- (id)initWithStyle:(NSInteger)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)reloadView;
- (void)layoutSubviews;
- (void)setConfiguration:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_buttonAction:(id)arg1;
- (id)_createButton;
- (void)_reloadButtons;

@end