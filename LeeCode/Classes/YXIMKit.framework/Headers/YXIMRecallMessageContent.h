//
//  YXIMRecallMessageContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMNotificationMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

@interface YXIMRecallMessageContent : YXIMNotificationMessageContent

/**
 被撤回消息的Uid
 */
@property (nonatomic, assign)long long messageUid;

/**
 撤回用户Id
 */
@property (nonatomic, strong)NSString *operatorId;

/**
被撤回消息的发送者用户Id
*/
@property (nonatomic, strong)NSString *originalSender;

/**
撤回消息的内容类型
*/
@property (nonatomic, assign)int originalContentType;

/**
撤回消息的可搜索内容类型
*/
@property (nonatomic, strong)NSString *originalSearchableContent;

/**
撤回消息的内容
*/
@property (nonatomic, strong)NSString *originalContent;

/**
撤回消息的Extra内容
*/
@property (nonatomic, strong)NSString *originalExtra;

/**
撤回消息的时间戳
*/
@property (nonatomic, assign)long long originalMessageTimestamp;

@end

NS_ASSUME_NONNULL_END
