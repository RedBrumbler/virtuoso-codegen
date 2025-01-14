// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Voice.Core.Bindings.Interfaces.IConnection
#include "Oculus/Voice/Core/Bindings/Interfaces/IConnection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaObject
  class AndroidJavaObject;
}
// Completed forward declares
// Type namespace: Oculus.Voice.Core.Bindings.Android
namespace Oculus::Voice::Core::Bindings::Android {
  // Forward declaring type: AndroidServiceConnection
  class AndroidServiceConnection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*, "Oculus.Voice.Core.Bindings.Android", "AndroidServiceConnection");
// Type namespace: Oculus.Voice.Core.Bindings.Android
namespace Oculus::Voice::Core::Bindings::Android {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection
  // [TokenAttribute] Offset: FFFFFFFF
  class AndroidServiceConnection : public ::Il2CppObject/*, public ::Oculus::Voice::Core::Bindings::Interfaces::IConnection*/ {
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
    // private UnityEngine.AndroidJavaObject mAssistantServiceConnection
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AndroidJavaObject* mAssistantServiceConnection;
    // Field size check
    static_assert(sizeof(::UnityEngine::AndroidJavaObject*) == 0x8);
    // private System.String serviceFragmentClass
    // Size: 0x8
    // Offset: 0x18
    ::StringW serviceFragmentClass;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String serviceGetter
    // Size: 0x8
    // Offset: 0x20
    ::StringW serviceGetter;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Voice::Core::Bindings::Interfaces::IConnection
    operator ::Oculus::Voice::Core::Bindings::Interfaces::IConnection() noexcept {
      return *reinterpret_cast<::Oculus::Voice::Core::Bindings::Interfaces::IConnection*>(this);
    }
    // Get instance field reference: private UnityEngine.AndroidJavaObject mAssistantServiceConnection
    ::UnityEngine::AndroidJavaObject*& dyn_mAssistantServiceConnection();
    // Get instance field reference: private System.String serviceFragmentClass
    ::StringW& dyn_serviceFragmentClass();
    // Get instance field reference: private System.String serviceGetter
    ::StringW& dyn_serviceGetter();
    // public System.Boolean get_IsConnected()
    // Offset: 0x13063A8
    bool get_IsConnected();
    // public UnityEngine.AndroidJavaObject get_AssistantServiceConnection()
    // Offset: 0x13063B8
    ::UnityEngine::AndroidJavaObject* get_AssistantServiceConnection();
    // public System.Void .ctor(System.String serviceFragmentClassName, System.String serviceGetterMethodName)
    // Offset: 0x13063C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidServiceConnection* New_ctor(::StringW serviceFragmentClassName, ::StringW serviceGetterMethodName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidServiceConnection*, creationType>(serviceFragmentClassName, serviceGetterMethodName)));
    }
    // public System.Void Connect()
    // Offset: 0x13063F8
    void Connect();
    // public System.Void Disconnect()
    // Offset: 0x1306688
    void Disconnect();
    // public UnityEngine.AndroidJavaObject GetService()
    // Offset: 0x1306784
    ::UnityEngine::AndroidJavaObject* GetService();
  }; // Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection
  #pragma pack(pop)
  static check_size<sizeof(AndroidServiceConnection), 32 + sizeof(::StringW)> __Oculus_Voice_Core_Bindings_Android_AndroidServiceConnectionSizeCheck;
  static_assert(sizeof(AndroidServiceConnection) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::get_IsConnected
// Il2CppName: get_IsConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::*)()>(&Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::get_IsConnected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*), "get_IsConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::get_AssistantServiceConnection
// Il2CppName: get_AssistantServiceConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::*)()>(&Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::get_AssistantServiceConnection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*), "get_AssistantServiceConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::*)()>(&Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::Connect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::*)()>(&Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::Disconnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::GetService
// Il2CppName: GetService
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::*)()>(&Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::GetService)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*), "GetService", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
