//
//  MDRLock.h
//  MMVideoSDK
//
//  Created by sunfei on 2020/2/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MDRLocking <NSLocking>

- (BOOL)tryLock;

@end

FOUNDATION_EXPORT id<MDRLocking> MDRLockCreate(void) NS_RETURNS_RETAINED;

NS_ASSUME_NONNULL_END
