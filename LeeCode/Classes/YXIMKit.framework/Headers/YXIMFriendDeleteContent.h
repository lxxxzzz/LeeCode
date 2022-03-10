//
//  YXIMFriendDeleteContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

@interface YXIMFriendDeleteContent : YXIMMessageContent

@property (nonatomic,copy) NSString *cnContent;

@property (nonatomic,copy) NSString *enContent;

@property (nonatomic,copy) NSString *content;

@end

NS_ASSUME_NONNULL_END
