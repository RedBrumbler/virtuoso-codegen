// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: ovrAvatarTransform
#include "GlobalNamespace/ovrAvatarTransform.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarBodyComponent
  struct ovrAvatarBodyComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarBodyComponent, "", "ovrAvatarBodyComponent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarBodyComponent
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarBodyComponent/*, public ::System::ValueType*/ {
    public:
    public:
    // public ovrAvatarTransform leftEyeTransform
    // Size: 0x28
    // Offset: 0x0
    ::GlobalNamespace::ovrAvatarTransform leftEyeTransform;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarTransform) == 0x28);
    // public ovrAvatarTransform rightEyeTransform
    // Size: 0x28
    // Offset: 0x28
    ::GlobalNamespace::ovrAvatarTransform rightEyeTransform;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarTransform) == 0x28);
    // public ovrAvatarTransform centerEyeTransform
    // Size: 0x28
    // Offset: 0x50
    ::GlobalNamespace::ovrAvatarTransform centerEyeTransform;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarTransform) == 0x28);
    // public System.IntPtr renderComponent
    // Size: 0x8
    // Offset: 0x78
    ::System::IntPtr renderComponent;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: ovrAvatarBodyComponent
    constexpr ovrAvatarBodyComponent(::GlobalNamespace::ovrAvatarTransform leftEyeTransform_ = {}, ::GlobalNamespace::ovrAvatarTransform rightEyeTransform_ = {}, ::GlobalNamespace::ovrAvatarTransform centerEyeTransform_ = {}, ::System::IntPtr renderComponent_ = {}) noexcept : leftEyeTransform{leftEyeTransform_}, rightEyeTransform{rightEyeTransform_}, centerEyeTransform{centerEyeTransform_}, renderComponent{renderComponent_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public ovrAvatarTransform leftEyeTransform
    ::GlobalNamespace::ovrAvatarTransform& dyn_leftEyeTransform();
    // Get instance field reference: public ovrAvatarTransform rightEyeTransform
    ::GlobalNamespace::ovrAvatarTransform& dyn_rightEyeTransform();
    // Get instance field reference: public ovrAvatarTransform centerEyeTransform
    ::GlobalNamespace::ovrAvatarTransform& dyn_centerEyeTransform();
    // Get instance field reference: public System.IntPtr renderComponent
    ::System::IntPtr& dyn_renderComponent();
  }; // ovrAvatarBodyComponent
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarBodyComponent), 120 + sizeof(::System::IntPtr)> __GlobalNamespace_ovrAvatarBodyComponentSizeCheck;
  static_assert(sizeof(ovrAvatarBodyComponent) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
