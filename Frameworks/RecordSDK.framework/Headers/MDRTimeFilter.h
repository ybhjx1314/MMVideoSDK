//
//  MDRTimeFilter.h
//  MMVideoSDK
//
//  Created by sunfei on 2021/2/24.
//

#import <Foundation/Foundation.h>
#import <MetalPetal/MetalPetal.h>
#import <CoreMedia/CoreMedia.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MDRTimeFilter <NSObject, MTIUnaryFilter>

@property (nonatomic, assign) float time;

@end

NS_ASSUME_NONNULL_END
