//
//  YXIMAddFriendMessage.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YXIMAddFriendMessage : NSObject

// 消息发送方
@property (nonatomic,copy) NSString *fromUser;

// 对方id
@property (nonatomic,copy) NSString *target;

// 消息接收方
@property (nonatomic,copy) NSString *content;
/**
 消息id
 */
@property (nonatomic, assign)long long messageId;


/**
 更新时间
 */
@property (nonatomic, assign)long long updateDt;

@end

NS_ASSUME_NONNULL_END
