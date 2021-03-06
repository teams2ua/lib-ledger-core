/*
 *
 * BlockchainSynchronizer.hpp
 * ledger-core
 *
 * Created by Andrii Korol on 19/11/2018.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ledger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */
#pragma once

#include <memory>

#include <utils/Either.hpp>
#include <events/ProgressNotifier.h>
#include <wallet/NetworkTypes.hpp>
#include <wallet/Explorer.hpp>
#include <wallet/PartialBlockStorage.hpp>

namespace ledger {
    namespace core {
        template<typename NetworkType>
        class AccountSynchronizer : public std::enable_shared_from_this<AccountSynchronizer<NetworkType>> {
        public:
            typedef ExplorerV2<NetworkType> Explorer;
            typedef typename Explorer::TransactionBulk Bulk_;

            AccountSynchronizer(const std::shared_ptr<api::ExecutionContext>& executionContext,
                const std::shared_ptr<Explorer>& explorer)
                : _executionContext(executionContext)
                , _explorer(explorer) {};

            Future<bool> DownloadBlockTransactions(
                const api::ExecutionContext& executionContext,
                const PartialBlockStorage<NetworkType>& storage,
                const std::vector<std::string>& addresses,
                const std::string& blockHash)
            {
                return _explorer
                    ->getTransactions(addresses, blockHash)
                    .flatMap<Future<bool>>(executionContext,
                        [](const std::shared_ptr<Bulk_>& bulk) -> Future<bool> 
                        {
                            if (bulk->first.size() > 0)
                            {

                            }
                            return 0;
                        });
            }
        private:
            std::shared_ptr<api::ExecutionContext> _executionContext;
            std::shared_ptr<Explorer> _explorer;
        }
    }
}
