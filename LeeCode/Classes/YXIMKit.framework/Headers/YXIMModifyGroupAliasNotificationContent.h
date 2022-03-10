//
//  YXIMModifyGroupAliasNotificationContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMNotificationMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

/**
 群成员修改群昵称的通知消息
 */
@interface YXIMModifyGroupAliasNotificationContent : YXIMNotificationMessageContent

/**
 群组ID
 */
@property (nonatomic, strong)NSString *groupId;

/**
 操作者用户ID
 */
@property (nonatomic, strong)NSString *operateUser;

/**
 群昵称
 */
@property (nonatomic, strong)NSString *alias;

/**
 被修改昵称的用户，如果为空为修改operator的群昵称。
 */
@property (nonatomic, strong)NSString *memberId;

@end

NS_ASSUME_NONNULL_END
