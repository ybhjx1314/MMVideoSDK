//
//  MDRPhotoRender.h
//  MMVideoSDK
//
//  Created by sunfei on 2021/2/22.
//

#import <Foundation/Foundation.h>
#import <FaceDecorationKit/FaceDecorationKit.h>
#import "MDProcessImageProtocol.h"
#import "MDRecordFilter.h"
NS_ASSUME_NONNULL_BEGIN

@protocol MDRPhotoRender <MDProcessImageProtocol, FDKDecorationFilterUpdating>

- (void)setSlidingFilterA:(MDRecordFilter *)slidingFilter;
- (void)setSlidingFilterB:(MDRecordFilter *)slidingFilter;
- (void)setSlidingOffset:(float)sidingOffset;

- (void)updateDecoration:(FDKDecoration * _Nullable)decoration;         // 更新道具
- (void)adjustVolumeOfCurrentDecoration:(CGFloat)volume;      // 调整贴纸音量
- (void)adjustBeautySetting:(FDKBeautySettings * _Nullable)beautySetting;  // 仅更新美颜效果

- (void)setOutputImageSize:(CGSize)size;
- (void)setCropRegion:(CGRect)cropRegion;

@property (nonatomic, readonly) FDKDecoration *decoration;

@property (nonatomic, assign) BOOL enableNewBeauty;

@end

NS_ASSUME_NONNULL_END
