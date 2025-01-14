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
  // Forward declaring type: ovrAvatarCapabilities
  struct ovrAvatarCapabilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarCapabilities, "", "ovrAvatarCapabilities");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: ovrAvatarCapabilities
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ovrAvatarCapabilities/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ovrAvatarCapabilities
    constexpr ovrAvatarCapabilities(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public ovrAvatarCapabilities Body
    static constexpr const int Body = 1;
    // Get static field: static public ovrAvatarCapabilities Body
    static ::GlobalNamespace::ovrAvatarCapabilities _get_Body();
    // Set static field: static public ovrAvatarCapabilities Body
    static void _set_Body(::GlobalNamespace::ovrAvatarCapabilities value);
    // static field const value: static public ovrAvatarCapabilities Hands
    static constexpr const int Hands = 2;
    // Get static field: static public ovrAvatarCapabilities Hands
    static ::GlobalNamespace::ovrAvatarCapabilities _get_Hands();
    // Set static field: static public ovrAvatarCapabilities Hands
    static void _set_Hands(::GlobalNamespace::ovrAvatarCapabilities value);
    // static field const value: static public ovrAvatarCapabilities Base
    static constexpr const int Base = 4;
    // Get static field: static public ovrAvatarCapabilities Base
    static ::GlobalNamespace::ovrAvatarCapabilities _get_Base();
    // Set static field: static public ovrAvatarCapabilities Base
    static void _set_Base(::GlobalNamespace::ovrAvatarCapabilities value);
    // static field const value: static public ovrAvatarCapabilities BodyTilt
    static constexpr const int BodyTilt = 16;
    // Get static field: static public ovrAvatarCapabilities BodyTilt
    static ::GlobalNamespace::ovrAvatarCapabilities _get_BodyTilt();
    // Set static field: static public ovrAvatarCapabilities BodyTilt
    static void _set_BodyTilt(::GlobalNamespace::ovrAvatarCapabilities value);
    // static field const value: static public ovrAvatarCapabilities Expressive
    static constexpr const int Expressive = 32;
    // Get static field: static public ovrAvatarCapabilities Expressive
    static ::GlobalNamespace::ovrAvatarCapabilities _get_Expressive();
    // Set static field: static public ovrAvatarCapabilities Expressive
    static void _set_Expressive(::GlobalNamespace::ovrAvatarCapabilities value);
    // static field const value: static public ovrAvatarCapabilities All
    static constexpr const int All = -1;
    // Get static field: static public ovrAvatarCapabilities All
    static ::GlobalNamespace::ovrAvatarCapabilities _get_All();
    // Set static field: static public ovrAvatarCapabilities All
    static void _set_All(::GlobalNamespace::ovrAvatarCapabilities value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // ovrAvatarCapabilities
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarCapabilities), 0 + sizeof(int)> __GlobalNamespace_ovrAvatarCapabilitiesSizeCheck;
  static_assert(sizeof(ovrAvatarCapabilities) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
