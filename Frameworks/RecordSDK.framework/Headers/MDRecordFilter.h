//
//  MDFilter.h
//  MomoChat
//
//  Created by jichuan on 2017/6/16.
//  Copyright © 2017年 wemomo.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MDRecordFilter : NSObject  <NSCopying>

@property (readonly) NSURL *contentsOfURL;
@property (readonly) NSString *identifier;
@property (readonly) NSString *name;
@property (readonly) NSString *iconPath;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithContentsOfURL:(NSURL *)url name:(NSString *)name iconPath:(NSString *)iconPath identifier:(NSString *)identifier NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithContentsOfURL:(NSURL *)url;

// 创建原图Filter
+ (MDRecordFilter *)createOriginalEffectFilter;

// Processes the specified image using the receiver synchronously
- (UIImage *)imageByProcessImage:(UIImage *)image;

- (void)setLutIntensity:(CGFloat)intensity;
- (CGFloat)getLutIntensity;

@end

NS_ASSUME_NONNULL_END
