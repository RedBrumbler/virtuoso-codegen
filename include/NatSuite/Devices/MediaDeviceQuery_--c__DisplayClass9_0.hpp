// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NatSuite.Devices.MediaDeviceQuery
#include "NatSuite/Devices/MediaDeviceQuery.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NatSuite::Devices
namespace NatSuite::Devices {
  // Forward declaring type: IMediaDevice
  class IMediaDevice;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NatSuite::Devices::MediaDeviceQuery::$$c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::MediaDeviceQuery::$$c__DisplayClass9_0*, "NatSuite.Devices", "MediaDeviceQuery/<>c__DisplayClass9_0");
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.<>c__DisplayClass9_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MediaDeviceQuery::$$c__DisplayClass9_0 : public ::Il2CppObject {
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
    // public NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criterion[] criteria
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::NatSuite::Devices::MediaDeviceQuery::Criterion*> criteria;
    // Field size check
    static_assert(sizeof(::ArrayW<::NatSuite::Devices::MediaDeviceQuery::Criterion*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::NatSuite::Devices::MediaDeviceQuery::Criterion*>
    constexpr operator ::ArrayW<::NatSuite::Devices::MediaDeviceQuery::Criterion*>() const noexcept {
      return criteria;
    }
    // Get instance field reference: public NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criterion[] criteria
    ::ArrayW<::NatSuite::Devices::MediaDeviceQuery::Criterion*>& dyn_criteria();
    // System.Boolean <.ctor>b__0(NatSuite.Devices.IMediaDevice device)
    // Offset: 0x13D95BC
    bool $_ctor$b__0(::NatSuite::Devices::IMediaDevice* device);
    // public System.Void .ctor()
    // Offset: 0x13D95B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MediaDeviceQuery::$$c__DisplayClass9_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NatSuite::Devices::MediaDeviceQuery::$$c__DisplayClass9_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MediaDeviceQuery::$$c__DisplayClass9_0*, creationType>()));
    }
  }; // NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.<>c__DisplayClass9_0
  #pragma pack(pop)
  static check_size<sizeof(MediaDeviceQuery::$$c__DisplayClass9_0), 16 + sizeof(::ArrayW<::NatSuite::Devices::MediaDeviceQuery::Criterion*>)> __NatSuite_Devices_MediaDeviceQuery_$$c__DisplayClass9_0SizeCheck;
  static_assert(sizeof(MediaDeviceQuery::$$c__DisplayClass9_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::$$c__DisplayClass9_0::$_ctor$b__0
// Il2CppName: <.ctor>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NatSuite::Devices::MediaDeviceQuery::$$c__DisplayClass9_0::*)(::NatSuite::Devices::IMediaDevice*)>(&NatSuite::Devices::MediaDeviceQuery::$$c__DisplayClass9_0::$_ctor$b__0)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("NatSuite.Devices", "IMediaDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery::$$c__DisplayClass9_0*), "<.ctor>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::$$c__DisplayClass9_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
