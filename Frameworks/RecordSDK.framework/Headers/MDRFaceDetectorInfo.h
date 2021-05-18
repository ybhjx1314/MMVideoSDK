//
//  MDRFaceDetectorInfo.h
//  BroadcastChannel
//
//  Created by 符吉胜 on 2019/10/25.
//

#import <Foundation/Foundation.h>

@class MMBodyFeature;
@class MMHandFeature;
@class FDKDecorationFilterUpdateRequest;
@class MMFaceFeature;
@class MMImageSegmentationResult;
@class MMFaceSegmentationResult;
@class MMFacialExpression;

@protocol FDKObjectFeature;
@protocol FDKFaceWarpResult;

NS_ASSUME_NONNULL_BEGIN

@interface MDRFaceDetectorInfo : NSObject

- (instancetype)initWithPixelBufferSize:(CGSize)size;

// 正在使用的人脸
@property (nonatomic, strong) MMFaceFeature *currentFaceFeature;
// 所有检测到的人脸
@property (nonatomic, copy) NSArray<MMFaceFeature *> *faceFeatures;
// 表情信息
@property (nonatomic, copy) NSArray<MMFacialExpression *> *expressions;
// animoji
@property (nonatomic, strong) MMFaceFeature *facerigFeature;
// 手势信息
@property (nonatomic, strong) MMHandFeature *handFeature;
// 肢体动作信息
@property (nonatomic, copy) NSArray<id<FDKObjectFeature>> *objectFeatures;
// 图像分割
@property (nonatomic, strong) MMImageSegmentationResult *imageSegmentationResult;
// 躯体信息
@property (nonatomic, copy) NSArray<MMBodyFeature *> *bodyFeatures;

// 人脸图像分割
@property (nonatomic, strong) MMFaceSegmentationResult *faceSegmentationResult;
// 分割图像包围盒
@property (nonatomic, readonly) CGRect faceSegmentationBoundingRect;

// 光膀子信息
@property (nonatomic, assign, getter=isBareness) BOOL bareness;

// 颜值
@property (nonatomic, assign) float attractiveness;

// 图像大小
@property (nonatomic, readonly) CGSize pixelBufferSize;

@end

@interface MDRFaceDetectorInfo (Debug)

- (void)debugDrawPointsInBGRAPixelBuffer:(CVPixelBufferRef)pixelBuffer boundingRect:(CGRect)boundingRect;

@end

NS_ASSUME_NONNULL_END
