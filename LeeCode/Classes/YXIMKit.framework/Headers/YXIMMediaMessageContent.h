//
//  YXIMMediaMessageContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

/**
 媒体消息
 */
@interface YXIMMediaMessageContent : YXIMMessageContent

/**
 媒体内容的本地存储路径
 */
@property (nonatomic, strong)NSString *localPath;

/**
 媒体内容的服务器路径
 */
@property (nonatomic, strong)NSString *remoteUrl;

@end

NS_ASSUME_NONNULL_END
