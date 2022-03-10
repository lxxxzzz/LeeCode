//
//  YXIMFileMessageContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMediaMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

@interface YXIMFileMessageContent : YXIMMediaMessageContent

/**
 构造方法

 @param filePath 文件路径
 @return 语音消息
 */
+ (instancetype)fileMessageContentFromPath:(NSString *)filePath;

/**
 文件名
 */
@property (nonatomic, strong)NSString *name;

/**
 文件名
 */
@property (nonatomic, assign)NSUInteger size;

@end

NS_ASSUME_NONNULL_END
