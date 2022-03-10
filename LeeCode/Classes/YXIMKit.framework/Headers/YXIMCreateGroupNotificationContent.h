//
//  YXIMCreateGroupNotificationContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMNotificationMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

/**
 建群的通知消息
 */
@interface YXIMCreateGroupNotificationContent : YXIMNotificationMessageContent

/**
 群组ID
 */
@property (nonatomic, strong)NSString *groupId;

/**
 创建者ID
 */
@property (nonatomic, strong)NSString *creator;

/**
 群名
 */
@property (nonatomic, strong)NSString *groupName;

@end

NS_ASSUME_NONNULL_END
