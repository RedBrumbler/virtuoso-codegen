// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Firestore.QueryProxy
#include "Firebase/Firestore/QueryProxy.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: DocumentReferenceProxy
  class DocumentReferenceProxy;
}
// Completed forward declares
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: CollectionReferenceProxy
  class CollectionReferenceProxy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::CollectionReferenceProxy);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::CollectionReferenceProxy*, "Firebase.Firestore", "CollectionReferenceProxy");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.CollectionReferenceProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class CollectionReferenceProxy : public ::Firebase::Firestore::QueryProxy {
    public:
    // Writing base type padding for base size: 0x21 to desired offset: 0x28
    char ___base_padding[0x7] = {};
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
    // Offset: 0x28
    ::System::Runtime::InteropServices::HandleRef swigCPtr;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::HandleRef) == 0x10);
    public:
    // Creating conversion operator: operator ::System::Runtime::InteropServices::HandleRef
    constexpr operator ::System::Runtime::InteropServices::HandleRef() const noexcept {
      return swigCPtr;
    }
    // Get instance field reference: private System.Runtime.InteropServices.HandleRef swigCPtr
    ::System::Runtime::InteropServices::HandleRef& dyn_swigCPtr();
    // public System.String path()
    // Offset: 0xC2A554
    ::StringW path();
    // public Firebase.Firestore.DocumentReferenceProxy Document()
    // Offset: 0xC2A690
    ::Firebase::Firestore::DocumentReferenceProxy* Document();
    // public Firebase.Firestore.DocumentReferenceProxy Document(System.String documentPath)
    // Offset: 0xC2A848
    ::Firebase::Firestore::DocumentReferenceProxy* Document(::StringW documentPath);
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    // Offset: 0xC29F44
    // Implemented from: Firebase.Firestore.QueryProxy
    // Base method: System.Void QueryProxy::.ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CollectionReferenceProxy* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::CollectionReferenceProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CollectionReferenceProxy*, creationType>(cPtr, cMemoryOwn)));
    }
    // protected override System.Void Finalize()
    // Offset: 0xC2A0D4
    // Implemented from: Firebase.Firestore.QueryProxy
    // Base method: System.Void QueryProxy::Finalize()
    void Finalize();
    // public override System.Void Dispose()
    // Offset: 0xC2A1AC
    // Implemented from: Firebase.Firestore.QueryProxy
    // Base method: System.Void QueryProxy::Dispose()
    void Dispose();
  }; // Firebase.Firestore.CollectionReferenceProxy
  #pragma pack(pop)
  static check_size<sizeof(CollectionReferenceProxy), 40 + sizeof(::System::Runtime::InteropServices::HandleRef)> __Firebase_Firestore_CollectionReferenceProxySizeCheck;
  static_assert(sizeof(CollectionReferenceProxy) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::CollectionReferenceProxy::path
// Il2CppName: path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::Firestore::CollectionReferenceProxy::*)()>(&Firebase::Firestore::CollectionReferenceProxy::path)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::CollectionReferenceProxy*), "path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::CollectionReferenceProxy::Document
// Il2CppName: Document
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::DocumentReferenceProxy* (Firebase::Firestore::CollectionReferenceProxy::*)()>(&Firebase::Firestore::CollectionReferenceProxy::Document)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::CollectionReferenceProxy*), "Document", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::CollectionReferenceProxy::Document
// Il2CppName: Document
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::DocumentReferenceProxy* (Firebase::Firestore::CollectionReferenceProxy::*)(::StringW)>(&Firebase::Firestore::CollectionReferenceProxy::Document)> {
  static const MethodInfo* get() {
    static auto* documentPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::CollectionReferenceProxy*), "Document", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{documentPath});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::CollectionReferenceProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::CollectionReferenceProxy::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::CollectionReferenceProxy::*)()>(&Firebase::Firestore::CollectionReferenceProxy::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::CollectionReferenceProxy*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::CollectionReferenceProxy::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::CollectionReferenceProxy::*)()>(&Firebase::Firestore::CollectionReferenceProxy::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::CollectionReferenceProxy*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
