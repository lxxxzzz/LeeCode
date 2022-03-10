//
//  YXIMGroupSearchInfo.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>
#import "YXIMGroupInfo.h"

NS_ASSUME_NONNULL_BEGIN

/**
 群组搜索信息
 */
@interface YXIMGroupSearchInfo : NSObject

/**
 命中的群组
 */
@property (nonatomic, strong)YXIMGroupInfo *groupInfo;

/**
 命中的类型 0, 名字群组名字； 1，命中群成员名称；2，都命中
 */
@property (nonatomic, assign)int marchType;

/**
 命中群成员名称
 */
@property (nonatomic, strong)NSArray *marchedMemberNames;

/**
 搜索的关键字
 */
@property (nonatomic, strong)NSString *keyword;

@end


NS_ASSUME_NONNULL_END
