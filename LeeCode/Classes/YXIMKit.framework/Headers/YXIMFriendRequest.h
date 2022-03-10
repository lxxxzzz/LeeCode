//
//  YXIMFriendRequest.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 好友请求
 */
@interface YXIMFriendRequest : NSObject

/**
 方向
 */
@property(nonatomic, assign)int direction;

/**
 ID
 */
@property(nonatomic, strong)NSString *target;

/**
 请求说明
 */
@property(nonatomic, strong)NSString *reason;

/**
 请求扩展信息
 */
@property(nonatomic, strong)NSString *extra;

/**
 接受状态
 */
@property(nonatomic, assign)int status;

/**
 已读
 */
@property(nonatomic, assign)int readStatus;

/**
 发起时间
 */
@property(nonatomic, assign)long long timestamp;

/**
 好友申请途径 0：手机号添加 1：二维码添加
 */
@property(nonatomic, assign)int addType;

@end

NS_ASSUME_NONNULL_END
