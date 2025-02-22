// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
// Including type: UnityEngine.ExposedReference`1
#include "UnityEngine/ExposedReference_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: AppearAnimationBehaviour
  class AppearAnimationBehaviour;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: AppearAnimationAsset
  class AppearAnimationAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AppearAnimationAsset);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AppearAnimationAsset*, "VROSC", "AppearAnimationAsset");
// Type namespace: VROSC
namespace VROSC {
  // WARNING Size may be invalid!
  // Autogenerated type: VROSC.AppearAnimationAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class AppearAnimationAsset : public ::UnityEngine::Playables::PlayableAsset {
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
    // public VROSC.AppearAnimationBehaviour template
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::AppearAnimationBehaviour* _template;
    // Field size check
    static_assert(sizeof(::VROSC::AppearAnimationBehaviour*) == 0x8);
    // public UnityEngine.ExposedReference`1<UnityEngine.Transform> _target
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> target;
    // public UnityEngine.ExposedReference`1<UnityEngine.Transform> _start
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    ::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> start;
    // public UnityEngine.ExposedReference`1<UnityEngine.Transform> _end
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    ::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> end;
    // public UnityEngine.AnimationCurve _positionCurve
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::AnimationCurve* positionCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve _rotationCurve
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::AnimationCurve* rotationCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve _scaleCurve
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::AnimationCurve* scaleCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public System.Single _randomStartRotation
    // Size: 0x4
    // Offset: 0x68
    float randomStartRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public VROSC.AppearAnimationBehaviour template
    ::VROSC::AppearAnimationBehaviour*& dyn_template();
    // Get instance field reference: public UnityEngine.ExposedReference`1<UnityEngine.Transform> _target
    ::UnityEngine::ExposedReference_1<::UnityEngine::Transform*>& dyn__target();
    // Get instance field reference: public UnityEngine.ExposedReference`1<UnityEngine.Transform> _start
    ::UnityEngine::ExposedReference_1<::UnityEngine::Transform*>& dyn__start();
    // Get instance field reference: public UnityEngine.ExposedReference`1<UnityEngine.Transform> _end
    ::UnityEngine::ExposedReference_1<::UnityEngine::Transform*>& dyn__end();
    // Get instance field reference: public UnityEngine.AnimationCurve _positionCurve
    ::UnityEngine::AnimationCurve*& dyn__positionCurve();
    // Get instance field reference: public UnityEngine.AnimationCurve _rotationCurve
    ::UnityEngine::AnimationCurve*& dyn__rotationCurve();
    // Get instance field reference: public UnityEngine.AnimationCurve _scaleCurve
    ::UnityEngine::AnimationCurve*& dyn__scaleCurve();
    // Get instance field reference: public System.Single _randomStartRotation
    float& dyn__randomStartRotation();
    // public System.Void .ctor()
    // Offset: 0x136DFE0
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppearAnimationAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AppearAnimationAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppearAnimationAsset*, creationType>()));
    }
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    // Offset: 0x136DD8C
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner);
  }; // VROSC.AppearAnimationAsset
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AppearAnimationAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AppearAnimationAsset::CreatePlayable
// Il2CppName: CreatePlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (VROSC::AppearAnimationAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&VROSC::AppearAnimationAsset::CreatePlayable)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppearAnimationAsset*), "CreatePlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, owner});
  }
};
