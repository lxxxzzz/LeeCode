//
//  YXIMUserInfo.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 用户信息
 */
@interface YXIMUserInfo : NSObject

/**
 用户ID
 */
@property (nonatomic, strong)NSString *userId;

/**
 名称
 */
@property (nonatomic, strong)NSString *name;

/**
 显示的名称
 */
@property (nonatomic, strong)NSString *displayName;

/**
 性别
 */
@property (nonatomic, strong)NSString *gender;
/**
 头像
 */
@property (nonatomic, strong)NSString *portrait;

/**
 手机号
 */
@property (nonatomic, strong)NSString *mobile;

/**
 邮箱
 */
@property (nonatomic, strong)NSString *email;

/**
 地址
 */
@property (nonatomic, strong)NSString *address;

/**
 公司信息
 */
@property (nonatomic, strong)NSString *company;

/**
 社交信息
 */
@property (nonatomic, strong)NSString *social;

/**
 生日
 */
@property (nonatomic, strong)NSString *birthday;

/**
 区号
 */
@property (nonatomic, strong)NSString *callingCode;

/**
 个性签名
 */
@property (nonatomic, strong)NSString *signature;

/**
 0 非星标好友 1 星标好友
 */
@property (nonatomic,assign) int star;

/**
 扩展信息
 */
@property (nonatomic, strong)NSString *extra;

/**
 好友备注
 */
@property (nonatomic, strong)NSString *friendAlias;

/**
 群昵称
 */
@property (nonatomic, strong)NSString *groupAlias;

/**
 更新时间
 */
@property (nonatomic, assign)long long updateDt;

/**
 用户类型
 */
@property (nonatomic, assign) int type;

/**
 是否被删除用户
 */
@property (nonatomic, assign) int deleted;


- (void)cloneFrom:(YXIMUserInfo *)other;

@end

NS_ASSUME_NONNULL_END
