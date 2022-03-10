#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YXProxy : NSProxy

@property (nullable, nonatomic, weak, readonly) id target;

+ (instancetype)proxyWithTarget:(id)target;
- (instancetype)initWithTarget:(id)target;

@end

NS_ASSUME_NONNULL_END
