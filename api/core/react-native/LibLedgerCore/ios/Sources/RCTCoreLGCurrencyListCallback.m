// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#import "RCTCoreLGCurrencyListCallback.h"


@implementation RCTCoreLGCurrencyListCallback
//Export module
RCT_EXPORT_MODULE(RCTCoreLGCurrencyListCallback)

@synthesize bridge = _bridge;
-(instancetype)initWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock) reject
{
    self = [super init];
    if(self)
    {
        self.resolve = resolve;
        self.reject = reject;
    }
    return self;
}

/**
 * Method triggered when main task complete
 * @params result optional of type list<T>, non null if main task failed
 * @params error optional of type Error, non null if main task succeeded
 */
- (void)onCallback:(nullable NSArray<LGCurrency *> *)result
             error:(nullable LGError *)error {
    if (error)
    {
        self.reject(@"RCTCoreLGCurrencyListCallback Error", error.message, nil);
    }


    self.resolve(result);

}
@end
