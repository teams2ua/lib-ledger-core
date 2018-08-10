// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from logger.djinni

#import "RCTCoreLGLogPrinter.h"


@implementation RCTCoreLGLogPrinter
//Export module
RCT_EXPORT_MODULE(RCTCoreLGLogPrinter)

@synthesize bridge = _bridge;

-(instancetype)init
{
    self = [super init];
    //Init Objc implementation
    if(self)
    {
        self.objcImplementations = [[NSMutableDictionary alloc] init];
    }
    return self;
}

/**
 *Print different encountered errors
 *@param message, string
 */
RCT_REMAP_METHOD(printError,printError:(NSDictionary *)currentInstance withParams:(nonnull NSString *)message withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGLogPrinter::printError, first argument should be an instance of LGLogPrinterImpl", nil);
    }
    LGLogPrinterImpl *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGLogPrinterImpl::printError, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    [currentInstanceObj printError:message];

}

/**
 *Print useful information messages
 *@param message, string
 */
RCT_REMAP_METHOD(printInfo,printInfo:(NSDictionary *)currentInstance withParams:(nonnull NSString *)message withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGLogPrinter::printInfo, first argument should be an instance of LGLogPrinterImpl", nil);
    }
    LGLogPrinterImpl *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGLogPrinterImpl::printInfo, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    [currentInstanceObj printInfo:message];

}

/**
 *Print debug messages
 *@param message string
 */
RCT_REMAP_METHOD(printDebug,printDebug:(NSDictionary *)currentInstance withParams:(nonnull NSString *)message withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGLogPrinter::printDebug, first argument should be an instance of LGLogPrinterImpl", nil);
    }
    LGLogPrinterImpl *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGLogPrinterImpl::printDebug, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    [currentInstanceObj printDebug:message];

}

/**
 *Print warning messages
 *@param message, string
 */
RCT_REMAP_METHOD(printWarning,printWarning:(NSDictionary *)currentInstance withParams:(nonnull NSString *)message withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGLogPrinter::printWarning, first argument should be an instance of LGLogPrinterImpl", nil);
    }
    LGLogPrinterImpl *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGLogPrinterImpl::printWarning, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    [currentInstanceObj printWarning:message];

}

/**
 *Print messages from APDU comand interpretation loop
 *@param message, string
 */
RCT_REMAP_METHOD(printApdu,printApdu:(NSDictionary *)currentInstance withParams:(nonnull NSString *)message withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGLogPrinter::printApdu, first argument should be an instance of LGLogPrinterImpl", nil);
    }
    LGLogPrinterImpl *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGLogPrinterImpl::printApdu, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    [currentInstanceObj printApdu:message];

}

/**
 *Print critical errors causing a core dump or error from which recovery is impossible
 *@param message, string
 */
RCT_REMAP_METHOD(printCriticalError,printCriticalError:(NSDictionary *)currentInstance withParams:(nonnull NSString *)message withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGLogPrinter::printCriticalError, first argument should be an instance of LGLogPrinterImpl", nil);
    }
    LGLogPrinterImpl *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGLogPrinterImpl::printCriticalError, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    [currentInstanceObj printCriticalError:message];

}

/**
 *Get context in which printer is executed (print)
 *@return ExecutionContext object
 */
RCT_REMAP_METHOD(getContext,getContext:(NSDictionary *)currentInstance WithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {
    if (!currentInstance[@"uid"] || !currentInstance[@"type"])
    {
        reject(@"impl_call_error", @"Error while calling RCTCoreLGLogPrinter::getContext, first argument should be an instance of LGLogPrinterImpl", nil);
    }
    LGLogPrinterImpl *currentInstanceObj = [self.objcImplementations objectForKey:currentInstance[@"uid"]];
    if (!currentInstanceObj)
    {
        NSString *error = [NSString stringWithFormat:@"Error while calling LGLogPrinterImpl::getContext, instance of uid %@ not found", currentInstance[@"uid"]];
        reject(@"impl_call_error", error, nil);
    }
    id<LGExecutionContext> objcResult = [currentInstanceObj getContext];

    NSString *uuid = [[NSUUID UUID] UUIDString];
     RCTCoreLGExecutionContext *rctImpl = (RCTCoreLGExecutionContext *)[self.bridge moduleForName:@"CoreLGExecutionContext"];
    [rctImpl.objcImplementations setObject:objcResult forKey:uuid];

    NSDictionary *result = @{@"type" : @"CoreLGExecutionContext", @"uid" : uuid };

    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGLogPrinterImpl::getContext", nil);
    }

}
@end
