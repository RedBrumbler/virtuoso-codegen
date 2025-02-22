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
// Type namespace: OVR
namespace OVR {
  // Forward declaring type: SoundFXNext
  struct SoundFXNext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::SoundFXNext, "OVR", "SoundFXNext");
// Type namespace: OVR
namespace OVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.SoundFXNext
  // [TokenAttribute] Offset: FFFFFFFF
  struct SoundFXNext/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SoundFXNext
    constexpr SoundFXNext(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.SoundFXNext Random
    static constexpr const int Random = 0;
    // Get static field: static public OVR.SoundFXNext Random
    static ::OVR::SoundFXNext _get_Random();
    // Set static field: static public OVR.SoundFXNext Random
    static void _set_Random(::OVR::SoundFXNext value);
    // static field const value: static public OVR.SoundFXNext Sequential
    static constexpr const int Sequential = 1;
    // Get static field: static public OVR.SoundFXNext Sequential
    static ::OVR::SoundFXNext _get_Sequential();
    // Set static field: static public OVR.SoundFXNext Sequential
    static void _set_Sequential(::OVR::SoundFXNext value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.SoundFXNext
  #pragma pack(pop)
  static check_size<sizeof(SoundFXNext), 0 + sizeof(int)> __OVR_SoundFXNextSizeCheck;
  static_assert(sizeof(SoundFXNext) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
