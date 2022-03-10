//
//  YXIMStickerMessageContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMediaMessageContent.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YXIMStickerMessageContent : YXIMMediaMessageContent

/**
 构造方法

 @param stickerPath 表情路径
 @return 表情消息
 */
+ (instancetype)contentFrom:(NSString *)stickerPath;

@property (nonatomic, assign)CGSize size;

@end

NS_ASSUME_NONNULL_END
