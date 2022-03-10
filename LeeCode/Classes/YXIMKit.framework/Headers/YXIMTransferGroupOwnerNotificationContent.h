//
//  YXIMTransferGroupOwnerNotificationContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMNotificationMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

/**
 转让群主的通知消息
 */
@interface YXIMTransferGroupOwnerNotificationContent : YXIMNotificationMessageContent

/**
 群组ID
 */
@property (nonatomic, strong)NSString *groupId;

/**
 操作者的ID
 */
@property (nonatomic, strong)NSString *operateUser;

/**
 新的群主ID
 */
@property (nonatomic, strong)NSString *owner;

@end

NS_ASSUME_NONNULL_END
