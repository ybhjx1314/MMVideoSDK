//
//  FDKDecoration+MDRDetectorRequirements.h
//  MMVideoSDK
//
//  Created by sunfei on 2019/6/26.
//

#import <FaceDecorationKit/FaceDecorationKit.h>
#import "MDRDetectorRequirements.h"

NS_ASSUME_NONNULL_BEGIN

@interface FDKDecoration (MDRDetectorRequirements) <MDRDetectorRequirements>

@end

@interface FDKDecoration (MDREnableEngineBeautySetting)

@property (nonatomic, readonly) BOOL mdr_enableEngineBeautySetting;

@end

NS_ASSUME_NONNULL_END
