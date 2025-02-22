// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CustomRenderTexture
  class CustomRenderTexture;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CustomRenderTextureManager
  class CustomRenderTextureManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::CustomRenderTextureManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CustomRenderTextureManager*, "UnityEngine", "CustomRenderTextureManager");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CustomRenderTextureManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 565424
  class CustomRenderTextureManager : public ::Il2CppObject {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x56A430
    // Get static field: static private System.Action`1<UnityEngine.CustomRenderTexture> textureLoaded
    static ::System::Action_1<::UnityEngine::CustomRenderTexture*>* _get_textureLoaded();
    // Set static field: static private System.Action`1<UnityEngine.CustomRenderTexture> textureLoaded
    static void _set_textureLoaded(::System::Action_1<::UnityEngine::CustomRenderTexture*>* value);
    // [DebuggerBrowsableAttribute] Offset: 0x56A46C
    // Get static field: static private System.Action`1<UnityEngine.CustomRenderTexture> textureUnloaded
    static ::System::Action_1<::UnityEngine::CustomRenderTexture*>* _get_textureUnloaded();
    // Set static field: static private System.Action`1<UnityEngine.CustomRenderTexture> textureUnloaded
    static void _set_textureUnloaded(::System::Action_1<::UnityEngine::CustomRenderTexture*>* value);
    // static private System.Void InvokeOnTextureLoaded_Internal(UnityEngine.CustomRenderTexture source)
    // Offset: 0xE383F4
    static void InvokeOnTextureLoaded_Internal(::UnityEngine::CustomRenderTexture* source);
    // static private System.Void InvokeOnTextureUnloaded_Internal(UnityEngine.CustomRenderTexture source)
    // Offset: 0xE38470
    static void InvokeOnTextureUnloaded_Internal(::UnityEngine::CustomRenderTexture* source);
  }; // UnityEngine.CustomRenderTextureManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::CustomRenderTextureManager::InvokeOnTextureLoaded_Internal
// Il2CppName: InvokeOnTextureLoaded_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::CustomRenderTexture*)>(&UnityEngine::CustomRenderTextureManager::InvokeOnTextureLoaded_Internal)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine", "CustomRenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CustomRenderTextureManager*), "InvokeOnTextureLoaded_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: UnityEngine::CustomRenderTextureManager::InvokeOnTextureUnloaded_Internal
// Il2CppName: InvokeOnTextureUnloaded_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::CustomRenderTexture*)>(&UnityEngine::CustomRenderTextureManager::InvokeOnTextureUnloaded_Internal)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine", "CustomRenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CustomRenderTextureManager*), "InvokeOnTextureUnloaded_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
