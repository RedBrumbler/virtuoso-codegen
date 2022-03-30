// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NatSuite.Devices.MediaDeviceQuery
#include "NatSuite/Devices/MediaDeviceQuery.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NatSuite::Devices
namespace NatSuite::Devices {
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NatSuite::Devices::MediaDeviceQuery::Criteria);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::MediaDeviceQuery::Criteria*, "NatSuite.Devices", "MediaDeviceQuery/Criteria");
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criteria
  // [TokenAttribute] Offset: FFFFFFFF
  // [DocAttribute] Offset: 66BB8C
  class MediaDeviceQuery::Criteria : public ::Il2CppObject {
    public:
    // Nested type: ::NatSuite::Devices::MediaDeviceQuery::Criteria::$$c
    class $$c;
    // [DocAttribute] Offset: 0x67806C
    // Get static field: static public readonly NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criterion AudioDevice
    static ::NatSuite::Devices::MediaDeviceQuery::Criterion* _get_AudioDevice();
    // Set static field: static public readonly NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criterion AudioDevice
    static void _set_AudioDevice(::NatSuite::Devices::MediaDeviceQuery::Criterion* value);
    // [DocAttribute] Offset: 0x6780A4
    // Get static field: static public readonly NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criterion CameraDevice
    static ::NatSuite::Devices::MediaDeviceQuery::Criterion* _get_CameraDevice();
    // Set static field: static public readonly NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criterion CameraDevice
    static void _set_CameraDevice(::NatSuite::Devices::MediaDeviceQuery::Criterion* value);
    // [DocAttribute] Offset: 0x6780DC
    // Get static field: static public readonly NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criterion GenericCameraDevice
    static ::NatSuite::Devices::MediaDeviceQuery::Criterion* _get_GenericCameraDevice();
    // Set static field: static public readonly NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criterion GenericCameraDevice
    static void _set_GenericCameraDevice(::NatSuite::Devices::MediaDeviceQuery::Criterion* value);
    // [DocAttribute] Offset: 0x678114
    // Get static field: static public readonly NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criterion RearFacing
    static ::NatSuite::Devices::MediaDeviceQuery::Criterion* _get_RearFacing();
    // Set static field: static public readonly NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criterion RearFacing
    static void _set_RearFacing(::NatSuite::Devices::MediaDeviceQuery::Criterion* value);
    // [DocAttribute] Offset: 0x67814C
    // Get static field: static public readonly NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criterion FrontFacing
    static ::NatSuite::Devices::MediaDeviceQuery::Criterion* _get_FrontFacing();
    // Set static field: static public readonly NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criterion FrontFacing
    static void _set_FrontFacing(::NatSuite::Devices::MediaDeviceQuery::Criterion* value);
    // [DocAttribute] Offset: 0x678184
    // Get static field: static public readonly NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criterion EchoCancellation
    static ::NatSuite::Devices::MediaDeviceQuery::Criterion* _get_EchoCancellation();
    // Set static field: static public readonly NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criterion EchoCancellation
    static void _set_EchoCancellation(::NatSuite::Devices::MediaDeviceQuery::Criterion* value);
    // [DocAttribute] Offset: 0x6781BC
    // Get static field: static public readonly NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criterion Torch
    static ::NatSuite::Devices::MediaDeviceQuery::Criterion* _get_Torch();
    // Set static field: static public readonly NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criterion Torch
    static void _set_Torch(::NatSuite::Devices::MediaDeviceQuery::Criterion* value);
    // static private System.Void .cctor()
    // Offset: 0x13D9A50
    static void _cctor();
  }; // NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criteria
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::Criteria::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NatSuite::Devices::MediaDeviceQuery::Criteria::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery::Criteria*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};