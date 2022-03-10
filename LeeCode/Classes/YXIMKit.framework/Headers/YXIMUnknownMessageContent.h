//
//  YXIMUnknownMessageContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

/**
 未知消息。所有未注册的消息都会解析为为止消息，主要用于新旧版本兼容
 */
@interface YXIMUnknownMessageContent : YXIMMessageContent

/**
 原消息类型
 */
@property (nonatomic, assign)NSInteger orignalType;


/**
 原消息Payload
 */
@property (nonatomic, strong)YXIMMessagePayload *orignalPayload;

@end

NS_ASSUME_NONNULL_END
