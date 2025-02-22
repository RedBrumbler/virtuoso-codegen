// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.DOTweenModuleUtils
#include "DG/Tweening/DOTweenModuleUtils.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: DG.Tweening.Plugins.Options.PathOptions
#include "DG/Tweening/Plugins/Options/PathOptions.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
  // Skipping declaration: Quaternion because it is already included!
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Component
  class Component;
}
// Forward declaring namespace: DG::Tweening
namespace DG::Tweening {
  // Forward declaring type: Tween
  class Tween;
  // Skipping declaration: PathMode because it is already included!
}
// Forward declaring namespace: DG::Tweening::Core
namespace DG::Tweening::Core {
  // Forward declaring type: TweenerCore`3<T1, T2, TPlugOptions>
  template<typename T1, typename T2, typename TPlugOptions>
  class TweenerCore_3;
}
// Forward declaring namespace: DG::Tweening::Plugins::Core::PathCore
namespace DG::Tweening::Plugins::Core::PathCore {
  // Forward declaring type: Path
  class Path;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUtils::Physics);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUtils::Physics*, "DG.Tweening", "DOTweenModuleUtils/Physics");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.DOTweenModuleUtils/DG.Tweening.Physics
  // [TokenAttribute] Offset: FFFFFFFF
  class DOTweenModuleUtils::Physics : public ::Il2CppObject {
    public:
    // static public System.Void SetOrientationOnPath(DG.Tweening.Plugins.Options.PathOptions options, DG.Tweening.Tween t, UnityEngine.Quaternion newRot, UnityEngine.Transform trans)
    // Offset: 0x1265EE4
    static void SetOrientationOnPath(::DG::Tweening::Plugins::Options::PathOptions options, ::DG::Tweening::Tween* t, ::UnityEngine::Quaternion newRot, ::UnityEngine::Transform* trans);
    // static public System.Boolean HasRigidbody2D(UnityEngine.Component target)
    // Offset: 0x1265FE8
    static bool HasRigidbody2D(::UnityEngine::Component* target);
    // static public System.Boolean HasRigidbody(UnityEngine.Component target)
    // Offset: 0x1266080
    static bool HasRigidbody(::UnityEngine::Component* target);
    // static public DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> CreateDOTweenPathTween(UnityEngine.MonoBehaviour target, System.Boolean tweenRigidbody, System.Boolean isLocal, DG.Tweening.Plugins.Core.PathCore.Path path, System.Single duration, DG.Tweening.PathMode pathMode)
    // Offset: 0x1266118
    static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* CreateDOTweenPathTween(::UnityEngine::MonoBehaviour* target, bool tweenRigidbody, bool isLocal, ::DG::Tweening::Plugins::Core::PathCore::Path* path, float duration, ::DG::Tweening::PathMode pathMode);
  }; // DG.Tweening.DOTweenModuleUtils/DG.Tweening.Physics
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUtils::Physics::SetOrientationOnPath
// Il2CppName: SetOrientationOnPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Plugins::Options::PathOptions, ::DG::Tweening::Tween*, ::UnityEngine::Quaternion, ::UnityEngine::Transform*)>(&DG::Tweening::DOTweenModuleUtils::Physics::SetOrientationOnPath)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "PathOptions")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* newRot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* trans = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUtils::Physics*), "SetOrientationOnPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options, t, newRot, trans});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUtils::Physics::HasRigidbody2D
// Il2CppName: HasRigidbody2D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Component*)>(&DG::Tweening::DOTweenModuleUtils::Physics::HasRigidbody2D)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUtils::Physics*), "HasRigidbody2D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUtils::Physics::HasRigidbody
// Il2CppName: HasRigidbody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Component*)>(&DG::Tweening::DOTweenModuleUtils::Physics::HasRigidbody)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUtils::Physics*), "HasRigidbody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleUtils::Physics::CreateDOTweenPathTween
// Il2CppName: CreateDOTweenPathTween
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* (*)(::UnityEngine::MonoBehaviour*, bool, bool, ::DG::Tweening::Plugins::Core::PathCore::Path*, float, ::DG::Tweening::PathMode)>(&DG::Tweening::DOTweenModuleUtils::Physics::CreateDOTweenPathTween)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")->byval_arg;
    static auto* tweenRigidbody = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isLocal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pathMode = &::il2cpp_utils::GetClassFromName("DG.Tweening", "PathMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleUtils::Physics*), "CreateDOTweenPathTween", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, tweenRigidbody, isLocal, path, duration, pathMode});
  }
};
