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
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Forward declaring type: Video3DLayout
  struct Video3DLayout;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::Video3DLayout, "UnityEngine.Video", "Video3DLayout");
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Video.Video3DLayout
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 5C2224
  struct Video3DLayout/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Video3DLayout
    constexpr Video3DLayout(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Video.Video3DLayout No3D
    static constexpr const int No3D = 0;
    // Get static field: static public UnityEngine.Video.Video3DLayout No3D
    static ::UnityEngine::Video::Video3DLayout _get_No3D();
    // Set static field: static public UnityEngine.Video.Video3DLayout No3D
    static void _set_No3D(::UnityEngine::Video::Video3DLayout value);
    // static field const value: static public UnityEngine.Video.Video3DLayout SideBySide3D
    static constexpr const int SideBySide3D = 1;
    // Get static field: static public UnityEngine.Video.Video3DLayout SideBySide3D
    static ::UnityEngine::Video::Video3DLayout _get_SideBySide3D();
    // Set static field: static public UnityEngine.Video.Video3DLayout SideBySide3D
    static void _set_SideBySide3D(::UnityEngine::Video::Video3DLayout value);
    // static field const value: static public UnityEngine.Video.Video3DLayout OverUnder3D
    static constexpr const int OverUnder3D = 2;
    // Get static field: static public UnityEngine.Video.Video3DLayout OverUnder3D
    static ::UnityEngine::Video::Video3DLayout _get_OverUnder3D();
    // Set static field: static public UnityEngine.Video.Video3DLayout OverUnder3D
    static void _set_OverUnder3D(::UnityEngine::Video::Video3DLayout value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Video.Video3DLayout
  #pragma pack(pop)
  static check_size<sizeof(Video3DLayout), 0 + sizeof(int)> __UnityEngine_Video_Video3DLayoutSizeCheck;
  static_assert(sizeof(Video3DLayout) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
