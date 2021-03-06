/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIEmergencyCallHostViewController : _UIRemoteViewController <SBUIEmergencyCallHostInterface> {
    int _backgroundStyle;
    float _blurRadius;
    _UIBackdropView *_blurView;
    BOOL _blursSelf;
    UIColor *_tintColor;
}

@property (nonatomic) int backgroundStyle;
@property (nonatomic) float blurRadius;
@property (nonatomic) BOOL blursSelf;
@property (nonatomic, retain) UIColor *tintColor;

+ (id)exportedInterface;
+ (void)requestEmergencyCallControllerWithCompletion:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)_createAndAddBlurViewIfNecessary;
- (int)backgroundStyle;
- (float)blurRadius;
- (BOOL)blursSelf;
- (void)dismiss;
- (void)setBackgroundStyle:(int)arg1;
- (void)setBlurRadius:(float)arg1;
- (void)setBlursSelf:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (id)tintColorForBackgroundStyle:(int)arg1 outBlurRadius:(float*)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end
