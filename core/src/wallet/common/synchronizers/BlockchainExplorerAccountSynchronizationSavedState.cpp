#pragma once

#include "wallet/common/synchronizers/BlockchainExplorerAccountSynchronizationSavedState.h"
#include "cereal/types/vector.hpp"
#include "cereal/types/map.hpp"
#include "cereal/types/string.hpp"
#include "utils/Serialization.hpp"

namespace ledger {
    namespace core {

        template<class Archive>
        void serialize(Archive & archive, BlockchainExplorerAccountSynchronizationBatchSavedState& state) {
            archive(state.blockHash, state.blockHeight);
        };

        template<class Archive>
        void serialize(Archive & archive, BlockchainExplorerAccountSynchronizationSavedState& state)
        {
            //archive(state.halfBatchSize, state.batches, state.pendingTxsHash); // serialize things by passing them to the archive
            archive(5);
        }

        Option<BlockchainExplorerAccountSynchronizationSavedState> parseState(const std::vector<uint8_t>& data) {
            return getObject<BlockchainExplorerAccountSynchronizationSavedState>(data);
        }

        std::vector<uint8_t> serializeState(const BlockchainExplorerAccountSynchronizationSavedState& state) {
            return putObject(state);
        }
    }
}