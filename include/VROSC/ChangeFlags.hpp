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
  // Forward declaring type: ChangeFlags
  struct ChangeFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ChangeFlags, "VROSC", "ChangeFlags");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ChangeFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ChangeFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ChangeFlags
    constexpr ChangeFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VROSC.ChangeFlags NoChange
    static constexpr const int NoChange = 0;
    // Get static field: static public VROSC.ChangeFlags NoChange
    static ::VROSC::ChangeFlags _get_NoChange();
    // Set static field: static public VROSC.ChangeFlags NoChange
    static void _set_NoChange(::VROSC::ChangeFlags value);
    // static field const value: static public VROSC.ChangeFlags Changed
    static constexpr const int Changed = 1;
    // Get static field: static public VROSC.ChangeFlags Changed
    static ::VROSC::ChangeFlags _get_Changed();
    // Set static field: static public VROSC.ChangeFlags Changed
    static void _set_Changed(::VROSC::ChangeFlags value);
    // static field const value: static public VROSC.ChangeFlags CriticalChange
    static constexpr const int CriticalChange = 2;
    // Get static field: static public VROSC.ChangeFlags CriticalChange
    static ::VROSC::ChangeFlags _get_CriticalChange();
    // Set static field: static public VROSC.ChangeFlags CriticalChange
    static void _set_CriticalChange(::VROSC::ChangeFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // VROSC.ChangeFlags
  #pragma pack(pop)
  static check_size<sizeof(ChangeFlags), 0 + sizeof(int)> __VROSC_ChangeFlagsSizeCheck;
  static_assert(sizeof(ChangeFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
