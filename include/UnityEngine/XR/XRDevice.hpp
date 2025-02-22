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
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Forward declaring type: XRDevice
  class XRDevice;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::XRDevice);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDevice*, "UnityEngine.XR", "XRDevice");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.XRDevice
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeConditionalAttribute] Offset: 5CE6BC
  class XRDevice : public ::Il2CppObject {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x5CE6F4
    // Get static field: static private System.Action`1<System.String> deviceLoaded
    static ::System::Action_1<::StringW>* _get_deviceLoaded();
    // Set static field: static private System.Action`1<System.String> deviceLoaded
    static void _set_deviceLoaded(::System::Action_1<::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x13060F4
    static void _cctor();
    // static private System.Void InvokeDeviceLoaded(System.String loadedDeviceName)
    // Offset: 0x1306034
    static void InvokeDeviceLoaded(::StringW loadedDeviceName);
  }; // UnityEngine.XR.XRDevice
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::XRDevice::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::XRDevice::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDevice*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRDevice::InvokeDeviceLoaded
// Il2CppName: InvokeDeviceLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::XR::XRDevice::InvokeDeviceLoaded)> {
  static const MethodInfo* get() {
    static auto* loadedDeviceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDevice*), "InvokeDeviceLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loadedDeviceName});
  }
};
