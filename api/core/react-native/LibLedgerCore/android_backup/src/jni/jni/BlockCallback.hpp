// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_BLOCKCALLBACK_HPP_JNI_
#define DJINNI_GENERATED_BLOCKCALLBACK_HPP_JNI_

#include "../../api/BlockCallback.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class BlockCallback final : ::djinni::JniInterface<::ledger::core::api::BlockCallback, BlockCallback> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::BlockCallback>;
    using CppOptType = std::shared_ptr<::ledger::core::api::BlockCallback>;
    using JniType = jobject;

    using Boxed = BlockCallback;

    ~BlockCallback();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<BlockCallback>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<BlockCallback>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    BlockCallback();
    friend ::djinni::JniClass<BlockCallback>;
    friend ::djinni::JniInterface<::ledger::core::api::BlockCallback, BlockCallback>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ledger::core::api::BlockCallback
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onCallback(const std::experimental::optional<::ledger::core::api::Block> & result, const std::experimental::optional<::ledger::core::api::Error> & error) override;

    private:
        friend ::djinni::JniInterface<::ledger::core::api::BlockCallback, ::djinni_generated::BlockCallback>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("co/ledger/core/BlockCallback") };
    const jmethodID method_onCallback { ::djinni::jniGetMethodID(clazz.get(), "onCallback", "(Lco/ledger/core/Block;Lco/ledger/core/Error;)V") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_BLOCKCALLBACK_HPP_JNI_
