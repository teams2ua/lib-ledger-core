#pragma once

#include <string>

#include <api/RippleLikeMemo.hpp>
#include <math/BigInt.h>
#include <utils/Option.hpp>
#include <wallet/common/Block.h>

namespace ledger {
    namespace core {

        struct RippleLikeBlockchainExplorerTransaction {
            std::string hash;
            std::chrono::system_clock::time_point receivedAt;
            BigInt value;
            BigInt fees;
            BigInt sequence;
            std::string receiver;
            std::string sender;
            Option<Block> block;
            uint64_t confirmations = 0;
            std::vector<api::RippleLikeMemo> memos;
        };
    }
}