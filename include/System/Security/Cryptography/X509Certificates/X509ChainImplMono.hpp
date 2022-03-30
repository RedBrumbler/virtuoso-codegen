// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509ChainImpl
#include "System/Security/Cryptography/X509Certificates/X509ChainImpl.hpp"
// Including type: System.Security.Cryptography.X509Certificates.StoreLocation
#include "System/Security/Cryptography/X509Certificates/StoreLocation.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509ChainStatus
#include "System/Security/Cryptography/X509Certificates/X509ChainStatus.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509ChainElementCollection
  class X509ChainElementCollection;
  // Forward declaring type: X509ChainPolicy
  class X509ChainPolicy;
  // Forward declaring type: X509ChainElement
  class X509ChainElement;
  // Forward declaring type: X509Certificate2Collection
  class X509Certificate2Collection;
  // Forward declaring type: X509Store
  class X509Store;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509ChainImplMono
  class X509ChainImplMono;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509ChainImplMono);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainImplMono*, "System.Security.Cryptography.X509Certificates", "X509ChainImplMono");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ChainImplMono
  // [TokenAttribute] Offset: FFFFFFFF
  class X509ChainImplMono : public ::System::Security::Cryptography::X509Certificates::X509ChainImpl {
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
    // private System.Security.Cryptography.X509Certificates.StoreLocation location
    // Size: 0x4
    // Offset: 0x10
    ::System::Security::Cryptography::X509Certificates::StoreLocation location;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::StoreLocation) == 0x4);
    // Padding between fields: location and: elements
    char __padding0[0x4] = {};
    // private System.Security.Cryptography.X509Certificates.X509ChainElementCollection elements
    // Size: 0x8
    // Offset: 0x18
    ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* elements;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509ChainPolicy policy
    // Size: 0x8
    // Offset: 0x20
    ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* policy;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509ChainPolicy*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509ChainStatus[] status
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> status;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus>) == 0x8);
    // private System.Security.Cryptography.AsymmetricAlgorithm working_public_key
    // Size: 0x8
    // Offset: 0x30
    ::System::Security::Cryptography::AsymmetricAlgorithm* working_public_key;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::AsymmetricAlgorithm*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509ChainElement bce_restriction
    // Size: 0x8
    // Offset: 0x38
    ::System::Security::Cryptography::X509Certificates::X509ChainElement* bce_restriction;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509ChainElement*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509Certificate2Collection roots
    // Size: 0x8
    // Offset: 0x40
    ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* roots;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509Certificate2Collection cas
    // Size: 0x8
    // Offset: 0x48
    ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* cas;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509Store root_store
    // Size: 0x8
    // Offset: 0x50
    ::System::Security::Cryptography::X509Certificates::X509Store* root_store;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Store*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509Store ca_store
    // Size: 0x8
    // Offset: 0x58
    ::System::Security::Cryptography::X509Certificates::X509Store* ca_store;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Store*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509Store user_root_store
    // Size: 0x8
    // Offset: 0x60
    ::System::Security::Cryptography::X509Certificates::X509Store* user_root_store;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Store*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509Store user_ca_store
    // Size: 0x8
    // Offset: 0x68
    ::System::Security::Cryptography::X509Certificates::X509Store* user_ca_store;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Store*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509Certificate2Collection collection
    // Size: 0x8
    // Offset: 0x70
    ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* collection;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*) == 0x8);
    public:
    // Get static field: static private System.Security.Cryptography.X509Certificates.X509ChainStatus[] Empty
    static ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> _get_Empty();
    // Set static field: static private System.Security.Cryptography.X509Certificates.X509ChainStatus[] Empty
    static void _set_Empty(::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus> value);
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.StoreLocation location
    ::System::Security::Cryptography::X509Certificates::StoreLocation& dyn_location();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509ChainElementCollection elements
    ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*& dyn_elements();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509ChainPolicy policy
    ::System::Security::Cryptography::X509Certificates::X509ChainPolicy*& dyn_policy();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509ChainStatus[] status
    ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus>& dyn_status();
    // Get instance field reference: private System.Security.Cryptography.AsymmetricAlgorithm working_public_key
    ::System::Security::Cryptography::AsymmetricAlgorithm*& dyn_working_public_key();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509ChainElement bce_restriction
    ::System::Security::Cryptography::X509Certificates::X509ChainElement*& dyn_bce_restriction();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509Certificate2Collection roots
    ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& dyn_roots();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509Certificate2Collection cas
    ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& dyn_cas();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509Store root_store
    ::System::Security::Cryptography::X509Certificates::X509Store*& dyn_root_store();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509Store ca_store
    ::System::Security::Cryptography::X509Certificates::X509Store*& dyn_ca_store();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509Store user_root_store
    ::System::Security::Cryptography::X509Certificates::X509Store*& dyn_user_root_store();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509Store user_ca_store
    ::System::Security::Cryptography::X509Certificates::X509Store*& dyn_user_ca_store();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509Certificate2Collection collection
    ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& dyn_collection();
    // public System.Void .ctor(System.Boolean useMachineContext)
    // Offset: 0xAC7D78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ChainImplMono* New_ctor(bool useMachineContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509ChainImplMono::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ChainImplMono*, creationType>(useMachineContext)));
    }
    // static private System.Void .cctor()
    // Offset: 0xAC7F4C
    static void _cctor();
    // public override System.Boolean get_IsValid()
    // Offset: 0xAC7E5C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509ChainImpl
    // Base method: System.Boolean X509ChainImpl::get_IsValid()
    bool get_IsValid();
    // public override System.Security.Cryptography.X509Certificates.X509ChainElementCollection get_ChainElements()
    // Offset: 0xAC7E64
    // Implemented from: System.Security.Cryptography.X509Certificates.X509ChainImpl
    // Base method: System.Security.Cryptography.X509Certificates.X509ChainElementCollection X509ChainImpl::get_ChainElements()
    ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements();
    // public override System.Void set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy value)
    // Offset: 0xAC7E6C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509ChainImpl
    // Base method: System.Void X509ChainImpl::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy value)
    void set_ChainPolicy(::System::Security::Cryptography::X509Certificates::X509ChainPolicy* value);
    // public override System.Void Reset()
    // Offset: 0xAC7E74
    // Implemented from: System.Security.Cryptography.X509Certificates.X509ChainImpl
    // Base method: System.Void X509ChainImpl::Reset()
    void Reset();
  }; // System.Security.Cryptography.X509Certificates.X509ChainImplMono
  #pragma pack(pop)
  static check_size<sizeof(X509ChainImplMono), 112 + sizeof(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*)> __System_Security_Cryptography_X509Certificates_X509ChainImplMonoSizeCheck;
  static_assert(sizeof(X509ChainImplMono) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainImplMono*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainImplMono*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainElements
// Il2CppName: get_ChainElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::get_ChainElements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainImplMono*), "get_ChainElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono::set_ChainPolicy
// Il2CppName: set_ChainPolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)(::System::Security::Cryptography::X509Certificates::X509ChainPolicy*)>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::set_ChainPolicy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509ChainPolicy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainImplMono*), "set_ChainPolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainImplMono::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainImplMono::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainImplMono*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
