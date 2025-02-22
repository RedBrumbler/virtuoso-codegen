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
// Type namespace: DG.Tweening.Core.Enums
namespace DG::Tweening::Core::Enums {
  // Forward declaring type: UpdateMode
  struct UpdateMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::Enums::UpdateMode, "DG.Tweening.Core.Enums", "UpdateMode");
// Type namespace: DG.Tweening.Core.Enums
namespace DG::Tweening::Core::Enums {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.Core.Enums.UpdateMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct UpdateMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UpdateMode
    constexpr UpdateMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DG.Tweening.Core.Enums.UpdateMode Update
    static constexpr const int Update = 0;
    // Get static field: static public DG.Tweening.Core.Enums.UpdateMode Update
    static ::DG::Tweening::Core::Enums::UpdateMode _get_Update();
    // Set static field: static public DG.Tweening.Core.Enums.UpdateMode Update
    static void _set_Update(::DG::Tweening::Core::Enums::UpdateMode value);
    // static field const value: static public DG.Tweening.Core.Enums.UpdateMode Goto
    static constexpr const int Goto = 1;
    // Get static field: static public DG.Tweening.Core.Enums.UpdateMode Goto
    static ::DG::Tweening::Core::Enums::UpdateMode _get_Goto();
    // Set static field: static public DG.Tweening.Core.Enums.UpdateMode Goto
    static void _set_Goto(::DG::Tweening::Core::Enums::UpdateMode value);
    // static field const value: static public DG.Tweening.Core.Enums.UpdateMode IgnoreOnUpdate
    static constexpr const int IgnoreOnUpdate = 2;
    // Get static field: static public DG.Tweening.Core.Enums.UpdateMode IgnoreOnUpdate
    static ::DG::Tweening::Core::Enums::UpdateMode _get_IgnoreOnUpdate();
    // Set static field: static public DG.Tweening.Core.Enums.UpdateMode IgnoreOnUpdate
    static void _set_IgnoreOnUpdate(::DG::Tweening::Core::Enums::UpdateMode value);
    // static field const value: static public DG.Tweening.Core.Enums.UpdateMode IgnoreOnComplete
    static constexpr const int IgnoreOnComplete = 3;
    // Get static field: static public DG.Tweening.Core.Enums.UpdateMode IgnoreOnComplete
    static ::DG::Tweening::Core::Enums::UpdateMode _get_IgnoreOnComplete();
    // Set static field: static public DG.Tweening.Core.Enums.UpdateMode IgnoreOnComplete
    static void _set_IgnoreOnComplete(::DG::Tweening::Core::Enums::UpdateMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // DG.Tweening.Core.Enums.UpdateMode
  #pragma pack(pop)
  static check_size<sizeof(UpdateMode), 0 + sizeof(int)> __DG_Tweening_Core_Enums_UpdateModeSizeCheck;
  static_assert(sizeof(UpdateMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
