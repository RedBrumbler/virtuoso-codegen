// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.FirebaseApp
#include "Firebase/FirebaseApp.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::FirebaseApp::CreateDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::FirebaseApp::CreateDelegate*, "Firebase", "FirebaseApp/CreateDelegate");
// Type namespace: Firebase
namespace Firebase {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.FirebaseApp/Firebase.CreateDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class FirebaseApp::CreateDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1297108
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseApp::CreateDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::FirebaseApp::CreateDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseApp::CreateDelegate*, creationType>(object, method)));
    }
    // public Firebase.FirebaseApp Invoke()
    // Offset: 0x12991B8
    ::Firebase::FirebaseApp* Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x129DC5C
    ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Firebase.FirebaseApp EndInvoke(System.IAsyncResult result)
    // Offset: 0x129DC88
    ::Firebase::FirebaseApp* EndInvoke(::System::IAsyncResult* result);
  }; // Firebase.FirebaseApp/Firebase.CreateDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::FirebaseApp::CreateDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::FirebaseApp::CreateDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::FirebaseApp* (Firebase::FirebaseApp::CreateDelegate::*)()>(&Firebase::FirebaseApp::CreateDelegate::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp::CreateDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::CreateDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Firebase::FirebaseApp::CreateDelegate::*)(::System::AsyncCallback*, ::Il2CppObject*)>(&Firebase::FirebaseApp::CreateDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp::CreateDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, object});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::CreateDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::FirebaseApp* (Firebase::FirebaseApp::CreateDelegate::*)(::System::IAsyncResult*)>(&Firebase::FirebaseApp::CreateDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp::CreateDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
