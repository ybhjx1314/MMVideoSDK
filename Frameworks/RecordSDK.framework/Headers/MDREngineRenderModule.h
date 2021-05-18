//
//  MDREngineRenderModule.h
//  MMVideoSDK
//
//  Created by sunfei on 2021/2/8.
//

#import <Foundation/Foundation.h>
#import "MDRRenderModuleProtocol.h"
#import "MDRFiltersModuleProtocol.h"
#import "MDRXEngineModuleProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface MDREngineRenderModule : NSObject <MDRRenderModuleProtocol, MDRRenderModuleInput, MDRFiltersModuleProtocol, MDRXEngineModuleProtocol, MDRRenderModuleTouchEvent>

@end

NS_ASSUME_NONNULL_END
