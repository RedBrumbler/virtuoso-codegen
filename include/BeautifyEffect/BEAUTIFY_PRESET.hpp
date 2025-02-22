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
// Type namespace: BeautifyEffect
namespace BeautifyEffect {
  // Forward declaring type: BEAUTIFY_PRESET
  struct BEAUTIFY_PRESET;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::BEAUTIFY_PRESET, "BeautifyEffect", "BEAUTIFY_PRESET");
// Type namespace: BeautifyEffect
namespace BeautifyEffect {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: BeautifyEffect.BEAUTIFY_PRESET
  // [TokenAttribute] Offset: FFFFFFFF
  struct BEAUTIFY_PRESET/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BEAUTIFY_PRESET
    constexpr BEAUTIFY_PRESET(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public BeautifyEffect.BEAUTIFY_PRESET Soft
    static constexpr const int Soft = 10;
    // Get static field: static public BeautifyEffect.BEAUTIFY_PRESET Soft
    static ::BeautifyEffect::BEAUTIFY_PRESET _get_Soft();
    // Set static field: static public BeautifyEffect.BEAUTIFY_PRESET Soft
    static void _set_Soft(::BeautifyEffect::BEAUTIFY_PRESET value);
    // static field const value: static public BeautifyEffect.BEAUTIFY_PRESET Medium
    static constexpr const int Medium = 20;
    // Get static field: static public BeautifyEffect.BEAUTIFY_PRESET Medium
    static ::BeautifyEffect::BEAUTIFY_PRESET _get_Medium();
    // Set static field: static public BeautifyEffect.BEAUTIFY_PRESET Medium
    static void _set_Medium(::BeautifyEffect::BEAUTIFY_PRESET value);
    // static field const value: static public BeautifyEffect.BEAUTIFY_PRESET Strong
    static constexpr const int Strong = 30;
    // Get static field: static public BeautifyEffect.BEAUTIFY_PRESET Strong
    static ::BeautifyEffect::BEAUTIFY_PRESET _get_Strong();
    // Set static field: static public BeautifyEffect.BEAUTIFY_PRESET Strong
    static void _set_Strong(::BeautifyEffect::BEAUTIFY_PRESET value);
    // static field const value: static public BeautifyEffect.BEAUTIFY_PRESET Exaggerated
    static constexpr const int Exaggerated = 40;
    // Get static field: static public BeautifyEffect.BEAUTIFY_PRESET Exaggerated
    static ::BeautifyEffect::BEAUTIFY_PRESET _get_Exaggerated();
    // Set static field: static public BeautifyEffect.BEAUTIFY_PRESET Exaggerated
    static void _set_Exaggerated(::BeautifyEffect::BEAUTIFY_PRESET value);
    // static field const value: static public BeautifyEffect.BEAUTIFY_PRESET Custom
    static constexpr const int Custom = 999;
    // Get static field: static public BeautifyEffect.BEAUTIFY_PRESET Custom
    static ::BeautifyEffect::BEAUTIFY_PRESET _get_Custom();
    // Set static field: static public BeautifyEffect.BEAUTIFY_PRESET Custom
    static void _set_Custom(::BeautifyEffect::BEAUTIFY_PRESET value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // BeautifyEffect.BEAUTIFY_PRESET
  #pragma pack(pop)
  static check_size<sizeof(BEAUTIFY_PRESET), 0 + sizeof(int)> __BeautifyEffect_BEAUTIFY_PRESETSizeCheck;
  static_assert(sizeof(BEAUTIFY_PRESET) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
