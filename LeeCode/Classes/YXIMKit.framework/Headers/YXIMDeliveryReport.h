//
//  YXIMDeliveryReport.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YXIMDeliveryReport : NSObject

+(instancetype)delivered:(NSString *)userId
               timestamp:(long long)timestamp;

@property (nonatomic, strong)NSString *userId;
@property (nonatomic, assign)long long timestamp;

@end

NS_ASSUME_NONNULL_END
