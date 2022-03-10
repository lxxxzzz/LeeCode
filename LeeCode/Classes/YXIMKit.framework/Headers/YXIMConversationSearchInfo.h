//
//  YXIMConversationSearchInfo.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>
#import "YXIMConversation.h"
#import "YXIMMessage.h"

NS_ASSUME_NONNULL_BEGIN

/**
 会话搜索信息
 */
@interface YXIMConversationSearchInfo : NSObject

/**
 会话
 */
@property (nonatomic, strong) YXIMConversation *conversation;

/**
 命中的消息
 */
@property (nonatomic, strong) YXIMMessage *marchedMessage;

/**
 命中数量
 */
@property (nonatomic, assign) int marchedCount;

/**
 搜索关键字
 */
@property (nonatomic, strong) NSString *keyword;
@end

NS_ASSUME_NONNULL_END
