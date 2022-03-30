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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: CallingConventions
  struct CallingConventions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::CallingConventions, "System.Reflection", "CallingConventions");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.CallingConventions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 5799D8
  // [FlagsAttribute] Offset: FFFFFFFF
  struct CallingConventions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CallingConventions
    constexpr CallingConventions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Reflection.CallingConventions Standard
    static constexpr const int Standard = 1;
    // Get static field: static public System.Reflection.CallingConventions Standard
    static ::System::Reflection::CallingConventions _get_Standard();
    // Set static field: static public System.Reflection.CallingConventions Standard
    static void _set_Standard(::System::Reflection::CallingConventions value);
    // static field const value: static public System.Reflection.CallingConventions VarArgs
    static constexpr const int VarArgs = 2;
    // Get static field: static public System.Reflection.CallingConventions VarArgs
    static ::System::Reflection::CallingConventions _get_VarArgs();
    // Set static field: static public System.Reflection.CallingConventions VarArgs
    static void _set_VarArgs(::System::Reflection::CallingConventions value);
    // static field const value: static public System.Reflection.CallingConventions Any
    static constexpr const int Any = 3;
    // Get static field: static public System.Reflection.CallingConventions Any
    static ::System::Reflection::CallingConventions _get_Any();
    // Set static field: static public System.Reflection.CallingConventions Any
    static void _set_Any(::System::Reflection::CallingConventions value);
    // static field const value: static public System.Reflection.CallingConventions HasThis
    static constexpr const int HasThis = 32;
    // Get static field: static public System.Reflection.CallingConventions HasThis
    static ::System::Reflection::CallingConventions _get_HasThis();
    // Set static field: static public System.Reflection.CallingConventions HasThis
    static void _set_HasThis(::System::Reflection::CallingConventions value);
    // static field const value: static public System.Reflection.CallingConventions ExplicitThis
    static constexpr const int ExplicitThis = 64;
    // Get static field: static public System.Reflection.CallingConventions ExplicitThis
    static ::System::Reflection::CallingConventions _get_ExplicitThis();
    // Set static field: static public System.Reflection.CallingConventions ExplicitThis
    static void _set_ExplicitThis(::System::Reflection::CallingConventions value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Reflection.CallingConventions
  #pragma pack(pop)
  static check_size<sizeof(CallingConventions), 0 + sizeof(int)> __System_Reflection_CallingConventionsSizeCheck;
  static_assert(sizeof(CallingConventions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
