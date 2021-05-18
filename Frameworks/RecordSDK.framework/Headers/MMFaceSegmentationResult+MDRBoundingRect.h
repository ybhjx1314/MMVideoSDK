//
//  MMFaceSegmentationResult+MDRBoundingRect.h
//  MMVideoSDK
//
//  Created by sunfei on 2020/1/7.
//

#import <Foundation/Foundation.h>
#import <MomoCV/MomoCV.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMFaceSegmentationResult (MDRBoundingRect)

- (CGRect)boundingRectForFaceFeature:(MMFaceFeature *)faceFeature;

@end

NS_ASSUME_NONNULL_END
