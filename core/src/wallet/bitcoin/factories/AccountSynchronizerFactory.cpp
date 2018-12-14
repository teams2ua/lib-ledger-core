#pragma once

#include <memory>
#include <wallet/bitcoin/factories/AccountSynchronizerFactory.hpp>
#include <wallet/common/AccountSynchronizer.hpp>
#include <wallet/Keychain.hpp>

namespace ledger {
    namespace core {
        namespace bitcoin {
            AccountSynchronizerFactory::AccountSynchronizerFactory(
                std::shared_ptr<api::ExecutionContext> executionContext,
                std::shared_ptr<ExplorerV2<BitcoinLikeNetwork>> explorer,
                const BitcoinLikeNetwork::Block& genesisBlock)
            : _executionContext(executionContext)
            , _explorer(explorer)
            , _genesisBlock(genesisBlock) {

            }

            std::shared_ptr<core::AccountSynchronizer<BitcoinLikeNetwork>> AccountSynchronizerFactory::createAccountSynchronizer(
                const std::shared_ptr<api::ExecutionContext>& executionContext,
                const std::shared_ptr<ExplorerV2<BitcoinLikeNetwork>>& explorer,
                const std::shared_ptr<BlockchainDatabase<BitcoinLikeNetwork>>& stableBlocksDb,
                const std::shared_ptr<BlockchainDatabase<BitcoinLikeNetwork>>& unstableBlocksDb,
                const std::shared_ptr<BlockchainDatabase<BitcoinLikeNetwork>>& pendingTransactionsDb,
                const std::shared_ptr<Keychain>& receiveKeychain,
                const std::shared_ptr<Keychain>& changeKeychain,
                const std::shared_ptr<spdlog::logger>& logger,
                uint32_t numberOfUnrevertableBlocks,
                uint32_t maxNumberOfAddressesInRequest,
                uint32_t discoveryGapSize) {
                common::SynchronizerConfiguration config(numberOfUnrevertableBlocks, maxNumberOfAddressesInRequest, discoveryGapSize, 200, _genesisBlock.hash);
                return std::make_shared<common::AccountSynchronizer<BitcoinLikeNetwork>>(
                    _executionContext,
                    _explorer,
                    stableBlocksDb,
                    unstableBlocksDb,
                    pendingTransactionsDb,
                    receiveKeychain,
                    changeKeychain,
                    logger,
                    config);
            };
        }
    }
}