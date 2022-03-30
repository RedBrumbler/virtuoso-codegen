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
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: Compute_DistanceTransform_EventTypes
  struct Compute_DistanceTransform_EventTypes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::Compute_DistanceTransform_EventTypes, "TMPro", "Compute_DistanceTransform_EventTypes");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.Compute_DistanceTransform_EventTypes
  // [TokenAttribute] Offset: FFFFFFFF
  struct Compute_DistanceTransform_EventTypes/*, public ::System::Enum*/ {
    public:
    // Writing base type padding for base size: 0x0 to desired offset: 0x10
    char ___base_padding[0x10] = {};
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x10
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Compute_DistanceTransform_EventTypes
    constexpr Compute_DistanceTransform_EventTypes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.Compute_DistanceTransform_EventTypes Processing
    static constexpr const int Processing = 0;
    // Get static field: static public TMPro.Compute_DistanceTransform_EventTypes Processing
    static ::TMPro::Compute_DistanceTransform_EventTypes _get_Processing();
    // Set static field: static public TMPro.Compute_DistanceTransform_EventTypes Processing
    static void _set_Processing(::TMPro::Compute_DistanceTransform_EventTypes value);
    // static field const value: static public TMPro.Compute_DistanceTransform_EventTypes Completed
    static constexpr const int Completed = 1;
    // Get static field: static public TMPro.Compute_DistanceTransform_EventTypes Completed
    static ::TMPro::Compute_DistanceTransform_EventTypes _get_Completed();
    // Set static field: static public TMPro.Compute_DistanceTransform_EventTypes Completed
    static void _set_Completed(::TMPro::Compute_DistanceTransform_EventTypes value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // TMPro.Compute_DistanceTransform_EventTypes
  #pragma pack(pop)
  static check_size<sizeof(Compute_DistanceTransform_EventTypes), 16 + sizeof(int)> __TMPro_Compute_DistanceTransform_EventTypesSizeCheck;
  static_assert(sizeof(Compute_DistanceTransform_EventTypes) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"