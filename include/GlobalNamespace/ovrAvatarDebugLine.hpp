// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: ovrAvatarDebugContext
#include "GlobalNamespace/ovrAvatarDebugContext.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarDebugLine
  struct ovrAvatarDebugLine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarDebugLine, "", "ovrAvatarDebugLine");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarDebugLine
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarDebugLine/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector3 startPoint
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 startPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 endPoint
    // Size: 0xC
    // Offset: 0xC
    ::UnityEngine::Vector3 endPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 color
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public ovrAvatarDebugContext context
    // Size: 0x4
    // Offset: 0x24
    ::GlobalNamespace::ovrAvatarDebugContext context;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarDebugContext) == 0x4);
    // public System.IntPtr text
    // Size: 0x8
    // Offset: 0x28
    ::System::IntPtr text;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: ovrAvatarDebugLine
    constexpr ovrAvatarDebugLine(::UnityEngine::Vector3 startPoint_ = {}, ::UnityEngine::Vector3 endPoint_ = {}, ::UnityEngine::Vector3 color_ = {}, ::GlobalNamespace::ovrAvatarDebugContext context_ = {}, ::System::IntPtr text_ = {}) noexcept : startPoint{startPoint_}, endPoint{endPoint_}, color{color_}, context{context_}, text{text_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector3 startPoint
    ::UnityEngine::Vector3& dyn_startPoint();
    // Get instance field reference: public UnityEngine.Vector3 endPoint
    ::UnityEngine::Vector3& dyn_endPoint();
    // Get instance field reference: public UnityEngine.Vector3 color
    ::UnityEngine::Vector3& dyn_color();
    // Get instance field reference: public ovrAvatarDebugContext context
    ::GlobalNamespace::ovrAvatarDebugContext& dyn_context();
    // Get instance field reference: public System.IntPtr text
    ::System::IntPtr& dyn_text();
  }; // ovrAvatarDebugLine
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarDebugLine), 40 + sizeof(::System::IntPtr)> __GlobalNamespace_ovrAvatarDebugLineSizeCheck;
  static_assert(sizeof(ovrAvatarDebugLine) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
