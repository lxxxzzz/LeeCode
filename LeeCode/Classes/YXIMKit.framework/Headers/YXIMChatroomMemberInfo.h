//
//  YXIMChatroomMemberInfo.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YXIMChatroomMemberInfo : NSObject

@property(nonatomic, assign)int memberCount;
@property(nonatomic, strong)NSArray<NSString *> *members;

@end

NS_ASSUME_NONNULL_END
