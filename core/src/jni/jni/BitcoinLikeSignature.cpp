// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "BitcoinLikeSignature.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

BitcoinLikeSignature::BitcoinLikeSignature() = default;

BitcoinLikeSignature::~BitcoinLikeSignature() = default;

auto BitcoinLikeSignature::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<BitcoinLikeSignature>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::Binary::fromCpp(jniEnv, c.r)),
                                                           ::djinni::get(::djinni::Binary::fromCpp(jniEnv, c.s)),
                                                           ::djinni::get(::djinni::Binary::fromCpp(jniEnv, c.v)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto BitcoinLikeSignature::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 4);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<BitcoinLikeSignature>::get();
    return {::djinni::Binary::toCpp(jniEnv, (jbyteArray)jniEnv->GetObjectField(j, data.field_r)),
            ::djinni::Binary::toCpp(jniEnv, (jbyteArray)jniEnv->GetObjectField(j, data.field_s)),
            ::djinni::Binary::toCpp(jniEnv, (jbyteArray)jniEnv->GetObjectField(j, data.field_v))};
}

}  // namespace djinni_generated
