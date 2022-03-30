// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Forward declaring type: FlashMode
  struct FlashMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::FlashMode, "NatSuite.Devices", "FlashMode");
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: NatSuite.Devices.FlashMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [DocAttribute] Offset: 66BAAC
  struct FlashMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FlashMode
    constexpr FlashMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DocAttribute] Offset: 0x677EAC
    // static field const value: static public NatSuite.Devices.FlashMode Off
    static constexpr const int Off = 0;
    // Get static field: static public NatSuite.Devices.FlashMode Off
    static ::NatSuite::Devices::FlashMode _get_Off();
    // Set static field: static public NatSuite.Devices.FlashMode Off
    static void _set_Off(::NatSuite::Devices::FlashMode value);
    // [DocAttribute] Offset: 0x677EE4
    // static field const value: static public NatSuite.Devices.FlashMode On
    static constexpr const int On = 1;
    // Get static field: static public NatSuite.Devices.FlashMode On
    static ::NatSuite::Devices::FlashMode _get_On();
    // Set static field: static public NatSuite.Devices.FlashMode On
    static void _set_On(::NatSuite::Devices::FlashMode value);
    // [DocAttribute] Offset: 0x677F1C
    // static field const value: static public NatSuite.Devices.FlashMode Auto
    static constexpr const int Auto = 2;
    // Get static field: static public NatSuite.Devices.FlashMode Auto
    static ::NatSuite::Devices::FlashMode _get_Auto();
    // Set static field: static public NatSuite.Devices.FlashMode Auto
    static void _set_Auto(::NatSuite::Devices::FlashMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // NatSuite.Devices.FlashMode
  #pragma pack(pop)
  static check_size<sizeof(FlashMode), 0 + sizeof(int)> __NatSuite_Devices_FlashModeSizeCheck;
  static_assert(sizeof(FlashMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
