/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPdfHyperlinkController : TSAPdfHyperlinkController {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mCanvasRect;
    int mCurrentSlideNumber;
    NSArray *mSlides;
}

@property (nonatomic) int currentSlideNumber;

- (void)addHyperlinksForReps:(id)arg1 targetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })canvasRect;
- (id)currentSlideName;
- (int)currentSlideNumber;
- (void)dealloc;
- (id)destinationFromUrl:(id)arg1;
- (int)getFirstNonHiddenIndex:(unsigned int)arg1 delta:(int)arg2;
- (BOOL)ignoreUrl:(id)arg1;
- (id)initWithShow:(id)arg1;
- (BOOL)isDestination:(id)arg1;
- (id)nameForSlide:(id)arg1;
- (id)nameFromIndex:(unsigned int)arg1;
- (void)setCurrentSlideNumber:(int)arg1;

@end
