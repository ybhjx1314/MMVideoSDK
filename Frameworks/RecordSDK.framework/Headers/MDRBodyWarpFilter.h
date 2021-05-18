//
//  MDRBodyWarpFilter.h
//  MMVideoSDK
//
//  Created by sunfei on 2021/2/20.
//

#import <Foundation/Foundation.h>
#import <MetalPetal/MetalPetal.h>
#import <FaceDecorationKit/FaceDecorationKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MDRBodyWarpFilter : NSObject <MTIUnaryFilter, FDKDecorationFilterUpdating>

@property (nonatomic, assign) CGFloat bodyWidth;
@property (nonatomic, assign) CGFloat legLength;
// 这个含义是瘦身的时候是分上半身和下半身的，但是给用户的调整参数只有一个瘦身系数，这个参数是上半身和下半身瘦的系数的比值, 默认0.8
@property (nonatomic, assign) CGFloat upBodyScaleFactor;
@property (nonatomic, assign) BOOL gradualSwitch; // 瘦身渐变开关

@end

NS_ASSUME_NONNULL_END
