//
//  MDFaceAttractivenessAnalyzer.h
//  MMVideoSDK
//
//  Created by sunfei on 2020/4/7.
//

#import <Foundation/Foundation.h>
#import "MDImageDetectorProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface MDFaceAttractivenessAnalyzer : NSObject <MDImageDetectorProtocol>

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype _Nullable)makeDetector;
+ (void)asyncAutoMakeDetector:(void(^)(MDFaceAttractivenessAnalyzer * _Nullable))completed;

@property (nonatomic, readonly) NSNumber *result;

@end

NS_ASSUME_NONNULL_END
