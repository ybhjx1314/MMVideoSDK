//
//  MDFaceSegmentContext.h
//  MMVideoSDK
//
//  Created by zhangzhe on 2019/12/18.
//

#import <Foundation/Foundation.h>
#import "MDImageDetectorProtocol.h"
@class MMFaceSegmentationResult;
NS_ASSUME_NONNULL_BEGIN

@interface MDFaceSegmentContext : NSObject <MDImageDetectorProtocol>

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype _Nullable)makeDetector;
+ (void)asyncAutoMakeDetector:(void(^)(MDFaceSegmentContext * _Nullable))completed;

@property (nonatomic, readonly) MMFaceSegmentationResult *result;

@end

NS_ASSUME_NONNULL_END
