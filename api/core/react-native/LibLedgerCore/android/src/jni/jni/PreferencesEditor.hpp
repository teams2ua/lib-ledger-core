// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from preferences.djinni

#ifndef DJINNI_GENERATED_PREFERENCESEDITOR_HPP_JNI_
#define DJINNI_GENERATED_PREFERENCESEDITOR_HPP_JNI_

#include "../../api/PreferencesEditor.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class PreferencesEditor final : ::djinni::JniInterface<::ledger::core::api::PreferencesEditor, PreferencesEditor> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::PreferencesEditor>;
    using CppOptType = std::shared_ptr<::ledger::core::api::PreferencesEditor>;
    using JniType = jobject;

    using Boxed = PreferencesEditor;

    ~PreferencesEditor();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<PreferencesEditor>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<PreferencesEditor>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    PreferencesEditor();
    friend ::djinni::JniClass<PreferencesEditor>;
    friend ::djinni::JniInterface<::ledger::core::api::PreferencesEditor, PreferencesEditor>;

};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_PREFERENCESEDITOR_HPP_JNI_
