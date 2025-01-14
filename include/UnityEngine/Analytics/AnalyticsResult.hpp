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
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Forward declaring type: AnalyticsResult
  struct AnalyticsResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::AnalyticsResult, "UnityEngine.Analytics", "AnalyticsResult");
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Analytics.AnalyticsResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct AnalyticsResult/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AnalyticsResult
    constexpr AnalyticsResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Analytics.AnalyticsResult Ok
    static constexpr const int Ok = 0;
    // Get static field: static public UnityEngine.Analytics.AnalyticsResult Ok
    static ::UnityEngine::Analytics::AnalyticsResult _get_Ok();
    // Set static field: static public UnityEngine.Analytics.AnalyticsResult Ok
    static void _set_Ok(::UnityEngine::Analytics::AnalyticsResult value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsResult NotInitialized
    static constexpr const int NotInitialized = 1;
    // Get static field: static public UnityEngine.Analytics.AnalyticsResult NotInitialized
    static ::UnityEngine::Analytics::AnalyticsResult _get_NotInitialized();
    // Set static field: static public UnityEngine.Analytics.AnalyticsResult NotInitialized
    static void _set_NotInitialized(::UnityEngine::Analytics::AnalyticsResult value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsResult AnalyticsDisabled
    static constexpr const int AnalyticsDisabled = 2;
    // Get static field: static public UnityEngine.Analytics.AnalyticsResult AnalyticsDisabled
    static ::UnityEngine::Analytics::AnalyticsResult _get_AnalyticsDisabled();
    // Set static field: static public UnityEngine.Analytics.AnalyticsResult AnalyticsDisabled
    static void _set_AnalyticsDisabled(::UnityEngine::Analytics::AnalyticsResult value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsResult TooManyItems
    static constexpr const int TooManyItems = 3;
    // Get static field: static public UnityEngine.Analytics.AnalyticsResult TooManyItems
    static ::UnityEngine::Analytics::AnalyticsResult _get_TooManyItems();
    // Set static field: static public UnityEngine.Analytics.AnalyticsResult TooManyItems
    static void _set_TooManyItems(::UnityEngine::Analytics::AnalyticsResult value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsResult SizeLimitReached
    static constexpr const int SizeLimitReached = 4;
    // Get static field: static public UnityEngine.Analytics.AnalyticsResult SizeLimitReached
    static ::UnityEngine::Analytics::AnalyticsResult _get_SizeLimitReached();
    // Set static field: static public UnityEngine.Analytics.AnalyticsResult SizeLimitReached
    static void _set_SizeLimitReached(::UnityEngine::Analytics::AnalyticsResult value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsResult TooManyRequests
    static constexpr const int TooManyRequests = 5;
    // Get static field: static public UnityEngine.Analytics.AnalyticsResult TooManyRequests
    static ::UnityEngine::Analytics::AnalyticsResult _get_TooManyRequests();
    // Set static field: static public UnityEngine.Analytics.AnalyticsResult TooManyRequests
    static void _set_TooManyRequests(::UnityEngine::Analytics::AnalyticsResult value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsResult InvalidData
    static constexpr const int InvalidData = 6;
    // Get static field: static public UnityEngine.Analytics.AnalyticsResult InvalidData
    static ::UnityEngine::Analytics::AnalyticsResult _get_InvalidData();
    // Set static field: static public UnityEngine.Analytics.AnalyticsResult InvalidData
    static void _set_InvalidData(::UnityEngine::Analytics::AnalyticsResult value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsResult UnsupportedPlatform
    static constexpr const int UnsupportedPlatform = 7;
    // Get static field: static public UnityEngine.Analytics.AnalyticsResult UnsupportedPlatform
    static ::UnityEngine::Analytics::AnalyticsResult _get_UnsupportedPlatform();
    // Set static field: static public UnityEngine.Analytics.AnalyticsResult UnsupportedPlatform
    static void _set_UnsupportedPlatform(::UnityEngine::Analytics::AnalyticsResult value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Analytics.AnalyticsResult
  #pragma pack(pop)
  static check_size<sizeof(AnalyticsResult), 0 + sizeof(int)> __UnityEngine_Analytics_AnalyticsResultSizeCheck;
  static_assert(sizeof(AnalyticsResult) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
