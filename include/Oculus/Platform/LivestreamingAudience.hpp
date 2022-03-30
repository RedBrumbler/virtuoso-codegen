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
  // Forward declaring type: LivestreamingAudience
  struct LivestreamingAudience;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LivestreamingAudience, "Oculus.Platform", "LivestreamingAudience");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.LivestreamingAudience
  // [TokenAttribute] Offset: FFFFFFFF
  struct LivestreamingAudience/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LivestreamingAudience
    constexpr LivestreamingAudience(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0x5A2F44
    // static field const value: static public Oculus.Platform.LivestreamingAudience Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.LivestreamingAudience Unknown
    static ::Oculus::Platform::LivestreamingAudience _get_Unknown();
    // Set static field: static public Oculus.Platform.LivestreamingAudience Unknown
    static void _set_Unknown(::Oculus::Platform::LivestreamingAudience value);
    // [DescriptionAttribute] Offset: 0x5A2F7C
    // static field const value: static public Oculus.Platform.LivestreamingAudience Public
    static constexpr const int Public = 1;
    // Get static field: static public Oculus.Platform.LivestreamingAudience Public
    static ::Oculus::Platform::LivestreamingAudience _get_Public();
    // Set static field: static public Oculus.Platform.LivestreamingAudience Public
    static void _set_Public(::Oculus::Platform::LivestreamingAudience value);
    // [DescriptionAttribute] Offset: 0x5A2FB4
    // static field const value: static public Oculus.Platform.LivestreamingAudience Friends
    static constexpr const int Friends = 2;
    // Get static field: static public Oculus.Platform.LivestreamingAudience Friends
    static ::Oculus::Platform::LivestreamingAudience _get_Friends();
    // Set static field: static public Oculus.Platform.LivestreamingAudience Friends
    static void _set_Friends(::Oculus::Platform::LivestreamingAudience value);
    // [DescriptionAttribute] Offset: 0x5A2FEC
    // static field const value: static public Oculus.Platform.LivestreamingAudience OnlyMe
    static constexpr const int OnlyMe = 3;
    // Get static field: static public Oculus.Platform.LivestreamingAudience OnlyMe
    static ::Oculus::Platform::LivestreamingAudience _get_OnlyMe();
    // Set static field: static public Oculus.Platform.LivestreamingAudience OnlyMe
    static void _set_OnlyMe(::Oculus::Platform::LivestreamingAudience value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Oculus.Platform.LivestreamingAudience
  #pragma pack(pop)
  static check_size<sizeof(LivestreamingAudience), 0 + sizeof(int)> __Oculus_Platform_LivestreamingAudienceSizeCheck;
  static_assert(sizeof(LivestreamingAudience) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
