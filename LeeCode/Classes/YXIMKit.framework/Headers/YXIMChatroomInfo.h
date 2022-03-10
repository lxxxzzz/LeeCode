//
//  YXIMChatroomInfo.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YXIMChatroomInfo : NSObject

@property(nonatomic, strong)NSString *chatroomId;
@property(nonatomic, strong)NSString *title;
@property(nonatomic, strong)NSString *desc;
@property(nonatomic, strong)NSString *portrait;
@property(nonatomic, strong)NSString *extra;

//0 normal; 1 not started; 2 end
@property(nonatomic, assign)int state;
@property(nonatomic, assign)int memberCount;
@property(nonatomic, assign)long long createDt;
@property(nonatomic, assign)long long updateDt;

@end

NS_ASSUME_NONNULL_END
