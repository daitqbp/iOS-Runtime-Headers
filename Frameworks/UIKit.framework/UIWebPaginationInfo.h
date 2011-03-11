/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebDocumentView, NSArray;

@interface UIWebPaginationInfo : NSObject  {
    float _scaleFactor;
    struct CGSize { 
        float width; 
        float height; 
    } _layoutSize;
    NSArray *_pageRects;
    UIWebDocumentView *_webDocumentView;
}

@property(readonly) unsigned int pageCount;
@property(readonly) float lastPageHeight;
@property(retain) UIWebDocumentView * webDocumentView;


- (unsigned int)pageCount;
- (float)lastPageHeight;
- (struct CGSize { float x1; float x2; })sizeForPageAtIndex:(int)arg1;
- (id)webDocumentView;
- (id)initWithScaleFactor:(float)arg1 layoutSize:(struct CGSize { float x1; float x2; })arg2 pageRects:(id)arg3;
- (void)setWebDocumentView:(id)arg1;
- (id)pageRects;
- (float)scaleFactor;
- (struct CGSize { float x1; float x2; })layoutSize;
- (void)dealloc;

@end