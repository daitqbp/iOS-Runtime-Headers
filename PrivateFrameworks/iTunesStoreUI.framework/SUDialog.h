/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIAlertView, <SUDialogDelegate>, ISDialog;



@interface SUDialog : NSObject <UIAlertViewDelegate>
{
    UIAlertView *_alertView;
    <SUDialogDelegate> *_delegate;
    ISDialog *_dialog;
}

@property(readonly) ISDialog *dialog;
@property <SUDialogDelegate> *delegate;


- (id)_alertView;
- (id)initWithDialog:(id)arg1;
- (id)dialog;
- (BOOL)isEquivalent:(id)arg1;
- (void)dealloc;
- (void)show;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end