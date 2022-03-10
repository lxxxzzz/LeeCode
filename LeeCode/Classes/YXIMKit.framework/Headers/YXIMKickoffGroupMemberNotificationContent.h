//
//  YXIMKickoffGroupMemberNotificationContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMNotificationMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

/**
 群组踢人的通知消息
 */
@interface YXIMKickoffGroupMemberNotificationContent : YXIMNotificationMessageContent

/**
 群组ID
 */
@property (nonatomic, strong)NSString *groupId;

/**
 操作者ID
 */
@property (nonatomic, strong)NSString *operateUser;

/**
 被踢成员的ID列表
 */
@property (nonatomic, strong)NSArray<NSString *> *kickedMembers;


@end

NS_ASSUME_NONNULL_END
