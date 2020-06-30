// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "CosmosLikeValidatorListCallback.hpp"  // my header
#include "CosmosLikeValidator.hpp"
#include "Error.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

CosmosLikeValidatorListCallback::CosmosLikeValidatorListCallback() : ::djinni::JniInterface<::ledger::core::api::CosmosLikeValidatorListCallback, CosmosLikeValidatorListCallback>() {}

CosmosLikeValidatorListCallback::~CosmosLikeValidatorListCallback() = default;

CosmosLikeValidatorListCallback::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

CosmosLikeValidatorListCallback::JavaProxy::~JavaProxy() = default;

void CosmosLikeValidatorListCallback::JavaProxy::onCallback(const std::experimental::optional<std::vector<::ledger::core::api::CosmosLikeValidator>> & c_result, const std::experimental::optional<::ledger::core::api::Error> & c_error) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::CosmosLikeValidatorListCallback>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onCallback,
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni::List<::djinni_generated::CosmosLikeValidator>>::fromCpp(jniEnv, c_result)),
                           ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni_generated::Error>::fromCpp(jniEnv, c_error)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated