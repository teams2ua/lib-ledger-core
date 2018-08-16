// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "WalletCallback.hpp"  // my header
#include "Error.hpp"
#include "Marshal.hpp"
#include "Wallet.hpp"

namespace djinni_generated {

WalletCallback::WalletCallback() : ::djinni::JniInterface<::ledger::core::api::WalletCallback, WalletCallback>() {}

WalletCallback::~WalletCallback() = default;

WalletCallback::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

WalletCallback::JavaProxy::~JavaProxy() = default;

void WalletCallback::JavaProxy::onCallback(const std::shared_ptr<::ledger::core::api::Wallet> & c_result, const std::experimental::optional<::ledger::core::api::Error> & c_error) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::WalletCallback>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onCallback,
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni_generated::Wallet>::fromCpp(jniEnv, c_result)),
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni_generated::Error>::fromCpp(jniEnv, c_error)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated
