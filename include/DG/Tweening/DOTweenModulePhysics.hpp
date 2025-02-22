// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: DG.Tweening.Plugins.Options.VectorOptions
#include "DG/Tweening/Plugins/Options/VectorOptions.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: DG.Tweening.Plugins.Options.QuaternionOptions
#include "DG/Tweening/Plugins/Options/QuaternionOptions.hpp"
// Including type: DG.Tweening.Plugins.Options.PathOptions
#include "DG/Tweening/Plugins/Options/PathOptions.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening
namespace DG::Tweening {
  // Skipping declaration: RotateMode because it is already included!
  // Skipping declaration: AxisConstraint because it is already included!
  // Forward declaring type: Sequence
  class Sequence;
  // Forward declaring type: PathType
  struct PathType;
  // Skipping declaration: PathMode because it is already included!
}
// Forward declaring namespace: DG::Tweening::Core
namespace DG::Tweening::Core {
  // Forward declaring type: TweenerCore`3<T1, T2, TPlugOptions>
  template<typename T1, typename T2, typename TPlugOptions>
  class TweenerCore_3;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Forward declaring namespace: DG::Tweening::Plugins::Core::PathCore
namespace DG::Tweening::Plugins::Core::PathCore {
  // Forward declaring type: Path
  class Path;
}
// Completed forward declares
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Forward declaring type: DOTweenModulePhysics
  class DOTweenModulePhysics;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics*, "DG.Tweening", "DOTweenModulePhysics");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.DOTweenModulePhysics
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class DOTweenModulePhysics : public ::Il2CppObject {
    public:
    // Nested type: ::DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Nested type: ::DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass1_0
    class $$c__DisplayClass1_0;
    // Nested type: ::DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: ::DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Nested type: ::DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: ::DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: ::DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: ::DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    // Nested type: ::DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Nested type: ::DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass9_0
    class $$c__DisplayClass9_0;
    // Nested type: ::DG::Tweening::DOTweenModulePhysics::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    // static public DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DOMove(UnityEngine.Rigidbody target, UnityEngine.Vector3 endValue, System.Single duration, System.Boolean snapping)
    // Offset: 0x74B5F0
    static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* DOMove(::UnityEngine::Rigidbody* target, ::UnityEngine::Vector3 endValue, float duration, bool snapping);
    // static public DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DOMoveX(UnityEngine.Rigidbody target, System.Single endValue, System.Single duration, System.Boolean snapping)
    // Offset: 0x74B7BC
    static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveX(::UnityEngine::Rigidbody* target, float endValue, float duration, bool snapping);
    // static public DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DOMoveY(UnityEngine.Rigidbody target, System.Single endValue, System.Single duration, System.Boolean snapping)
    // Offset: 0x74B97C
    static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveY(::UnityEngine::Rigidbody* target, float endValue, float duration, bool snapping);
    // static public DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DOMoveZ(UnityEngine.Rigidbody target, System.Single endValue, System.Single duration, System.Boolean snapping)
    // Offset: 0x74BB3C
    static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveZ(::UnityEngine::Rigidbody* target, float endValue, float duration, bool snapping);
    // static public DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DORotate(UnityEngine.Rigidbody target, UnityEngine.Vector3 endValue, System.Single duration, DG.Tweening.RotateMode mode)
    // Offset: 0x74BCFC
    static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>* DORotate(::UnityEngine::Rigidbody* target, ::UnityEngine::Vector3 endValue, float duration, ::DG::Tweening::RotateMode mode);
    // static public DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DOLookAt(UnityEngine.Rigidbody target, UnityEngine.Vector3 towards, System.Single duration, DG.Tweening.AxisConstraint axisConstraint, System.Nullable`1<UnityEngine.Vector3> up)
    // Offset: 0x74BEC4
    static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>* DOLookAt(::UnityEngine::Rigidbody* target, ::UnityEngine::Vector3 towards, float duration, ::DG::Tweening::AxisConstraint axisConstraint, ::System::Nullable_1<::UnityEngine::Vector3> up);
    // static public DG.Tweening.Sequence DOJump(UnityEngine.Rigidbody target, UnityEngine.Vector3 endValue, System.Single jumpPower, System.Int32 numJumps, System.Single duration, System.Boolean snapping)
    // Offset: 0x74C108
    static ::DG::Tweening::Sequence* DOJump(::UnityEngine::Rigidbody* target, ::UnityEngine::Vector3 endValue, float jumpPower, int numJumps, float duration, bool snapping);
    // static public DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DOPath(UnityEngine.Rigidbody target, UnityEngine.Vector3[] path, System.Single duration, DG.Tweening.PathType pathType, DG.Tweening.PathMode pathMode, System.Int32 resolution, System.Nullable`1<UnityEngine.Color> gizmoColor)
    // Offset: 0x74C600
    static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* DOPath(::UnityEngine::Rigidbody* target, ::ArrayW<::UnityEngine::Vector3> path, float duration, ::DG::Tweening::PathType pathType, ::DG::Tweening::PathMode pathMode, int resolution, ::System::Nullable_1<::UnityEngine::Color> gizmoColor);
    // static public DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DOLocalPath(UnityEngine.Rigidbody target, UnityEngine.Vector3[] path, System.Single duration, DG.Tweening.PathType pathType, DG.Tweening.PathMode pathMode, System.Int32 resolution, System.Nullable`1<UnityEngine.Color> gizmoColor)
    // Offset: 0x74C86C
    static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* DOLocalPath(::UnityEngine::Rigidbody* target, ::ArrayW<::UnityEngine::Vector3> path, float duration, ::DG::Tweening::PathType pathType, ::DG::Tweening::PathMode pathMode, int resolution, ::System::Nullable_1<::UnityEngine::Color> gizmoColor);
    // static DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DOPath(UnityEngine.Rigidbody target, DG.Tweening.Plugins.Core.PathCore.Path path, System.Single duration, DG.Tweening.PathMode pathMode)
    // Offset: 0x74CAEC
    static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* DOPath(::UnityEngine::Rigidbody* target, ::DG::Tweening::Plugins::Core::PathCore::Path* path, float duration, ::DG::Tweening::PathMode pathMode);
    // static DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DOLocalPath(UnityEngine.Rigidbody target, DG.Tweening.Plugins.Core.PathCore.Path path, System.Single duration, DG.Tweening.PathMode pathMode)
    // Offset: 0x74CCCC
    static ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* DOLocalPath(::UnityEngine::Rigidbody* target, ::DG::Tweening::Plugins::Core::PathCore::Path* path, float duration, ::DG::Tweening::PathMode pathMode);
  }; // DG.Tweening.DOTweenModulePhysics
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics::DOMove
// Il2CppName: DOMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* (*)(::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, float, bool)>(&DG::Tweening::DOTweenModulePhysics::DOMove)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    static auto* endValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* snapping = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics*), "DOMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, endValue, duration, snapping});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics::DOMoveX
// Il2CppName: DOMoveX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* (*)(::UnityEngine::Rigidbody*, float, float, bool)>(&DG::Tweening::DOTweenModulePhysics::DOMoveX)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    static auto* endValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* snapping = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics*), "DOMoveX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, endValue, duration, snapping});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics::DOMoveY
// Il2CppName: DOMoveY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* (*)(::UnityEngine::Rigidbody*, float, float, bool)>(&DG::Tweening::DOTweenModulePhysics::DOMoveY)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    static auto* endValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* snapping = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics*), "DOMoveY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, endValue, duration, snapping});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics::DOMoveZ
// Il2CppName: DOMoveZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* (*)(::UnityEngine::Rigidbody*, float, float, bool)>(&DG::Tweening::DOTweenModulePhysics::DOMoveZ)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    static auto* endValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* snapping = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics*), "DOMoveZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, endValue, duration, snapping});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics::DORotate
// Il2CppName: DORotate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>* (*)(::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, float, ::DG::Tweening::RotateMode)>(&DG::Tweening::DOTweenModulePhysics::DORotate)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    static auto* endValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("DG.Tweening", "RotateMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics*), "DORotate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, endValue, duration, mode});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics::DOLookAt
// Il2CppName: DOLookAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>* (*)(::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, float, ::DG::Tweening::AxisConstraint, ::System::Nullable_1<::UnityEngine::Vector3>)>(&DG::Tweening::DOTweenModulePhysics::DOLookAt)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    static auto* towards = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* axisConstraint = &::il2cpp_utils::GetClassFromName("DG.Tweening", "AxisConstraint")->byval_arg;
    static auto* up = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics*), "DOLookAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, towards, duration, axisConstraint, up});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics::DOJump
// Il2CppName: DOJump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Sequence* (*)(::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, float, int, float, bool)>(&DG::Tweening::DOTweenModulePhysics::DOJump)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    static auto* endValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* jumpPower = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* numJumps = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* snapping = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics*), "DOJump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, endValue, jumpPower, numJumps, duration, snapping});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics::DOPath
// Il2CppName: DOPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* (*)(::UnityEngine::Rigidbody*, ::ArrayW<::UnityEngine::Vector3>, float, ::DG::Tweening::PathType, ::DG::Tweening::PathMode, int, ::System::Nullable_1<::UnityEngine::Color>)>(&DG::Tweening::DOTweenModulePhysics::DOPath)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    static auto* path = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pathType = &::il2cpp_utils::GetClassFromName("DG.Tweening", "PathType")->byval_arg;
    static auto* pathMode = &::il2cpp_utils::GetClassFromName("DG.Tweening", "PathMode")->byval_arg;
    static auto* resolution = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* gizmoColor = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics*), "DOPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, path, duration, pathType, pathMode, resolution, gizmoColor});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics::DOLocalPath
// Il2CppName: DOLocalPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* (*)(::UnityEngine::Rigidbody*, ::ArrayW<::UnityEngine::Vector3>, float, ::DG::Tweening::PathType, ::DG::Tweening::PathMode, int, ::System::Nullable_1<::UnityEngine::Color>)>(&DG::Tweening::DOTweenModulePhysics::DOLocalPath)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    static auto* path = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pathType = &::il2cpp_utils::GetClassFromName("DG.Tweening", "PathType")->byval_arg;
    static auto* pathMode = &::il2cpp_utils::GetClassFromName("DG.Tweening", "PathMode")->byval_arg;
    static auto* resolution = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* gizmoColor = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics*), "DOLocalPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, path, duration, pathType, pathMode, resolution, gizmoColor});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics::DOPath
// Il2CppName: DOPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* (*)(::UnityEngine::Rigidbody*, ::DG::Tweening::Plugins::Core::PathCore::Path*, float, ::DG::Tweening::PathMode)>(&DG::Tweening::DOTweenModulePhysics::DOPath)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pathMode = &::il2cpp_utils::GetClassFromName("DG.Tweening", "PathMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics*), "DOPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, path, duration, pathMode});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModulePhysics::DOLocalPath
// Il2CppName: DOLocalPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* (*)(::UnityEngine::Rigidbody*, ::DG::Tweening::Plugins::Core::PathCore::Path*, float, ::DG::Tweening::PathMode)>(&DG::Tweening::DOTweenModulePhysics::DOLocalPath)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pathMode = &::il2cpp_utils::GetClassFromName("DG.Tweening", "PathMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModulePhysics*), "DOLocalPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, path, duration, pathMode});
  }
};
