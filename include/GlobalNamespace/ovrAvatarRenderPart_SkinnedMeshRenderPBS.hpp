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
// Including type: ovrAvatarVisibilityFlags
#include "GlobalNamespace/ovrAvatarVisibilityFlags.hpp"
// Including type: ovrAvatarSkinnedMeshPose
#include "GlobalNamespace/ovrAvatarSkinnedMeshPose.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarRenderPart_SkinnedMeshRenderPBS
  struct ovrAvatarRenderPart_SkinnedMeshRenderPBS;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarRenderPart_SkinnedMeshRenderPBS, "", "ovrAvatarRenderPart_SkinnedMeshRenderPBS");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarRenderPart_SkinnedMeshRenderPBS
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarRenderPart_SkinnedMeshRenderPBS/*, public ::System::ValueType*/ {
    public:
    public:
    // public ovrAvatarTransform localTransform
    // Size: 0x28
    // Offset: 0x0
    ::GlobalNamespace::ovrAvatarTransform localTransform;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarTransform) == 0x28);
    // public ovrAvatarVisibilityFlags visibilityMask
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::ovrAvatarVisibilityFlags visibilityMask;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarVisibilityFlags) == 0x4);
    // Padding between fields: visibilityMask and: meshAssetID
    char __padding1[0x4] = {};
    // public System.UInt64 meshAssetID
    // Size: 0x8
    // Offset: 0x30
    uint64_t meshAssetID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 albedoTextureAssetID
    // Size: 0x8
    // Offset: 0x38
    uint64_t albedoTextureAssetID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 surfaceTextureAssetID
    // Size: 0x8
    // Offset: 0x40
    uint64_t surfaceTextureAssetID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public ovrAvatarSkinnedMeshPose skinnedPose
    // Size: 0x20
    // Offset: 0x48
    ::GlobalNamespace::ovrAvatarSkinnedMeshPose skinnedPose;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarSkinnedMeshPose) == 0x20);
    public:
    // Creating value type constructor for type: ovrAvatarRenderPart_SkinnedMeshRenderPBS
    constexpr ovrAvatarRenderPart_SkinnedMeshRenderPBS(::GlobalNamespace::ovrAvatarTransform localTransform_ = {}, ::GlobalNamespace::ovrAvatarVisibilityFlags visibilityMask_ = {}, uint64_t meshAssetID_ = {}, uint64_t albedoTextureAssetID_ = {}, uint64_t surfaceTextureAssetID_ = {}, ::GlobalNamespace::ovrAvatarSkinnedMeshPose skinnedPose_ = {}) noexcept : localTransform{localTransform_}, visibilityMask{visibilityMask_}, meshAssetID{meshAssetID_}, albedoTextureAssetID{albedoTextureAssetID_}, surfaceTextureAssetID{surfaceTextureAssetID_}, skinnedPose{skinnedPose_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public ovrAvatarTransform localTransform
    ::GlobalNamespace::ovrAvatarTransform& dyn_localTransform();
    // Get instance field reference: public ovrAvatarVisibilityFlags visibilityMask
    ::GlobalNamespace::ovrAvatarVisibilityFlags& dyn_visibilityMask();
    // Get instance field reference: public System.UInt64 meshAssetID
    uint64_t& dyn_meshAssetID();
    // Get instance field reference: public System.UInt64 albedoTextureAssetID
    uint64_t& dyn_albedoTextureAssetID();
    // Get instance field reference: public System.UInt64 surfaceTextureAssetID
    uint64_t& dyn_surfaceTextureAssetID();
    // Get instance field reference: public ovrAvatarSkinnedMeshPose skinnedPose
    ::GlobalNamespace::ovrAvatarSkinnedMeshPose& dyn_skinnedPose();
  }; // ovrAvatarRenderPart_SkinnedMeshRenderPBS
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarRenderPart_SkinnedMeshRenderPBS), 72 + sizeof(::GlobalNamespace::ovrAvatarSkinnedMeshPose)> __GlobalNamespace_ovrAvatarRenderPart_SkinnedMeshRenderPBSSizeCheck;
  static_assert(sizeof(ovrAvatarRenderPart_SkinnedMeshRenderPBS) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
