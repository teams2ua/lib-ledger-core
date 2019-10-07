#pragma once

#include <string>

#include <math/BigInt.h>
#include <utils/Option.hpp>
#include <wallet/common/Block.h>
#include <api/TezosOperationTag.hpp>

namespace ledger {
    namespace core {

        struct TezosLikeBlockchainExplorerOriginatedAccount {
            std::string address;
            bool spendable = false;
            bool delegatable = false;
        };

        struct TezosLikeBlockchainExplorerTransaction {
            std::string hash;
            std::chrono::system_clock::time_point receivedAt;
            BigInt value;
            BigInt fees;
            BigInt gas_limit;
            BigInt storage_limit;
            std::string receiver;
            std::string sender;
            Option<Block> block;
            uint64_t confirmations = 0;
            api::TezosOperationTag type = api::TezosOperationTag::OPERATION_TAG_NONE;
            Option<std::string> publicKey;
            Option<TezosLikeBlockchainExplorerOriginatedAccount> originatedAccount;
        };

    }
}

