//
//  YXIMSecretParam.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YXIMSecretParam : NSObject

// 展示的秘钥
@property (nonatomic,copy) NSString *secretKey;

// 展示的时间
@property (nonatomic,copy) NSString *showTime;

// 时间戳
@property(nonatomic, assign)long long timestamp;

// 是否显示秘钥
@property (nonatomic,assign) BOOL isShowSecretKey;

@end

NS_ASSUME_NONNULL_END
