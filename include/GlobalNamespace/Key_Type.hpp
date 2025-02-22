// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Key
#include "GlobalNamespace/Key.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Key::Type, "", "Key/Type");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Key/Type
  // [TokenAttribute] Offset: FFFFFFFF
  struct Key::Type/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Type
    constexpr Type(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Key/Type ALPHA
    static constexpr const int ALPHA = 0;
    // Get static field: static public Key/Type ALPHA
    static ::GlobalNamespace::Key::Type _get_ALPHA();
    // Set static field: static public Key/Type ALPHA
    static void _set_ALPHA(::GlobalNamespace::Key::Type value);
    // static field const value: static public Key/Type BACKSPACE
    static constexpr const int BACKSPACE = 1;
    // Get static field: static public Key/Type BACKSPACE
    static ::GlobalNamespace::Key::Type _get_BACKSPACE();
    // Set static field: static public Key/Type BACKSPACE
    static void _set_BACKSPACE(::GlobalNamespace::Key::Type value);
    // static field const value: static public Key/Type SHIFT
    static constexpr const int SHIFT = 2;
    // Get static field: static public Key/Type SHIFT
    static ::GlobalNamespace::Key::Type _get_SHIFT();
    // Set static field: static public Key/Type SHIFT
    static void _set_SHIFT(::GlobalNamespace::Key::Type value);
    // static field const value: static public Key/Type RETURN
    static constexpr const int RETURN = 3;
    // Get static field: static public Key/Type RETURN
    static ::GlobalNamespace::Key::Type _get_RETURN();
    // Set static field: static public Key/Type RETURN
    static void _set_RETURN(::GlobalNamespace::Key::Type value);
    // static field const value: static public Key/Type SYMBOL
    static constexpr const int SYMBOL = 4;
    // Get static field: static public Key/Type SYMBOL
    static ::GlobalNamespace::Key::Type _get_SYMBOL();
    // Set static field: static public Key/Type SYMBOL
    static void _set_SYMBOL(::GlobalNamespace::Key::Type value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Key/Type
  #pragma pack(pop)
  static check_size<sizeof(Key::Type), 0 + sizeof(int)> __GlobalNamespace_Key_TypeSizeCheck;
  static_assert(sizeof(Key::Type) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
