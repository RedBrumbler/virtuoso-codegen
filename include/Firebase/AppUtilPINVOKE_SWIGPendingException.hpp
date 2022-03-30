// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.AppUtilPINVOKE
#include "Firebase/AppUtilPINVOKE.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::AppUtilPINVOKE::SWIGPendingException);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::AppUtilPINVOKE::SWIGPendingException*, "Firebase", "AppUtilPINVOKE/SWIGPendingException");
// Type namespace: Firebase
namespace Firebase {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.AppUtilPINVOKE/Firebase.SWIGPendingException
  // [TokenAttribute] Offset: FFFFFFFF
  class AppUtilPINVOKE::SWIGPendingException : public ::Il2CppObject {
    public:
    // Get static field: static private System.Exception pendingException
    static ::System::Exception* _get_pendingException();
    // Set static field: static private System.Exception pendingException
    static void _set_pendingException(::System::Exception* value);
    // Get static field: static private System.Int32 numExceptionsPending
    static int _get_numExceptionsPending();
    // Set static field: static private System.Int32 numExceptionsPending
    static void _set_numExceptionsPending(int value);
    // static public System.Boolean get_Pending()
    // Offset: 0x1294388
    static bool get_Pending();
    // static public System.Void Set(System.Exception e)
    // Offset: 0x129D9AC
    static void Set(::System::Exception* e);
    // static public System.Exception Retrieve()
    // Offset: 0x12943F4
    static ::System::Exception* Retrieve();
  }; // Firebase.AppUtilPINVOKE/Firebase.SWIGPendingException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::AppUtilPINVOKE::SWIGPendingException::get_Pending
// Il2CppName: get_Pending
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Firebase::AppUtilPINVOKE::SWIGPendingException::get_Pending)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::AppUtilPINVOKE::SWIGPendingException*), "get_Pending", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::AppUtilPINVOKE::SWIGPendingException::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*)>(&Firebase::AppUtilPINVOKE::SWIGPendingException::Set)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::AppUtilPINVOKE::SWIGPendingException*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: Firebase::AppUtilPINVOKE::SWIGPendingException::Retrieve
// Il2CppName: Retrieve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&Firebase::AppUtilPINVOKE::SWIGPendingException::Retrieve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::AppUtilPINVOKE::SWIGPendingException*), "Retrieve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};