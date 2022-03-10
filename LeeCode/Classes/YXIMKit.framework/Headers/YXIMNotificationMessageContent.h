//
//  YXIMNotificationMessageContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMessageContent.h"

NS_ASSUME_NONNULL_BEGIN


@class YXIMMessage;
/**
 通知消息的协议
 */
@protocol YXIMNotificationMessageContent <YXIMMessageContent>

/**
 获取通知的提示内容

 @return 提示内容
 */
- (NSString *)formatNotification:(YXIMMessage *)message;

@end

@interface YXIMNotificationMessageContent : YXIMMessageContent <YXIMNotificationMessageContent>

@end

NS_ASSUME_NONNULL_END
