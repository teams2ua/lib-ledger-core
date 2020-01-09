// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKESIGNATURE_HPP_JNI_
#define DJINNI_GENERATED_BITCOINLIKESIGNATURE_HPP_JNI_

#include "../../api/BitcoinLikeSignature.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class BitcoinLikeSignature final {
public:
    using CppType = ::ledger::core::api::BitcoinLikeSignature;
    using JniType = jobject;

    using Boxed = BitcoinLikeSignature;

    ~BitcoinLikeSignature();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    BitcoinLikeSignature();
    friend ::djinni::JniClass<BitcoinLikeSignature>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("co/ledger/core/BitcoinLikeSignature") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "([B[B[B)V") };
    const jfieldID field_r { ::djinni::jniGetFieldID(clazz.get(), "r", "[B") };
    const jfieldID field_s { ::djinni::jniGetFieldID(clazz.get(), "s", "[B") };
    const jfieldID field_v { ::djinni::jniGetFieldID(clazz.get(), "v", "[B") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_BITCOINLIKESIGNATURE_HPP_JNI_
