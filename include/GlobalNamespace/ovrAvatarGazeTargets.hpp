// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: ovrAvatarGazeTarget
#include "GlobalNamespace/ovrAvatarGazeTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarGazeTargets
  struct ovrAvatarGazeTargets;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarGazeTargets, "", "ovrAvatarGazeTargets");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarGazeTargets
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarGazeTargets/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 targetCount
    // Size: 0x4
    // Offset: 0x0
    uint targetCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: targetCount and: targets
    char __padding0[0x4] = {};
    // public ovrAvatarGazeTarget[] targets
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<::GlobalNamespace::ovrAvatarGazeTarget> targets;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::ovrAvatarGazeTarget>) == 0x8);
    public:
    // Creating value type constructor for type: ovrAvatarGazeTargets
    constexpr ovrAvatarGazeTargets(uint targetCount_ = {}, ::ArrayW<::GlobalNamespace::ovrAvatarGazeTarget> targets_ = ::ArrayW<::GlobalNamespace::ovrAvatarGazeTarget>(static_cast<void*>(nullptr))) noexcept : targetCount{targetCount_}, targets{targets_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 targetCount
    uint& dyn_targetCount();
    // Get instance field reference: public ovrAvatarGazeTarget[] targets
    ::ArrayW<::GlobalNamespace::ovrAvatarGazeTarget>& dyn_targets();
  }; // ovrAvatarGazeTargets
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarGazeTargets), 8 + sizeof(::ArrayW<::GlobalNamespace::ovrAvatarGazeTarget>)> __GlobalNamespace_ovrAvatarGazeTargetsSizeCheck;
  static_assert(sizeof(ovrAvatarGazeTargets) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
