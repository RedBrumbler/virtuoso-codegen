// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRGLTFScene
  struct OVRGLTFScene;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFScene, "", "OVRGLTFScene");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRGLTFScene
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRGLTFScene/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.GameObject root
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::GameObject* root;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> nodes
    // Size: 0x8
    // Offset: 0x8
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* nodes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    public:
    // Creating value type constructor for type: OVRGLTFScene
    constexpr OVRGLTFScene(::UnityEngine::GameObject* root_ = {}, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* nodes_ = {}) noexcept : root{root_}, nodes{nodes_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.GameObject root
    ::UnityEngine::GameObject*& dyn_root();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.GameObject> nodes
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn_nodes();
  }; // OVRGLTFScene
  #pragma pack(pop)
  static check_size<sizeof(OVRGLTFScene), 8 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)> __GlobalNamespace_OVRGLTFSceneSizeCheck;
  static_assert(sizeof(OVRGLTFScene) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
