// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: GridNoteboard
  class GridNoteboard;
  // Forward declaring type: NoteBoardNote
  class NoteBoardNote;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: GridNoteboardCreationBehaviour
  class GridNoteboardCreationBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::GridNoteboardCreationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GridNoteboardCreationBehaviour*, "VROSC", "GridNoteboardCreationBehaviour");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.GridNoteboardCreationBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class GridNoteboardCreationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
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
    // private VROSC.GridNoteboard _gridNoteboard
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::GridNoteboard* gridNoteboard;
    // Field size check
    static_assert(sizeof(::VROSC::GridNoteboard*) == 0x8);
    // private UnityEngine.Transform _fromPoint
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* fromPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.AnimationCurve _curve
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AnimationCurve* curve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.Vector3[] _positionOffset
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Vector3> positionOffset;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Quaternion[] _rotationOffset
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Quaternion> rotationOffset;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Quaternion>) == 0x8);
    // public System.Single StartPoint
    // Size: 0x4
    // Offset: 0x38
    float StartPoint;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single EndPoint
    // Size: 0x4
    // Offset: 0x3C
    float EndPoint;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.AnimationCurve Clustr
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AnimationCurve* Clustr;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public System.Boolean zPos
    // Size: 0x1
    // Offset: 0x48
    bool zPos;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private VROSC.GridNoteboard _gridNoteboard
    ::VROSC::GridNoteboard*& dyn__gridNoteboard();
    // Get instance field reference: private UnityEngine.Transform _fromPoint
    ::UnityEngine::Transform*& dyn__fromPoint();
    // Get instance field reference: private UnityEngine.AnimationCurve _curve
    ::UnityEngine::AnimationCurve*& dyn__curve();
    // Get instance field reference: private UnityEngine.Vector3[] _positionOffset
    ::ArrayW<::UnityEngine::Vector3>& dyn__positionOffset();
    // Get instance field reference: private UnityEngine.Quaternion[] _rotationOffset
    ::ArrayW<::UnityEngine::Quaternion>& dyn__rotationOffset();
    // Get instance field reference: public System.Single StartPoint
    float& dyn_StartPoint();
    // Get instance field reference: public System.Single EndPoint
    float& dyn_EndPoint();
    // Get instance field reference: public UnityEngine.AnimationCurve Clustr
    ::UnityEngine::AnimationCurve*& dyn_Clustr();
    // Get instance field reference: public System.Boolean zPos
    bool& dyn_zPos();
    // public System.Void Setup(VROSC.GridNoteboard gridNoteboard, UnityEngine.Transform fromPoint, UnityEngine.AnimationCurve curve)
    // Offset: 0x894E88
    void Setup(::VROSC::GridNoteboard* gridNoteboard, ::UnityEngine::Transform* fromPoint, ::UnityEngine::AnimationCurve* curve);
    // private System.Void X(VROSC.NoteBoardNote[,,] notes, System.Int32 xLength, System.Int32 yLength, System.Int32 zLength)
    // Offset: 0x8953C8
    void X(::ArrayW<::VROSC::NoteBoardNote*> notes, int xLength, int yLength, int zLength);
    // private System.Void Z(VROSC.NoteBoardNote[,,] notes, System.Int32 xLength, System.Int32 yLength, System.Int32 zLength)
    // Offset: 0x8951FC
    void Z(::ArrayW<::VROSC::NoteBoardNote*> notes, int xLength, int yLength, int zLength);
    // private System.Void SetNoteValues(VROSC.NoteBoardNote note, System.Single activationTime, System.Int32 index, System.Single x)
    // Offset: 0x895588
    void SetNoteValues(::VROSC::NoteBoardNote* note, float activationTime, int index, float x);
    // private System.Void OnPlayableDestroy()
    // Offset: 0x8959E8
    void OnPlayableDestroy();
    // public System.Void .ctor()
    // Offset: 0x895A90
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GridNoteboardCreationBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::GridNoteboardCreationBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GridNoteboardCreationBehaviour*, creationType>()));
    }
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x8950DC
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
  }; // VROSC.GridNoteboardCreationBehaviour
  #pragma pack(pop)
  static check_size<sizeof(GridNoteboardCreationBehaviour), 72 + sizeof(bool)> __VROSC_GridNoteboardCreationBehaviourSizeCheck;
  static_assert(sizeof(GridNoteboardCreationBehaviour) == 0x49);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::GridNoteboardCreationBehaviour::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GridNoteboardCreationBehaviour::*)(::VROSC::GridNoteboard*, ::UnityEngine::Transform*, ::UnityEngine::AnimationCurve*)>(&VROSC::GridNoteboardCreationBehaviour::Setup)> {
  static const MethodInfo* get() {
    static auto* gridNoteboard = &::il2cpp_utils::GetClassFromName("VROSC", "GridNoteboard")->byval_arg;
    static auto* fromPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GridNoteboardCreationBehaviour*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gridNoteboard, fromPoint, curve});
  }
};
// Writing MetadataGetter for method: VROSC::GridNoteboardCreationBehaviour::X
// Il2CppName: X
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GridNoteboardCreationBehaviour::*)(::ArrayW<::VROSC::NoteBoardNote*>, int, int, int)>(&VROSC::GridNoteboardCreationBehaviour::X)> {
  static const MethodInfo* get() {
    static auto* notes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("VROSC", "NoteBoardNote"), 1)->byval_arg;
    static auto* xLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* yLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* zLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GridNoteboardCreationBehaviour*), "X", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{notes, xLength, yLength, zLength});
  }
};
// Writing MetadataGetter for method: VROSC::GridNoteboardCreationBehaviour::Z
// Il2CppName: Z
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GridNoteboardCreationBehaviour::*)(::ArrayW<::VROSC::NoteBoardNote*>, int, int, int)>(&VROSC::GridNoteboardCreationBehaviour::Z)> {
  static const MethodInfo* get() {
    static auto* notes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("VROSC", "NoteBoardNote"), 1)->byval_arg;
    static auto* xLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* yLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* zLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GridNoteboardCreationBehaviour*), "Z", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{notes, xLength, yLength, zLength});
  }
};
// Writing MetadataGetter for method: VROSC::GridNoteboardCreationBehaviour::SetNoteValues
// Il2CppName: SetNoteValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GridNoteboardCreationBehaviour::*)(::VROSC::NoteBoardNote*, float, int, float)>(&VROSC::GridNoteboardCreationBehaviour::SetNoteValues)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoardNote")->byval_arg;
    static auto* activationTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GridNoteboardCreationBehaviour*), "SetNoteValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, activationTime, index, x});
  }
};
// Writing MetadataGetter for method: VROSC::GridNoteboardCreationBehaviour::OnPlayableDestroy
// Il2CppName: OnPlayableDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GridNoteboardCreationBehaviour::*)()>(&VROSC::GridNoteboardCreationBehaviour::OnPlayableDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GridNoteboardCreationBehaviour*), "OnPlayableDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GridNoteboardCreationBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::GridNoteboardCreationBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GridNoteboardCreationBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&VROSC::GridNoteboardCreationBehaviour::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GridNoteboardCreationBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};