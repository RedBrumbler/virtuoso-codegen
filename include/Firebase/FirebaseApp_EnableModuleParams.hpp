// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.FirebaseApp
#include "Firebase/FirebaseApp.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::FirebaseApp::EnableModuleParams);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::FirebaseApp::EnableModuleParams*, "Firebase", "FirebaseApp/EnableModuleParams");
// Type namespace: Firebase
namespace Firebase {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.FirebaseApp/Firebase.EnableModuleParams
  // [TokenAttribute] Offset: FFFFFFFF
  class FirebaseApp::EnableModuleParams : public ::Il2CppObject {
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
    // [DebuggerBrowsableAttribute] Offset: 0x5D8B34
    // private System.String <CppModuleName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW CppModuleName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x5D8B70
    // private System.String <CSharpClassName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW CSharpClassName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x5D8BAC
    // private System.Boolean <AlwaysEnable>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool AlwaysEnable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String <CppModuleName>k__BackingField
    ::StringW& dyn_$CppModuleName$k__BackingField();
    // Get instance field reference: private System.String <CSharpClassName>k__BackingField
    ::StringW& dyn_$CSharpClassName$k__BackingField();
    // Get instance field reference: private System.Boolean <AlwaysEnable>k__BackingField
    bool& dyn_$AlwaysEnable$k__BackingField();
    // public System.String get_CppModuleName()
    // Offset: 0x129DC94
    ::StringW get_CppModuleName();
    // public System.Void set_CppModuleName(System.String value)
    // Offset: 0x129DC9C
    void set_CppModuleName(::StringW value);
    // public System.String get_CSharpClassName()
    // Offset: 0x129DCA4
    ::StringW get_CSharpClassName();
    // public System.Void set_CSharpClassName(System.String value)
    // Offset: 0x129DCAC
    void set_CSharpClassName(::StringW value);
    // public System.Boolean get_AlwaysEnable()
    // Offset: 0x129DCB4
    bool get_AlwaysEnable();
    // public System.Void set_AlwaysEnable(System.Boolean value)
    // Offset: 0x129DCBC
    void set_AlwaysEnable(bool value);
    // public System.Void .ctor(System.String csharp, System.String cpp, System.Boolean always)
    // Offset: 0x1298D68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseApp::EnableModuleParams* New_ctor(::StringW csharp, ::StringW cpp, bool always) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::FirebaseApp::EnableModuleParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseApp::EnableModuleParams*, creationType>(csharp, cpp, always)));
    }
  }; // Firebase.FirebaseApp/Firebase.EnableModuleParams
  #pragma pack(pop)
  static check_size<sizeof(FirebaseApp::EnableModuleParams), 32 + sizeof(bool)> __Firebase_FirebaseApp_EnableModuleParamsSizeCheck;
  static_assert(sizeof(FirebaseApp::EnableModuleParams) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::FirebaseApp::EnableModuleParams::get_CppModuleName
// Il2CppName: get_CppModuleName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::FirebaseApp::EnableModuleParams::*)()>(&Firebase::FirebaseApp::EnableModuleParams::get_CppModuleName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp::EnableModuleParams*), "get_CppModuleName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::EnableModuleParams::set_CppModuleName
// Il2CppName: set_CppModuleName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::FirebaseApp::EnableModuleParams::*)(::StringW)>(&Firebase::FirebaseApp::EnableModuleParams::set_CppModuleName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp::EnableModuleParams*), "set_CppModuleName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::EnableModuleParams::get_CSharpClassName
// Il2CppName: get_CSharpClassName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::FirebaseApp::EnableModuleParams::*)()>(&Firebase::FirebaseApp::EnableModuleParams::get_CSharpClassName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp::EnableModuleParams*), "get_CSharpClassName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::EnableModuleParams::set_CSharpClassName
// Il2CppName: set_CSharpClassName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::FirebaseApp::EnableModuleParams::*)(::StringW)>(&Firebase::FirebaseApp::EnableModuleParams::set_CSharpClassName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp::EnableModuleParams*), "set_CSharpClassName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::EnableModuleParams::get_AlwaysEnable
// Il2CppName: get_AlwaysEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Firebase::FirebaseApp::EnableModuleParams::*)()>(&Firebase::FirebaseApp::EnableModuleParams::get_AlwaysEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp::EnableModuleParams*), "get_AlwaysEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::EnableModuleParams::set_AlwaysEnable
// Il2CppName: set_AlwaysEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::FirebaseApp::EnableModuleParams::*)(bool)>(&Firebase::FirebaseApp::EnableModuleParams::set_AlwaysEnable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp::EnableModuleParams*), "set_AlwaysEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::EnableModuleParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
