#import "YXProxy.h"


@implementation YXProxy

- (instancetype)initWithTarget:(id)target {
    _target = target;
    return self;
}

+ (instancetype)proxyWithTarget:(id)target {
    return [[YXProxy alloc] initWithTarget:target];
}

- (id)forwardingTargetForSelector:(SEL)aSelector {
    return self.target;
}

- (BOOL)respondsToSelector:(SEL)aSelector {
    return [_target respondsToSelector:aSelector];
}

@end
