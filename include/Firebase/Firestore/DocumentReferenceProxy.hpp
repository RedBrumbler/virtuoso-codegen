// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Runtime.InteropServices.HandleRef
#include "System/Runtime/InteropServices/HandleRef.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: CollectionReferenceProxy
  class CollectionReferenceProxy;
  // Forward declaring type: DocumentSnapshotProxy
  class DocumentSnapshotProxy;
  // Forward declaring type: Source
  struct Source;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: DocumentReferenceProxy
  class DocumentReferenceProxy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::DocumentReferenceProxy);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::DocumentReferenceProxy*, "Firebase.Firestore", "DocumentReferenceProxy");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.DocumentReferenceProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class DocumentReferenceProxy : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // private System.Runtime.InteropServices.HandleRef swigCPtr
    // Size: 0x10
    // Offset: 0x10
    ::System::Runtime::InteropServices::HandleRef swigCPtr;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::HandleRef) == 0x10);
    // protected System.Boolean swigCMemOwn
    // Size: 0x1
    // Offset: 0x20
    bool swigCMemOwn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Runtime.InteropServices.HandleRef swigCPtr
    ::System::Runtime::InteropServices::HandleRef& dyn_swigCPtr();
    // Get instance field reference: protected System.Boolean swigCMemOwn
    bool& dyn_swigCMemOwn();
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    // Offset: 0xC2A7E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DocumentReferenceProxy* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::DocumentReferenceProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DocumentReferenceProxy*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(Firebase.Firestore.DocumentReferenceProxy obj)
    // Offset: 0xC30934
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Firestore::DocumentReferenceProxy* obj);
    // public System.Void Dispose()
    // Offset: 0xC30A10
    void Dispose();
    // public System.String id()
    // Offset: 0xC30C20
    ::StringW id();
    // public System.String path()
    // Offset: 0xC30D5C
    ::StringW path();
    // public Firebase.Firestore.CollectionReferenceProxy Collection(System.String collectionPath)
    // Offset: 0xC30E98
    ::Firebase::Firestore::CollectionReferenceProxy* Collection(::StringW collectionPath);
    // public System.Threading.Tasks.Task`1<Firebase.Firestore.DocumentSnapshotProxy> GetAsync(Firebase.Firestore.Source source)
    // Offset: 0xC31028
    ::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentSnapshotProxy*>* GetAsync(::Firebase::Firestore::Source source);
    // public System.Threading.Tasks.Task DeleteAsync()
    // Offset: 0xC31414
    ::System::Threading::Tasks::Task* DeleteAsync();
    // public System.Boolean is_valid()
    // Offset: 0xC2FCA4
    bool is_valid();
    // protected override System.Void Finalize()
    // Offset: 0xC309A0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Firebase.Firestore.DocumentReferenceProxy
  #pragma pack(pop)
  static check_size<sizeof(DocumentReferenceProxy), 32 + sizeof(bool)> __Firebase_Firestore_DocumentReferenceProxySizeCheck;
  static_assert(sizeof(DocumentReferenceProxy) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::DocumentReferenceProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::DocumentReferenceProxy::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Firestore::DocumentReferenceProxy*)>(&Firebase::Firestore::DocumentReferenceProxy::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "DocumentReferenceProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::DocumentReferenceProxy*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::DocumentReferenceProxy::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::DocumentReferenceProxy::*)()>(&Firebase::Firestore::DocumentReferenceProxy::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::DocumentReferenceProxy*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::DocumentReferenceProxy::id
// Il2CppName: id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::Firestore::DocumentReferenceProxy::*)()>(&Firebase::Firestore::DocumentReferenceProxy::id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::DocumentReferenceProxy*), "id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::DocumentReferenceProxy::path
// Il2CppName: path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::Firestore::DocumentReferenceProxy::*)()>(&Firebase::Firestore::DocumentReferenceProxy::path)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::DocumentReferenceProxy*), "path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::DocumentReferenceProxy::Collection
// Il2CppName: Collection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::CollectionReferenceProxy* (Firebase::Firestore::DocumentReferenceProxy::*)(::StringW)>(&Firebase::Firestore::DocumentReferenceProxy::Collection)> {
  static const MethodInfo* get() {
    static auto* collectionPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::DocumentReferenceProxy*), "Collection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collectionPath});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::DocumentReferenceProxy::GetAsync
// Il2CppName: GetAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentSnapshotProxy*>* (Firebase::Firestore::DocumentReferenceProxy::*)(::Firebase::Firestore::Source)>(&Firebase::Firestore::DocumentReferenceProxy::GetAsync)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "Source")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::DocumentReferenceProxy*), "GetAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::DocumentReferenceProxy::DeleteAsync
// Il2CppName: DeleteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (Firebase::Firestore::DocumentReferenceProxy::*)()>(&Firebase::Firestore::DocumentReferenceProxy::DeleteAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::DocumentReferenceProxy*), "DeleteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::DocumentReferenceProxy::is_valid
// Il2CppName: is_valid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Firebase::Firestore::DocumentReferenceProxy::*)()>(&Firebase::Firestore::DocumentReferenceProxy::is_valid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::DocumentReferenceProxy*), "is_valid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::DocumentReferenceProxy::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::DocumentReferenceProxy::*)()>(&Firebase::Firestore::DocumentReferenceProxy::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::DocumentReferenceProxy*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
