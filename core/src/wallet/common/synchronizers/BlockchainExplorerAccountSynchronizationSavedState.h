#pragma once

#include <map>
#include <string>
#include <vector>
#include "utils/Option.hpp"

namespace ledger {
    namespace core {

        struct BlockchainExplorerAccountSynchronizationBatchSavedState {
            std::string blockHash;
            uint32_t blockHeight = 0;
        };

        struct BlockchainExplorerAccountSynchronizationSavedState {
            uint32_t halfBatchSize = 0;
            std::vector<BlockchainExplorerAccountSynchronizationBatchSavedState> batches;
            std::map<std::string, std::string> pendingTxsHash;
        };
        Option<BlockchainExplorerAccountSynchronizationSavedState> parseState(const std::vector<uint8_t>& data);
        std::vector<uint8_t> serializeState(const BlockchainExplorerAccountSynchronizationSavedState& state);
    }
}