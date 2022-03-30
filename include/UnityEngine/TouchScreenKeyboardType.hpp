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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TouchScreenKeyboardType
  struct TouchScreenKeyboardType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TouchScreenKeyboardType, "UnityEngine", "TouchScreenKeyboardType");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TouchScreenKeyboardType
  // [TokenAttribute] Offset: FFFFFFFF
  struct TouchScreenKeyboardType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TouchScreenKeyboardType
    constexpr TouchScreenKeyboardType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TouchScreenKeyboardType Default
    static constexpr const int Default = 0;
    // Get static field: static public UnityEngine.TouchScreenKeyboardType Default
    static ::UnityEngine::TouchScreenKeyboardType _get_Default();
    // Set static field: static public UnityEngine.TouchScreenKeyboardType Default
    static void _set_Default(::UnityEngine::TouchScreenKeyboardType value);
    // static field const value: static public UnityEngine.TouchScreenKeyboardType ASCIICapable
    static constexpr const int ASCIICapable = 1;
    // Get static field: static public UnityEngine.TouchScreenKeyboardType ASCIICapable
    static ::UnityEngine::TouchScreenKeyboardType _get_ASCIICapable();
    // Set static field: static public UnityEngine.TouchScreenKeyboardType ASCIICapable
    static void _set_ASCIICapable(::UnityEngine::TouchScreenKeyboardType value);
    // static field const value: static public UnityEngine.TouchScreenKeyboardType NumbersAndPunctuation
    static constexpr const int NumbersAndPunctuation = 2;
    // Get static field: static public UnityEngine.TouchScreenKeyboardType NumbersAndPunctuation
    static ::UnityEngine::TouchScreenKeyboardType _get_NumbersAndPunctuation();
    // Set static field: static public UnityEngine.TouchScreenKeyboardType NumbersAndPunctuation
    static void _set_NumbersAndPunctuation(::UnityEngine::TouchScreenKeyboardType value);
    // static field const value: static public UnityEngine.TouchScreenKeyboardType URL
    static constexpr const int URL = 3;
    // Get static field: static public UnityEngine.TouchScreenKeyboardType URL
    static ::UnityEngine::TouchScreenKeyboardType _get_URL();
    // Set static field: static public UnityEngine.TouchScreenKeyboardType URL
    static void _set_URL(::UnityEngine::TouchScreenKeyboardType value);
    // static field const value: static public UnityEngine.TouchScreenKeyboardType NumberPad
    static constexpr const int NumberPad = 4;
    // Get static field: static public UnityEngine.TouchScreenKeyboardType NumberPad
    static ::UnityEngine::TouchScreenKeyboardType _get_NumberPad();
    // Set static field: static public UnityEngine.TouchScreenKeyboardType NumberPad
    static void _set_NumberPad(::UnityEngine::TouchScreenKeyboardType value);
    // static field const value: static public UnityEngine.TouchScreenKeyboardType PhonePad
    static constexpr const int PhonePad = 5;
    // Get static field: static public UnityEngine.TouchScreenKeyboardType PhonePad
    static ::UnityEngine::TouchScreenKeyboardType _get_PhonePad();
    // Set static field: static public UnityEngine.TouchScreenKeyboardType PhonePad
    static void _set_PhonePad(::UnityEngine::TouchScreenKeyboardType value);
    // static field const value: static public UnityEngine.TouchScreenKeyboardType NamePhonePad
    static constexpr const int NamePhonePad = 6;
    // Get static field: static public UnityEngine.TouchScreenKeyboardType NamePhonePad
    static ::UnityEngine::TouchScreenKeyboardType _get_NamePhonePad();
    // Set static field: static public UnityEngine.TouchScreenKeyboardType NamePhonePad
    static void _set_NamePhonePad(::UnityEngine::TouchScreenKeyboardType value);
    // static field const value: static public UnityEngine.TouchScreenKeyboardType EmailAddress
    static constexpr const int EmailAddress = 7;
    // Get static field: static public UnityEngine.TouchScreenKeyboardType EmailAddress
    static ::UnityEngine::TouchScreenKeyboardType _get_EmailAddress();
    // Set static field: static public UnityEngine.TouchScreenKeyboardType EmailAddress
    static void _set_EmailAddress(::UnityEngine::TouchScreenKeyboardType value);
    // [ObsoleteAttribute] Offset: 0x56B354
    // static field const value: static public UnityEngine.TouchScreenKeyboardType NintendoNetworkAccount
    static constexpr const int NintendoNetworkAccount = 8;
    // Get static field: static public UnityEngine.TouchScreenKeyboardType NintendoNetworkAccount
    static ::UnityEngine::TouchScreenKeyboardType _get_NintendoNetworkAccount();
    // Set static field: static public UnityEngine.TouchScreenKeyboardType NintendoNetworkAccount
    static void _set_NintendoNetworkAccount(::UnityEngine::TouchScreenKeyboardType value);
    // static field const value: static public UnityEngine.TouchScreenKeyboardType Social
    static constexpr const int Social = 9;
    // Get static field: static public UnityEngine.TouchScreenKeyboardType Social
    static ::UnityEngine::TouchScreenKeyboardType _get_Social();
    // Set static field: static public UnityEngine.TouchScreenKeyboardType Social
    static void _set_Social(::UnityEngine::TouchScreenKeyboardType value);
    // static field const value: static public UnityEngine.TouchScreenKeyboardType Search
    static constexpr const int Search = 10;
    // Get static field: static public UnityEngine.TouchScreenKeyboardType Search
    static ::UnityEngine::TouchScreenKeyboardType _get_Search();
    // Set static field: static public UnityEngine.TouchScreenKeyboardType Search
    static void _set_Search(::UnityEngine::TouchScreenKeyboardType value);
    // static field const value: static public UnityEngine.TouchScreenKeyboardType DecimalPad
    static constexpr const int DecimalPad = 11;
    // Get static field: static public UnityEngine.TouchScreenKeyboardType DecimalPad
    static ::UnityEngine::TouchScreenKeyboardType _get_DecimalPad();
    // Set static field: static public UnityEngine.TouchScreenKeyboardType DecimalPad
    static void _set_DecimalPad(::UnityEngine::TouchScreenKeyboardType value);
    // static field const value: static public UnityEngine.TouchScreenKeyboardType OneTimeCode
    static constexpr const int OneTimeCode = 12;
    // Get static field: static public UnityEngine.TouchScreenKeyboardType OneTimeCode
    static ::UnityEngine::TouchScreenKeyboardType _get_OneTimeCode();
    // Set static field: static public UnityEngine.TouchScreenKeyboardType OneTimeCode
    static void _set_OneTimeCode(::UnityEngine::TouchScreenKeyboardType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.TouchScreenKeyboardType
  #pragma pack(pop)
  static check_size<sizeof(TouchScreenKeyboardType), 0 + sizeof(int)> __UnityEngine_TouchScreenKeyboardTypeSizeCheck;
  static_assert(sizeof(TouchScreenKeyboardType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
