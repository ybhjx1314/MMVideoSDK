//
//  MDImageEditorContext.h
//  MDRecordSDK
//
//  Created by sunfei on 2018/10/30.
//

#import <UIKit/UIKit.h>
#import "MDMediaEditorContext.h"

NS_ASSUME_NONNULL_BEGIN

@interface MDImageEditorContext : MDMediaEditorContext

- (void)setImage:(UIImage *)image;

@property (nonatomic, copy) void(^completionHandler)(CVPixelBufferRef _Nullable, NSError * _Nullable);

@property (nonatomic, readonly) CIContext *ciContext;

@property (nonatomic, strong) id<MDProcessImageProtocol> filter;

@property (nonatomic, readonly) UIImage *image;

@end

NS_ASSUME_NONNULL_END
