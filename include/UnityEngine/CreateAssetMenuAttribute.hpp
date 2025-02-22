// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CreateAssetMenuAttribute
  class CreateAssetMenuAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::CreateAssetMenuAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CreateAssetMenuAttribute*, "UnityEngine", "CreateAssetMenuAttribute");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CreateAssetMenuAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 566F0C
  class CreateAssetMenuAttribute : public ::System::Attribute {
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
    // [DebuggerBrowsableAttribute] Offset: 0x56B22C
    // private System.String <menuName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW menuName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x56B268
    // private System.String <fileName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW fileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x56B2A4
    // private System.Int32 <order>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int order;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.String <menuName>k__BackingField
    ::StringW& dyn_$menuName$k__BackingField();
    // Get instance field reference: private System.String <fileName>k__BackingField
    ::StringW& dyn_$fileName$k__BackingField();
    // Get instance field reference: private System.Int32 <order>k__BackingField
    int& dyn_$order$k__BackingField();
    // public System.Void set_menuName(System.String value)
    // Offset: 0xE3739C
    void set_menuName(::StringW value);
    // public System.Void set_fileName(System.String value)
    // Offset: 0xE373A4
    void set_fileName(::StringW value);
    // public System.Void set_order(System.Int32 value)
    // Offset: 0xE373AC
    void set_order(int value);
    // public System.Void .ctor()
    // Offset: 0xE373B4
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreateAssetMenuAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::CreateAssetMenuAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreateAssetMenuAttribute*, creationType>()));
    }
  }; // UnityEngine.CreateAssetMenuAttribute
  #pragma pack(pop)
  static check_size<sizeof(CreateAssetMenuAttribute), 32 + sizeof(int)> __UnityEngine_CreateAssetMenuAttributeSizeCheck;
  static_assert(sizeof(CreateAssetMenuAttribute) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::CreateAssetMenuAttribute::set_menuName
// Il2CppName: set_menuName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CreateAssetMenuAttribute::*)(::StringW)>(&UnityEngine::CreateAssetMenuAttribute::set_menuName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CreateAssetMenuAttribute*), "set_menuName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CreateAssetMenuAttribute::set_fileName
// Il2CppName: set_fileName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CreateAssetMenuAttribute::*)(::StringW)>(&UnityEngine::CreateAssetMenuAttribute::set_fileName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CreateAssetMenuAttribute*), "set_fileName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CreateAssetMenuAttribute::set_order
// Il2CppName: set_order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CreateAssetMenuAttribute::*)(int)>(&UnityEngine::CreateAssetMenuAttribute::set_order)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CreateAssetMenuAttribute*), "set_order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CreateAssetMenuAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
