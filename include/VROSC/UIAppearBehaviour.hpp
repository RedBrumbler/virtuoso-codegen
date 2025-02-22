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
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: AnimatedAppear
  class AnimatedAppear;
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
  // Forward declaring type: UIAppearBehaviour
  class UIAppearBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UIAppearBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIAppearBehaviour*, "VROSC", "UIAppearBehaviour");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UIAppearBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class UIAppearBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
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
    // private VROSC.AnimatedAppear _target
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::AnimatedAppear* target;
    // Field size check
    static_assert(sizeof(::VROSC::AnimatedAppear*) == 0x8);
    // private System.Boolean _enter
    // Size: 0x1
    // Offset: 0x18
    bool enter;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _colorEffect
    // Size: 0x1
    // Offset: 0x19
    bool colorEffect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: colorEffect and: Appear
    char __padding2[0x2] = {};
    // [RangeAttribute] Offset: 0x673B98
    // public System.Single Appear
    // Size: 0x4
    // Offset: 0x1C
    float Appear;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x673BB0
    // public System.Single Move
    // Size: 0x4
    // Offset: 0x20
    float Move;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _targetStart
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 targetStart;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _targetEnd
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 targetEnd;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: private VROSC.AnimatedAppear _target
    ::VROSC::AnimatedAppear*& dyn__target();
    // Get instance field reference: private System.Boolean _enter
    bool& dyn__enter();
    // Get instance field reference: private System.Boolean _colorEffect
    bool& dyn__colorEffect();
    // Get instance field reference: public System.Single Appear
    float& dyn_Appear();
    // Get instance field reference: public System.Single Move
    float& dyn_Move();
    // Get instance field reference: private UnityEngine.Vector3 _targetStart
    ::UnityEngine::Vector3& dyn__targetStart();
    // Get instance field reference: private UnityEngine.Vector3 _targetEnd
    ::UnityEngine::Vector3& dyn__targetEnd();
    // public System.Void Setup(VROSC.AnimatedAppear target, System.Boolean enter)
    // Offset: 0x140B258
    void Setup(::VROSC::AnimatedAppear* target, bool enter);
    // public System.Void .ctor()
    // Offset: 0x140B668
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIAppearBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UIAppearBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIAppearBehaviour*, creationType>()));
    }
    // public override System.Void OnGraphStart(UnityEngine.Playables.Playable playable)
    // Offset: 0x140B31C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable playable)
    void OnGraphStart(::UnityEngine::Playables::Playable playable);
    // public override System.Void OnGraphStop(UnityEngine.Playables.Playable playable)
    // Offset: 0x140B358
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnGraphStop(UnityEngine.Playables.Playable playable)
    void OnGraphStop(::UnityEngine::Playables::Playable playable);
    // public override System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x140B394
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x140B3E8
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x140B564
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
  }; // VROSC.UIAppearBehaviour
  #pragma pack(pop)
  static check_size<sizeof(UIAppearBehaviour), 48 + sizeof(::UnityEngine::Vector3)> __VROSC_UIAppearBehaviourSizeCheck;
  static_assert(sizeof(UIAppearBehaviour) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UIAppearBehaviour::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIAppearBehaviour::*)(::VROSC::AnimatedAppear*, bool)>(&VROSC::UIAppearBehaviour::Setup)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("VROSC", "AnimatedAppear")->byval_arg;
    static auto* enter = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIAppearBehaviour*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, enter});
  }
};
// Writing MetadataGetter for method: VROSC::UIAppearBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::UIAppearBehaviour::OnGraphStart
// Il2CppName: OnGraphStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIAppearBehaviour::*)(::UnityEngine::Playables::Playable)>(&VROSC::UIAppearBehaviour::OnGraphStart)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIAppearBehaviour*), "OnGraphStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: VROSC::UIAppearBehaviour::OnGraphStop
// Il2CppName: OnGraphStop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIAppearBehaviour::*)(::UnityEngine::Playables::Playable)>(&VROSC::UIAppearBehaviour::OnGraphStop)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIAppearBehaviour*), "OnGraphStop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: VROSC::UIAppearBehaviour::OnBehaviourPlay
// Il2CppName: OnBehaviourPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIAppearBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&VROSC::UIAppearBehaviour::OnBehaviourPlay)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIAppearBehaviour*), "OnBehaviourPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: VROSC::UIAppearBehaviour::OnBehaviourPause
// Il2CppName: OnBehaviourPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIAppearBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&VROSC::UIAppearBehaviour::OnBehaviourPause)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIAppearBehaviour*), "OnBehaviourPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: VROSC::UIAppearBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIAppearBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&VROSC::UIAppearBehaviour::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIAppearBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
