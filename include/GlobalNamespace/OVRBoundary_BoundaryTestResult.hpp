// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRBoundary
#include "GlobalNamespace/OVRBoundary.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBoundary::BoundaryTestResult, "", "OVRBoundary/BoundaryTestResult");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRBoundary/BoundaryTestResult
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: 589C74
  struct OVRBoundary::BoundaryTestResult/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Boolean IsTriggering
    // Size: 0x1
    // Offset: 0x0
    bool IsTriggering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsTriggering and: ClosestDistance
    char __padding0[0x3] = {};
    // public System.Single ClosestDistance
    // Size: 0x4
    // Offset: 0x4
    float ClosestDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 ClosestPoint
    // Size: 0xC
    // Offset: 0x8
    ::UnityEngine::Vector3 ClosestPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 ClosestPointNormal
    // Size: 0xC
    // Offset: 0x14
    ::UnityEngine::Vector3 ClosestPointNormal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: BoundaryTestResult
    constexpr BoundaryTestResult(bool IsTriggering_ = {}, float ClosestDistance_ = {}, ::UnityEngine::Vector3 ClosestPoint_ = {}, ::UnityEngine::Vector3 ClosestPointNormal_ = {}) noexcept : IsTriggering{IsTriggering_}, ClosestDistance{ClosestDistance_}, ClosestPoint{ClosestPoint_}, ClosestPointNormal{ClosestPointNormal_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Boolean IsTriggering
    bool& dyn_IsTriggering();
    // Get instance field reference: public System.Single ClosestDistance
    float& dyn_ClosestDistance();
    // Get instance field reference: public UnityEngine.Vector3 ClosestPoint
    ::UnityEngine::Vector3& dyn_ClosestPoint();
    // Get instance field reference: public UnityEngine.Vector3 ClosestPointNormal
    ::UnityEngine::Vector3& dyn_ClosestPointNormal();
  }; // OVRBoundary/BoundaryTestResult
  #pragma pack(pop)
  static check_size<sizeof(OVRBoundary::BoundaryTestResult), 20 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_OVRBoundary_BoundaryTestResultSizeCheck;
  static_assert(sizeof(OVRBoundary::BoundaryTestResult) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"