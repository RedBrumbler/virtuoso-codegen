// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: PlatformSettings
  class PlatformSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::PlatformSettings);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PlatformSettings*, "Oculus.Platform", "PlatformSettings");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.PlatformSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformSettings : public ::UnityEngine::ScriptableObject {
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
    // private System.String ovrAppID
    // Size: 0x8
    // Offset: 0x18
    ::StringW ovrAppID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String ovrMobileAppID
    // Size: 0x8
    // Offset: 0x20
    ::StringW ovrMobileAppID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean ovrUseStandalonePlatform
    // Size: 0x1
    // Offset: 0x28
    bool ovrUseStandalonePlatform;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private Oculus.Platform.PlatformSettings instance
    static ::Oculus::Platform::PlatformSettings* _get_instance();
    // Set static field: static private Oculus.Platform.PlatformSettings instance
    static void _set_instance(::Oculus::Platform::PlatformSettings* value);
    // Get instance field reference: private System.String ovrAppID
    ::StringW& dyn_ovrAppID();
    // Get instance field reference: private System.String ovrMobileAppID
    ::StringW& dyn_ovrMobileAppID();
    // Get instance field reference: private System.Boolean ovrUseStandalonePlatform
    bool& dyn_ovrUseStandalonePlatform();
    // static public System.String get_AppID()
    // Offset: 0x11453EC
    static ::StringW get_AppID();
    // static public System.Void set_AppID(System.String value)
    // Offset: 0x114554C
    static void set_AppID(::StringW value);
    // static public System.String get_MobileAppID()
    // Offset: 0x1145578
    static ::StringW get_MobileAppID();
    // static public System.Void set_MobileAppID(System.String value)
    // Offset: 0x1145598
    static void set_MobileAppID(::StringW value);
    // static public System.Boolean get_UseStandalonePlatform()
    // Offset: 0x11455C4
    static bool get_UseStandalonePlatform();
    // static public System.Void set_UseStandalonePlatform(System.Boolean value)
    // Offset: 0x11455E4
    static void set_UseStandalonePlatform(bool value);
    // static public Oculus.Platform.PlatformSettings get_Instance()
    // Offset: 0x114540C
    static ::Oculus::Platform::PlatformSettings* get_Instance();
    // static public System.Void set_Instance(Oculus.Platform.PlatformSettings value)
    // Offset: 0x1145614
    static void set_Instance(::Oculus::Platform::PlatformSettings* value);
    // public System.Void .ctor()
    // Offset: 0x1145664
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::PlatformSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformSettings*, creationType>()));
    }
  }; // Oculus.Platform.PlatformSettings
  #pragma pack(pop)
  static check_size<sizeof(PlatformSettings), 40 + sizeof(bool)> __Oculus_Platform_PlatformSettingsSizeCheck;
  static_assert(sizeof(PlatformSettings) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::PlatformSettings::get_AppID
// Il2CppName: get_AppID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Oculus::Platform::PlatformSettings::get_AppID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::PlatformSettings*), "get_AppID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::PlatformSettings::set_AppID
// Il2CppName: set_AppID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&Oculus::Platform::PlatformSettings::set_AppID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::PlatformSettings*), "set_AppID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::PlatformSettings::get_MobileAppID
// Il2CppName: get_MobileAppID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Oculus::Platform::PlatformSettings::get_MobileAppID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::PlatformSettings*), "get_MobileAppID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::PlatformSettings::set_MobileAppID
// Il2CppName: set_MobileAppID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&Oculus::Platform::PlatformSettings::set_MobileAppID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::PlatformSettings*), "set_MobileAppID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::PlatformSettings::get_UseStandalonePlatform
// Il2CppName: get_UseStandalonePlatform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Oculus::Platform::PlatformSettings::get_UseStandalonePlatform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::PlatformSettings*), "get_UseStandalonePlatform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::PlatformSettings::set_UseStandalonePlatform
// Il2CppName: set_UseStandalonePlatform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Oculus::Platform::PlatformSettings::set_UseStandalonePlatform)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::PlatformSettings*), "set_UseStandalonePlatform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::PlatformSettings::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::PlatformSettings* (*)()>(&Oculus::Platform::PlatformSettings::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::PlatformSettings*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::PlatformSettings::set_Instance
// Il2CppName: set_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::PlatformSettings*)>(&Oculus::Platform::PlatformSettings::set_Instance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "PlatformSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::PlatformSettings*), "set_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::PlatformSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!