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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarButton
  struct ovrAvatarButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarButton, "", "ovrAvatarButton");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: ovrAvatarButton
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ovrAvatarButton/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ovrAvatarButton
    constexpr ovrAvatarButton(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public ovrAvatarButton One
    static constexpr const int One = 1;
    // Get static field: static public ovrAvatarButton One
    static ::GlobalNamespace::ovrAvatarButton _get_One();
    // Set static field: static public ovrAvatarButton One
    static void _set_One(::GlobalNamespace::ovrAvatarButton value);
    // static field const value: static public ovrAvatarButton Two
    static constexpr const int Two = 2;
    // Get static field: static public ovrAvatarButton Two
    static ::GlobalNamespace::ovrAvatarButton _get_Two();
    // Set static field: static public ovrAvatarButton Two
    static void _set_Two(::GlobalNamespace::ovrAvatarButton value);
    // static field const value: static public ovrAvatarButton Three
    static constexpr const int Three = 4;
    // Get static field: static public ovrAvatarButton Three
    static ::GlobalNamespace::ovrAvatarButton _get_Three();
    // Set static field: static public ovrAvatarButton Three
    static void _set_Three(::GlobalNamespace::ovrAvatarButton value);
    // static field const value: static public ovrAvatarButton Joystick
    static constexpr const int Joystick = 8;
    // Get static field: static public ovrAvatarButton Joystick
    static ::GlobalNamespace::ovrAvatarButton _get_Joystick();
    // Set static field: static public ovrAvatarButton Joystick
    static void _set_Joystick(::GlobalNamespace::ovrAvatarButton value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // ovrAvatarButton
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarButton), 0 + sizeof(int)> __GlobalNamespace_ovrAvatarButtonSizeCheck;
  static_assert(sizeof(ovrAvatarButton) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
