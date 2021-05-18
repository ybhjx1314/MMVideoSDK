//
//  MDRMangaFacialMaskFilter.h
//  MMVideoSDK
//
//  Created by sunfei on 2021/2/19.
//

#import <Foundation/Foundation.h>
#import <MetalPetal/MetalPetal.h>
#import <FaceDecorationKit/FaceDecorationKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MDRMangaFacialMaskFilter : NSObject <MTIUnaryFilter, FDKDecorationFilterUpdating>

- (instancetype)initWithFacialMasks:(NSArray<FDKFacialMask *> *)masks;

@end

NS_ASSUME_NONNULL_END
