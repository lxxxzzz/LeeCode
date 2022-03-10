//
//  YXIMCompositeMessageContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMessageContent.h"
@class YXIMMessage;

NS_ASSUME_NONNULL_BEGIN

@interface YXIMCompositeMessageContent : YXIMMessageContent

@property (nonatomic, strong)NSString *title;
@property (nonatomic, strong)NSArray<YXIMMessage *> *messages;

@end

NS_ASSUME_NONNULL_END
