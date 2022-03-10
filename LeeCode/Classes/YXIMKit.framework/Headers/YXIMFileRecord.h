//
//  YXIMFileRecord.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>
#import "YXIMConversation.h"

NS_ASSUME_NONNULL_BEGIN

@interface YXIMFileRecord : NSObject

@property (nonatomic, strong)YXIMConversation *conversation;
@property (nonatomic, assign)long long messageUid;
@property (nonatomic, strong)NSString *userId;
@property (nonatomic, strong)NSString *name;
@property (nonatomic, strong)NSString *url;
@property (nonatomic, assign)int size;
@property (nonatomic, assign)int downloadCount;
@property (nonatomic, assign)long long timestamp;

@end

NS_ASSUME_NONNULL_END
