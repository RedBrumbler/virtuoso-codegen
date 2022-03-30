// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: CopyTextureParams because it is already included!
  // Skipping declaration: TextureSet because it is already included!
  // Forward declaring type: ovrAvatarAssetLevelOfDetail
  struct ovrAvatarAssetLevelOfDetail;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarTextureCopyManager
  class OvrAvatarTextureCopyManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarTextureCopyManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarTextureCopyManager*, "", "OvrAvatarTextureCopyManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarTextureCopyManager
  // [TokenAttribute] Offset: FFFFFFFF
  class OvrAvatarTextureCopyManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OvrAvatarTextureCopyManager::FallbackTextureSet
    struct FallbackTextureSet;
    // Nested type: ::GlobalNamespace::OvrAvatarTextureCopyManager::CopyTextureParams
    struct CopyTextureParams;
    // Nested type: ::GlobalNamespace::OvrAvatarTextureCopyManager::TextureSet
    struct TextureSet;
    // Nested type: ::GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24
    class $DeleteTextureSetCoroutine$d__24;
    // Size: 0x18
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: OvrAvatarTextureCopyManager/FallbackTextureSet
    // [TokenAttribute] Offset: FFFFFFFF
    struct FallbackTextureSet/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Boolean Initialized
      // Size: 0x1
      // Offset: 0x0
      bool Initialized;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: Initialized and: DiffuseRoughness
      char __padding0[0x7] = {};
      // public UnityEngine.Texture2D DiffuseRoughness
      // Size: 0x8
      // Offset: 0x8
      ::UnityEngine::Texture2D* DiffuseRoughness;
      // Field size check
      static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
      // public UnityEngine.Texture2D Normal
      // Size: 0x8
      // Offset: 0x10
      ::UnityEngine::Texture2D* Normal;
      // Field size check
      static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
      public:
      // Creating value type constructor for type: FallbackTextureSet
      constexpr FallbackTextureSet(bool Initialized_ = {}, ::UnityEngine::Texture2D* DiffuseRoughness_ = {}, ::UnityEngine::Texture2D* Normal_ = {}) noexcept : Initialized{Initialized_}, DiffuseRoughness{DiffuseRoughness_}, Normal{Normal_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Boolean Initialized
      bool& dyn_Initialized();
      // Get instance field reference: public UnityEngine.Texture2D DiffuseRoughness
      ::UnityEngine::Texture2D*& dyn_DiffuseRoughness();
      // Get instance field reference: public UnityEngine.Texture2D Normal
      ::UnityEngine::Texture2D*& dyn_Normal();
    }; // OvrAvatarTextureCopyManager/FallbackTextureSet
    #pragma pack(pop)
    static check_size<sizeof(OvrAvatarTextureCopyManager::FallbackTextureSet), 16 + sizeof(::UnityEngine::Texture2D*)> __GlobalNamespace_OvrAvatarTextureCopyManager_FallbackTextureSetSizeCheck;
    static_assert(sizeof(OvrAvatarTextureCopyManager::FallbackTextureSet) == 0x18);
    // Size: 0x1C
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: OvrAvatarTextureCopyManager/CopyTextureParams
    // [TokenAttribute] Offset: FFFFFFFF
    struct CopyTextureParams/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.Texture Src
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::Texture* Src;
      // Field size check
      static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
      // public UnityEngine.Texture Dst
      // Size: 0x8
      // Offset: 0x8
      ::UnityEngine::Texture* Dst;
      // Field size check
      static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
      // public System.Int32 Mip
      // Size: 0x4
      // Offset: 0x10
      int Mip;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 SrcSize
      // Size: 0x4
      // Offset: 0x14
      int SrcSize;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 DstElement
      // Size: 0x4
      // Offset: 0x18
      int DstElement;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: CopyTextureParams
      constexpr CopyTextureParams(::UnityEngine::Texture* Src_ = {}, ::UnityEngine::Texture* Dst_ = {}, int Mip_ = {}, int SrcSize_ = {}, int DstElement_ = {}) noexcept : Src{Src_}, Dst{Dst_}, Mip{Mip_}, SrcSize{SrcSize_}, DstElement{DstElement_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.Texture Src
      ::UnityEngine::Texture*& dyn_Src();
      // Get instance field reference: public UnityEngine.Texture Dst
      ::UnityEngine::Texture*& dyn_Dst();
      // Get instance field reference: public System.Int32 Mip
      int& dyn_Mip();
      // Get instance field reference: public System.Int32 SrcSize
      int& dyn_SrcSize();
      // Get instance field reference: public System.Int32 DstElement
      int& dyn_DstElement();
      // public System.Void .ctor(UnityEngine.Texture src, UnityEngine.Texture dst, System.Int32 mip, System.Int32 srcSize, System.Int32 dstElement)
      // Offset: 0x13421C8
      // ABORTED: conflicts with another method.  CopyTextureParams(::UnityEngine::Texture* src, ::UnityEngine::Texture* dst, int mip, int srcSize, int dstElement);
    }; // OvrAvatarTextureCopyManager/CopyTextureParams
    #pragma pack(pop)
    static check_size<sizeof(OvrAvatarTextureCopyManager::CopyTextureParams), 24 + sizeof(int)> __GlobalNamespace_OvrAvatarTextureCopyManager_CopyTextureParamsSizeCheck;
    static_assert(sizeof(OvrAvatarTextureCopyManager::CopyTextureParams) == 0x1C);
    // Size: 0x9
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: OvrAvatarTextureCopyManager/TextureSet
    // [TokenAttribute] Offset: FFFFFFFF
    struct TextureSet/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Collections.Generic.Dictionary`2<System.UInt64,System.Boolean> TextureIDSingleMeshPair
      // Size: 0x8
      // Offset: 0x0
      ::System::Collections::Generic::Dictionary_2<uint64_t, bool>* TextureIDSingleMeshPair;
      // Field size check
      static_assert(sizeof(::System::Collections::Generic::Dictionary_2<uint64_t, bool>*) == 0x8);
      // public System.Boolean IsProcessed
      // Size: 0x1
      // Offset: 0x8
      bool IsProcessed;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      public:
      // Creating value type constructor for type: TextureSet
      constexpr TextureSet(::System::Collections::Generic::Dictionary_2<uint64_t, bool>* TextureIDSingleMeshPair_ = {}, bool IsProcessed_ = {}) noexcept : TextureIDSingleMeshPair{TextureIDSingleMeshPair_}, IsProcessed{IsProcessed_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.UInt64,System.Boolean> TextureIDSingleMeshPair
      ::System::Collections::Generic::Dictionary_2<uint64_t, bool>*& dyn_TextureIDSingleMeshPair();
      // Get instance field reference: public System.Boolean IsProcessed
      bool& dyn_IsProcessed();
      // public System.Void .ctor(System.Collections.Generic.Dictionary`2<System.UInt64,System.Boolean> textureIDSingleMeshPair, System.Boolean isProcessed)
      // Offset: 0x13421D8
      // ABORTED: conflicts with another method.  TextureSet(::System::Collections::Generic::Dictionary_2<uint64_t, bool>* textureIDSingleMeshPair, bool isProcessed);
    }; // OvrAvatarTextureCopyManager/TextureSet
    #pragma pack(pop)
    static check_size<sizeof(OvrAvatarTextureCopyManager::TextureSet), 8 + sizeof(bool)> __GlobalNamespace_OvrAvatarTextureCopyManager_TextureSetSizeCheck;
    static_assert(sizeof(OvrAvatarTextureCopyManager::TextureSet) == 0x9);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public OvrAvatarTextureCopyManager/FallbackTextureSet[] FallbackTextureSets
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::OvrAvatarTextureCopyManager::FallbackTextureSet> FallbackTextureSets;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OvrAvatarTextureCopyManager::FallbackTextureSet>) == 0x8);
    // private System.Collections.Generic.Queue`1<OvrAvatarTextureCopyManager/CopyTextureParams> texturesToCopy
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Queue_1<::GlobalNamespace::OvrAvatarTextureCopyManager::CopyTextureParams>* texturesToCopy;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::GlobalNamespace::OvrAvatarTextureCopyManager::CopyTextureParams>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,OvrAvatarTextureCopyManager/TextureSet> textureSets
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::OvrAvatarTextureCopyManager::TextureSet>* textureSets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::OvrAvatarTextureCopyManager::TextureSet>*) == 0x8);
    // private readonly System.String[] FALLBACK_TEXTURE_PATHS_DIFFUSE_ROUGHNESS
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::StringW> FALLBACK_TEXTURE_PATHS_DIFFUSE_ROUGHNESS;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private readonly System.String[] FALLBACK_TEXTURE_PATHS_NORMAL
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::StringW> FALLBACK_TEXTURE_PATHS_NORMAL;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 TEXTURES_TO_COPY_QUEUE_CAPACITY
    static constexpr const int TEXTURES_TO_COPY_QUEUE_CAPACITY = 256;
    // Get static field: static private System.Int32 TEXTURES_TO_COPY_QUEUE_CAPACITY
    static int _get_TEXTURES_TO_COPY_QUEUE_CAPACITY();
    // Set static field: static private System.Int32 TEXTURES_TO_COPY_QUEUE_CAPACITY
    static void _set_TEXTURES_TO_COPY_QUEUE_CAPACITY(int value);
    // static field const value: static private System.Int32 COPIES_PER_FRAME
    static constexpr const int COPIES_PER_FRAME = 8;
    // Get static field: static private System.Int32 COPIES_PER_FRAME
    static int _get_COPIES_PER_FRAME();
    // Set static field: static private System.Int32 COPIES_PER_FRAME
    static void _set_COPIES_PER_FRAME(int value);
    // static field const value: static private System.String PATH_HIGHEST_DIFFUSE_ROUGHNESS
    static constexpr const char* PATH_HIGHEST_DIFFUSE_ROUGHNESS = "FallbackTextures/fallback_diffuse_roughness_2048";
    // Get static field: static private System.String PATH_HIGHEST_DIFFUSE_ROUGHNESS
    static ::StringW _get_PATH_HIGHEST_DIFFUSE_ROUGHNESS();
    // Set static field: static private System.String PATH_HIGHEST_DIFFUSE_ROUGHNESS
    static void _set_PATH_HIGHEST_DIFFUSE_ROUGHNESS(::StringW value);
    // static field const value: static private System.String PATH_MEDIUM_DIFFUSE_ROUGHNESS
    static constexpr const char* PATH_MEDIUM_DIFFUSE_ROUGHNESS = "FallbackTextures/fallback_diffuse_roughness_1024";
    // Get static field: static private System.String PATH_MEDIUM_DIFFUSE_ROUGHNESS
    static ::StringW _get_PATH_MEDIUM_DIFFUSE_ROUGHNESS();
    // Set static field: static private System.String PATH_MEDIUM_DIFFUSE_ROUGHNESS
    static void _set_PATH_MEDIUM_DIFFUSE_ROUGHNESS(::StringW value);
    // static field const value: static private System.String PATH_LOWEST_DIFFUSE_ROUGHNESS
    static constexpr const char* PATH_LOWEST_DIFFUSE_ROUGHNESS = "FallbackTextures/fallback_diffuse_roughness_256";
    // Get static field: static private System.String PATH_LOWEST_DIFFUSE_ROUGHNESS
    static ::StringW _get_PATH_LOWEST_DIFFUSE_ROUGHNESS();
    // Set static field: static private System.String PATH_LOWEST_DIFFUSE_ROUGHNESS
    static void _set_PATH_LOWEST_DIFFUSE_ROUGHNESS(::StringW value);
    // static field const value: static private System.String PATH_HIGHEST_NORMAL
    static constexpr const char* PATH_HIGHEST_NORMAL = "FallbackTextures/fallback_normal_2048";
    // Get static field: static private System.String PATH_HIGHEST_NORMAL
    static ::StringW _get_PATH_HIGHEST_NORMAL();
    // Set static field: static private System.String PATH_HIGHEST_NORMAL
    static void _set_PATH_HIGHEST_NORMAL(::StringW value);
    // static field const value: static private System.String PATH_MEDIUM_NORMAL
    static constexpr const char* PATH_MEDIUM_NORMAL = "FallbackTextures/fallback_normal_1024";
    // Get static field: static private System.String PATH_MEDIUM_NORMAL
    static ::StringW _get_PATH_MEDIUM_NORMAL();
    // Set static field: static private System.String PATH_MEDIUM_NORMAL
    static void _set_PATH_MEDIUM_NORMAL(::StringW value);
    // static field const value: static private System.String PATH_LOWEST_NORMAL
    static constexpr const char* PATH_LOWEST_NORMAL = "FallbackTextures/fallback_normal_256";
    // Get static field: static private System.String PATH_LOWEST_NORMAL
    static ::StringW _get_PATH_LOWEST_NORMAL();
    // Set static field: static private System.String PATH_LOWEST_NORMAL
    static void _set_PATH_LOWEST_NORMAL(::StringW value);
    // static field const value: static private System.Int32 GPU_TEXTURE_COPY_WAIT_TIME
    static constexpr const int GPU_TEXTURE_COPY_WAIT_TIME = 10;
    // Get static field: static private System.Int32 GPU_TEXTURE_COPY_WAIT_TIME
    static int _get_GPU_TEXTURE_COPY_WAIT_TIME();
    // Set static field: static private System.Int32 GPU_TEXTURE_COPY_WAIT_TIME
    static void _set_GPU_TEXTURE_COPY_WAIT_TIME(int value);
    // Get instance field reference: public OvrAvatarTextureCopyManager/FallbackTextureSet[] FallbackTextureSets
    ::ArrayW<::GlobalNamespace::OvrAvatarTextureCopyManager::FallbackTextureSet>& dyn_FallbackTextureSets();
    // Get instance field reference: private System.Collections.Generic.Queue`1<OvrAvatarTextureCopyManager/CopyTextureParams> texturesToCopy
    ::System::Collections::Generic::Queue_1<::GlobalNamespace::OvrAvatarTextureCopyManager::CopyTextureParams>*& dyn_texturesToCopy();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,OvrAvatarTextureCopyManager/TextureSet> textureSets
    ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::OvrAvatarTextureCopyManager::TextureSet>*& dyn_textureSets();
    // Get instance field reference: private readonly System.String[] FALLBACK_TEXTURE_PATHS_DIFFUSE_ROUGHNESS
    ::ArrayW<::StringW>& dyn_FALLBACK_TEXTURE_PATHS_DIFFUSE_ROUGHNESS();
    // Get instance field reference: private readonly System.String[] FALLBACK_TEXTURE_PATHS_NORMAL
    ::ArrayW<::StringW>& dyn_FALLBACK_TEXTURE_PATHS_NORMAL();
    // public System.Void Update()
    // Offset: 0x8F4C54
    void Update();
    // public System.Int32 GetTextureCount()
    // Offset: 0x8F4E54
    int GetTextureCount();
    // public System.Void CopyTexture(UnityEngine.Texture src, UnityEngine.Texture dst, System.Int32 mipLevel, System.Int32 mipSize, System.Int32 dstElement, System.Boolean useQueue)
    // Offset: 0x8F4EA0
    void CopyTexture(::UnityEngine::Texture* src, ::UnityEngine::Texture* dst, int mipLevel, int mipSize, int dstElement, bool useQueue);
    // private System.Void CopyTexture(OvrAvatarTextureCopyManager/CopyTextureParams copyTextureParams)
    // Offset: 0x8F4DC8
    void CopyTexture(::GlobalNamespace::OvrAvatarTextureCopyManager::CopyTextureParams copyTextureParams);
    // public System.Void AddTextureIDToTextureSet(System.Int32 gameobjectID, System.UInt64 textureID, System.Boolean isSingleMesh)
    // Offset: 0x8F504C
    void AddTextureIDToTextureSet(int gameobjectID, uint64_t textureID, bool isSingleMesh);
    // public System.Void DeleteTextureSet(System.Int32 gameobjectID)
    // Offset: 0x8F5254
    void DeleteTextureSet(int gameobjectID);
    // private System.Collections.IEnumerator DeleteTextureSetCoroutine(OvrAvatarTextureCopyManager/TextureSet textureSetToDelete, System.Int32 gameobjectID)
    // Offset: 0x8F52F8
    ::System::Collections::IEnumerator* DeleteTextureSetCoroutine(::GlobalNamespace::OvrAvatarTextureCopyManager::TextureSet textureSetToDelete, int gameobjectID);
    // public System.Void CheckFallbackTextureSet(ovrAvatarAssetLevelOfDetail lod)
    // Offset: 0x8F1880
    void CheckFallbackTextureSet(::GlobalNamespace::ovrAvatarAssetLevelOfDetail lod);
    // private System.Void InitFallbackTextureSet(ovrAvatarAssetLevelOfDetail lod)
    // Offset: 0x8F5388
    void InitFallbackTextureSet(::GlobalNamespace::ovrAvatarAssetLevelOfDetail lod);
    // public System.Void .ctor()
    // Offset: 0x8F486C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarTextureCopyManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarTextureCopyManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarTextureCopyManager*, creationType>()));
    }
  }; // OvrAvatarTextureCopyManager
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarTextureCopyManager), 56 + sizeof(::ArrayW<::StringW>)> __GlobalNamespace_OvrAvatarTextureCopyManagerSizeCheck;
  static_assert(sizeof(OvrAvatarTextureCopyManager) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarTextureCopyManager::TextureSet, "", "OvrAvatarTextureCopyManager/TextureSet");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarTextureCopyManager::CopyTextureParams, "", "OvrAvatarTextureCopyManager/CopyTextureParams");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarTextureCopyManager::FallbackTextureSet, "", "OvrAvatarTextureCopyManager/FallbackTextureSet");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarTextureCopyManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarTextureCopyManager::*)()>(&GlobalNamespace::OvrAvatarTextureCopyManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarTextureCopyManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarTextureCopyManager::GetTextureCount
// Il2CppName: GetTextureCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OvrAvatarTextureCopyManager::*)()>(&GlobalNamespace::OvrAvatarTextureCopyManager::GetTextureCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarTextureCopyManager*), "GetTextureCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarTextureCopyManager::CopyTexture
// Il2CppName: CopyTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarTextureCopyManager::*)(::UnityEngine::Texture*, ::UnityEngine::Texture*, int, int, int, bool)>(&GlobalNamespace::OvrAvatarTextureCopyManager::CopyTexture)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* dst = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* mipLevel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mipSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dstElement = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* useQueue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarTextureCopyManager*), "CopyTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst, mipLevel, mipSize, dstElement, useQueue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarTextureCopyManager::CopyTexture
// Il2CppName: CopyTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarTextureCopyManager::*)(::GlobalNamespace::OvrAvatarTextureCopyManager::CopyTextureParams)>(&GlobalNamespace::OvrAvatarTextureCopyManager::CopyTexture)> {
  static const MethodInfo* get() {
    static auto* copyTextureParams = &::il2cpp_utils::GetClassFromName("", "OvrAvatarTextureCopyManager/CopyTextureParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarTextureCopyManager*), "CopyTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{copyTextureParams});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarTextureCopyManager::AddTextureIDToTextureSet
// Il2CppName: AddTextureIDToTextureSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarTextureCopyManager::*)(int, uint64_t, bool)>(&GlobalNamespace::OvrAvatarTextureCopyManager::AddTextureIDToTextureSet)> {
  static const MethodInfo* get() {
    static auto* gameobjectID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* textureID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* isSingleMesh = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarTextureCopyManager*), "AddTextureIDToTextureSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameobjectID, textureID, isSingleMesh});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarTextureCopyManager::DeleteTextureSet
// Il2CppName: DeleteTextureSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarTextureCopyManager::*)(int)>(&GlobalNamespace::OvrAvatarTextureCopyManager::DeleteTextureSet)> {
  static const MethodInfo* get() {
    static auto* gameobjectID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarTextureCopyManager*), "DeleteTextureSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameobjectID});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarTextureCopyManager::DeleteTextureSetCoroutine
// Il2CppName: DeleteTextureSetCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::OvrAvatarTextureCopyManager::*)(::GlobalNamespace::OvrAvatarTextureCopyManager::TextureSet, int)>(&GlobalNamespace::OvrAvatarTextureCopyManager::DeleteTextureSetCoroutine)> {
  static const MethodInfo* get() {
    static auto* textureSetToDelete = &::il2cpp_utils::GetClassFromName("", "OvrAvatarTextureCopyManager/TextureSet")->byval_arg;
    static auto* gameobjectID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarTextureCopyManager*), "DeleteTextureSetCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textureSetToDelete, gameobjectID});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarTextureCopyManager::CheckFallbackTextureSet
// Il2CppName: CheckFallbackTextureSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarTextureCopyManager::*)(::GlobalNamespace::ovrAvatarAssetLevelOfDetail)>(&GlobalNamespace::OvrAvatarTextureCopyManager::CheckFallbackTextureSet)> {
  static const MethodInfo* get() {
    static auto* lod = &::il2cpp_utils::GetClassFromName("", "ovrAvatarAssetLevelOfDetail")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarTextureCopyManager*), "CheckFallbackTextureSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lod});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarTextureCopyManager::InitFallbackTextureSet
// Il2CppName: InitFallbackTextureSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarTextureCopyManager::*)(::GlobalNamespace::ovrAvatarAssetLevelOfDetail)>(&GlobalNamespace::OvrAvatarTextureCopyManager::InitFallbackTextureSet)> {
  static const MethodInfo* get() {
    static auto* lod = &::il2cpp_utils::GetClassFromName("", "ovrAvatarAssetLevelOfDetail")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarTextureCopyManager*), "InitFallbackTextureSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lod});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarTextureCopyManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!