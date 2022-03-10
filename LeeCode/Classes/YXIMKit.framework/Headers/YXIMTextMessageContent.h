//
//  YXIMTextMessageContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMessageContent.h"
#import "YXIMQuoteInfo.h"


NS_ASSUME_NONNULL_BEGIN

/**
 文本消息
 */
@interface YXIMTextMessageContent : YXIMMessageContent

/**
 构造方法

 @param text 文本
 @return 文本消息
 */
+ (instancetype)contentWith:(NSString *)text;

/**
 文本内容
 */
@property (nonatomic, strong)NSString *text;


/**
 提醒类型，1，提醒部分对象（mentinedTarget）。2，提醒全部。其他不提醒
 */
@property (nonatomic, assign)int mentionedType;

/**
 提醒对象，mentionedType 1时有效
 */
@property (nonatomic, strong)NSArray<NSString *> *mentionedTargets;

/**
 引用信息
 */
@property (nonatomic, strong)YXIMQuoteInfo *quoteInfo;

@end

NS_ASSUME_NONNULL_END
