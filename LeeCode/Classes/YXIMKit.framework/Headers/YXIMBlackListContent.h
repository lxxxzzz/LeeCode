//
//  YXIMBlackListContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMNotificationMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

@interface YXIMBlackListContent : YXIMNotificationMessageContent

@property (nonatomic,copy) NSString *cnContent;

@property (nonatomic,copy) NSString *enContent;

@property (nonatomic,copy) NSString *content;

@end

NS_ASSUME_NONNULL_END
