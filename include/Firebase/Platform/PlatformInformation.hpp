// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: Firebase.Platform
namespace Firebase::Platform {
  // Forward declaring type: PlatformInformation
  class PlatformInformation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Platform::PlatformInformation);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::PlatformInformation*, "Firebase.Platform", "PlatformInformation");
// Type namespace: Firebase.Platform
namespace Firebase::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Platform.PlatformInformation
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformInformation : public ::Il2CppObject {
    public:
    // Get static field: static private System.String runtimeVersion
    static ::StringW _get_runtimeVersion();
    // Set static field: static private System.String runtimeVersion
    static void _set_runtimeVersion(::StringW value);
    // [DebuggerBrowsableAttribute] Offset: 0x5DFFCC
    // Get static field: static private System.Single <RealtimeSinceStartupSafe>k__BackingField
    static float _get_$RealtimeSinceStartupSafe$k__BackingField();
    // Set static field: static private System.Single <RealtimeSinceStartupSafe>k__BackingField
    static void _set_$RealtimeSinceStartupSafe$k__BackingField(float value);
    // Get static field: static private System.Func`1<System.String> <>f__am$cache0
    static ::System::Func_1<::StringW>* _get_$$f__am$cache0();
    // Set static field: static private System.Func`1<System.String> <>f__am$cache0
    static void _set_$$f__am$cache0(::System::Func_1<::StringW>* value);
    // Get static field: static private System.Func`1<System.String> <>f__am$cache1
    static ::System::Func_1<::StringW>* _get_$$f__am$cache1();
    // Set static field: static private System.Func`1<System.String> <>f__am$cache1
    static void _set_$$f__am$cache1(::System::Func_1<::StringW>* value);
    // static System.Boolean get_IsAndroid()
    // Offset: 0x12CB19C
    static bool get_IsAndroid();
    // static System.Boolean get_IsIOS()
    // Offset: 0x12CB1BC
    static bool get_IsIOS();
    // static System.String get_DefaultConfigLocation()
    // Offset: 0x12CB1DC
    static ::StringW get_DefaultConfigLocation();
    // static System.Single get_RealtimeSinceStartup()
    // Offset: 0x12CB100
    static float get_RealtimeSinceStartup();
    // static System.Void set_RealtimeSinceStartupSafe(System.Single value)
    // Offset: 0x12CB2E4
    static void set_RealtimeSinceStartupSafe(float value);
    // static System.String get_RuntimeName()
    // Offset: 0x12CB33C
    static ::StringW get_RuntimeName();
    // static System.String get_RuntimeVersion()
    // Offset: 0x12CB380
    static ::StringW get_RuntimeVersion();
    // static private System.String <get_DefaultConfigLocation>m__0()
    // Offset: 0x12CB4AC
    static ::StringW $get_DefaultConfigLocation$m__0();
    // static private System.String <get_RuntimeVersion>m__1()
    // Offset: 0x12CB4B4
    static ::StringW $get_RuntimeVersion$m__1();
  }; // Firebase.Platform.PlatformInformation
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Platform::PlatformInformation::get_IsAndroid
// Il2CppName: get_IsAndroid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Firebase::Platform::PlatformInformation::get_IsAndroid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Platform::PlatformInformation*), "get_IsAndroid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Platform::PlatformInformation::get_IsIOS
// Il2CppName: get_IsIOS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Firebase::Platform::PlatformInformation::get_IsIOS)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Platform::PlatformInformation*), "get_IsIOS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Platform::PlatformInformation::get_DefaultConfigLocation
// Il2CppName: get_DefaultConfigLocation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Firebase::Platform::PlatformInformation::get_DefaultConfigLocation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Platform::PlatformInformation*), "get_DefaultConfigLocation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Platform::PlatformInformation::get_RealtimeSinceStartup
// Il2CppName: get_RealtimeSinceStartup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&Firebase::Platform::PlatformInformation::get_RealtimeSinceStartup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Platform::PlatformInformation*), "get_RealtimeSinceStartup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Platform::PlatformInformation::set_RealtimeSinceStartupSafe
// Il2CppName: set_RealtimeSinceStartupSafe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&Firebase::Platform::PlatformInformation::set_RealtimeSinceStartupSafe)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Platform::PlatformInformation*), "set_RealtimeSinceStartupSafe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::Platform::PlatformInformation::get_RuntimeName
// Il2CppName: get_RuntimeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Firebase::Platform::PlatformInformation::get_RuntimeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Platform::PlatformInformation*), "get_RuntimeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Platform::PlatformInformation::get_RuntimeVersion
// Il2CppName: get_RuntimeVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Firebase::Platform::PlatformInformation::get_RuntimeVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Platform::PlatformInformation*), "get_RuntimeVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Platform::PlatformInformation::$get_DefaultConfigLocation$m__0
// Il2CppName: <get_DefaultConfigLocation>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Firebase::Platform::PlatformInformation::$get_DefaultConfigLocation$m__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Platform::PlatformInformation*), "<get_DefaultConfigLocation>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Platform::PlatformInformation::$get_RuntimeVersion$m__1
// Il2CppName: <get_RuntimeVersion>m__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Firebase::Platform::PlatformInformation::$get_RuntimeVersion$m__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Platform::PlatformInformation*), "<get_RuntimeVersion>m__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
