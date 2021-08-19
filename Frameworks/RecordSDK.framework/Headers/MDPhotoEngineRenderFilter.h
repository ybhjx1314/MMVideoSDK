//
//  MDPhotoEngineRenderFilter.h
//  MMVideoSDK
//
//  Created by sunfei on 2021/2/22.
//

#import <Foundation/Foundation.h>
#import "MDRPhotoRender.h"
#import "MDRRenderModuleProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface MDPhotoEngineRenderFilter : NSObject <MDRPhotoRender,MDRRenderMakeUpModule>

@end

NS_ASSUME_NONNULL_END
