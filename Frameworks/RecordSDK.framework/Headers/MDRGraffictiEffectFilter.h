//
//  MDRGraffictiEffectFilter.h
//  MMVideoSDK
//
//  Created by sunfei on 2021/2/23.
//

#import <Foundation/Foundation.h>
#import <MetalPetal/MetalPetal.h>

NS_ASSUME_NONNULL_BEGIN

@interface MDRGraffictiEffectFilter : NSObject <MTIFilter>

@property (nonatomic, strong) MTIImage *inputImage;
@property (nonatomic, strong) MTIImage *graffitiImage;
@property (nonatomic, strong) MTIImage *mosaicImage;

@end

NS_ASSUME_NONNULL_END
