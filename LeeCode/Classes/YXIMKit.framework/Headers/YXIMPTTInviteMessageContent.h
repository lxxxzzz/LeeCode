//
//  YXIMPTTInviteMessageContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

/**
 对讲邀请消息
 */
@interface YXIMPTTInviteMessageContent : YXIMMessageContent

/**
 CallId
 */
@property (nonatomic, strong)NSString *callId;

/**
 会议主持人
*/
@property (nonatomic, strong)NSString *host
;
/**
 会议标题
 */
@property (nonatomic, strong)NSString *title;

/**
 会议描述
 */
@property (nonatomic, strong)NSString *desc;

/*
 会议密码
*/
@property (nonatomic, strong)NSString *pin;

@end

NS_ASSUME_NONNULL_END
