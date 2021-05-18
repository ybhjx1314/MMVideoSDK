//
//  MDREffectFilterGroup.h
//  MMVideoSDK
//
//  Created by sunfei on 2021/2/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MDREffectFilterGroup <NSObject>

@property (nonatomic, assign) CMTimeRange duration;

- (void)setReverse:(BOOL)reverse;

- (void)appendFilter:(id)filter inRange:(CMTimeRange)range;
- (void)updateFilterAtTime:(CMTime)time ofRange:(CMTimeRange)range;

- (void)removeLast;
- (void)clear;

- (BOOL)hasFilter;

- (id)filterAtTime:(CMTime)time;

- (NSArray *)filters;

@end

NS_ASSUME_NONNULL_END
