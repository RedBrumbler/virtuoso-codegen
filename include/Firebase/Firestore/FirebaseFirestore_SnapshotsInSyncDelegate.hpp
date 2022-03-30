// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Firestore.FirebaseFirestore
#include "Firebase/Firestore/FirebaseFirestore.hpp"
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
NEED_NO_BOX(::Firebase::Firestore::FirebaseFirestore::SnapshotsInSyncDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirebaseFirestore::SnapshotsInSyncDelegate*, "Firebase.Firestore", "FirebaseFirestore/SnapshotsInSyncDelegate");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.FirebaseFirestore/Firebase.Firestore.SnapshotsInSyncDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class FirebaseFirestore::SnapshotsInSyncDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xC3838C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseFirestore::SnapshotsInSyncDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::FirebaseFirestore::SnapshotsInSyncDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseFirestore::SnapshotsInSyncDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Int32 callbackId)
    // Offset: 0xC426B8
    void Invoke(int callbackId);
    // public System.IAsyncResult BeginInvoke(System.Int32 callbackId, System.AsyncCallback callback, System.Object object)
    // Offset: 0xC428E4
    ::System::IAsyncResult* BeginInvoke(int callbackId, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xC4296C
    void EndInvoke(::System::IAsyncResult* result);
  }; // Firebase.Firestore.FirebaseFirestore/Firebase.Firestore.SnapshotsInSyncDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::FirebaseFirestore::SnapshotsInSyncDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::FirebaseFirestore::SnapshotsInSyncDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::FirebaseFirestore::SnapshotsInSyncDelegate::*)(int)>(&Firebase::Firestore::FirebaseFirestore::SnapshotsInSyncDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* callbackId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirebaseFirestore::SnapshotsInSyncDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callbackId});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FirebaseFirestore::SnapshotsInSyncDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Firebase::Firestore::FirebaseFirestore::SnapshotsInSyncDelegate::*)(int, ::System::AsyncCallback*, ::Il2CppObject*)>(&Firebase::Firestore::FirebaseFirestore::SnapshotsInSyncDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* callbackId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirebaseFirestore::SnapshotsInSyncDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callbackId, callback, object});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FirebaseFirestore::SnapshotsInSyncDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::FirebaseFirestore::SnapshotsInSyncDelegate::*)(::System::IAsyncResult*)>(&Firebase::Firestore::FirebaseFirestore::SnapshotsInSyncDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirebaseFirestore::SnapshotsInSyncDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};