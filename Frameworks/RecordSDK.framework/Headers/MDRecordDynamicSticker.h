//
//  MDDynamicSticker.h
//  MomoChat
//
//  Created by jichuan on 2017/6/15.
//  Copyright © 2017年 wemomo.com. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <CoreMedia/CoreMedia.h>
#import "MDRStickerProtocol.h"

@protocol FDKObjectFeature;

NS_ASSUME_NONNULL_BEGIN

//帖子基类
@interface MDRecordBaseSticker : NSObject

@property (nonatomic, strong) NSString      *stickerId;
@property (nonatomic, strong) NSString      *resourcePath;

@end

//静态帖子
@interface MDRecordSticker : MDRecordBaseSticker

@property (nonatomic, strong) NSString      *imageUrl;
@property (nonatomic,copy,readonly) UIImage *image;

- (instancetype)initWithImage:(UIImage *)image;
- (instancetype)initWithImageURL:(NSString *)imageUrl;

@end

//动态帖子
@interface MDRecordDynamicSticker : MDRecordBaseSticker <MDRStickerProtocol, NSCopying>

@property (nonatomic, assign) CGRect bounds;
@property (nonatomic, assign) CGFloat roll;
@property (nonatomic, readonly) NSString *type;

- (instancetype)initWithDecorationURL:(NSURL *)url inputFrameSize:(CGSize)inputFrameSize;

@end

NS_ASSUME_NONNULL_END
