//
//  MDRDiscoGameJPGImageWriting.h
//  MMVideoSDK
//
//  Created by sunfei on 2020/1/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MDRDiscoGameJPGImageWriting <NSObject>

// 开始保存jpg图片
- (void)startWriting;

// 停止保存jpg图片
- (void)pauseWriting;

// 返回存储地址
- (NSString *)rootPath;

// 设置导出人脸图片质量与宽度
- (void)setFaceMaskQuality:(NSInteger)quality width:(CGFloat)width;

@end

NS_ASSUME_NONNULL_END
