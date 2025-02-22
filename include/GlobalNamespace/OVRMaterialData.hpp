// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRTextureData
#include "GlobalNamespace/OVRTextureData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRMaterialData
  struct OVRMaterialData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMaterialData, "", "OVRMaterialData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRMaterialData
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRMaterialData/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Shader shader
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Shader* shader;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // public System.Int32 textureId
    // Size: 0x4
    // Offset: 0x8
    int textureId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: textureId and: texture
    char __padding1[0x4] = {};
    // public OVRTextureData texture
    // Size: 0x18
    // Offset: 0x10
    ::GlobalNamespace::OVRTextureData texture;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRTextureData) == 0x18);
    public:
    // Creating value type constructor for type: OVRMaterialData
    constexpr OVRMaterialData(::UnityEngine::Shader* shader_ = {}, int textureId_ = {}, ::GlobalNamespace::OVRTextureData texture_ = {}) noexcept : shader{shader_}, textureId{textureId_}, texture{texture_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Shader shader
    ::UnityEngine::Shader*& dyn_shader();
    // Get instance field reference: public System.Int32 textureId
    int& dyn_textureId();
    // Get instance field reference: public OVRTextureData texture
    ::GlobalNamespace::OVRTextureData& dyn_texture();
  }; // OVRMaterialData
  #pragma pack(pop)
  static check_size<sizeof(OVRMaterialData), 16 + sizeof(::GlobalNamespace::OVRTextureData)> __GlobalNamespace_OVRMaterialDataSizeCheck;
  static_assert(sizeof(OVRMaterialData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
