//
//  YXIMNetworkStatus.h
//  YXIMLib
//
//  Created by arthurzhao on 2022/1/5.
//

#import <Foundation/Foundation.h>
#import <SystemConfiguration/SCNetworkReachability.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YXIMNetworkStatusDelegate

- (void)ReachabilityChange:(UInt32)uiFlags;

@end



@interface YXIMNetworkStatus : NSObject {
    __unsafe_unretained id<YXIMNetworkStatusDelegate> m_networkStatusDelegate;
}

+ (YXIMNetworkStatus *)sharedInstance;

- (void)Start:(__unsafe_unretained id<YXIMNetworkStatusDelegate>)networkStatusDelegate;
- (void)Stop;
- (void)ChangeReach;
- (SCNetworkConnectionFlags)connFlags;
- (bool)isConnectionAvaible;


@end

NS_ASSUME_NONNULL_END
