#include "wallet/ethereum/ERC20/ERC20OperationQuery.h"

#include "database/soci-number.h"
#include "database/DatabaseSessionPool.hpp"

#include "api/ExecutionContext.hpp"
#include "api/QueryFilter.hpp"

namespace ledger {
    namespace core {
            ERC20OperationQuery::ERC20OperationQuery(
                                const std::shared_ptr<api::QueryFilter>& headFilter,
                                const std::shared_ptr<DatabaseSessionPool>& pool,
                                const std::shared_ptr<api::ExecutionContext>& context,
                                const std::shared_ptr<api::ExecutionContext>& mainContext) : OperationQuery(headFilter, pool, context, mainContext) {

            };
            soci::rowset<soci::row> ERC20OperationQuery::performExecute(soci::session &sql) {
                return _builder.select("o.account_uid, o.uid, o.wallet_uid, o.type, o.date, o.senders, o.recipients,"
                                                "o.amount, o.fees, o.currency_name, o.trust, b.hash, b.height, b.time, e.uid"
                                )
                                .from("operations").to("o")
                                .outerJoin("blocks AS b", "o.block_uid = b.uid")
                                .outerJoin("erc20_operations AS e", "o.uid = e.ethereum_operation_uid")
                                .execute(sql);
            };
    }
}
