//
//  YXIMLinkMessageContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

/**
 链接消息
 */
@interface YXIMLinkMessageContent : YXIMMessageContent

/**
 链接标题
 */
@property (nonatomic, strong)NSString *title;

/**
 内容摘要
 */
@property (nonatomic, strong)NSString *contentDigest;

/**
 链接地址
 */
@property (nonatomic, strong)NSString *url;

/**
 链接图片地址
 */
@property (nonatomic, strong)NSString *thumbnailUrl;

@end

NS_ASSUME_NONNULL_END
