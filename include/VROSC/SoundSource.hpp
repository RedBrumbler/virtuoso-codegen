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
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SoundSource
  struct SoundSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SoundSource, "VROSC", "SoundSource");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SoundSource
  // [TokenAttribute] Offset: FFFFFFFF
  struct SoundSource/*, public ::System::Enum*/ {
    public:
    // Writing base type padding for base size: 0x0 to desired offset: 0x10
    char ___base_padding[0x10] = {};
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x10
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SoundSource
    constexpr SoundSource(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VROSC.SoundSource None
    static constexpr const int None = 0;
    // Get static field: static public VROSC.SoundSource None
    static ::VROSC::SoundSource _get_None();
    // Set static field: static public VROSC.SoundSource None
    static void _set_None(::VROSC::SoundSource value);
    // static field const value: static public VROSC.SoundSource Helm
    static constexpr const int Helm = 1;
    // Get static field: static public VROSC.SoundSource Helm
    static ::VROSC::SoundSource _get_Helm();
    // Set static field: static public VROSC.SoundSource Helm
    static void _set_Helm(::VROSC::SoundSource value);
    // static field const value: static public VROSC.SoundSource Drums
    static constexpr const int Drums = 2;
    // Get static field: static public VROSC.SoundSource Drums
    static ::VROSC::SoundSource _get_Drums();
    // Set static field: static public VROSC.SoundSource Drums
    static void _set_Drums(::VROSC::SoundSource value);
    // static field const value: static public VROSC.SoundSource Microphone
    static constexpr const int Microphone = 3;
    // Get static field: static public VROSC.SoundSource Microphone
    static ::VROSC::SoundSource _get_Microphone();
    // Set static field: static public VROSC.SoundSource Microphone
    static void _set_Microphone(::VROSC::SoundSource value);
    // static field const value: static public VROSC.SoundSource Master
    static constexpr const int Master = 4;
    // Get static field: static public VROSC.SoundSource Master
    static ::VROSC::SoundSource _get_Master();
    // Set static field: static public VROSC.SoundSource Master
    static void _set_Master(::VROSC::SoundSource value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // VROSC.SoundSource
  #pragma pack(pop)
  static check_size<sizeof(SoundSource), 16 + sizeof(int)> __VROSC_SoundSourceSizeCheck;
  static_assert(sizeof(SoundSource) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"