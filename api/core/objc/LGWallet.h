// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#import "LGAccountCreationInfo.h"
#import "LGCurrency.h"
#import "LGExtendedKeyAccountCreationInfo.h"
#import "LGWalletType.h"
#import <Foundation/Foundation.h>
@class LGBitcoinLikeWallet;
@class LGEventBus;
@class LGLogger;
@class LGPreferences;
@protocol LGAccountCallback;
@protocol LGAccountCreationInfoCallback;
@protocol LGAccountListCallback;
@protocol LGBlockCallback;
@protocol LGExtendedKeyAccountCreationInfoCallback;
@protocol LGI32Callback;


/**Class representing a wallet */
@interface LGWallet : NSObject

/**
 *Get name of wallet
 *@return string
 */
- (nonnull NSString *)getName;

/**
 *Get account with specific index
 *@param index, 32 bits integer, index of account in wallet
 *@param callback, Callback returning, if getAccount succeed, an Account object with given index
 */
- (void)getAccount:(int32_t)index
          callback:(nullable id<LGAccountCallback>)callback;

/**
 *Get number of accounts instanciated under wallet
 *@param callback, Callback returning, if getAccountCount succeed, a 32 bits integer representing number of accounts
 */
- (void)getAccountCount:(nullable id<LGI32Callback>)callback;

/**
 *Get list of accounts instanciated under wallet in a given range
 *@param offset, 32 bits integer from which we retrieve accounts
 *@param count, 32 bits integer, number of accounts to retrieve
 *@param callback, ListCallback returning, if getAccounts succeed, list of Accounts object
 */
- (void)getAccounts:(int32_t)offset
              count:(int32_t)count
           callback:(nullable id<LGAccountListCallback>)callback;

/**
 *Get index of next account to create
 *@return callback, Callback returning a 32 bits integer
 */
- (void)getNextAccountIndex:(nullable id<LGI32Callback>)callback;

/**
 *Return event bus through which wallet synchronizes it's accounts and interact with blockchain
 *@return EventBus object
 */
- (nullable LGEventBus *)getEventBus;

/**
 *Return synchronization status wallet, true if at least one of accounts is synchronizing
 *@return bool
 */
- (BOOL)isSynchronizing;

/**
 *Start synchronization of all accounts under wallet
 *@return EventBus object through which wallet get notified of account's synchronization status
 */
- (nullable LGEventBus *)synchronize;

/**
 *Get wallet preferences
 *@return Preferences object
 */
- (nullable LGPreferences *)getPreferences;

/**
 *Return account's logger which provides all needed (e.g. database) logs
 *@return Logger Object
 */
- (nullable LGLogger *)getLogger;

/**
 *Get preferences of specific account
 *@param index, 32 bits integer, account's index
 *@return Preferences object
 */
- (nullable LGPreferences *)getAccountPreferences:(int32_t)index;

/**
 * asBitcoinLikeWallet(): Callback<BitcoinLikeWallet>;
 * asEthereumLikeWallet(): Callback<EthereumLikeWallet>;
 * asRippleLikeWallet(): Callback<RippleLikeWallet>;
 *Convert wallet to a Bitcoin one
 *@return BitcoinWallet object
 */
- (nullable LGBitcoinLikeWallet *)asBitcoinLikeWallet;

/**
 *Get currency of wallet
 *@return Currency object
 */
- (nonnull LGCurrency *)getCurrency;

/**
 *Know if wallet is a Bitcoin one
 *@return bool
 */
- (BOOL)isInstanceOfBitcoinLikeWallet;

/**
 *Know if wallet is a Ethereum one
 *@return bool
 */
- (BOOL)isInstanceOfEthereumLikeWallet;

/**
 *Know if wallet is a Ripple one
 *@return bool
 */
- (BOOL)isInstanceOfRippleLikeWallet;

/**
 *Get wallet type
 *@return WalletType object
 */
- (LGWalletType)getWalletType;

/**
 *Get last block of blockchain the wallet operates on
 *@param callback, Callback returning a Block object
 */
- (void)getLastBlock:(nullable id<LGBlockCallback>)callback;

/**
 *Return infos about the creation of specific account
 *@param accountIndex, 32 bits account, index of account in wallet
 *@param callback, Callback returning an AccountCreationInfo
 */
- (void)getAccountCreationInfo:(int32_t)accountIndex
                      callback:(nullable id<LGAccountCreationInfoCallback>)callback;

/**TODO */
- (void)getExtendedKeyAccountCreationInfo:(int32_t)accountIndex
                                 callback:(nullable id<LGExtendedKeyAccountCreationInfoCallback>)callback;

/**
 *Return infos about the next created account
 *@param callback, Callback returning an AccountCreationInfo
 */
- (void)getNextAccountCreationInfo:(nullable id<LGAccountCreationInfoCallback>)callback;

/**TODO */
- (void)getNextExtendedKeyAccountCreationInfo:(nullable id<LGExtendedKeyAccountCreationInfoCallback>)callback;

/**
 *Get account from given account creation infos
 *@param accountCreationInfo, AccountCreationInfo object
 *@param callback, Callback returning an Account object with given creation infos
 */
- (void)newAccountWithInfo:(nonnull LGAccountCreationInfo *)accountCreationInfo
                  callback:(nullable id<LGAccountCallback>)callback;

/**TODO */
- (void)newAccountWithExtendedKeyInfo:(nonnull LGExtendedKeyAccountCreationInfo *)extendedKeyAccountCreationInfo
                             callback:(nullable id<LGAccountCallback>)callback;

/**
 *Erase data (in user's DB) relative to wallet since given date
 *@param date, start date of data deletion
 */
- (void)eraseDataSince:(nonnull NSDate *)date;

@end
