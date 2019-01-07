// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from erc20.djinni

#ifndef DJINNI_GENERATED_ERC20LIKEOPERATION_HPP
#define DJINNI_GENERATED_ERC20LIKEOPERATION_HPP

#include <chrono>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace ledger { namespace core { namespace api {

class BigInt;
enum class OperationType;

/**Class representing a Ethereum transaction */
class ERC20LikeOperation {
public:
    virtual ~ERC20LikeOperation() {}

    /** Get the hash of the transaction. */
    virtual std::string getHash() = 0;

    /** Get the nonce of the transaction : sequence number issued by originating EOA */
    virtual std::shared_ptr<BigInt> getNonce() = 0;

    /** Get Gas price (in wei) */
    virtual std::shared_ptr<BigInt> getGasPrice() = 0;

    /** Get start gas (in wei) : maximum amount of gas the originator is willing to pay */
    virtual std::shared_ptr<BigInt> getGasLimit() = 0;

    /** Used gas (in wei) : used gas during this transaction */
    virtual std::shared_ptr<BigInt> getUsedGas() = 0;

    /** Get source ETH address */
    virtual std::string getSender() = 0;

    /** Get destination ETH address */
    virtual std::string getReceiver() = 0;

    /** Get amount of ether to send */
    virtual std::shared_ptr<BigInt> getValue() = 0;

    /** Get binary data payload */
    virtual std::vector<uint8_t> getData() = 0;

    /**
     * Get the time when the transaction was issued or the time of the block including
     * this transaction
     */
    virtual std::chrono::system_clock::time_point getTime() = 0;

    /** Get operation type : whether it is a SEND or RECEIVE */
    virtual OperationType getOperationType() = 0;

    /** Get opration status : pending or confirmed */
    virtual int32_t getStatus() = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_ERC20LIKEOPERATION_HPP
