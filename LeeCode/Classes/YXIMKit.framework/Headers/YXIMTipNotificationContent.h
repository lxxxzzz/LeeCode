//
//  YXIMTipNotificationContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <UIKit/UIKit.h>
#import "YXIMNotificationMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

/**
 退群的通知消息
 */
@interface YXIMTipNotificationContent : YXIMNotificationMessageContent

/**
 退群成员的ID
 */
@property (nonatomic, strong)NSString *tip;

@end

NS_ASSUME_NONNULL_END
