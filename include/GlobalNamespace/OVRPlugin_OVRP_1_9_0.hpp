// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_9_0*, "", "OVRPlugin/OVRP_1_9_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_9_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_9_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0xF1384C
    static void _cctor();
    // static public OVRPlugin/SystemHeadset ovrp_GetSystemHeadsetType()
    // Offset: 0xF13548
    static ::GlobalNamespace::OVRPlugin::SystemHeadset ovrp_GetSystemHeadsetType();
    // static public OVRPlugin/Controller ovrp_GetActiveController()
    // Offset: 0xF135BC
    static ::GlobalNamespace::OVRPlugin::Controller ovrp_GetActiveController();
    // static public OVRPlugin/Controller ovrp_GetConnectedControllers()
    // Offset: 0xF13630
    static ::GlobalNamespace::OVRPlugin::Controller ovrp_GetConnectedControllers();
    // static public OVRPlugin/Bool ovrp_GetBoundaryGeometry2(OVRPlugin/BoundaryType boundaryType, System.IntPtr points, ref System.Int32 pointsCount)
    // Offset: 0xF136A4
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetBoundaryGeometry2(::GlobalNamespace::OVRPlugin::BoundaryType boundaryType, ::System::IntPtr points, ByRef<int> pointsCount);
    // static public OVRPlugin/AppPerfStats ovrp_GetAppPerfStats()
    // Offset: 0xF1373C
    static ::GlobalNamespace::OVRPlugin::AppPerfStats ovrp_GetAppPerfStats();
    // static public OVRPlugin/Bool ovrp_ResetAppPerfStats()
    // Offset: 0xF137D8
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_ResetAppPerfStats();
  }; // OVRPlugin/OVRP_1_9_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_9_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_9_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_9_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetSystemHeadsetType
// Il2CppName: ovrp_GetSystemHeadsetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::SystemHeadset (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetSystemHeadsetType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_9_0*), "ovrp_GetSystemHeadsetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetActiveController
// Il2CppName: ovrp_GetActiveController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Controller (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetActiveController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_9_0*), "ovrp_GetActiveController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetConnectedControllers
// Il2CppName: ovrp_GetConnectedControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Controller (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetConnectedControllers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_9_0*), "ovrp_GetConnectedControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetBoundaryGeometry2
// Il2CppName: ovrp_GetBoundaryGeometry2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(::GlobalNamespace::OVRPlugin::BoundaryType, ::System::IntPtr, ByRef<int>)>(&GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetBoundaryGeometry2)> {
  static const MethodInfo* get() {
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/BoundaryType")->byval_arg;
    static auto* points = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* pointsCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_9_0*), "ovrp_GetBoundaryGeometry2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boundaryType, points, pointsCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetAppPerfStats
// Il2CppName: ovrp_GetAppPerfStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::AppPerfStats (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_GetAppPerfStats)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_9_0*), "ovrp_GetAppPerfStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_ResetAppPerfStats
// Il2CppName: ovrp_ResetAppPerfStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_9_0::ovrp_ResetAppPerfStats)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_9_0*), "ovrp_ResetAppPerfStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
