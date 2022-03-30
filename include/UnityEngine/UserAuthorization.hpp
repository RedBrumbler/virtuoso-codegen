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
  // Forward declaring type: UserAuthorization
  struct UserAuthorization;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UserAuthorization, "UnityEngine", "UserAuthorization");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UserAuthorization
  // [TokenAttribute] Offset: FFFFFFFF
  struct UserAuthorization/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UserAuthorization
    constexpr UserAuthorization(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UserAuthorization WebCam
    static constexpr const int WebCam = 1;
    // Get static field: static public UnityEngine.UserAuthorization WebCam
    static ::UnityEngine::UserAuthorization _get_WebCam();
    // Set static field: static public UnityEngine.UserAuthorization WebCam
    static void _set_WebCam(::UnityEngine::UserAuthorization value);
    // static field const value: static public UnityEngine.UserAuthorization Microphone
    static constexpr const int Microphone = 2;
    // Get static field: static public UnityEngine.UserAuthorization Microphone
    static ::UnityEngine::UserAuthorization _get_Microphone();
    // Set static field: static public UnityEngine.UserAuthorization Microphone
    static void _set_Microphone(::UnityEngine::UserAuthorization value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.UserAuthorization
  #pragma pack(pop)
  static check_size<sizeof(UserAuthorization), 0 + sizeof(int)> __UnityEngine_UserAuthorizationSizeCheck;
  static_assert(sizeof(UserAuthorization) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
