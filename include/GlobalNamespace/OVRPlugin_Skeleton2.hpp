// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::Skeleton2, "", "OVRPlugin/Skeleton2");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/Skeleton2
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::Skeleton2/*, public ::System::ValueType*/ {
    public:
    public:
    // public OVRPlugin/SkeletonType Type
    // Size: 0x4
    // Offset: 0x0
    ::GlobalNamespace::OVRPlugin::SkeletonType Type;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::SkeletonType) == 0x4);
    // public System.UInt32 NumBones
    // Size: 0x4
    // Offset: 0x4
    uint NumBones;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 NumBoneCapsules
    // Size: 0x4
    // Offset: 0x8
    uint NumBoneCapsules;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: NumBoneCapsules and: Bones
    char __padding2[0x4] = {};
    // public OVRPlugin/Bone[] Bones
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::GlobalNamespace::OVRPlugin::Bone> Bones;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRPlugin::Bone>) == 0x8);
    // public OVRPlugin/BoneCapsule[] BoneCapsules
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::OVRPlugin::BoneCapsule> BoneCapsules;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRPlugin::BoneCapsule>) == 0x8);
    public:
    // Creating value type constructor for type: Skeleton2
    constexpr Skeleton2(::GlobalNamespace::OVRPlugin::SkeletonType Type_ = {}, uint NumBones_ = {}, uint NumBoneCapsules_ = {}, ::ArrayW<::GlobalNamespace::OVRPlugin::Bone> Bones_ = ::ArrayW<::GlobalNamespace::OVRPlugin::Bone>(static_cast<void*>(nullptr)), ::ArrayW<::GlobalNamespace::OVRPlugin::BoneCapsule> BoneCapsules_ = ::ArrayW<::GlobalNamespace::OVRPlugin::BoneCapsule>(static_cast<void*>(nullptr))) noexcept : Type{Type_}, NumBones{NumBones_}, NumBoneCapsules{NumBoneCapsules_}, Bones{Bones_}, BoneCapsules{BoneCapsules_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public OVRPlugin/SkeletonType Type
    ::GlobalNamespace::OVRPlugin::SkeletonType& dyn_Type();
    // Get instance field reference: public System.UInt32 NumBones
    uint& dyn_NumBones();
    // Get instance field reference: public System.UInt32 NumBoneCapsules
    uint& dyn_NumBoneCapsules();
    // Get instance field reference: public OVRPlugin/Bone[] Bones
    ::ArrayW<::GlobalNamespace::OVRPlugin::Bone>& dyn_Bones();
    // Get instance field reference: public OVRPlugin/BoneCapsule[] BoneCapsules
    ::ArrayW<::GlobalNamespace::OVRPlugin::BoneCapsule>& dyn_BoneCapsules();
  }; // OVRPlugin/Skeleton2
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Skeleton2), 24 + sizeof(::ArrayW<::GlobalNamespace::OVRPlugin::BoneCapsule>)> __GlobalNamespace_OVRPlugin_Skeleton2SizeCheck;
  static_assert(sizeof(OVRPlugin::Skeleton2) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
