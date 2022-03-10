//
//  YXIMGroupSetManagerNotificationContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMNotificationMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

/**
 建群的通知消息
 */
@interface YXIMGroupSetManagerNotificationContent : YXIMNotificationMessageContent

/**
 群组ID
 */
@property (nonatomic, strong)NSString *groupId;

/**
 操作者ID
 */
@property (nonatomic, strong)NSString *operatorId;

/**
 操作
 */
@property (nonatomic, strong)NSString *type;

/**
 Member ID
 */
@property (nonatomic, strong)NSArray<NSString *> *memberIds;

@end

NS_ASSUME_NONNULL_END
