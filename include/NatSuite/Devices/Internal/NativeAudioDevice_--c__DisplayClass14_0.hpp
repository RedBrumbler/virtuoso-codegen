// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NatSuite.Devices.Internal.NativeAudioDevice
#include "NatSuite/Devices/Internal/NativeAudioDevice.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NatSuite::Devices
namespace NatSuite::Devices {
  // Forward declaring type: SampleBufferDelegate
  class SampleBufferDelegate;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NatSuite::Devices::Internal::NativeAudioDevice::$$c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::Internal::NativeAudioDevice::$$c__DisplayClass14_0*, "NatSuite.Devices.Internal", "NativeAudioDevice/<>c__DisplayClass14_0");
// Type namespace: NatSuite.Devices.Internal
namespace NatSuite::Devices::Internal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NatSuite.Devices.Internal.NativeAudioDevice/NatSuite.Devices.Internal.<>c__DisplayClass14_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NativeAudioDevice::$$c__DisplayClass14_0 : public ::Il2CppObject {
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
    // public NatSuite.Devices.SampleBufferDelegate delegate
    // Size: 0x8
    // Offset: 0x10
    ::NatSuite::Devices::SampleBufferDelegate* delegate;
    // Field size check
    static_assert(sizeof(::NatSuite::Devices::SampleBufferDelegate*) == 0x8);
    public:
    // Creating conversion operator: operator ::NatSuite::Devices::SampleBufferDelegate*
    constexpr operator ::NatSuite::Devices::SampleBufferDelegate*() const noexcept {
      return delegate;
    }
    // Get instance field reference: public NatSuite.Devices.SampleBufferDelegate delegate
    ::NatSuite::Devices::SampleBufferDelegate*& dyn_delegate();
    // System.Void <StartRunning>b__0(System.Single[] sampleBuffer, System.Int64 timestamp)
    // Offset: 0x133D564
    void $StartRunning$b__0(::ArrayW<float> sampleBuffer, int64_t timestamp);
    // public System.Void .ctor()
    // Offset: 0x133D55C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeAudioDevice::$$c__DisplayClass14_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NatSuite::Devices::Internal::NativeAudioDevice::$$c__DisplayClass14_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeAudioDevice::$$c__DisplayClass14_0*, creationType>()));
    }
  }; // NatSuite.Devices.Internal.NativeAudioDevice/NatSuite.Devices.Internal.<>c__DisplayClass14_0
  #pragma pack(pop)
  static check_size<sizeof(NativeAudioDevice::$$c__DisplayClass14_0), 16 + sizeof(::NatSuite::Devices::SampleBufferDelegate*)> __NatSuite_Devices_Internal_NativeAudioDevice_$$c__DisplayClass14_0SizeCheck;
  static_assert(sizeof(NativeAudioDevice::$$c__DisplayClass14_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NatSuite::Devices::Internal::NativeAudioDevice::$$c__DisplayClass14_0::$StartRunning$b__0
// Il2CppName: <StartRunning>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::Internal::NativeAudioDevice::$$c__DisplayClass14_0::*)(::ArrayW<float>, int64_t)>(&NatSuite::Devices::Internal::NativeAudioDevice::$$c__DisplayClass14_0::$StartRunning$b__0)> {
  static const MethodInfo* get() {
    static auto* sampleBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* timestamp = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::Internal::NativeAudioDevice::$$c__DisplayClass14_0*), "<StartRunning>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sampleBuffer, timestamp});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::Internal::NativeAudioDevice::$$c__DisplayClass14_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
