/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class AVController, NSString, NSRecursiveLock, NSMutableArray;



@interface PLVideoThumbnailGenerator : NSObject 
{
    AVController *_avController;
    NSString *_filePath;
    double _duration;
    struct CGSize { 
        float width; 
        float height; 
    } _naturalSize;
    NSMutableArray *_outstandingIdentifiers;
    NSMutableArray *_gatheredIdentifiers;
    NSMutableArray *_gatheredImages;
    NSMutableArray *_gatheredTimes;
    NSRecursiveLock *_lock;
    struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; NSString *x6; } *_progressStack;
}

@property ? *progressStack;
@property(readonly) CGSize naturalSize;
@property(readonly) double duration;
@property(readonly) AVController *avController;
@property(retain) NSString *filePath;


- (id)filePath;
- (struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)progressStack;
- (void)_thumbnailImageGenerationFailed:(id)arg1;
- (void)_requestAsyncCGImagesAtTimesParams:(id)arg1;
- (void)_mainThreadSetup;
- (void)_mainThreadTeardown;
- (struct CGImage { }*)getCGImageAtTime:(double)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)requestAsyncCGImagesAtTimes:(id)arg1 requestIDs:(id)arg2 withImageOptions:(id)arg3 outTimes:(id*)arg4 outImages:(id*)arg5 outRequestIDs:(id*)arg6;
- (void)setFilePath:(id)arg1;
- (void)setProgressStack:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)avController;
- (void)_thumbnailImageWasGenerated:(id)arg1;
- (double)duration;
- (void)dealloc;
- (void)setup;
- (void)teardown;

@end