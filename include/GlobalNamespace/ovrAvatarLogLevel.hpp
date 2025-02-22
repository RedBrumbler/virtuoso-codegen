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
  // Forward declaring type: ovrAvatarLogLevel
  struct ovrAvatarLogLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarLogLevel, "", "ovrAvatarLogLevel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: ovrAvatarLogLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarLogLevel/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ovrAvatarLogLevel
    constexpr ovrAvatarLogLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public ovrAvatarLogLevel Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public ovrAvatarLogLevel Unknown
    static ::GlobalNamespace::ovrAvatarLogLevel _get_Unknown();
    // Set static field: static public ovrAvatarLogLevel Unknown
    static void _set_Unknown(::GlobalNamespace::ovrAvatarLogLevel value);
    // static field const value: static public ovrAvatarLogLevel Default
    static constexpr const int Default = 1;
    // Get static field: static public ovrAvatarLogLevel Default
    static ::GlobalNamespace::ovrAvatarLogLevel _get_Default();
    // Set static field: static public ovrAvatarLogLevel Default
    static void _set_Default(::GlobalNamespace::ovrAvatarLogLevel value);
    // static field const value: static public ovrAvatarLogLevel Verbose
    static constexpr const int Verbose = 2;
    // Get static field: static public ovrAvatarLogLevel Verbose
    static ::GlobalNamespace::ovrAvatarLogLevel _get_Verbose();
    // Set static field: static public ovrAvatarLogLevel Verbose
    static void _set_Verbose(::GlobalNamespace::ovrAvatarLogLevel value);
    // static field const value: static public ovrAvatarLogLevel Debug
    static constexpr const int Debug = 3;
    // Get static field: static public ovrAvatarLogLevel Debug
    static ::GlobalNamespace::ovrAvatarLogLevel _get_Debug();
    // Set static field: static public ovrAvatarLogLevel Debug
    static void _set_Debug(::GlobalNamespace::ovrAvatarLogLevel value);
    // static field const value: static public ovrAvatarLogLevel Info
    static constexpr const int Info = 4;
    // Get static field: static public ovrAvatarLogLevel Info
    static ::GlobalNamespace::ovrAvatarLogLevel _get_Info();
    // Set static field: static public ovrAvatarLogLevel Info
    static void _set_Info(::GlobalNamespace::ovrAvatarLogLevel value);
    // static field const value: static public ovrAvatarLogLevel Warn
    static constexpr const int Warn = 5;
    // Get static field: static public ovrAvatarLogLevel Warn
    static ::GlobalNamespace::ovrAvatarLogLevel _get_Warn();
    // Set static field: static public ovrAvatarLogLevel Warn
    static void _set_Warn(::GlobalNamespace::ovrAvatarLogLevel value);
    // static field const value: static public ovrAvatarLogLevel Error
    static constexpr const int Error = 6;
    // Get static field: static public ovrAvatarLogLevel Error
    static ::GlobalNamespace::ovrAvatarLogLevel _get_Error();
    // Set static field: static public ovrAvatarLogLevel Error
    static void _set_Error(::GlobalNamespace::ovrAvatarLogLevel value);
    // static field const value: static public ovrAvatarLogLevel Fatal
    static constexpr const int Fatal = 7;
    // Get static field: static public ovrAvatarLogLevel Fatal
    static ::GlobalNamespace::ovrAvatarLogLevel _get_Fatal();
    // Set static field: static public ovrAvatarLogLevel Fatal
    static void _set_Fatal(::GlobalNamespace::ovrAvatarLogLevel value);
    // static field const value: static public ovrAvatarLogLevel Silent
    static constexpr const int Silent = 8;
    // Get static field: static public ovrAvatarLogLevel Silent
    static ::GlobalNamespace::ovrAvatarLogLevel _get_Silent();
    // Set static field: static public ovrAvatarLogLevel Silent
    static void _set_Silent(::GlobalNamespace::ovrAvatarLogLevel value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // ovrAvatarLogLevel
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarLogLevel), 0 + sizeof(int)> __GlobalNamespace_ovrAvatarLogLevelSizeCheck;
  static_assert(sizeof(ovrAvatarLogLevel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
