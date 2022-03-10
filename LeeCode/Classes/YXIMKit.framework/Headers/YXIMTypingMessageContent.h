//
//  YXIMTypingMessageContent.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import "YXIMMessageContent.h"

NS_ASSUME_NONNULL_BEGIN

/**
 正在输入类型
 
 - Typing_TEXT : 正在输入文本
 - Typing_VOICE : 正在输入语音
 - Typing_CAMERA : 正在拍摄
 - Typing_LOCATION : 正在选取位置
 - Typing_FILE : 正在选取文件
 */
typedef NS_ENUM(NSInteger, YXIMTypingType) {
    Typing_TEXT = 0,
    Typing_VOICE = 1,
    Typing_CAMERA = 2,
    Typing_LOCATION = 3,
    Typing_FILE = 4
};


/**
 正在输入消息
 */
@interface YXIMTypingMessageContent : YXIMMessageContent

/**
 构造方法

 @param type 输入类型类型。
 @return 正在输入消息
 */
+ (instancetype)contentType:(YXIMTypingType)type;

/**
 输入类型类型。0 文本；1 语言。
 */
@property (nonatomic, assign)YXIMTypingType type;

@end

NS_ASSUME_NONNULL_END
