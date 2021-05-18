//
//  MDRBlueFilter.h
//  MMVideoSDK
//
//  Created by sunfei on 2021/4/2.
//

#import <MetalPetal/MetalPetal.h>

NS_ASSUME_NONNULL_BEGIN

@interface MDRBGBlurFilter : NSObject <MTIUnaryFilter>

@property (nonatomic, assign) CGSize outputSize;

@end

NS_ASSUME_NONNULL_END
