//
//  MDRFaceDetectorInfo+FDKUpdateRequest.h
//  MMVideoSDK
//
//  Created by sunfei on 2019/11/1.
//

#import "MDRFaceDetectorInfo.h"
#import <CoreMedia/CoreMedia.h>

NS_ASSUME_NONNULL_BEGIN

@interface MDRFaceDetectorInfo (FDKUpdateRequest)

- (FDKDecorationFilterUpdateRequest *)request;

- (FDKDecorationFilterUpdateRequest *)requestAtFrameTime:(CMTime)frameTime;

@end

NS_ASSUME_NONNULL_END
