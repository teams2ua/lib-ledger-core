#pragma once

#include <string>
#include <vector>
#include "api/OperationType.hpp"
#include "math/BigInt.h"
#include "utils/Option.hpp"
#include "wallet/common/Block.h"

namespace ledger {
    namespace core {

        struct ERC20Transaction {
            std::string from;
            std::string to;
            std::string contractAddress;
            BigInt value;
            api::OperationType type;
        };

        struct InternalTx {
            std::string from;
            std::string to;
            BigInt value;
            BigInt gasLimit;
            Option<BigInt> gasUsed;
            api::OperationType type;
            std::vector<uint8_t> inputData;
        };

        struct EthereumLikeBlockchainExplorerTransaction {
            std::string hash;
            std::chrono::system_clock::time_point receivedAt;
            BigInt value;
            BigInt gasPrice;
            BigInt gasLimit;
            Option<BigInt> gasUsed;
            std::string receiver;
            std::string sender;
            uint64_t nonce = 0;
            Option<Block> block;
            uint64_t confirmations = 0;
            std::vector<uint8_t> inputData;
            uint64_t status = 0;
            std::vector<InternalTx> internalTransactions;
            std::vector<ERC20Transaction> erc20Transactions;
        };
    }
}