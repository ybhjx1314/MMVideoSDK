//
//  MDRPixelBufferCache.h
//  MMVideoSDK
//
//  Created by sunfei on 2020/2/28.
//

#import <Foundation/Foundation.h>
#import "MDRFaceDetectorInfo.h"
#import <CoreMedia/CoreMedia.h>

NS_ASSUME_NONNULL_BEGIN

@interface MDRImage : NSObject

- (instancetype)initWithPixelBuffer:(CVPixelBufferRef)pixelBuffer
                         timingInfo:(CMSampleTimingInfo)timingInfo
                       detectorInfo:(MDRFaceDetectorInfo *)detectorInfo
                           metaInfo:(NSDictionary *)metaInfo;

@property (nonatomic, readonly) CMSampleTimingInfo timingInfo;
@property (nonatomic, readonly) CVPixelBufferRef pixelBuffer;
@property (nonatomic, readonly) NSDictionary *metaInfo;
@property (nonatomic, readonly) MDRFaceDetectorInfo *detectorInfo;

@property (nonatomic, readonly) BOOL isConsumed;

- (void)markAsConsumed;

@end

@interface MDRImageCache : NSObject

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithMaxCount:(NSInteger)count;

- (void)enQueue:(MDRImage *)image;
- (MDRImage * _Nullable)deQueue;

- (void)purgeAllImages;

@end

NS_ASSUME_NONNULL_END
