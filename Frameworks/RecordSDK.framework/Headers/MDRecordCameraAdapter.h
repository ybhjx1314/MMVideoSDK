//
//  MDCameraAdapter.h
//  MomoChat
//
//  Created by 符吉胜 on 2018/1/15.
//  Copyright © 2018年 wemomo.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMedia/CoreMedia.h>
#import <AVFoundation/AVFoundation.h>
#import "MDRCommonDefine.h"

@class MDRecordCameraAdapter;

@protocol MDRecordCameraAdapterDelegate <NSObject>

- (void)cameraAdapter:(MDRecordCameraAdapter *)cameraAdapter didOutputVideoPixelBuffer:(CVPixelBufferRef)pixelBuffer timinginfo:(CMSampleTimingInfo)timingInfo metaInfo:(NSDictionary *)metaInfo;

- (void)cameraAdapter:(MDRecordCameraAdapter *)cameraAdapter didOutputAudioSampleBuffer:(CMSampleBufferRef)audioSampleBuffer;


@end

@interface MDRecordCameraAdapterConfigure : NSObject

@property (nonatomic,   copy) NSString                  *sessionPreset;
@property (nonatomic, assign) NSUInteger                frameRate;
//AR模式只支持后置
@property (nonatomic, assign) AVCaptureDevicePosition   devicePosition;
@property (nonatomic, strong) dispatch_queue_t          sampleBufferVideoProcessingQueue;
@property (nonatomic, strong) dispatch_queue_t          sampleBufferAudioProcessingQueue;

@end

@interface MDRecordCameraAdapter : NSObject

@property (nonatomic,assign,readonly) AVCaptureDevicePosition  devicePosition;
@property (nonatomic,assign,readonly) AVCaptureDevice          *currentDevice;
@property (nonatomic,assign,readonly) AVCaptureConnection      *captureConnection;
@property (nonatomic,assign,readonly) MDRecordCaptureFlashMode       activeFlashMode;

@property (nonatomic,weak) id<MDRecordCameraAdapterDelegate> delegate;

- (instancetype)initWithCameraConfiguration:(MDRecordCameraAdapterConfigure *)config;

- (void)startCapturing;
- (void)stopCapturing;
- (void)pauseCapturing;

- (void)rotateCamera;
- (void)focusCamera:(CGPoint)point;

- (void)focusCameraAtExposurePointOfInterest:(CGPoint)point;
- (void)focusCameraAtFocusPointOfInterest:(CGPoint)point;

- (void)setVideoZoomFactor:(CGFloat)factor;
- (CGFloat)videoZoomFactor;
- (BOOL)hasVideoInput;

- (void)forceConfigureFlashMode:(MDRecordCaptureFlashMode)mode;
- (BOOL)hasFlash;
- (NSArray *)supportFlashModes;

- (void)cleanCamera;

- (void)changeAdapeterCOnfigurationPosition:(AVCaptureDevicePosition)devicePosition;

- (void)enabelAudioRecording;
- (void)disableAudioRecording;

- (void)updateISO:(float)ISO;
- (void)updateExposureTargetBias:(float)bias;

- (void)autoConfigAudioSessionDisable:(BOOL)disable;
- (BOOL)changeSessionPreset:(AVCaptureSessionPreset)sessionPreset;

@end
