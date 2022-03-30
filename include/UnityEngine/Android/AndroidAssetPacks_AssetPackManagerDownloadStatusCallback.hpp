// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Android.AndroidAssetPacks
#include "UnityEngine/Android/AndroidAssetPacks.hpp"
// Including type: UnityEngine.AndroidJavaProxy
#include "UnityEngine/AndroidJavaProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::Android
namespace UnityEngine::Android {
  // Forward declaring type: AndroidAssetPackInfo
  class AndroidAssetPackInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPacks::AssetPackManagerDownloadStatusCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPacks::AssetPackManagerDownloadStatusCallback*, "UnityEngine.Android", "AndroidAssetPacks/AssetPackManagerDownloadStatusCallback");
// Type namespace: UnityEngine.Android
namespace UnityEngine::Android {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Android.AndroidAssetPacks/UnityEngine.Android.AssetPackManagerDownloadStatusCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class AndroidAssetPacks::AssetPackManagerDownloadStatusCallback : public ::UnityEngine::AndroidJavaProxy {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Action`1<UnityEngine.Android.AndroidAssetPackInfo> m_Callback
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>* m_Callback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>*) == 0x8);
    // private System.String[] m_AssetPacks
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::StringW> m_AssetPacks;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Get instance field reference: private System.Action`1<UnityEngine.Android.AndroidAssetPackInfo> m_Callback
    ::System::Action_1<::UnityEngine::Android::AndroidAssetPackInfo*>*& dyn_m_Callback();
    // Get instance field reference: private System.String[] m_AssetPacks
    ::ArrayW<::StringW>& dyn_m_AssetPacks();
    // private System.Void onStatusUpdate(System.String assetPackName, System.Int32 assetPackStatus, System.Int64 assetPackSize, System.Int64 assetPackBytesDownloaded, System.Int32 assetPackTransferProgress, System.Int32 assetPackErrorCode)
    // Offset: 0x127D2A0
    void onStatusUpdate(::StringW assetPackName, int assetPackStatus, int64_t assetPackSize, int64_t assetPackBytesDownloaded, int assetPackTransferProgress, int assetPackErrorCode);
  }; // UnityEngine.Android.AndroidAssetPacks/UnityEngine.Android.AssetPackManagerDownloadStatusCallback
  #pragma pack(pop)
  static check_size<sizeof(AndroidAssetPacks::AssetPackManagerDownloadStatusCallback), 40 + sizeof(::ArrayW<::StringW>)> __UnityEngine_Android_AndroidAssetPacks_AssetPackManagerDownloadStatusCallbackSizeCheck;
  static_assert(sizeof(AndroidAssetPacks::AssetPackManagerDownloadStatusCallback) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Android::AndroidAssetPacks::AssetPackManagerDownloadStatusCallback::onStatusUpdate
// Il2CppName: onStatusUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::AndroidAssetPacks::AssetPackManagerDownloadStatusCallback::*)(::StringW, int, int64_t, int64_t, int, int)>(&UnityEngine::Android::AndroidAssetPacks::AssetPackManagerDownloadStatusCallback::onStatusUpdate)> {
  static const MethodInfo* get() {
    static auto* assetPackName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* assetPackStatus = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* assetPackSize = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* assetPackBytesDownloaded = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* assetPackTransferProgress = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* assetPackErrorCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Android::AndroidAssetPacks::AssetPackManagerDownloadStatusCallback*), "onStatusUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetPackName, assetPackStatus, assetPackSize, assetPackBytesDownloaded, assetPackTransferProgress, assetPackErrorCode});
  }
};