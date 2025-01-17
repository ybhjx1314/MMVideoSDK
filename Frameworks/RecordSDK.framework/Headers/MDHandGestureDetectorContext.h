//
//  MDHandGestureDetectorContext.h
//  CXBeautyKit
//
//  Created by sunfei on 2018/11/27.
//

#import <Foundation/Foundation.h>
#import "MDImageDetectorProtocol.h"
#import <MomoCV/MomoCV.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMHandGestureOptions (MDOptions) <MDImageDetectorOptions>

@end

@interface MDHandGestureDetectorContext : NSObject <MDImageDetectorProtocol>

+ (instancetype _Nullable)makeDetector;
+ (void)asyncAutoMakeDetector:(void(^)(MDHandGestureDetectorContext * _Nullable))completed;

@property (nonatomic, readonly) MMHandFeature *result;

@end

NS_ASSUME_NONNULL_END
