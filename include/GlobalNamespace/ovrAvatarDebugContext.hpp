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
  // Forward declaring type: ovrAvatarDebugContext
  struct ovrAvatarDebugContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarDebugContext, "", "ovrAvatarDebugContext");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: ovrAvatarDebugContext
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ovrAvatarDebugContext/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: ovrAvatarDebugContext
    constexpr ovrAvatarDebugContext(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public ovrAvatarDebugContext None
    static constexpr const uint None = 0u;
    // Get static field: static public ovrAvatarDebugContext None
    static ::GlobalNamespace::ovrAvatarDebugContext _get_None();
    // Set static field: static public ovrAvatarDebugContext None
    static void _set_None(::GlobalNamespace::ovrAvatarDebugContext value);
    // static field const value: static public ovrAvatarDebugContext GazeTarget
    static constexpr const uint GazeTarget = 1u;
    // Get static field: static public ovrAvatarDebugContext GazeTarget
    static ::GlobalNamespace::ovrAvatarDebugContext _get_GazeTarget();
    // Set static field: static public ovrAvatarDebugContext GazeTarget
    static void _set_GazeTarget(::GlobalNamespace::ovrAvatarDebugContext value);
    // static field const value: static public ovrAvatarDebugContext Any
    static constexpr const uint Any = 4294967295u;
    // Get static field: static public ovrAvatarDebugContext Any
    static ::GlobalNamespace::ovrAvatarDebugContext _get_Any();
    // Set static field: static public ovrAvatarDebugContext Any
    static void _set_Any(::GlobalNamespace::ovrAvatarDebugContext value);
    // Get instance field reference: public System.UInt32 value__
    uint& dyn_value__();
  }; // ovrAvatarDebugContext
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarDebugContext), 0 + sizeof(uint)> __GlobalNamespace_ovrAvatarDebugContextSizeCheck;
  static_assert(sizeof(ovrAvatarDebugContext) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
