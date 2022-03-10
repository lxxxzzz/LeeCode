//
//  YXIMPCLoginRequestMessageContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMessageContent.h"
#import "YXIMService.h"

NS_ASSUME_NONNULL_BEGIN

@interface YXIMPCLoginRequestMessageContent : YXIMMessageContent

/**
 PC登录SessionID
 */
@property (nonatomic, strong)NSString *sessionId;

/**
 PC登录类型
 */
@property (nonatomic, assign)YXIMPlatformType platform;

@end

NS_ASSUME_NONNULL_END
