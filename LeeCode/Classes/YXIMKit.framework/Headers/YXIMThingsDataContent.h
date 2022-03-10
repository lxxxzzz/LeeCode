//
//  YXIMThingsDataContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

/**
 物联网数据
 */
@interface YXIMThingsDataContent : YXIMMessageContent
/**
 二进制数据内容
 */
@property (nonatomic, strong)NSData *data;

@end

NS_ASSUME_NONNULL_END
