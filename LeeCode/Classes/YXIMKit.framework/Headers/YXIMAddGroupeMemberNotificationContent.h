//
//  YXIMAddGroupeMemberNotificationContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMNotificationMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

/**
 群组加人的通知消息
 */
@interface YXIMAddGroupeMemberNotificationContent : YXIMNotificationMessageContent

/**
 群组ID
 */
@property (nonatomic, strong)NSString *groupId;


/**
 添加类型 0 邀请 1 二维码 2 名片
 */
@property (nonatomic,assign) int shareType;

/**
 邀请者ID
 */
@property (nonatomic, strong)NSString *invitor;

/**
 被邀请者ID列表
 */
@property (nonatomic, strong)NSArray<NSString *> *invitees;

@end

NS_ASSUME_NONNULL_END
