// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tuples.djinni

#include "EstimatedSize.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

EstimatedSize::EstimatedSize() = default;

EstimatedSize::~EstimatedSize() = default;

auto EstimatedSize::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<EstimatedSize>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.Min)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.Max)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto EstimatedSize::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 3);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<EstimatedSize>::get();
    return {::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_Min)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_Max))};
}

}  // namespace djinni_generated
