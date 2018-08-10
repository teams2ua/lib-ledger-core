// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#import "LGAddress.h"
#import "LGAddressListCallbackImpl.h"
#import "LGError.h"
#import "RCTCoreLGAddress.h"
#import "RCTCoreLGError.h"
#import <Foundation/Foundation.h>
#import <React/RCTBridge.h>
#import <React/RCTBridgeModule.h>


/**
 *Callback triggered by main completed task,
 *returns optional result as list of template type T
 */
@interface RCTCoreLGAddressListCallback : NSObject <LGAddressListCallback, RCTBridgeModule>
@property (nonatomic, strong) RCTPromiseResolveBlock resolve;
@property (nonatomic, strong) RCTPromiseRejectBlock reject;
-(instancetype)initWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock) reject;
@end
