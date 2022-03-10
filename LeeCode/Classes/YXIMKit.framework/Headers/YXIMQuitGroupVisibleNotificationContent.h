//
//  YXIMQuitGroupVisibleNotificationContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMNotificationMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

/**
 退群的通知消息
 */
@interface YXIMQuitGroupVisibleNotificationContent : YXIMNotificationMessageContent

/**
 群组ID
 */
@property (nonatomic, strong)NSString *groupId;

/**
 退群成员的ID
 */
@property (nonatomic, strong)NSString *quitMember;

@end

NS_ASSUME_NONNULL_END
