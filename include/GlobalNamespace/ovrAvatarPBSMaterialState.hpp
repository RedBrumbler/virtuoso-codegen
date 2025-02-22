// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarPBSMaterialState
  struct ovrAvatarPBSMaterialState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarPBSMaterialState, "", "ovrAvatarPBSMaterialState");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarPBSMaterialState
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarPBSMaterialState/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector4 baseColor
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Vector4 baseColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public System.UInt64 albedoTextureID
    // Size: 0x8
    // Offset: 0x10
    uint64_t albedoTextureID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public UnityEngine.Vector4 albedoMultiplier
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Vector4 albedoMultiplier;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public System.UInt64 metallicnessTextureID
    // Size: 0x8
    // Offset: 0x28
    uint64_t metallicnessTextureID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.Single glossinessScale
    // Size: 0x4
    // Offset: 0x30
    float glossinessScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: glossinessScale and: normalTextureID
    char __padding4[0x4] = {};
    // public System.UInt64 normalTextureID
    // Size: 0x8
    // Offset: 0x38
    uint64_t normalTextureID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 heightTextureID
    // Size: 0x8
    // Offset: 0x40
    uint64_t heightTextureID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 occlusionTextureID
    // Size: 0x8
    // Offset: 0x48
    uint64_t occlusionTextureID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 emissionTextureID
    // Size: 0x8
    // Offset: 0x50
    uint64_t emissionTextureID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public UnityEngine.Vector4 emissionMultiplier
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Vector4 emissionMultiplier;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public System.UInt64 detailMaskTextureID
    // Size: 0x8
    // Offset: 0x68
    uint64_t detailMaskTextureID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 detailAlbedoTextureID
    // Size: 0x8
    // Offset: 0x70
    uint64_t detailAlbedoTextureID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 detailNormalTextureID
    // Size: 0x8
    // Offset: 0x78
    uint64_t detailNormalTextureID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: ovrAvatarPBSMaterialState
    constexpr ovrAvatarPBSMaterialState(::UnityEngine::Vector4 baseColor_ = {}, uint64_t albedoTextureID_ = {}, ::UnityEngine::Vector4 albedoMultiplier_ = {}, uint64_t metallicnessTextureID_ = {}, float glossinessScale_ = {}, uint64_t normalTextureID_ = {}, uint64_t heightTextureID_ = {}, uint64_t occlusionTextureID_ = {}, uint64_t emissionTextureID_ = {}, ::UnityEngine::Vector4 emissionMultiplier_ = {}, uint64_t detailMaskTextureID_ = {}, uint64_t detailAlbedoTextureID_ = {}, uint64_t detailNormalTextureID_ = {}) noexcept : baseColor{baseColor_}, albedoTextureID{albedoTextureID_}, albedoMultiplier{albedoMultiplier_}, metallicnessTextureID{metallicnessTextureID_}, glossinessScale{glossinessScale_}, normalTextureID{normalTextureID_}, heightTextureID{heightTextureID_}, occlusionTextureID{occlusionTextureID_}, emissionTextureID{emissionTextureID_}, emissionMultiplier{emissionMultiplier_}, detailMaskTextureID{detailMaskTextureID_}, detailAlbedoTextureID{detailAlbedoTextureID_}, detailNormalTextureID{detailNormalTextureID_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector4 baseColor
    ::UnityEngine::Vector4& dyn_baseColor();
    // Get instance field reference: public System.UInt64 albedoTextureID
    uint64_t& dyn_albedoTextureID();
    // Get instance field reference: public UnityEngine.Vector4 albedoMultiplier
    ::UnityEngine::Vector4& dyn_albedoMultiplier();
    // Get instance field reference: public System.UInt64 metallicnessTextureID
    uint64_t& dyn_metallicnessTextureID();
    // Get instance field reference: public System.Single glossinessScale
    float& dyn_glossinessScale();
    // Get instance field reference: public System.UInt64 normalTextureID
    uint64_t& dyn_normalTextureID();
    // Get instance field reference: public System.UInt64 heightTextureID
    uint64_t& dyn_heightTextureID();
    // Get instance field reference: public System.UInt64 occlusionTextureID
    uint64_t& dyn_occlusionTextureID();
    // Get instance field reference: public System.UInt64 emissionTextureID
    uint64_t& dyn_emissionTextureID();
    // Get instance field reference: public UnityEngine.Vector4 emissionMultiplier
    ::UnityEngine::Vector4& dyn_emissionMultiplier();
    // Get instance field reference: public System.UInt64 detailMaskTextureID
    uint64_t& dyn_detailMaskTextureID();
    // Get instance field reference: public System.UInt64 detailAlbedoTextureID
    uint64_t& dyn_detailAlbedoTextureID();
    // Get instance field reference: public System.UInt64 detailNormalTextureID
    uint64_t& dyn_detailNormalTextureID();
    // static private System.Boolean VectorEquals(UnityEngine.Vector4 a, UnityEngine.Vector4 b)
    // Offset: 0x1359228
    static bool VectorEquals(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1359258
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1359448
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // ovrAvatarPBSMaterialState
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarPBSMaterialState), 120 + sizeof(uint64_t)> __GlobalNamespace_ovrAvatarPBSMaterialStateSizeCheck;
  static_assert(sizeof(ovrAvatarPBSMaterialState) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ovrAvatarPBSMaterialState::VectorEquals
// Il2CppName: VectorEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector4, ::UnityEngine::Vector4)>(&GlobalNamespace::ovrAvatarPBSMaterialState::VectorEquals)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ovrAvatarPBSMaterialState), "VectorEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ovrAvatarPBSMaterialState::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ovrAvatarPBSMaterialState::*)(::Il2CppObject*)>(&GlobalNamespace::ovrAvatarPBSMaterialState::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ovrAvatarPBSMaterialState), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ovrAvatarPBSMaterialState::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ovrAvatarPBSMaterialState::*)()>(&GlobalNamespace::ovrAvatarPBSMaterialState::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ovrAvatarPBSMaterialState), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
