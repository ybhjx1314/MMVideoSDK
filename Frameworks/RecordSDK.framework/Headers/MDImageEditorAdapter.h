//
//  MDImageEditorAdapter.h
//  CXBeautyKit
//
//  Created by sunfei on 2019/2/27.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MDRecordFilter.h"

#import "XEngineRender.h"
#import "MDRRenderBeautyKey.h"

@class FDKDecoration;

NS_ASSUME_NONNULL_BEGIN

@interface MDImageEditorAdapter : NSObject

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithToken:(NSString *)token;

@property (nonatomic, assign) BOOL enableNewBeauty;

@property (nonatomic, assign) BOOL canUseBodyThinSetting;

// 设置以后会启用背景模糊效果
@property (nonatomic, assign) CGSize outputImageSize;

// 设置裁剪区域, 按比例裁剪，0 - 1
@property (nonatomic, assign) CGRect cropRegion;

// 初始化
- (void)loadImage:(UIImage *)image completionHander:(void(^)(CVPixelBufferRef _Nullable, NSError * _Nullable))completion;

- (void)reloadImage:(UIImage *)image;

// 流程
- (void)startProcess;
- (void)stopProcess;

// 滤镜
- (void)configCurrentFilter:(MDRecordFilter *)filter;
- (void)configFilterA:(MDRecordFilter *)filterA configFilterB:(MDRecordFilter *)filterB offset:(float)offset;

// 美颜
- (void)updateDecoration:(FDKDecoration *)decoration;
- (void)setSkinWhitenValue:(float)value;
- (void)setSkinRuddyValue:(float)value;
- (void)setSkinSmoothValue:(float)value;
- (void)setBeautyBigEyeValue:(float)value;
- (void)setBeautyThinFaceValue:(float)value;
- (void)setBeautyThinBodyValue:(float)value;
- (void)setBeautyLenghLegValue:(float)value;
- (void)removeDecoration;

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
- (void)adjustBeauty:(CGFloat)value forKey:(NSString *)key;

- (void)setRenderStatus:(BOOL)status;

@end

NS_ASSUME_NONNULL_END
