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
// Type namespace: UnityEngine.Scripting
namespace UnityEngine::Scripting {
  // Forward declaring type: RequiredByNativeCodeAttribute
  class RequiredByNativeCodeAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Scripting::RequiredByNativeCodeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::RequiredByNativeCodeAttribute*, "UnityEngine.Scripting", "RequiredByNativeCodeAttribute");
// Type namespace: UnityEngine.Scripting
namespace UnityEngine::Scripting {
  // Size: 0x1A
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Scripting.RequiredByNativeCodeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 5BA80C
  class RequiredByNativeCodeAttribute : public ::System::Attribute {
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
    // [DebuggerBrowsableAttribute] Offset: 0x5BAE30
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x5BAE6C
    // private System.Boolean <Optional>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool Optional;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0x5BAEA8
    // private System.Boolean <GenerateProxy>k__BackingField
    // Size: 0x1
    // Offset: 0x19
    bool GenerateProxy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String <Name>k__BackingField
    ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private System.Boolean <Optional>k__BackingField
    bool& dyn_$Optional$k__BackingField();
    // Get instance field reference: private System.Boolean <GenerateProxy>k__BackingField
    bool& dyn_$GenerateProxy$k__BackingField();
    // public System.Void set_Name(System.String value)
    // Offset: 0x12FA510
    void set_Name(::StringW value);
    // public System.Void set_Optional(System.Boolean value)
    // Offset: 0x12FA518
    void set_Optional(bool value);
    // public System.Void set_GenerateProxy(System.Boolean value)
    // Offset: 0x12FA524
    void set_GenerateProxy(bool value);
    // public System.Void .ctor(System.String name)
    // Offset: 0x12FA4E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequiredByNativeCodeAttribute* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Scripting::RequiredByNativeCodeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequiredByNativeCodeAttribute*, creationType>(name)));
    }
    // public System.Void .ctor()
    // Offset: 0x12FA4DC
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequiredByNativeCodeAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Scripting::RequiredByNativeCodeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequiredByNativeCodeAttribute*, creationType>()));
    }
  }; // UnityEngine.Scripting.RequiredByNativeCodeAttribute
  #pragma pack(pop)
  static check_size<sizeof(RequiredByNativeCodeAttribute), 25 + sizeof(bool)> __UnityEngine_Scripting_RequiredByNativeCodeAttributeSizeCheck;
  static_assert(sizeof(RequiredByNativeCodeAttribute) == 0x1A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Scripting::RequiredByNativeCodeAttribute::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Scripting::RequiredByNativeCodeAttribute::*)(::StringW)>(&UnityEngine::Scripting::RequiredByNativeCodeAttribute::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Scripting::RequiredByNativeCodeAttribute*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Scripting::RequiredByNativeCodeAttribute::set_Optional
// Il2CppName: set_Optional
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Scripting::RequiredByNativeCodeAttribute::*)(bool)>(&UnityEngine::Scripting::RequiredByNativeCodeAttribute::set_Optional)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Scripting::RequiredByNativeCodeAttribute*), "set_Optional", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Scripting::RequiredByNativeCodeAttribute::set_GenerateProxy
// Il2CppName: set_GenerateProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Scripting::RequiredByNativeCodeAttribute::*)(bool)>(&UnityEngine::Scripting::RequiredByNativeCodeAttribute::set_GenerateProxy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Scripting::RequiredByNativeCodeAttribute*), "set_GenerateProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Scripting::RequiredByNativeCodeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Scripting::RequiredByNativeCodeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
