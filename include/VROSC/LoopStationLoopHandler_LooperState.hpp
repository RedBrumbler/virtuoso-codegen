// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoopStationLoopHandler
#include "VROSC/LoopStationLoopHandler.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationLoopHandler::LooperState, "VROSC", "LoopStationLoopHandler/LooperState");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopStationLoopHandler/VROSC.LooperState
  // [TokenAttribute] Offset: FFFFFFFF
  struct LoopStationLoopHandler::LooperState/*, public ::System::Enum*/ {
    public:
    // Writing base type padding for base size: 0x0 to desired offset: 0x10
    char ___base_padding[0x10] = {};
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x10
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LooperState
    constexpr LooperState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VROSC.LoopStationLoopHandler/VROSC.LooperState NoLoops
    static constexpr const int NoLoops = 0;
    // Get static field: static public VROSC.LoopStationLoopHandler/VROSC.LooperState NoLoops
    static ::VROSC::LoopStationLoopHandler::LooperState _get_NoLoops();
    // Set static field: static public VROSC.LoopStationLoopHandler/VROSC.LooperState NoLoops
    static void _set_NoLoops(::VROSC::LoopStationLoopHandler::LooperState value);
    // static field const value: static public VROSC.LoopStationLoopHandler/VROSC.LooperState GotLoops
    static constexpr const int GotLoops = 1;
    // Get static field: static public VROSC.LoopStationLoopHandler/VROSC.LooperState GotLoops
    static ::VROSC::LoopStationLoopHandler::LooperState _get_GotLoops();
    // Set static field: static public VROSC.LoopStationLoopHandler/VROSC.LooperState GotLoops
    static void _set_GotLoops(::VROSC::LoopStationLoopHandler::LooperState value);
    // static field const value: static public VROSC.LoopStationLoopHandler/VROSC.LooperState IsAtMaxNumber
    static constexpr const int IsAtMaxNumber = 2;
    // Get static field: static public VROSC.LoopStationLoopHandler/VROSC.LooperState IsAtMaxNumber
    static ::VROSC::LoopStationLoopHandler::LooperState _get_IsAtMaxNumber();
    // Set static field: static public VROSC.LoopStationLoopHandler/VROSC.LooperState IsAtMaxNumber
    static void _set_IsAtMaxNumber(::VROSC::LoopStationLoopHandler::LooperState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // VROSC.LoopStationLoopHandler/VROSC.LooperState
  #pragma pack(pop)
  static check_size<sizeof(LoopStationLoopHandler::LooperState), 16 + sizeof(int)> __VROSC_LoopStationLoopHandler_LooperStateSizeCheck;
  static_assert(sizeof(LoopStationLoopHandler::LooperState) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"