// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::XR::Oculus
namespace Unity::XR::Oculus {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IntegratedSubsystem
  class IntegratedSubsystem;
}
// Completed forward declares
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Forward declaring type: Stats
  class Stats;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::Oculus::Stats);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Stats*, "Unity.XR.Oculus", "Stats");
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.Oculus.Stats
  // [TokenAttribute] Offset: FFFFFFFF
  class Stats : public ::Il2CppObject {
    public:
    // Nested type: ::Unity::XR::Oculus::Stats::AdaptivePerformance
    class AdaptivePerformance;
    // Nested type: ::Unity::XR::Oculus::Stats::PerfMetrics
    class PerfMetrics;
    // Nested type: ::Unity::XR::Oculus::Stats::AppMetrics
    class AppMetrics;
    // Get static field: static private UnityEngine.IntegratedSubsystem m_Display
    static ::UnityEngine::IntegratedSubsystem* _get_m_Display();
    // Set static field: static private UnityEngine.IntegratedSubsystem m_Display
    static void _set_m_Display(::UnityEngine::IntegratedSubsystem* value);
    // Get static field: static private System.String m_PluginVersion
    static ::StringW _get_m_PluginVersion();
    // Set static field: static private System.String m_PluginVersion
    static void _set_m_PluginVersion(::StringW value);
    // static public System.String get_PluginVersion()
    // Offset: 0x12DB9CC
    static ::StringW get_PluginVersion();
    // static private System.Void .cctor()
    // Offset: 0x12DBE84
    static void _cctor();
    // static private UnityEngine.IntegratedSubsystem GetOculusDisplaySubsystem()
    // Offset: 0x12DBB3C
    static ::UnityEngine::IntegratedSubsystem* GetOculusDisplaySubsystem();
    // public System.Void .ctor()
    // Offset: 0x12DBE7C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stats* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::XR::Oculus::Stats::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stats*, creationType>()));
    }
  }; // Unity.XR.Oculus.Stats
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::Oculus::Stats::get_PluginVersion
// Il2CppName: get_PluginVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Unity::XR::Oculus::Stats::get_PluginVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Stats*), "get_PluginVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Stats::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::XR::Oculus::Stats::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Stats*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Stats::GetOculusDisplaySubsystem
// Il2CppName: GetOculusDisplaySubsystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::IntegratedSubsystem* (*)()>(&Unity::XR::Oculus::Stats::GetOculusDisplaySubsystem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Stats*), "GetOculusDisplaySubsystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Stats::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
