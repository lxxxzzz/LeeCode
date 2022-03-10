//
//  YXIMConversationInfo.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>
#import "YXIMConversation.h"
#import "YXIMMessage.h"
#import "YXIMUnreadCount.h"

NS_ASSUME_NONNULL_BEGIN

/**
 会话信息
 */
@interface YXIMConversationInfo : NSObject

/**
 会话
 */
@property (nonatomic, strong)YXIMConversation *conversation;

/**
 最后一条消息
 */
@property (nonatomic, strong)YXIMMessage *lastMessage;

/**
 草稿
 */
@property (nonatomic, strong)NSString *draft;

/**
 最后一条消息的时间戳
 */
@property (nonatomic, assign)long long timestamp;

/**
 未读数
 */
@property (nonatomic, strong)YXIMUnreadCount *unreadCount;

/**
 是否置顶
 */
@property (nonatomic, assign)BOOL isTop;

/**
 是否设置了免打扰
 */
@property (nonatomic, assign)BOOL isSilent;

@end

NS_ASSUME_NONNULL_END
