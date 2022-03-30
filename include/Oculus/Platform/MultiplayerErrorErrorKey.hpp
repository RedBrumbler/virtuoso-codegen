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
  // Forward declaring type: MultiplayerErrorErrorKey
  struct MultiplayerErrorErrorKey;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MultiplayerErrorErrorKey, "Oculus.Platform", "MultiplayerErrorErrorKey");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.MultiplayerErrorErrorKey
  // [TokenAttribute] Offset: FFFFFFFF
  struct MultiplayerErrorErrorKey/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MultiplayerErrorErrorKey
    constexpr MultiplayerErrorErrorKey(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0x5A345C
    // static field const value: static public Oculus.Platform.MultiplayerErrorErrorKey Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.MultiplayerErrorErrorKey Unknown
    static ::Oculus::Platform::MultiplayerErrorErrorKey _get_Unknown();
    // Set static field: static public Oculus.Platform.MultiplayerErrorErrorKey Unknown
    static void _set_Unknown(::Oculus::Platform::MultiplayerErrorErrorKey value);
    // [DescriptionAttribute] Offset: 0x5A3494
    // static field const value: static public Oculus.Platform.MultiplayerErrorErrorKey DestinationUnavailable
    static constexpr const int DestinationUnavailable = 1;
    // Get static field: static public Oculus.Platform.MultiplayerErrorErrorKey DestinationUnavailable
    static ::Oculus::Platform::MultiplayerErrorErrorKey _get_DestinationUnavailable();
    // Set static field: static public Oculus.Platform.MultiplayerErrorErrorKey DestinationUnavailable
    static void _set_DestinationUnavailable(::Oculus::Platform::MultiplayerErrorErrorKey value);
    // [DescriptionAttribute] Offset: 0x5A34CC
    // static field const value: static public Oculus.Platform.MultiplayerErrorErrorKey DlcRequired
    static constexpr const int DlcRequired = 2;
    // Get static field: static public Oculus.Platform.MultiplayerErrorErrorKey DlcRequired
    static ::Oculus::Platform::MultiplayerErrorErrorKey _get_DlcRequired();
    // Set static field: static public Oculus.Platform.MultiplayerErrorErrorKey DlcRequired
    static void _set_DlcRequired(::Oculus::Platform::MultiplayerErrorErrorKey value);
    // [DescriptionAttribute] Offset: 0x5A3504
    // static field const value: static public Oculus.Platform.MultiplayerErrorErrorKey General
    static constexpr const int General = 3;
    // Get static field: static public Oculus.Platform.MultiplayerErrorErrorKey General
    static ::Oculus::Platform::MultiplayerErrorErrorKey _get_General();
    // Set static field: static public Oculus.Platform.MultiplayerErrorErrorKey General
    static void _set_General(::Oculus::Platform::MultiplayerErrorErrorKey value);
    // [DescriptionAttribute] Offset: 0x5A353C
    // static field const value: static public Oculus.Platform.MultiplayerErrorErrorKey GroupFull
    static constexpr const int GroupFull = 4;
    // Get static field: static public Oculus.Platform.MultiplayerErrorErrorKey GroupFull
    static ::Oculus::Platform::MultiplayerErrorErrorKey _get_GroupFull();
    // Set static field: static public Oculus.Platform.MultiplayerErrorErrorKey GroupFull
    static void _set_GroupFull(::Oculus::Platform::MultiplayerErrorErrorKey value);
    // [DescriptionAttribute] Offset: 0x5A3574
    // static field const value: static public Oculus.Platform.MultiplayerErrorErrorKey InviterNotJoinable
    static constexpr const int InviterNotJoinable = 5;
    // Get static field: static public Oculus.Platform.MultiplayerErrorErrorKey InviterNotJoinable
    static ::Oculus::Platform::MultiplayerErrorErrorKey _get_InviterNotJoinable();
    // Set static field: static public Oculus.Platform.MultiplayerErrorErrorKey InviterNotJoinable
    static void _set_InviterNotJoinable(::Oculus::Platform::MultiplayerErrorErrorKey value);
    // [DescriptionAttribute] Offset: 0x5A35AC
    // static field const value: static public Oculus.Platform.MultiplayerErrorErrorKey LevelNotHighEnough
    static constexpr const int LevelNotHighEnough = 6;
    // Get static field: static public Oculus.Platform.MultiplayerErrorErrorKey LevelNotHighEnough
    static ::Oculus::Platform::MultiplayerErrorErrorKey _get_LevelNotHighEnough();
    // Set static field: static public Oculus.Platform.MultiplayerErrorErrorKey LevelNotHighEnough
    static void _set_LevelNotHighEnough(::Oculus::Platform::MultiplayerErrorErrorKey value);
    // [DescriptionAttribute] Offset: 0x5A35E4
    // static field const value: static public Oculus.Platform.MultiplayerErrorErrorKey LevelNotUnlocked
    static constexpr const int LevelNotUnlocked = 7;
    // Get static field: static public Oculus.Platform.MultiplayerErrorErrorKey LevelNotUnlocked
    static ::Oculus::Platform::MultiplayerErrorErrorKey _get_LevelNotUnlocked();
    // Set static field: static public Oculus.Platform.MultiplayerErrorErrorKey LevelNotUnlocked
    static void _set_LevelNotUnlocked(::Oculus::Platform::MultiplayerErrorErrorKey value);
    // [DescriptionAttribute] Offset: 0x5A361C
    // static field const value: static public Oculus.Platform.MultiplayerErrorErrorKey NetworkTimeout
    static constexpr const int NetworkTimeout = 8;
    // Get static field: static public Oculus.Platform.MultiplayerErrorErrorKey NetworkTimeout
    static ::Oculus::Platform::MultiplayerErrorErrorKey _get_NetworkTimeout();
    // Set static field: static public Oculus.Platform.MultiplayerErrorErrorKey NetworkTimeout
    static void _set_NetworkTimeout(::Oculus::Platform::MultiplayerErrorErrorKey value);
    // [DescriptionAttribute] Offset: 0x5A3654
    // static field const value: static public Oculus.Platform.MultiplayerErrorErrorKey NoLongerAvailable
    static constexpr const int NoLongerAvailable = 9;
    // Get static field: static public Oculus.Platform.MultiplayerErrorErrorKey NoLongerAvailable
    static ::Oculus::Platform::MultiplayerErrorErrorKey _get_NoLongerAvailable();
    // Set static field: static public Oculus.Platform.MultiplayerErrorErrorKey NoLongerAvailable
    static void _set_NoLongerAvailable(::Oculus::Platform::MultiplayerErrorErrorKey value);
    // [DescriptionAttribute] Offset: 0x5A368C
    // static field const value: static public Oculus.Platform.MultiplayerErrorErrorKey UpdateRequired
    static constexpr const int UpdateRequired = 10;
    // Get static field: static public Oculus.Platform.MultiplayerErrorErrorKey UpdateRequired
    static ::Oculus::Platform::MultiplayerErrorErrorKey _get_UpdateRequired();
    // Set static field: static public Oculus.Platform.MultiplayerErrorErrorKey UpdateRequired
    static void _set_UpdateRequired(::Oculus::Platform::MultiplayerErrorErrorKey value);
    // [DescriptionAttribute] Offset: 0x5A36C4
    // static field const value: static public Oculus.Platform.MultiplayerErrorErrorKey TutorialRequired
    static constexpr const int TutorialRequired = 11;
    // Get static field: static public Oculus.Platform.MultiplayerErrorErrorKey TutorialRequired
    static ::Oculus::Platform::MultiplayerErrorErrorKey _get_TutorialRequired();
    // Set static field: static public Oculus.Platform.MultiplayerErrorErrorKey TutorialRequired
    static void _set_TutorialRequired(::Oculus::Platform::MultiplayerErrorErrorKey value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Oculus.Platform.MultiplayerErrorErrorKey
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerErrorErrorKey), 0 + sizeof(int)> __Oculus_Platform_MultiplayerErrorErrorKeySizeCheck;
  static_assert(sizeof(MultiplayerErrorErrorKey) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
