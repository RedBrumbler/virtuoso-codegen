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
// Type namespace: System
namespace System {
  // Forward declaring type: PlatformID
  struct PlatformID;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::PlatformID, "System", "PlatformID");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.PlatformID
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 5791CC
  struct PlatformID/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PlatformID
    constexpr PlatformID(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.PlatformID Win32S
    static constexpr const int Win32S = 0;
    // Get static field: static public System.PlatformID Win32S
    static ::System::PlatformID _get_Win32S();
    // Set static field: static public System.PlatformID Win32S
    static void _set_Win32S(::System::PlatformID value);
    // static field const value: static public System.PlatformID Win32Windows
    static constexpr const int Win32Windows = 1;
    // Get static field: static public System.PlatformID Win32Windows
    static ::System::PlatformID _get_Win32Windows();
    // Set static field: static public System.PlatformID Win32Windows
    static void _set_Win32Windows(::System::PlatformID value);
    // static field const value: static public System.PlatformID Win32NT
    static constexpr const int Win32NT = 2;
    // Get static field: static public System.PlatformID Win32NT
    static ::System::PlatformID _get_Win32NT();
    // Set static field: static public System.PlatformID Win32NT
    static void _set_Win32NT(::System::PlatformID value);
    // static field const value: static public System.PlatformID WinCE
    static constexpr const int WinCE = 3;
    // Get static field: static public System.PlatformID WinCE
    static ::System::PlatformID _get_WinCE();
    // Set static field: static public System.PlatformID WinCE
    static void _set_WinCE(::System::PlatformID value);
    // static field const value: static public System.PlatformID Unix
    static constexpr const int Unix = 4;
    // Get static field: static public System.PlatformID Unix
    static ::System::PlatformID _get_Unix();
    // Set static field: static public System.PlatformID Unix
    static void _set_Unix(::System::PlatformID value);
    // static field const value: static public System.PlatformID Xbox
    static constexpr const int Xbox = 5;
    // Get static field: static public System.PlatformID Xbox
    static ::System::PlatformID _get_Xbox();
    // Set static field: static public System.PlatformID Xbox
    static void _set_Xbox(::System::PlatformID value);
    // static field const value: static public System.PlatformID MacOSX
    static constexpr const int MacOSX = 6;
    // Get static field: static public System.PlatformID MacOSX
    static ::System::PlatformID _get_MacOSX();
    // Set static field: static public System.PlatformID MacOSX
    static void _set_MacOSX(::System::PlatformID value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.PlatformID
  #pragma pack(pop)
  static check_size<sizeof(PlatformID), 0 + sizeof(int)> __System_PlatformIDSizeCheck;
  static_assert(sizeof(PlatformID) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
