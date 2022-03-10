//
//  YXIMChannelInfo.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YXIMChannelInfo : NSObject

@property(nonatomic, strong)NSString *channelId;
@property(nonatomic, strong)NSString *name;
@property(nonatomic, strong)NSString *portrait;
@property(nonatomic, strong)NSString *owner;
@property(nonatomic, strong)NSString *desc;
@property(nonatomic, strong)NSString *extra;
@property(nonatomic, strong)NSString *secret;
@property(nonatomic, strong)NSString *callback;

//https://docs.wildfirechat.net/base_knowledge/channel.html##频道状态
@property(nonatomic, assign)int status;
@property(nonatomic, assign)long long updateDt;

@end

NS_ASSUME_NONNULL_END
