// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#include "PoolConfiguration.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

PoolConfiguration::PoolConfiguration() : ::djinni::JniInterface<::ledger::core::api::PoolConfiguration, PoolConfiguration>("co/ledger/core/PoolConfiguration$CppProxy") {}

PoolConfiguration::~PoolConfiguration() = default;


CJNIEXPORT void JNICALL Java_co_ledger_core_PoolConfiguration_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::PoolConfiguration>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
