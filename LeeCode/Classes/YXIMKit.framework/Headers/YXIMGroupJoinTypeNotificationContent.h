//
//  YXIMGroupJoinTypeNotificationContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMNotificationMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

@interface YXIMGroupJoinTypeNotificationContent : YXIMNotificationMessageContent

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

@end

NS_ASSUME_NONNULL_END
