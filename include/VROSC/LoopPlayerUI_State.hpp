// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoopPlayerUI
#include "VROSC/LoopPlayerUI.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerUI::State, "VROSC", "LoopPlayerUI/State");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopPlayerUI/VROSC.State
  // [TokenAttribute] Offset: FFFFFFFF
  struct LoopPlayerUI::State/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: State
    constexpr State(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VROSC.LoopPlayerUI/VROSC.State Recording
    static constexpr const int Recording = 0;
    // Get static field: static public VROSC.LoopPlayerUI/VROSC.State Recording
    static ::VROSC::LoopPlayerUI::State _get_Recording();
    // Set static field: static public VROSC.LoopPlayerUI/VROSC.State Recording
    static void _set_Recording(::VROSC::LoopPlayerUI::State value);
    // static field const value: static public VROSC.LoopPlayerUI/VROSC.State HasRecording
    static constexpr const int HasRecording = 1;
    // Get static field: static public VROSC.LoopPlayerUI/VROSC.State HasRecording
    static ::VROSC::LoopPlayerUI::State _get_HasRecording();
    // Set static field: static public VROSC.LoopPlayerUI/VROSC.State HasRecording
    static void _set_HasRecording(::VROSC::LoopPlayerUI::State value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // VROSC.LoopPlayerUI/VROSC.State
  #pragma pack(pop)
  static check_size<sizeof(LoopPlayerUI::State), 0 + sizeof(int)> __VROSC_LoopPlayerUI_StateSizeCheck;
  static_assert(sizeof(LoopPlayerUI::State) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
