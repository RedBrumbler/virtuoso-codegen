// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaException
  class AndroidJavaException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AndroidJavaException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaException*, "UnityEngine", "AndroidJavaException");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AndroidJavaException
  // [TokenAttribute] Offset: FFFFFFFF
  class AndroidJavaException : public ::System::Exception {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String mJavaStackTrace
    // Size: 0x8
    // Offset: 0x88
    ::StringW mJavaStackTrace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return mJavaStackTrace;
    }
    // Get instance field reference: private System.String mJavaStackTrace
    ::StringW& dyn_mJavaStackTrace();
    // System.Void .ctor(System.String message, System.String javaStackTrace)
    // Offset: 0x12740A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaException* New_ctor(::StringW message, ::StringW javaStackTrace) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaException*, creationType>(message, javaStackTrace)));
    }
    // public override System.String get_StackTrace()
    // Offset: 0x12779B8
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_StackTrace()
    ::StringW get_StackTrace();
  }; // UnityEngine.AndroidJavaException
  #pragma pack(pop)
  static check_size<sizeof(AndroidJavaException), 136 + sizeof(::StringW)> __UnityEngine_AndroidJavaExceptionSizeCheck;
  static_assert(sizeof(AndroidJavaException) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AndroidJavaException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaException::get_StackTrace
// Il2CppName: get_StackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AndroidJavaException::*)()>(&UnityEngine::AndroidJavaException::get_StackTrace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaException*), "get_StackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
