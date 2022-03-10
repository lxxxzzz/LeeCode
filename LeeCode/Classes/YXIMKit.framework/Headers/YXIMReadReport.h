//
//  YXIMReadReport.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>
#import "YXIMConversation.h"

NS_ASSUME_NONNULL_BEGIN

@interface YXIMReadReport : NSObject

+ (instancetype)readed:(YXIMConversation *)conversation
               userId:(NSString *)userId
            timestamp:(long long)timestamp;

@property (nonatomic, strong) YXIMConversation *conversation;
@property (nonatomic, strong) NSString *userId;
@property (nonatomic, assign) long long timestamp;

@end

NS_ASSUME_NONNULL_END
