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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ColorSpace
  struct ColorSpace;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ColorSpace, "UnityEngine", "ColorSpace");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ColorSpace
  // [TokenAttribute] Offset: FFFFFFFF
  struct ColorSpace/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: ColorSpace
    constexpr ColorSpace(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ColorSpace Uninitialized
    static constexpr const int Uninitialized = -1;
    // Get static field: static public UnityEngine.ColorSpace Uninitialized
    static ::UnityEngine::ColorSpace _get_Uninitialized();
    // Set static field: static public UnityEngine.ColorSpace Uninitialized
    static void _set_Uninitialized(::UnityEngine::ColorSpace value);
    // static field const value: static public UnityEngine.ColorSpace Gamma
    static constexpr const int Gamma = 0;
    // Get static field: static public UnityEngine.ColorSpace Gamma
    static ::UnityEngine::ColorSpace _get_Gamma();
    // Set static field: static public UnityEngine.ColorSpace Gamma
    static void _set_Gamma(::UnityEngine::ColorSpace value);
    // static field const value: static public UnityEngine.ColorSpace Linear
    static constexpr const int Linear = 1;
    // Get static field: static public UnityEngine.ColorSpace Linear
    static ::UnityEngine::ColorSpace _get_Linear();
    // Set static field: static public UnityEngine.ColorSpace Linear
    static void _set_Linear(::UnityEngine::ColorSpace value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ColorSpace
  #pragma pack(pop)
  static check_size<sizeof(ColorSpace), 16 + sizeof(int)> __UnityEngine_ColorSpaceSizeCheck;
  static_assert(sizeof(ColorSpace) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"