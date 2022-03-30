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
// Type namespace: Unity.IO.LowLevel.Unsafe
namespace Unity::IO::LowLevel::Unsafe {
  // Forward declaring type: ProcessingState
  struct ProcessingState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::ProcessingState, "Unity.IO.LowLevel.Unsafe", "ProcessingState");
// Type namespace: Unity.IO.LowLevel.Unsafe
namespace Unity::IO::LowLevel::Unsafe {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Unity.IO.LowLevel.Unsafe.ProcessingState
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 56442C
  struct ProcessingState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ProcessingState
    constexpr ProcessingState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Unity.IO.LowLevel.Unsafe.ProcessingState Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Unity.IO.LowLevel.Unsafe.ProcessingState Unknown
    static ::Unity::IO::LowLevel::Unsafe::ProcessingState _get_Unknown();
    // Set static field: static public Unity.IO.LowLevel.Unsafe.ProcessingState Unknown
    static void _set_Unknown(::Unity::IO::LowLevel::Unsafe::ProcessingState value);
    // static field const value: static public Unity.IO.LowLevel.Unsafe.ProcessingState InQueue
    static constexpr const int InQueue = 1;
    // Get static field: static public Unity.IO.LowLevel.Unsafe.ProcessingState InQueue
    static ::Unity::IO::LowLevel::Unsafe::ProcessingState _get_InQueue();
    // Set static field: static public Unity.IO.LowLevel.Unsafe.ProcessingState InQueue
    static void _set_InQueue(::Unity::IO::LowLevel::Unsafe::ProcessingState value);
    // static field const value: static public Unity.IO.LowLevel.Unsafe.ProcessingState Reading
    static constexpr const int Reading = 2;
    // Get static field: static public Unity.IO.LowLevel.Unsafe.ProcessingState Reading
    static ::Unity::IO::LowLevel::Unsafe::ProcessingState _get_Reading();
    // Set static field: static public Unity.IO.LowLevel.Unsafe.ProcessingState Reading
    static void _set_Reading(::Unity::IO::LowLevel::Unsafe::ProcessingState value);
    // static field const value: static public Unity.IO.LowLevel.Unsafe.ProcessingState Completed
    static constexpr const int Completed = 3;
    // Get static field: static public Unity.IO.LowLevel.Unsafe.ProcessingState Completed
    static ::Unity::IO::LowLevel::Unsafe::ProcessingState _get_Completed();
    // Set static field: static public Unity.IO.LowLevel.Unsafe.ProcessingState Completed
    static void _set_Completed(::Unity::IO::LowLevel::Unsafe::ProcessingState value);
    // static field const value: static public Unity.IO.LowLevel.Unsafe.ProcessingState Failed
    static constexpr const int Failed = 4;
    // Get static field: static public Unity.IO.LowLevel.Unsafe.ProcessingState Failed
    static ::Unity::IO::LowLevel::Unsafe::ProcessingState _get_Failed();
    // Set static field: static public Unity.IO.LowLevel.Unsafe.ProcessingState Failed
    static void _set_Failed(::Unity::IO::LowLevel::Unsafe::ProcessingState value);
    // static field const value: static public Unity.IO.LowLevel.Unsafe.ProcessingState Canceled
    static constexpr const int Canceled = 5;
    // Get static field: static public Unity.IO.LowLevel.Unsafe.ProcessingState Canceled
    static ::Unity::IO::LowLevel::Unsafe::ProcessingState _get_Canceled();
    // Set static field: static public Unity.IO.LowLevel.Unsafe.ProcessingState Canceled
    static void _set_Canceled(::Unity::IO::LowLevel::Unsafe::ProcessingState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Unity.IO.LowLevel.Unsafe.ProcessingState
  #pragma pack(pop)
  static check_size<sizeof(ProcessingState), 0 + sizeof(int)> __Unity_IO_LowLevel_Unsafe_ProcessingStateSizeCheck;
  static_assert(sizeof(ProcessingState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
