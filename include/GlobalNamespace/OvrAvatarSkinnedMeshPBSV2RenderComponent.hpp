// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OvrAvatarRenderComponent
#include "GlobalNamespace/OvrAvatarRenderComponent.hpp"
// Including type: ovrAvatarExpressiveParameters
#include "GlobalNamespace/ovrAvatarExpressiveParameters.hpp"
// Including type: ovrAvatarBlendShapeParams
#include "GlobalNamespace/ovrAvatarBlendShapeParams.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarMaterialManager
  class OvrAvatarMaterialManager;
  // Forward declaring type: ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2
  struct ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2;
  // Forward declaring type: ovrAvatarAssetLevelOfDetail
  struct ovrAvatarAssetLevelOfDetail;
  // Forward declaring type: OvrAvatar
  class OvrAvatar;
  // Forward declaring type: OvrAvatarComponent
  class OvrAvatarComponent;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarSkinnedMeshPBSV2RenderComponent
  class OvrAvatarSkinnedMeshPBSV2RenderComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent*, "", "OvrAvatarSkinnedMeshPBSV2RenderComponent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD8
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarSkinnedMeshPBSV2RenderComponent
  // [TokenAttribute] Offset: FFFFFFFF
  class OvrAvatarSkinnedMeshPBSV2RenderComponent : public ::GlobalNamespace::OvrAvatarRenderComponent {
    public:
    // Writing base type padding for base size: 0x31 to desired offset: 0x38
    char ___base_padding[0x7] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private OvrAvatarMaterialManager avatarMaterialManager
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::OvrAvatarMaterialManager* avatarMaterialManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OvrAvatarMaterialManager*) == 0x8);
    // private System.Boolean previouslyActive
    // Size: 0x1
    // Offset: 0x40
    bool previouslyActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isCombinedMaterial
    // Size: 0x1
    // Offset: 0x41
    bool isCombinedMaterial;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isCombinedMaterial and: ExpressiveParameters
    char __padding2[0x2] = {};
    // private ovrAvatarExpressiveParameters ExpressiveParameters
    // Size: 0x78
    // Offset: 0x44
    ::GlobalNamespace::ovrAvatarExpressiveParameters ExpressiveParameters;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarExpressiveParameters) == 0x78);
    // private System.Boolean EnableExpressive
    // Size: 0x1
    // Offset: 0xBC
    bool EnableExpressive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: EnableExpressive and: blendShapeCount
    char __padding4[0x3] = {};
    // private System.Int32 blendShapeCount
    // Size: 0x4
    // Offset: 0xC0
    int blendShapeCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: blendShapeCount and: blendShapeParams
    char __padding5[0x4] = {};
    // private ovrAvatarBlendShapeParams blendShapeParams
    // Size: 0x10
    // Offset: 0xC8
    ::GlobalNamespace::ovrAvatarBlendShapeParams blendShapeParams;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarBlendShapeParams) == 0x10);
    public:
    // static field const value: static private System.String MAIN_MATERIAL_NAME
    static constexpr const char* MAIN_MATERIAL_NAME = "main_material";
    // Get static field: static private System.String MAIN_MATERIAL_NAME
    static ::StringW _get_MAIN_MATERIAL_NAME();
    // Set static field: static private System.String MAIN_MATERIAL_NAME
    static void _set_MAIN_MATERIAL_NAME(::StringW value);
    // static field const value: static private System.String EYE_MATERIAL_NAME
    static constexpr const char* EYE_MATERIAL_NAME = "eye_material";
    // Get static field: static private System.String EYE_MATERIAL_NAME
    static ::StringW _get_EYE_MATERIAL_NAME();
    // Set static field: static private System.String EYE_MATERIAL_NAME
    static void _set_EYE_MATERIAL_NAME(::StringW value);
    // static field const value: static private System.String DEFAULT_MATERIAL_NAME
    static constexpr const char* DEFAULT_MATERIAL_NAME = "_material";
    // Get static field: static private System.String DEFAULT_MATERIAL_NAME
    static ::StringW _get_DEFAULT_MATERIAL_NAME();
    // Set static field: static private System.String DEFAULT_MATERIAL_NAME
    static void _set_DEFAULT_MATERIAL_NAME(::StringW value);
    // Get instance field reference: private OvrAvatarMaterialManager avatarMaterialManager
    ::GlobalNamespace::OvrAvatarMaterialManager*& dyn_avatarMaterialManager();
    // Get instance field reference: private System.Boolean previouslyActive
    bool& dyn_previouslyActive();
    // Get instance field reference: private System.Boolean isCombinedMaterial
    bool& dyn_isCombinedMaterial();
    // Get instance field reference: private ovrAvatarExpressiveParameters ExpressiveParameters
    ::GlobalNamespace::ovrAvatarExpressiveParameters& dyn_ExpressiveParameters();
    // Get instance field reference: private System.Boolean EnableExpressive
    bool& dyn_EnableExpressive();
    // Get instance field reference: private System.Int32 blendShapeCount
    int& dyn_blendShapeCount();
    // Get instance field reference: private ovrAvatarBlendShapeParams blendShapeParams
    ::GlobalNamespace::ovrAvatarBlendShapeParams& dyn_blendShapeParams();
    // System.Void Initialize(System.IntPtr renderPart, ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2 skinnedMeshRender, OvrAvatarMaterialManager materialManager, System.Int32 thirdPersonLayer, System.Int32 firstPersonLayer, System.Boolean combinedMesh, ovrAvatarAssetLevelOfDetail lod, System.Boolean assignExpressiveParams, OvrAvatar avatar, System.Boolean isControllerModel)
    // Offset: 0x8F1EC8
    void Initialize(::System::IntPtr renderPart, ::GlobalNamespace::ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2 skinnedMeshRender, ::GlobalNamespace::OvrAvatarMaterialManager* materialManager, int thirdPersonLayer, int firstPersonLayer, bool combinedMesh, ::GlobalNamespace::ovrAvatarAssetLevelOfDetail lod, bool assignExpressiveParams, ::GlobalNamespace::OvrAvatar* avatar, bool isControllerModel);
    // public System.Void UpdateSkinnedMeshRender(OvrAvatarComponent component, OvrAvatar avatar, System.IntPtr renderPart)
    // Offset: 0x8F2E44
    void UpdateSkinnedMeshRender(::GlobalNamespace::OvrAvatarComponent* component, ::GlobalNamespace::OvrAvatar* avatar, ::System::IntPtr renderPart);
    // private System.Void InitializeSingleComponentMaterial(System.IntPtr renderPart, System.Int32 lodIndex)
    // Offset: 0x8F3080
    void InitializeSingleComponentMaterial(::System::IntPtr renderPart, int lodIndex);
    // private System.Void InitializeCombinedMaterial(System.IntPtr renderPart, System.Int32 lodIndex)
    // Offset: 0x8F2598
    void InitializeCombinedMaterial(::System::IntPtr renderPart, int lodIndex);
    // private System.Void SetMaterialTransparent(UnityEngine.Material mat)
    // Offset: 0x8F22BC
    void SetMaterialTransparent(::UnityEngine::Material* mat);
    // private System.Void SetMaterialOpaque(UnityEngine.Material mat)
    // Offset: 0x8F2420
    void SetMaterialOpaque(::UnityEngine::Material* mat);
    // public System.Void .ctor()
    // Offset: 0x8F3908
    // Implemented from: OvrAvatarRenderComponent
    // Base method: System.Void OvrAvatarRenderComponent::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarSkinnedMeshPBSV2RenderComponent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarSkinnedMeshPBSV2RenderComponent*, creationType>()));
    }
  }; // OvrAvatarSkinnedMeshPBSV2RenderComponent
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarSkinnedMeshPBSV2RenderComponent), 200 + sizeof(::GlobalNamespace::ovrAvatarBlendShapeParams)> __GlobalNamespace_OvrAvatarSkinnedMeshPBSV2RenderComponentSizeCheck;
  static_assert(sizeof(OvrAvatarSkinnedMeshPBSV2RenderComponent) == 0xD8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::*)(::System::IntPtr, ::GlobalNamespace::ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2, ::GlobalNamespace::OvrAvatarMaterialManager*, int, int, bool, ::GlobalNamespace::ovrAvatarAssetLevelOfDetail, bool, ::GlobalNamespace::OvrAvatar*, bool)>(&GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::Initialize)> {
  static const MethodInfo* get() {
    static auto* renderPart = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* skinnedMeshRender = &::il2cpp_utils::GetClassFromName("", "ovrAvatarRenderPart_SkinnedMeshRenderPBS_V2")->byval_arg;
    static auto* materialManager = &::il2cpp_utils::GetClassFromName("", "OvrAvatarMaterialManager")->byval_arg;
    static auto* thirdPersonLayer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* firstPersonLayer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* combinedMesh = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* lod = &::il2cpp_utils::GetClassFromName("", "ovrAvatarAssetLevelOfDetail")->byval_arg;
    static auto* assignExpressiveParams = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* avatar = &::il2cpp_utils::GetClassFromName("", "OvrAvatar")->byval_arg;
    static auto* isControllerModel = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderPart, skinnedMeshRender, materialManager, thirdPersonLayer, firstPersonLayer, combinedMesh, lod, assignExpressiveParams, avatar, isControllerModel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::UpdateSkinnedMeshRender
// Il2CppName: UpdateSkinnedMeshRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::*)(::GlobalNamespace::OvrAvatarComponent*, ::GlobalNamespace::OvrAvatar*, ::System::IntPtr)>(&GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::UpdateSkinnedMeshRender)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("", "OvrAvatarComponent")->byval_arg;
    static auto* avatar = &::il2cpp_utils::GetClassFromName("", "OvrAvatar")->byval_arg;
    static auto* renderPart = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent*), "UpdateSkinnedMeshRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, avatar, renderPart});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::InitializeSingleComponentMaterial
// Il2CppName: InitializeSingleComponentMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::*)(::System::IntPtr, int)>(&GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::InitializeSingleComponentMaterial)> {
  static const MethodInfo* get() {
    static auto* renderPart = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* lodIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent*), "InitializeSingleComponentMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderPart, lodIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::InitializeCombinedMaterial
// Il2CppName: InitializeCombinedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::*)(::System::IntPtr, int)>(&GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::InitializeCombinedMaterial)> {
  static const MethodInfo* get() {
    static auto* renderPart = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* lodIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent*), "InitializeCombinedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderPart, lodIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::SetMaterialTransparent
// Il2CppName: SetMaterialTransparent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::*)(::UnityEngine::Material*)>(&GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::SetMaterialTransparent)> {
  static const MethodInfo* get() {
    static auto* mat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent*), "SetMaterialTransparent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mat});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::SetMaterialOpaque
// Il2CppName: SetMaterialOpaque
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::*)(::UnityEngine::Material*)>(&GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::SetMaterialOpaque)> {
  static const MethodInfo* get() {
    static auto* mat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent*), "SetMaterialOpaque", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mat});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSkinnedMeshPBSV2RenderComponent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
