// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SynthParameterController
#include "VROSC/SynthParameterController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthParameterController::TargetParameter, "VROSC", "SynthParameterController/TargetParameter");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SynthParameterController/VROSC.TargetParameter
  // [TokenAttribute] Offset: FFFFFFFF
  struct SynthParameterController::TargetParameter/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TargetParameter
    constexpr TargetParameter(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VROSC.SynthParameterController/VROSC.TargetParameter MidiPitchBend
    static constexpr const int MidiPitchBend = 0;
    // Get static field: static public VROSC.SynthParameterController/VROSC.TargetParameter MidiPitchBend
    static ::VROSC::SynthParameterController::TargetParameter _get_MidiPitchBend();
    // Set static field: static public VROSC.SynthParameterController/VROSC.TargetParameter MidiPitchBend
    static void _set_MidiPitchBend(::VROSC::SynthParameterController::TargetParameter value);
    // static field const value: static public VROSC.SynthParameterController/VROSC.TargetParameter MidiCC
    static constexpr const int MidiCC = 1;
    // Get static field: static public VROSC.SynthParameterController/VROSC.TargetParameter MidiCC
    static ::VROSC::SynthParameterController::TargetParameter _get_MidiCC();
    // Set static field: static public VROSC.SynthParameterController/VROSC.TargetParameter MidiCC
    static void _set_MidiCC(::VROSC::SynthParameterController::TargetParameter value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // VROSC.SynthParameterController/VROSC.TargetParameter
  #pragma pack(pop)
  static check_size<sizeof(SynthParameterController::TargetParameter), 0 + sizeof(int)> __VROSC_SynthParameterController_TargetParameterSizeCheck;
  static_assert(sizeof(SynthParameterController::TargetParameter) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
