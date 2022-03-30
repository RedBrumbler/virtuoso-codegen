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
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: TEXTURE_COLOR_SPACE
  struct TEXTURE_COLOR_SPACE;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::TEXTURE_COLOR_SPACE, "LIV.SDK.Unity", "TEXTURE_COLOR_SPACE");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: LIV.SDK.Unity.TEXTURE_COLOR_SPACE
  // [TokenAttribute] Offset: FFFFFFFF
  struct TEXTURE_COLOR_SPACE/*, public ::System::Enum*/ {
    public:
    // Writing base type padding for base size: 0x0 to desired offset: 0x10
    char ___base_padding[0x10] = {};
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x10
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: TEXTURE_COLOR_SPACE
    constexpr TEXTURE_COLOR_SPACE(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public LIV.SDK.Unity.TEXTURE_COLOR_SPACE UNDEFINED
    static constexpr const uint UNDEFINED = 0u;
    // Get static field: static public LIV.SDK.Unity.TEXTURE_COLOR_SPACE UNDEFINED
    static ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE _get_UNDEFINED();
    // Set static field: static public LIV.SDK.Unity.TEXTURE_COLOR_SPACE UNDEFINED
    static void _set_UNDEFINED(::LIV::SDK::Unity::TEXTURE_COLOR_SPACE value);
    // static field const value: static public LIV.SDK.Unity.TEXTURE_COLOR_SPACE LINEAR
    static constexpr const uint LINEAR = 1u;
    // Get static field: static public LIV.SDK.Unity.TEXTURE_COLOR_SPACE LINEAR
    static ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE _get_LINEAR();
    // Set static field: static public LIV.SDK.Unity.TEXTURE_COLOR_SPACE LINEAR
    static void _set_LINEAR(::LIV::SDK::Unity::TEXTURE_COLOR_SPACE value);
    // static field const value: static public LIV.SDK.Unity.TEXTURE_COLOR_SPACE SRGB
    static constexpr const uint SRGB = 2u;
    // Get static field: static public LIV.SDK.Unity.TEXTURE_COLOR_SPACE SRGB
    static ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE _get_SRGB();
    // Set static field: static public LIV.SDK.Unity.TEXTURE_COLOR_SPACE SRGB
    static void _set_SRGB(::LIV::SDK::Unity::TEXTURE_COLOR_SPACE value);
    // Get instance field reference: public System.UInt32 value__
    uint& dyn_value__();
  }; // LIV.SDK.Unity.TEXTURE_COLOR_SPACE
  #pragma pack(pop)
  static check_size<sizeof(TEXTURE_COLOR_SPACE), 16 + sizeof(uint)> __LIV_SDK_Unity_TEXTURE_COLOR_SPACESizeCheck;
  static_assert(sizeof(TEXTURE_COLOR_SPACE) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"