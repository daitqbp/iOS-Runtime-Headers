/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISelectionGrabber;



@interface UISelectionGrabberDot : UIView 
{
    UISelectionGrabber *m_grabber;
}

@property UISelectionGrabber *grabber;


- (NSInteger)textEffectsVisibilityLevelWhenKey;
- (NSInteger)textEffectsVisibilityLevel;
- (id)grabber;
- (void)setGrabber:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end