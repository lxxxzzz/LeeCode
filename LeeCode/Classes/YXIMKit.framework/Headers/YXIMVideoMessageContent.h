//
//  YXIMVideoMessageContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMediaMessageContent.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 视频消息
 */
@interface YXIMVideoMessageContent : YXIMMediaMessageContent

/**
 构造方法

 @param image 图片
 @return 图片消息
 */
+ (instancetype)contentPath:(NSString *)localPath thumbnail:(UIImage *)image;

/**
 缩略图
 */
@property (nonatomic, strong)UIImage *thumbnail;

/**
 时长
*/
@property (nonatomic, assign)long duration;

@end

NS_ASSUME_NONNULL_END
