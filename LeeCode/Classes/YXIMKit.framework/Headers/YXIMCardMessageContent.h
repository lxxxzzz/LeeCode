//
//  YXIMCardMessageContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, YXIMCardType) {
    CardType_User = 0,
    CardType_Group = 1,
    CardType_Channel = 3
};

/**
 名片消息
 */
@interface YXIMCardMessageContent : YXIMMessageContent

/**
 构造方法

 @param targetId 目标Id
 @param type 类型，0 用户，1 群组， 3 频道。
 @param fromUser 分享用户。
 @return 名片消息
 */
+ (instancetype)cardWithTarget:(NSString *)targetId type:(YXIMCardType)type from:(NSString *)fromUser;

/**
  名片类型
 */
@property (nonatomic, assign)YXIMCardType type;

/**
 用户ID
 */
@property (nonatomic, strong)NSString *targetId;

/**
 用户号
 */
@property (nonatomic, strong)NSString *name;

/**
 用户昵称
 */
@property (nonatomic, strong)NSString *displayName;

/**
 用户头像
 */
@property (nonatomic, strong)NSString *portrait;

/**
分享的用户ID
 */
@property (nonatomic, strong)NSString *fromUser;

@end

NS_ASSUME_NONNULL_END
