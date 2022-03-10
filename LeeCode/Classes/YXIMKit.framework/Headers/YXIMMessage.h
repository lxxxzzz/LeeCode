//
//  YXIMMessage.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>
#import "YXIMConversation.h"
#import "YXIMMessageContent.h"

NS_ASSUME_NONNULL_BEGIN



/**
 消息方向

 - MessageDirection_Send: 发送
 - MessageDirection_Receive: 接收
 */
typedef NS_ENUM(NSInteger, YXIMMessageDirection) {
    MessageDirection_Send,
    MessageDirection_Receive
};

/**
 消息状态

 - Message_Status_Sending: 发送中
 - Message_Status_Sent: 发送成功
 - Message_Status_Send_Failure: 发送失败
 - Message_Status_Unread: 未读
 - Message_Status_Readed: 已读
 - Message_Status_Played: 已播放(媒体消息)
 */
typedef NS_ENUM(NSInteger, YXIMMessageStatus) {
    Message_Status_Sending,
    Message_Status_Sent,
    Message_Status_Send_Failure,
    Message_Status_Mentioned,
    Message_Status_AllMentioned,
    Message_Status_Unread,
    Message_Status_Readed,
    Message_Status_Played
};

/**
 消息实体
 */
@interface YXIMMessage : NSObject

/**
 消息ID，当前用户本地唯一
 */
@property (nonatomic, assign)long messageId;

/**
 消息UID，所有用户全局唯一
 */
@property (nonatomic, assign)long long messageUid;

/**
 消息所属的会话
 */
@property (nonatomic, strong)YXIMConversation *conversation;

/**
 消息发送者的用户ID
 */
@property (nonatomic, strong)NSString * fromUser;

/**
 消息在会话中定向发送给该用户的
 */
@property (nonatomic, strong)NSArray<NSString *> *toUsers;

/**
 消息内容
 */
@property (nonatomic, strong)YXIMMessageContent *content;

/**
 消息方向
 */
@property (nonatomic, assign)YXIMMessageDirection direction;

/**
 消息状态
 */
@property (nonatomic, assign)YXIMMessageStatus status;

/**
 消息的发送时间
 */
@property (nonatomic, assign)long long serverTime;

/**
 消息本地附加信息
 */
@property (nonatomic, strong)NSString * localExtra;

- (NSString *)digest;

@end


NS_ASSUME_NONNULL_END
