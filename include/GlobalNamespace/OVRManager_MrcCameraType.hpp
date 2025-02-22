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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MrcCameraType
  struct OVRManager_MrcCameraType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_MrcCameraType, "", "OVRManager/MrcCameraType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRManager/MrcCameraType
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRManager_MrcCameraType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OVRManager_MrcCameraType
    constexpr OVRManager_MrcCameraType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRManager/MrcCameraType Normal
    static constexpr const int Normal = 0;
    // Get static field: static public OVRManager/MrcCameraType Normal
    static ::GlobalNamespace::OVRManager_MrcCameraType _get_Normal();
    // Set static field: static public OVRManager/MrcCameraType Normal
    static void _set_Normal(::GlobalNamespace::OVRManager_MrcCameraType value);
    // static field const value: static public OVRManager/MrcCameraType Foreground
    static constexpr const int Foreground = 1;
    // Get static field: static public OVRManager/MrcCameraType Foreground
    static ::GlobalNamespace::OVRManager_MrcCameraType _get_Foreground();
    // Set static field: static public OVRManager/MrcCameraType Foreground
    static void _set_Foreground(::GlobalNamespace::OVRManager_MrcCameraType value);
    // static field const value: static public OVRManager/MrcCameraType Background
    static constexpr const int Background = 2;
    // Get static field: static public OVRManager/MrcCameraType Background
    static ::GlobalNamespace::OVRManager_MrcCameraType _get_Background();
    // Set static field: static public OVRManager/MrcCameraType Background
    static void _set_Background(::GlobalNamespace::OVRManager_MrcCameraType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRManager/MrcCameraType
  #pragma pack(pop)
  static check_size<sizeof(OVRManager_MrcCameraType), 0 + sizeof(int)> __GlobalNamespace_OVRManager_MrcCameraTypeSizeCheck;
  static_assert(sizeof(OVRManager_MrcCameraType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
