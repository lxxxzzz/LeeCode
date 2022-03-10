//
//  YXIMSoundMessageContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMediaMessageContent.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 语音消息
 */
@interface YXIMSoundMessageContent : YXIMMediaMessageContent

/**
 构造方法

 @param wavPath 文件路径
 @param amrPath 转化为amr的存储路径
 @param duration 时间
 @return 语音消息
 */
+ (instancetype)soundMessageContentForWav:(NSString *)wavPath
                       destinationAmrPath:(NSString *)amrPath
                                 duration:(long)duration;

/**
 时间
 */
@property (nonatomic, assign)long duration;

/**
 获取语音消息的wav数据

 @return wav数据
 */
- (NSData *)getWavData;

@end

NS_ASSUME_NONNULL_END
