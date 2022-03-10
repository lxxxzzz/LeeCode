//
//  YXIMFriend.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YXIMFriend : NSObject

/*
 好友ID
 */
@property(nonatomic, strong)NSString *userId;

/*
 好友昵称
 */
@property(nonatomic, strong)NSString *alias;

/*
 扩展信息，添加方式等
 */
@property(nonatomic, strong)NSString *extra;

/*
 添加好友时间
 */
@property(nonatomic, assign)long long timestamp;

// 好友id
@property (nonatomic,copy) NSString *uid;

// 是否是星标好友
@property (nonatomic,assign) int star;

// 用户名
@property (nonatomic,copy) NSString *name;

// 显示名字
@property (nonatomic,copy) NSString *displayName;

// 头像
@property (nonatomic,copy) NSString *portrait;

// 手机
@property (nonatomic,copy) NSString *mobile;

// 性别
@property (nonatomic,copy) NSString *gender;

@end

NS_ASSUME_NONNULL_END
