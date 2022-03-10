//
//  YXIMQuoteInfo.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YXIMQuoteInfo : NSObject

- (instancetype)initWithMessageUid:(long long)messageUid;
@property (nonatomic, assign)long long messageUid;
@property (nonatomic, strong)NSString *userId;
@property (nonatomic, strong)NSString *userDisplayName;
@property (nonatomic, strong)NSString *messageDigest;

- (NSDictionary *)encode;
- (void)decode:(NSDictionary *)dictData;

@end

NS_ASSUME_NONNULL_END
