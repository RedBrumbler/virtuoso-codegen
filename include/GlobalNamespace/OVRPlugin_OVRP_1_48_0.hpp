// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_48_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_48_0*, "", "OVRPlugin/OVRP_1_48_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_48_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_48_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0xF10294
    static void _cctor();
    // static public OVRPlugin/Result ovrp_SetExternalCameraProperties(System.String cameraName, ref OVRPlugin/CameraIntrinsics cameraIntrinsics, ref OVRPlugin/CameraExtrinsics cameraExtrinsics)
    // Offset: 0xF101E4
    static ::GlobalNamespace::OVRPlugin::Result ovrp_SetExternalCameraProperties(::StringW cameraName, ByRef<::GlobalNamespace::OVRPlugin::CameraIntrinsics> cameraIntrinsics, ByRef<::GlobalNamespace::OVRPlugin::CameraExtrinsics> cameraExtrinsics);
  }; // OVRPlugin/OVRP_1_48_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_48_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_48_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_48_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_48_0::ovrp_SetExternalCameraProperties
// Il2CppName: ovrp_SetExternalCameraProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::StringW, ByRef<::GlobalNamespace::OVRPlugin::CameraIntrinsics>, ByRef<::GlobalNamespace::OVRPlugin::CameraExtrinsics>)>(&GlobalNamespace::OVRPlugin::OVRP_1_48_0::ovrp_SetExternalCameraProperties)> {
  static const MethodInfo* get() {
    static auto* cameraName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cameraIntrinsics = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/CameraIntrinsics")->this_arg;
    static auto* cameraExtrinsics = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/CameraExtrinsics")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_48_0*), "ovrp_SetExternalCameraProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraName, cameraIntrinsics, cameraExtrinsics});
  }
};
