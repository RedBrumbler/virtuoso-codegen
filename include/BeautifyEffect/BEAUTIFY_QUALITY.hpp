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
  // Forward declaring type: BEAUTIFY_QUALITY
  struct BEAUTIFY_QUALITY;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::BEAUTIFY_QUALITY, "BeautifyEffect", "BEAUTIFY_QUALITY");
// Type namespace: BeautifyEffect
namespace BeautifyEffect {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: BeautifyEffect.BEAUTIFY_QUALITY
  // [TokenAttribute] Offset: FFFFFFFF
  struct BEAUTIFY_QUALITY/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BEAUTIFY_QUALITY
    constexpr BEAUTIFY_QUALITY(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public BeautifyEffect.BEAUTIFY_QUALITY BestQuality
    static constexpr const int BestQuality = 0;
    // Get static field: static public BeautifyEffect.BEAUTIFY_QUALITY BestQuality
    static ::BeautifyEffect::BEAUTIFY_QUALITY _get_BestQuality();
    // Set static field: static public BeautifyEffect.BEAUTIFY_QUALITY BestQuality
    static void _set_BestQuality(::BeautifyEffect::BEAUTIFY_QUALITY value);
    // static field const value: static public BeautifyEffect.BEAUTIFY_QUALITY BestPerformance
    static constexpr const int BestPerformance = 1;
    // Get static field: static public BeautifyEffect.BEAUTIFY_QUALITY BestPerformance
    static ::BeautifyEffect::BEAUTIFY_QUALITY _get_BestPerformance();
    // Set static field: static public BeautifyEffect.BEAUTIFY_QUALITY BestPerformance
    static void _set_BestPerformance(::BeautifyEffect::BEAUTIFY_QUALITY value);
    // static field const value: static public BeautifyEffect.BEAUTIFY_QUALITY Basic
    static constexpr const int Basic = 2;
    // Get static field: static public BeautifyEffect.BEAUTIFY_QUALITY Basic
    static ::BeautifyEffect::BEAUTIFY_QUALITY _get_Basic();
    // Set static field: static public BeautifyEffect.BEAUTIFY_QUALITY Basic
    static void _set_Basic(::BeautifyEffect::BEAUTIFY_QUALITY value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // BeautifyEffect.BEAUTIFY_QUALITY
  #pragma pack(pop)
  static check_size<sizeof(BEAUTIFY_QUALITY), 0 + sizeof(int)> __BeautifyEffect_BEAUTIFY_QUALITYSizeCheck;
  static_assert(sizeof(BEAUTIFY_QUALITY) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
