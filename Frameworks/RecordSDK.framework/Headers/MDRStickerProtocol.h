//
//  MDRStickerProtocol.h
//  MMVideoSDK
//
//  Created by sunfei on 2019/10/29.
//

#import <Foundation/Foundation.h>
#import <FaceDecorationKitMetalPetal/FaceDecorationKitMetalPetal.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MDRStickerProtocol <NSObject>

- (instancetype)initWithDecorationURL:(NSURL *)url inputFrameSize:(CGSize)inputFrameSize;

@property (nonatomic, assign) CMTimeRange duration;

- (FDKMDecorationFilter *)makeMetalFilter;
- (void)update;

- (CGSize)stickerSize;

- (CGPoint)center;
- (CGFloat)roll;
- (NSString *)type;
- (CGRect)bounds;

@end

NS_ASSUME_NONNULL_END
