//
//  YXIMChangeGroupNameNotificationContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMNotificationMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

/**
 修改群名的通知消息
 */
@interface YXIMChangeGroupNameNotificationContent : YXIMNotificationMessageContent

/**
 群组ID
 */
@property (nonatomic, strong)NSString *groupId;

/**
 操作者ID
 */
@property (nonatomic, strong)NSString *operateUser;

/**
 群名
 */
@property (nonatomic, strong)NSString *name;

@end

NS_ASSUME_NONNULL_END
