//
//  YXIMStrangerTipsNotificationContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMNotificationMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

@interface YXIMStrangerTipsNotificationContent : YXIMNotificationMessageContent

// 文案内容
@property (nonatomic,copy) NSString *content;

// 英文文案
@property (nonatomic,copy) NSString *enContent;

// 中文文案
@property (nonatomic,copy) NSString *cnContent;

@end

NS_ASSUME_NONNULL_END
