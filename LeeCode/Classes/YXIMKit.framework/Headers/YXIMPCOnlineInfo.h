//
//  YXIMPCOnlineInfo.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 PC在线类型

 - PC_Online: PC客户端在线
 - Web_Online: Web客户端在线
 - WX_Online: WX小程序客户端在线
 */
typedef NS_ENUM(NSInteger, YXIMPCOnlineType) {
    PC_Online,
    Web_Online,
    WX_Online
};


@interface YXIMPCOnlineInfo : NSObject

+ (instancetype)infoFromStr:(NSString *)strInfo withType:(YXIMPCOnlineType)type;
@property(nonatomic, assign)YXIMPCOnlineType type;
@property(nonatomic, assign)BOOL isOnline;
@property(nonatomic, assign)int/*YXIMPlatformType*/ platform;
@property(nonatomic, strong)NSString *clientId;
@property(nonatomic, strong)NSString *clientName;
@property(nonatomic, assign)long long timestamp;

@end

NS_ASSUME_NONNULL_END
