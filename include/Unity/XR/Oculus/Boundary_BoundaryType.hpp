// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.XR.Oculus.Boundary
#include "Unity/XR/Oculus/Boundary.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Boundary::BoundaryType, "Unity.XR.Oculus", "Boundary/BoundaryType");
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.Oculus.Boundary/Unity.XR.Oculus.BoundaryType
  // [TokenAttribute] Offset: FFFFFFFF
  struct Boundary::BoundaryType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BoundaryType
    constexpr BoundaryType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Unity.XR.Oculus.Boundary/Unity.XR.Oculus.BoundaryType OuterBoundary
    static constexpr const int OuterBoundary = 0;
    // Get static field: static public Unity.XR.Oculus.Boundary/Unity.XR.Oculus.BoundaryType OuterBoundary
    static ::Unity::XR::Oculus::Boundary::BoundaryType _get_OuterBoundary();
    // Set static field: static public Unity.XR.Oculus.Boundary/Unity.XR.Oculus.BoundaryType OuterBoundary
    static void _set_OuterBoundary(::Unity::XR::Oculus::Boundary::BoundaryType value);
    // static field const value: static public Unity.XR.Oculus.Boundary/Unity.XR.Oculus.BoundaryType PlayArea
    static constexpr const int PlayArea = 1;
    // Get static field: static public Unity.XR.Oculus.Boundary/Unity.XR.Oculus.BoundaryType PlayArea
    static ::Unity::XR::Oculus::Boundary::BoundaryType _get_PlayArea();
    // Set static field: static public Unity.XR.Oculus.Boundary/Unity.XR.Oculus.BoundaryType PlayArea
    static void _set_PlayArea(::Unity::XR::Oculus::Boundary::BoundaryType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Unity.XR.Oculus.Boundary/Unity.XR.Oculus.BoundaryType
  #pragma pack(pop)
  static check_size<sizeof(Boundary::BoundaryType), 0 + sizeof(int)> __Unity_XR_Oculus_Boundary_BoundaryTypeSizeCheck;
  static_assert(sizeof(Boundary::BoundaryType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
