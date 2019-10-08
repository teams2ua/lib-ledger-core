#pragma once

#include <chrono>
#include <memory>

#include "wallet/common/OperationQuery.h"

#include "soci.h"

namespace ledger {
    namespace core {
        namespace api {
            class ExecutionContext;
            class QueryFilter;
        }

        class DatabaseSessionPool;

        class ERC20OperationQuery : public OperationQuery {
        public:
            ERC20OperationQuery(const std::shared_ptr<api::QueryFilter>& headFilter,
                                const std::shared_ptr<DatabaseSessionPool>& pool,
                                const std::shared_ptr<api::ExecutionContext>& context,
                                const std::shared_ptr<api::ExecutionContext>& mainContext);
        protected:
            virtual soci::rowset<soci::row> performExecute(soci::session &sql);
        };
    }
}
