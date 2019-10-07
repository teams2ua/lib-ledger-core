#pragma once

#include <string>
#include <chrono>
#include <vector>

#include <math/BigInt.h>
#include <utils/Option.hpp>


namespace ledger {
    namespace core {
        struct BitcoinLikeBlockchainExplorerInput {
            uint64_t index;
            Option<BigInt> value;
            Option<std::string> previousTxHash;
            Option<uint32_t> previousTxOutputIndex;
            Option<std::string> address;
            Option<std::string> signatureScript;
            Option<std::string> coinbase;
            uint32_t sequence = 0xFFFFFFFF;
        };

        struct BitcoinLikeBlockchainExplorerOutput {
            uint64_t index;
            std::string transactionHash;
            BigInt value;
            Option<std::string> address;
            std::string script;
            std::string time;
            Option<uint64_t> blockHeight;
        };

        struct BitcoinLikeBlockchainExplorerTransaction {
            uint32_t  version = -1;
            std::string hash;
            std::chrono::system_clock::time_point receivedAt;
            uint64_t lockTime;
            Option<Block> block;
            std::vector<BitcoinLikeBlockchainExplorerInput> inputs;
            std::vector<BitcoinLikeBlockchainExplorerOutput> outputs;
            Option<BigInt> fees;
            uint64_t confirmations = -1;
        };
    }
}
