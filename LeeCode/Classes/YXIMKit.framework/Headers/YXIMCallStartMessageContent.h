//
//  YXIMCallStartMessageContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

@interface YXIMCallStartMessageContent : YXIMMessageContent

/**
 CallId
 */
@property (nonatomic, strong)NSString *callId;
/**
 对端用户Id
 */
@property (nonatomic, strong)NSArray<NSString *> *targetIds;
/**
 * 开始时间
 */
@property (nonatomic, assign)long long connectTime;
/**
 * 结束时间
 */
@property (nonatomic, assign)long long endTime;
/* 结束原因
WFAVCallEndReason
 0: kWFAVCallEndReasonUnknown,
 1: kWFAVCallEndReasonBusy,
 2: kWFAVCallEndReasonSignalError,
 3: kWFAVCallEndReasonHangup,
 4: kWFAVCallEndReasonMediaError,
 5: kWFAVCallEndReasonRemoteHangup,
 6: kWFAVCallEndReasonOpenCameraFailure,
 7: kWFAVCallEndReasonTimeout,
 8: kWFAVCallEndReasonAcceptByOtherClient
 */
@property (nonatomic, assign)int status;

/*
 * 是否仅音频
 */
@property (nonatomic, assign, getter=isAudioOnly)BOOL audioOnly;

@property (nonatomic, strong)NSString *pin;

@end

NS_ASSUME_NONNULL_END
