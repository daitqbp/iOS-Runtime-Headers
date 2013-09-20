/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface RCSavedRecordingAssetRemaker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_remadeURIRepresentations;
    NSOperationQueue *_remakeQueue;
    NSMutableDictionary *_remakerCompletionBlocksByRecordingURIRepresentation;
}

+ (id)intermediateRecordingURLForRecording:(id)arg1;
+ (id)sharedRemaker;

- (void).cxx_destruct;
- (void)_awakeFromFetchRecording:(id)arg1;
- (void)_invokeRemakingBlocksForRecordingURIRepresentation:(id)arg1 remadePathExists:(BOOL)arg2;
- (BOOL)_onQueue_hasRemadeRecording:(id)arg1;
- (BOOL)_onQueue_shouldRemakeRecording:(id)arg1;
- (id)_pathForRemakingRecording:(id)arg1;
- (void)_remakeQueueBlock_remakeRecordingWithRecordingsModelQueue:(id)arg1 recordingURIRepresentation:(id)arg2;
- (void)_remakeRecording:(id)arg1 withURIRepresentation:(id)arg2 recordingsModelQueue:(id)arg3 finishedPreparingBlock:(id)arg4;
- (id)init;
- (void)prepareRecordingWithURIRepresentation:(id)arg1 recordingsModelQueue:(id)arg2 finishedPreparingBlock:(id)arg3;

@end