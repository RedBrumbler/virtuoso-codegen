// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NatSuite.Devices.MediaDeviceQuery
#include "NatSuite/Devices/MediaDeviceQuery.hpp"
// Including type: UnityEngine.WebCamDevice
#include "UnityEngine/WebCamDevice.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: NatSuite::Devices
namespace NatSuite::Devices {
  // Forward declaring type: WebCameraDevice
  class WebCameraDevice;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NatSuite::Devices::MediaDeviceQuery::$$c);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::MediaDeviceQuery::$$c*, "NatSuite.Devices", "MediaDeviceQuery/<>c");
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MediaDeviceQuery::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.<>c <>9
    static ::NatSuite::Devices::MediaDeviceQuery::$$c* _get_$$9();
    // Set static field: static public readonly NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.<>c <>9
    static void _set_$$9(::NatSuite::Devices::MediaDeviceQuery::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.WebCamDevice,NatSuite.Devices.WebCameraDevice> <>9__14_0
    static ::System::Func_2<::UnityEngine::WebCamDevice, ::NatSuite::Devices::WebCameraDevice*>* _get_$$9__14_0();
    // Set static field: static public System.Func`2<UnityEngine.WebCamDevice,NatSuite.Devices.WebCameraDevice> <>9__14_0
    static void _set_$$9__14_0(::System::Func_2<::UnityEngine::WebCamDevice, ::NatSuite::Devices::WebCameraDevice*>* value);
    // static private System.Void .cctor()
    // Offset: 0x13D94DC
    static void _cctor();
    // NatSuite.Devices.WebCameraDevice <WebCamDevices>b__14_0(UnityEngine.WebCamDevice device)
    // Offset: 0x13D9544
    ::NatSuite::Devices::WebCameraDevice* $WebCamDevices$b__14_0(::UnityEngine::WebCamDevice device);
    // public System.Void .ctor()
    // Offset: 0x13D953C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MediaDeviceQuery::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NatSuite::Devices::MediaDeviceQuery::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MediaDeviceQuery::$$c*, creationType>()));
    }
  }; // NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NatSuite::Devices::MediaDeviceQuery::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::$$c::$WebCamDevices$b__14_0
// Il2CppName: <WebCamDevices>b__14_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NatSuite::Devices::WebCameraDevice* (NatSuite::Devices::MediaDeviceQuery::$$c::*)(::UnityEngine::WebCamDevice)>(&NatSuite::Devices::MediaDeviceQuery::$$c::$WebCamDevices$b__14_0)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine", "WebCamDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery::$$c*), "<WebCamDevices>b__14_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!