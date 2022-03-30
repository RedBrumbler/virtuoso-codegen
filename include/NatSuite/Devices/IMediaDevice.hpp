// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Forward declaring type: IMediaDevice
  class IMediaDevice;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NatSuite::Devices::IMediaDevice);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::IMediaDevice*, "NatSuite.Devices", "IMediaDevice");
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NatSuite.Devices.IMediaDevice
  // [TokenAttribute] Offset: FFFFFFFF
  class IMediaDevice/*, public ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*/ {
    public:
    // Creating interface conversion operator: operator ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>
    operator ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*>(this);
    }
    // public System.String get_uniqueID()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_uniqueID();
    // public System.Boolean get_running()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_running();
    // public System.Void StopRunning()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void StopRunning();
  }; // NatSuite.Devices.IMediaDevice
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NatSuite::Devices::IMediaDevice::get_uniqueID
// Il2CppName: get_uniqueID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NatSuite::Devices::IMediaDevice::*)()>(&NatSuite::Devices::IMediaDevice::get_uniqueID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::IMediaDevice*), "get_uniqueID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::IMediaDevice::get_running
// Il2CppName: get_running
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NatSuite::Devices::IMediaDevice::*)()>(&NatSuite::Devices::IMediaDevice::get_running)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::IMediaDevice*), "get_running", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::IMediaDevice::StopRunning
// Il2CppName: StopRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::IMediaDevice::*)()>(&NatSuite::Devices::IMediaDevice::StopRunning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::IMediaDevice*), "StopRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};