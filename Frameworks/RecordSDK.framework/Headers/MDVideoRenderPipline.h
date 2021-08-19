//
//  MDVideoRenderPipline.h
//  MomoChat
//
//  Created by sunfei on 2018/12/28.
//  Copyright © 2018 wemomo.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MDProcessImageProtocol.h"
#import "MDVideoDetectorPipline.h"
#import "MDVideoRender.h"
#import "MDRRenderModuleProtocol.h"

#import "MDRRenderBeautyKey.h"

#import <LightningRender/XEngineRender.h>

@class FDKDecoration, FDKBeautySettings;

NS_ASSUME_NONNULL_BEGIN

@interface MDVideoRenderPipline : NSObject <MDProcessImageProtocol>

@property (nonatomic, readonly) id<MDVideoRender,MDRRenderMakeUpModule> renderFilter;
@property (nonatomic, readonly) MDVideoDetectorPipline *detector;

@property (nonatomic, assign) CGSize outputImageSize;
@property (nonatomic, assign) CGRect cropRegion;

@property (nonatomic, assign) BOOL canUseAIBeautySetting;

- (void)updateDecoration:(FDKDecoration * _Nullable)decoration;
- (void)updateBeautySetting:(FDKBeautySettings *)beautySetting;

// 美妆、风格妆
/// 添加美妆子项或整装风格妆
/// @params makeupEffect 美妆资源路径
- (void)addMakeupEffect:(NSString *)makeupEffect;

/// 设置美妆强度
/// @params intensity 强度 [0-1]
/// @params makeupType 美妆子项类型
- (void)setMakeupEffectIntensity:(CGFloat)intensity makeupType:(XEngineMakeupKey)makeupType;

/// 按美妆子项移除美妆
/// @params makeupType 美妆子项类型
- (void)removeMakeupEffectWithType:(XEngineMakeupKey)makeupType;

/// 移除所有美妆效果
- (void)removeAllMakeupEffect;

// 设置微整形 参见 MDRRenderBeautyKey
- (void)adjustBeauty:(CGFloat)value forKey:(MDRMicroSurgeryType)key;

- (void)setRenderStatus:(BOOL)status;

@end

NS_ASSUME_NONNULL_END
