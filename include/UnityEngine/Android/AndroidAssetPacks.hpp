// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Android
namespace UnityEngine::Android {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaObject
  class AndroidJavaObject;
}
// Completed forward declares
// Type namespace: UnityEngine.Android
namespace UnityEngine::Android {
  // Forward declaring type: AndroidAssetPacks
  class AndroidAssetPacks;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPacks);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPacks*, "UnityEngine.Android", "AndroidAssetPacks");
// Type namespace: UnityEngine.Android
namespace UnityEngine::Android {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Android.AndroidAssetPacks
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 59FB40
  // [StaticAccessorAttribute] Offset: 59FB40
  class AndroidAssetPacks : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Android::AndroidAssetPacks::AssetPackManagerDownloadStatusCallback
    class AssetPackManagerDownloadStatusCallback;
    // Nested type: ::UnityEngine::Android::AndroidAssetPacks::AssetPackManagerMobileDataConfirmationCallback
    class AssetPackManagerMobileDataConfirmationCallback;
    // Nested type: ::UnityEngine::Android::AndroidAssetPacks::AssetPackManagerStatusQueryCallback
    class AssetPackManagerStatusQueryCallback;
    // Get static field: static private UnityEngine.AndroidJavaObject s_JavaManagerWrapper
    static ::UnityEngine::AndroidJavaObject* _get_s_JavaManagerWrapper();
    // Set static field: static private UnityEngine.AndroidJavaObject s_JavaManagerWrapper
    static void _set_s_JavaManagerWrapper(::UnityEngine::AndroidJavaObject* value);
    // Get static field: static private System.Boolean s_ApiMissing
    static bool _get_s_ApiMissing();
    // Set static field: static private System.Boolean s_ApiMissing
    static void _set_s_ApiMissing(bool value);
    // static private UnityEngine.AndroidJavaObject GetAssetPackManager()
    // Offset: 0x126DF2C
    static ::UnityEngine::AndroidJavaObject* GetAssetPackManager();
  }; // UnityEngine.Android.AndroidAssetPacks
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Android::AndroidAssetPacks::GetAssetPackManager
// Il2CppName: GetAssetPackManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&UnityEngine::Android::AndroidAssetPacks::GetAssetPackManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Android::AndroidAssetPacks*), "GetAssetPackManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};