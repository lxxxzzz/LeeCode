//
//  YXIMUnreadCount.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YXIMUnreadCount : NSObject

+(instancetype)countOf:(int)unread mention:(int)mention mentionAll:(int)mentionAll;
@property(nonatomic, assign)int unread;
@property(nonatomic, assign)int unreadMention;
@property(nonatomic, assign)int unreadMentionAll;

@end

NS_ASSUME_NONNULL_END
