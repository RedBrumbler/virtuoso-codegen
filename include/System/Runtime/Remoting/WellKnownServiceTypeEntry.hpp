// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.TypeEntry
#include "System/Runtime/Remoting/TypeEntry.hpp"
// Including type: System.Runtime.Remoting.WellKnownObjectMode
#include "System/Runtime/Remoting/WellKnownObjectMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: WellKnownServiceTypeEntry
  class WellKnownServiceTypeEntry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::WellKnownServiceTypeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::WellKnownServiceTypeEntry*, "System.Runtime.Remoting", "WellKnownServiceTypeEntry");
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.WellKnownServiceTypeEntry
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57BF6C
  class WellKnownServiceTypeEntry : public ::System::Runtime::Remoting::TypeEntry {
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
    // private System.Type obj_type
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* obj_type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.String obj_uri
    // Size: 0x8
    // Offset: 0x28
    ::StringW obj_uri;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Runtime.Remoting.WellKnownObjectMode obj_mode
    // Size: 0x4
    // Offset: 0x30
    ::System::Runtime::Remoting::WellKnownObjectMode obj_mode;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::WellKnownObjectMode) == 0x4);
    public:
    // Get instance field reference: private System.Type obj_type
    ::System::Type*& dyn_obj_type();
    // Get instance field reference: private System.String obj_uri
    ::StringW& dyn_obj_uri();
    // Get instance field reference: private System.Runtime.Remoting.WellKnownObjectMode obj_mode
    ::System::Runtime::Remoting::WellKnownObjectMode& dyn_obj_mode();
    // public System.Runtime.Remoting.WellKnownObjectMode get_Mode()
    // Offset: 0xCF2E58
    ::System::Runtime::Remoting::WellKnownObjectMode get_Mode();
    // public System.Type get_ObjectType()
    // Offset: 0xCF2E60
    ::System::Type* get_ObjectType();
    // public System.String get_ObjectUri()
    // Offset: 0xCF2E68
    ::StringW get_ObjectUri();
    // public System.Void .ctor(System.String typeName, System.String assemblyName, System.String objectUri, System.Runtime.Remoting.WellKnownObjectMode mode)
    // Offset: 0xCF2D14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WellKnownServiceTypeEntry* New_ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUri, ::System::Runtime::Remoting::WellKnownObjectMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::WellKnownServiceTypeEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WellKnownServiceTypeEntry*, creationType>(typeName, assemblyName, objectUri, mode)));
    }
    // public override System.String ToString()
    // Offset: 0xCF2E70
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Runtime.Remoting.WellKnownServiceTypeEntry
  #pragma pack(pop)
  static check_size<sizeof(WellKnownServiceTypeEntry), 48 + sizeof(::System::Runtime::Remoting::WellKnownObjectMode)> __System_Runtime_Remoting_WellKnownServiceTypeEntrySizeCheck;
  static_assert(sizeof(WellKnownServiceTypeEntry) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::WellKnownServiceTypeEntry::get_Mode
// Il2CppName: get_Mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::WellKnownObjectMode (System::Runtime::Remoting::WellKnownServiceTypeEntry::*)()>(&System::Runtime::Remoting::WellKnownServiceTypeEntry::get_Mode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::WellKnownServiceTypeEntry*), "get_Mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectType
// Il2CppName: get_ObjectType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Runtime::Remoting::WellKnownServiceTypeEntry::*)()>(&System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::WellKnownServiceTypeEntry*), "get_ObjectType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectUri
// Il2CppName: get_ObjectUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::WellKnownServiceTypeEntry::*)()>(&System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::WellKnownServiceTypeEntry*), "get_ObjectUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::WellKnownServiceTypeEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::WellKnownServiceTypeEntry::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::WellKnownServiceTypeEntry::*)()>(&System::Runtime::Remoting::WellKnownServiceTypeEntry::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::WellKnownServiceTypeEntry*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
