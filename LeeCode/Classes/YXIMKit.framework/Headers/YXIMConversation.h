//
//  YXIMConversation.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 会话类型

 - Single_Type: 单聊
 - Group_Type: 群组
 - Chatroom_Type: 聊天室
 - Channel_Type: 频道
 - Things_Type: 物联网
 */
typedef NS_ENUM(NSInteger, YXIMConversationType) {
    Single_Type,
    Group_Type,
    Chatroom_Type,
    Channel_Type,
    Things_Type,
};

/**
 会话
 */
@interface YXIMConversation : NSObject

/**
 构造方法

 @param type 会话类型
 @param target 目标会话ID
 @param line 默认传0
 @return 会话
 */
+ (instancetype)conversationWithType:(YXIMConversationType)type
                             target:(NSString *)target
                               line:(int)line;

/**
 会话类型
 */
@property (nonatomic, assign) YXIMConversationType type;

/**
 目标会话ID，单聊为对方用户ID，群聊为群ID
 */
@property (nonatomic, strong) NSString *target;

/**
 默认为0
 */
@property (nonatomic, assign)int line;

@end

NS_ASSUME_NONNULL_END
