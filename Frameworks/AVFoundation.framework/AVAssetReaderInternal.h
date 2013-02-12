/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAsset, NSError, NSMutableArray;

@interface AVAssetReaderInternal : NSObject {
    struct { 
        struct { 
            long long value; 
            NSInteger timescale; 
            NSUInteger flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            NSInteger timescale; 
            NSUInteger flags; 
            long long epoch; 
        } duration; 
    AVAsset *asset;
    NSError *error;
    struct OpaqueFigAssetReader { } *figAssetReader;
    NSMutableArray *outputs;
    NSInteger status;
    } timeRange;
}

@end