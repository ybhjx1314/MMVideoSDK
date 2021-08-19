//
//  MDVideoEngineRenderFilter.h
//  MMVideoSDK
//
//  Created by sunfei on 2021/2/22.
//

#import <Foundation/Foundation.h>
#import "MDVideoRender.h"
#import "MDRRenderModuleProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@interface MDVideoEngineRenderFilter : NSObject <MDVideoRender,MDRRenderMakeUpModule>

@end

NS_ASSUME_NONNULL_END
