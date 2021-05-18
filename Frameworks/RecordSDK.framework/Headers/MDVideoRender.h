//
//  MDVideoRender.h
//  MMVideoSDK
//
//  Created by sunfei on 2021/2/22.
//

#import <UIKit/UIKit.h>
#import "MDProcessImageProtocol.h"
#import "MDRecordFilter.h"
#import <FaceDecorationKit/FaceDecorationKit.h>
#import "MDRStickerProtocol.h"
#import "MDREffectFilterGroup.h"

NS_ASSUME_NONNULL_BEGIN

@protocol MDVideoRender <NSObject, MDProcessImageProtocol, FDKDecorationFilterUpdating>

// 涂鸦
@property (nonatomic, readonly) UIImage * _Nullable graffitiCanvasImage;
@property (nonatomic, readonly) UIImage * _Nullable mosaicCanvasImage;
- (void)setGraffitiCanvasImage:(UIImage * _Nullable)graffitiCanvasImage mosaicCanvasImage:(UIImage * _Nullable)mosaicCanvasImage;

// overlay image
- (void)setOverlayImage:(UIImage * _Nullable)image;

// 特效滤镜
@property (nonatomic, strong, readonly) id<MDREffectFilterGroup> specialFilterGroup;

// 静态贴纸，瘦身
- (void)updateDecoration:(FDKDecoration * _Nullable)decoration;         // 更新道具
- (void)adjustVolumeOfCurrentDecoration:(CGFloat)volume;      // 调整贴纸音量
- (void)adjustBeautySetting:(FDKBeautySettings * _Nullable)beautySetting;  // 仅更新美颜效果

@property (nonatomic, readonly) FDKDecoration * _Nullable decoration;

// 动态贴纸
- (void)addDynamicSticker:(id<MDRStickerProtocol>)dynamicSticker;
- (void)removeDynamicSticker:(id<MDRStickerProtocol>)dynamicSticker;

// 普通滤镜
- (void)setSlidingFilterA:(MDRecordFilter *)slidingFilter;
- (void)setSlidingFilterB:(MDRecordFilter *)slidingFilter;
- (void)setSlidingOffset:(float)sidingOffset;

// AI 美颜
@property (nonatomic, assign) BOOL canUseAIBeautySetting;

// 启用背景模糊
- (void)setOutputImageSize:(CGSize)size;

// 裁剪视频
- (void)setCropRegion:(CGRect)cropRegion;

@end

NS_ASSUME_NONNULL_END
