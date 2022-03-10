//
//  YXIMImageMessageContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMediaMessageContent.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 图片消息
 */
@interface YXIMImageMessageContent : YXIMMediaMessageContent

/**
 构造方法

 @param image 图片
 @return 图片消息
 */
+ (instancetype)contentFrom:(UIImage *)image;

/**
 构造方法

 @param image 图片
 @param path 图片存储路径
 
 @return 图片消息
 */
+ (instancetype)contentFrom:(UIImage *)image cachePath:(NSString *)path;

/**
 缩略图，自动生成
 */
@property (nonatomic, strong)UIImage *thumbnail;

/**
 图片尺寸
 */
@property (nonatomic, assign, readonly)CGSize size;

/**
 图片缩略图参数
 */
@property (nonatomic, strong)NSString *thumbParameter;

@end

NS_ASSUME_NONNULL_END
