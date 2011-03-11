/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage;

@interface GKImageContext : NSObject  {
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    float _scale;
    struct CGContext { } *_CGContext;
}

@property(readonly) UIImage * image;
@property(readonly) struct CGContext { }* CGContext;
@property(readonly) float scale;
@property struct CGSize { float width; float height; } size;


- (struct CGContext { }*)CGContext;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 opaque:(BOOL)arg3;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (id)image;
- (struct CGSize { float x1; float x2; })size;
- (void)dealloc;
- (float)scale;

@end