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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: UserOrdering
  struct UserOrdering;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::UserOrdering, "Oculus.Platform", "UserOrdering");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.UserOrdering
  // [TokenAttribute] Offset: FFFFFFFF
  struct UserOrdering/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UserOrdering
    constexpr UserOrdering(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0x5A4B94
    // static field const value: static public Oculus.Platform.UserOrdering Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.UserOrdering Unknown
    static ::Oculus::Platform::UserOrdering _get_Unknown();
    // Set static field: static public Oculus.Platform.UserOrdering Unknown
    static void _set_Unknown(::Oculus::Platform::UserOrdering value);
    // [DescriptionAttribute] Offset: 0x5A4BCC
    // static field const value: static public Oculus.Platform.UserOrdering None
    static constexpr const int None = 1;
    // Get static field: static public Oculus.Platform.UserOrdering None
    static ::Oculus::Platform::UserOrdering _get_None();
    // Set static field: static public Oculus.Platform.UserOrdering None
    static void _set_None(::Oculus::Platform::UserOrdering value);
    // [DescriptionAttribute] Offset: 0x5A4C04
    // static field const value: static public Oculus.Platform.UserOrdering PresenceAlphabetical
    static constexpr const int PresenceAlphabetical = 2;
    // Get static field: static public Oculus.Platform.UserOrdering PresenceAlphabetical
    static ::Oculus::Platform::UserOrdering _get_PresenceAlphabetical();
    // Set static field: static public Oculus.Platform.UserOrdering PresenceAlphabetical
    static void _set_PresenceAlphabetical(::Oculus::Platform::UserOrdering value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Oculus.Platform.UserOrdering
  #pragma pack(pop)
  static check_size<sizeof(UserOrdering), 0 + sizeof(int)> __Oculus_Platform_UserOrderingSizeCheck;
  static_assert(sizeof(UserOrdering) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
