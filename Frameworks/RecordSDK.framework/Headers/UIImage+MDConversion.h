//
//  UIImage+MDConversion.h
//  MDRecordSDK
//
//  Created by sunfei on 2018/11/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (MDConversion)

- (CVPixelBufferRef)pixelBuffer;

+ (UIImage *)imageFromPixelBuffer:(CVPixelBufferRef)pixelBuffer context:(CIContext * _Nullable)context;

@end

NS_ASSUME_NONNULL_END
