//
//  MDCameraVideoCompositeExport.h
//  RecordSDK
//
//  Created by sunfei on 2018/12/19.
//  Copyright © 2018 sunfei. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>
#import "MDVideoExportProtocol.h"
#import "MDCancellable.h"

NS_ASSUME_NONNULL_BEGIN

@interface MDVideoCompositeExport : NSObject <MDVideoExportProtocol,MDCancellable>

- (instancetype)init;
- (instancetype)initWithAssets:(NSArray<AVAsset *> * _Nullable)assets NS_DESIGNATED_INITIALIZER;

@property (nonatomic, copy) NSArray<AVAsset *> *assets;

@property (nonatomic, assign) int orientation;

@end

@interface MDVideoCompositeExport (Expend)

- (id<MDCancellable> _Nullable)exportToURL:(NSURL *)url
                               composition:(AVComposition *)composition
                                  audioMix:(AVAudioMix *)audioMix
                           progressHandler:(void(^ _Nullable)(double progress))progressHandler
                                completion:(void(^ _Nullable)(NSURL *url))completion
                                   failure:(void(^ _Nullable)(NSError * _Nullable error))failure;

@end

NS_ASSUME_NONNULL_END
