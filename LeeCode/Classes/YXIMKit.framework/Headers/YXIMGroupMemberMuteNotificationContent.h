//
//  YXIMGroupMemberMuteNotificationContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMNotificationMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

/**
 群成员禁言的通知消息
 */
@interface YXIMGroupMemberMuteNotificationContent : YXIMNotificationMessageContent

/**
 群组ID
 */
@property (nonatomic, strong)NSString *groupId;

/**
 操作者ID
 */
@property (nonatomic, strong)NSString *creator;

/**
 操作
 */
@property (nonatomic, strong)NSString *type;

/**
 被禁言/取消禁言者ID列表
 */
@property (nonatomic, strong)NSArray<NSString *> *targetIds;


@end

NS_ASSUME_NONNULL_END
