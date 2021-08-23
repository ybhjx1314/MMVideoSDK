//
//  MDRRenderModuleProtocol.h
//  MMVideoSDK
//
//  Created by 符吉胜 on 2019/10/25.
//

#import <Foundation/Foundation.h>
#import "MDRCommonDefine.h"
#import <AVFoundation/AVFoundation.h>
#import "XEngineRender.h"
#import "MDRRenderBeautyKey.h"
NS_ASSUME_NONNULL_BEGIN

@class MDRFaceDetectorInfo;
@class FDKDecoration;

@protocol MDRBeautyParams <NSObject>

// 美颜信息 (0 - 1)
@property (nonatomic) float bigEyeFactor;  // 大眼
@property (nonatomic) float thinFaceFactor;  // 瘦脸
@property (nonatomic) float skinSmoothingFactor; // 磨皮
@property (nonatomic) float skinWhitenFactor; // 美白
@property (nonatomic) float skinRuddyFactor; // 红润

//瘦身美腿相关 (0 - 1)
@property (nonatomic) float bodyWidthFactor;  // 瘦身
@property (nonatomic) float legsLenghtFactor; // 长腿

@end

@protocol MDRRenderModuleProtocol <NSObject>

/// 渲染处理输入的pixelBuffer
/// @param inputPixelBuffer 原始pixelBuffer
/// @param frameTime 帧时间
/// @param faceDetectorInfo 人脸特征信息，辅助渲染
/// @param finishCallback 渲染完成回调
- (void)renderInputPixelBuffer:(CVPixelBufferRef)inputPixelBuffer
                        atTime:(CMTime)frameTime
              faceDetectorInfo:(MDRFaceDetectorInfo * _Nullable)faceDetectorInfo
          renderFinishCallback:(void(^ _Nonnull)(CVPixelBufferRef _Nullable outputPixelBuffer, NSError * _Nullable error))callback;

@end

@protocol MDRRenderModuleInput <NSObject>

@property (atomic, assign) BOOL enable3D;
@property (nonatomic, assign) BOOL enableAIBeauty;

@end

@protocol MDRRenderModuleTouchEvent <NSObject>

- (BOOL)hitTestTouch:(CGPoint)point withView:(UIView *)view;

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event;

- (void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event;

- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event;

- (void)touchesCancelled:(NSSet *)touches withEvent:(UIEvent *)event;

@end

@protocol MDRRenderMakeUpModule <NSObject>

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

/// 美妆效果是否生效
- (BOOL)isMakeupEffectActive;

@end

NS_ASSUME_NONNULL_END
