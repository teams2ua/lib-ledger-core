// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#import "LGWalletType.h"
#import <Foundation/Foundation.h>
@class LGAmount;
@class LGEventBus;
@class LGLogger;
@class LGOperationQuery;
@class LGPreferences;
@protocol LGAmountCallback;
@protocol LGBlockCallback;
@protocol LGStringListCallback;

/**
 *Key of the synchronization duration time in the synchronize event payload.
 *The value is stored in a int 64 time expressed in miliseconds.
 */
extern NSString * __nonnull const LGAccountEVSYNCDURATIONMS;
/**Key of the synchronization error code. The code is a stringified version of the value in the ErrorCode enum. */
extern NSString * __nonnull const LGAccountEVSYNCERRORCODE;
/**Key of the synchronization error message. The message is stored as a string. */
extern NSString * __nonnull const LGAccountEVSYNCERRORMESSAGE;
/**TODO */
extern NSString * __nonnull const LGAccountEVNEWBLOCKCURRENCYNAME;
extern NSString * __nonnull const LGAccountEVNEWBLOCKHASH;
extern NSString * __nonnull const LGAccountEVNEWBLOCKHEIGHT;
/**TODO */
extern NSString * __nonnull const LGAccountEVNEWOPWALLETNAME;
extern NSString * __nonnull const LGAccountEVNEWOPACCOUNTINDEX;
extern NSString * __nonnull const LGAccountEVNEWOPUID;

/**Class representing an account */
@interface LGAccount : NSObject

/**
 *Get index of account in user's wallet
 *32 bits integer
 */
- (int32_t)getIndex;

/**TODO */
- (nullable LGOperationQuery *)queryOperations;

/**
 *Get balance of account
 *@param callback, if getBalacne, Callback returning an Amount object which represents account's balance
 */
- (void)getBalance:(nullable id<LGAmountCallback>)callback;

/**
 *Get synchronization status of account
 *@return bool
 */
- (BOOL)isSynchronizing;

/**
 *Start synchronization of account
 *@return EventBus, handler will be notified of synchronization outcome
 */
- (nullable LGEventBus *)synchronize;

/**
 *Return account's preferences
 *@return Preferences object
 */
- (nullable LGPreferences *)getPreferences;

/**
 *Return account's logger which provides all needed (e.g. database) logs
 *@return Logger Object
 */
- (nullable LGLogger *)getLogger;

/**
 *Return preferences of specific operation
 *@param uid, string of operation id
 *@return Preferences
 *Return operation for a specific operation
 *@param uid, string of operation id
 */
- (nullable LGPreferences *)getOperationPreferences:(nonnull NSString *)uid;

/**
 * asBitcoinLikeAccount(): Callback<BitcoinLikeAccount>;
 * asEthereumLikeAccount(): Callback<EthereumLikeAccount>;
 * asRippleLikeAccount(): Callback<RippleLikeAccount>;
 *Check if account is a Bitcoin one
 *@return bool
 */
- (BOOL)isInstanceOfBitcoinLikeAccount;

/**
 *Check if account is an Ethereum one
 *@return bool
 */
- (BOOL)isInstanceOfEthereumLikeAccount;

/**
 *Check if account is a Ripple one
 *@return bool
 */
- (BOOL)isInstanceOfRippleLikeAccount;

/**TODO */
- (void)getFreshPublicAddresses:(nullable id<LGStringListCallback>)callback;

/**
 *Get type of wallet to which account belongs
 *@return WalletType object
 */
- (LGWalletType)getWalletType;

/**
 *Get event bus through which account is notified on synchronization status
 *@return EventBus object
 */
- (nullable LGEventBus *)getEventBus;

/**Start observing blockchain on which account synchronizes and send/receive transactions */
- (void)startBlockchainObservation;

/**Stop observing blockchain */
- (void)stopBlockchainObservation;

/**
 *Get account's observation status
 *@return boolean
 */
- (BOOL)isObservingBlockchain;

/**
 *Get Last block of blockchain on which account operates
 *@param callback, Callback returning, if getLastBlock succeeds, a Block object
 */
- (void)getLastBlock:(nullable id<LGBlockCallback>)callback;

/**
 *Compute fees of transaction with a given amount, priority, data ...
 *@param amount, Amount object
 *@param priority, 32 bits integer priority under which transaction will be proccessed
 *@param recipients, list of string representing recipients of transaction
 *@param data, list of bytes, data that transaction is holding
 *@param callback, Callback returning, if computeFees succeed, an Amount Object
 */
- (void)computeFees:(nullable LGAmount *)amount
           priority:(int32_t)priority
         recipients:(nonnull NSArray<NSString *> *)recipients
               data:(nonnull NSArray<NSData *> *)data
           callback:(nullable id<LGAmountCallback>)callback;

@end