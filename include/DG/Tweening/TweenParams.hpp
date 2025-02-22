// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.UpdateType
#include "DG/Tweening/UpdateType.hpp"
// Including type: DG.Tweening.LoopType
#include "DG/Tweening/LoopType.hpp"
// Including type: DG.Tweening.Ease
#include "DG/Tweening/Ease.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening
namespace DG::Tweening {
  // Forward declaring type: TweenCallback
  class TweenCallback;
  // Forward declaring type: TweenCallback`1<T>
  template<typename T>
  class TweenCallback_1;
  // Forward declaring type: EaseFunction
  class EaseFunction;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Forward declaring type: TweenParams
  class TweenParams;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::TweenParams);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::TweenParams*, "DG.Tweening", "TweenParams");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.TweenParams
  // [TokenAttribute] Offset: FFFFFFFF
  class TweenParams : public ::Il2CppObject {
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
    // System.Object id
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* id;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Object target
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* target;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // DG.Tweening.UpdateType updateType
    // Size: 0x4
    // Offset: 0x20
    ::DG::Tweening::UpdateType updateType;
    // Field size check
    static_assert(sizeof(::DG::Tweening::UpdateType) == 0x4);
    // System.Boolean isIndependentUpdate
    // Size: 0x1
    // Offset: 0x24
    bool isIndependentUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isIndependentUpdate and: onStart
    char __padding3[0x3] = {};
    // DG.Tweening.TweenCallback onStart
    // Size: 0x8
    // Offset: 0x28
    ::DG::Tweening::TweenCallback* onStart;
    // Field size check
    static_assert(sizeof(::DG::Tweening::TweenCallback*) == 0x8);
    // DG.Tweening.TweenCallback onPlay
    // Size: 0x8
    // Offset: 0x30
    ::DG::Tweening::TweenCallback* onPlay;
    // Field size check
    static_assert(sizeof(::DG::Tweening::TweenCallback*) == 0x8);
    // DG.Tweening.TweenCallback onRewind
    // Size: 0x8
    // Offset: 0x38
    ::DG::Tweening::TweenCallback* onRewind;
    // Field size check
    static_assert(sizeof(::DG::Tweening::TweenCallback*) == 0x8);
    // DG.Tweening.TweenCallback onUpdate
    // Size: 0x8
    // Offset: 0x40
    ::DG::Tweening::TweenCallback* onUpdate;
    // Field size check
    static_assert(sizeof(::DG::Tweening::TweenCallback*) == 0x8);
    // DG.Tweening.TweenCallback onStepComplete
    // Size: 0x8
    // Offset: 0x48
    ::DG::Tweening::TweenCallback* onStepComplete;
    // Field size check
    static_assert(sizeof(::DG::Tweening::TweenCallback*) == 0x8);
    // DG.Tweening.TweenCallback onComplete
    // Size: 0x8
    // Offset: 0x50
    ::DG::Tweening::TweenCallback* onComplete;
    // Field size check
    static_assert(sizeof(::DG::Tweening::TweenCallback*) == 0x8);
    // DG.Tweening.TweenCallback onKill
    // Size: 0x8
    // Offset: 0x58
    ::DG::Tweening::TweenCallback* onKill;
    // Field size check
    static_assert(sizeof(::DG::Tweening::TweenCallback*) == 0x8);
    // DG.Tweening.TweenCallback`1<System.Int32> onWaypointChange
    // Size: 0x8
    // Offset: 0x60
    ::DG::Tweening::TweenCallback_1<int>* onWaypointChange;
    // Field size check
    static_assert(sizeof(::DG::Tweening::TweenCallback_1<int>*) == 0x8);
    // System.Boolean isRecyclable
    // Size: 0x1
    // Offset: 0x68
    bool isRecyclable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean isSpeedBased
    // Size: 0x1
    // Offset: 0x69
    bool isSpeedBased;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean autoKill
    // Size: 0x1
    // Offset: 0x6A
    bool autoKill;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: autoKill and: loops
    char __padding14[0x1] = {};
    // System.Int32 loops
    // Size: 0x4
    // Offset: 0x6C
    int loops;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // DG.Tweening.LoopType loopType
    // Size: 0x4
    // Offset: 0x70
    ::DG::Tweening::LoopType loopType;
    // Field size check
    static_assert(sizeof(::DG::Tweening::LoopType) == 0x4);
    // System.Single delay
    // Size: 0x4
    // Offset: 0x74
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Boolean isRelative
    // Size: 0x1
    // Offset: 0x78
    bool isRelative;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isRelative and: easeType
    char __padding18[0x3] = {};
    // DG.Tweening.Ease easeType
    // Size: 0x4
    // Offset: 0x7C
    ::DG::Tweening::Ease easeType;
    // Field size check
    static_assert(sizeof(::DG::Tweening::Ease) == 0x4);
    // DG.Tweening.EaseFunction customEase
    // Size: 0x8
    // Offset: 0x80
    ::DG::Tweening::EaseFunction* customEase;
    // Field size check
    static_assert(sizeof(::DG::Tweening::EaseFunction*) == 0x8);
    // System.Single easeOvershootOrAmplitude
    // Size: 0x4
    // Offset: 0x88
    float easeOvershootOrAmplitude;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single easePeriod
    // Size: 0x4
    // Offset: 0x8C
    float easePeriod;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get static field: static public readonly DG.Tweening.TweenParams Params
    static ::DG::Tweening::TweenParams* _get_Params();
    // Set static field: static public readonly DG.Tweening.TweenParams Params
    static void _set_Params(::DG::Tweening::TweenParams* value);
    // Get instance field reference: System.Object id
    ::Il2CppObject*& dyn_id();
    // Get instance field reference: System.Object target
    ::Il2CppObject*& dyn_target();
    // Get instance field reference: DG.Tweening.UpdateType updateType
    ::DG::Tweening::UpdateType& dyn_updateType();
    // Get instance field reference: System.Boolean isIndependentUpdate
    bool& dyn_isIndependentUpdate();
    // Get instance field reference: DG.Tweening.TweenCallback onStart
    ::DG::Tweening::TweenCallback*& dyn_onStart();
    // Get instance field reference: DG.Tweening.TweenCallback onPlay
    ::DG::Tweening::TweenCallback*& dyn_onPlay();
    // Get instance field reference: DG.Tweening.TweenCallback onRewind
    ::DG::Tweening::TweenCallback*& dyn_onRewind();
    // Get instance field reference: DG.Tweening.TweenCallback onUpdate
    ::DG::Tweening::TweenCallback*& dyn_onUpdate();
    // Get instance field reference: DG.Tweening.TweenCallback onStepComplete
    ::DG::Tweening::TweenCallback*& dyn_onStepComplete();
    // Get instance field reference: DG.Tweening.TweenCallback onComplete
    ::DG::Tweening::TweenCallback*& dyn_onComplete();
    // Get instance field reference: DG.Tweening.TweenCallback onKill
    ::DG::Tweening::TweenCallback*& dyn_onKill();
    // Get instance field reference: DG.Tweening.TweenCallback`1<System.Int32> onWaypointChange
    ::DG::Tweening::TweenCallback_1<int>*& dyn_onWaypointChange();
    // Get instance field reference: System.Boolean isRecyclable
    bool& dyn_isRecyclable();
    // Get instance field reference: System.Boolean isSpeedBased
    bool& dyn_isSpeedBased();
    // Get instance field reference: System.Boolean autoKill
    bool& dyn_autoKill();
    // Get instance field reference: System.Int32 loops
    int& dyn_loops();
    // Get instance field reference: DG.Tweening.LoopType loopType
    ::DG::Tweening::LoopType& dyn_loopType();
    // Get instance field reference: System.Single delay
    float& dyn_delay();
    // Get instance field reference: System.Boolean isRelative
    bool& dyn_isRelative();
    // Get instance field reference: DG.Tweening.Ease easeType
    ::DG::Tweening::Ease& dyn_easeType();
    // Get instance field reference: DG.Tweening.EaseFunction customEase
    ::DG::Tweening::EaseFunction*& dyn_customEase();
    // Get instance field reference: System.Single easeOvershootOrAmplitude
    float& dyn_easeOvershootOrAmplitude();
    // Get instance field reference: System.Single easePeriod
    float& dyn_easePeriod();
    // static private System.Void .cctor()
    // Offset: 0x103F154
    static void _cctor();
    // public DG.Tweening.TweenParams Clear()
    // Offset: 0x103ECD0
    ::DG::Tweening::TweenParams* Clear();
    // public DG.Tweening.TweenParams SetAutoKill(System.Boolean autoKillOnCompletion)
    // Offset: 0x103EDB4
    ::DG::Tweening::TweenParams* SetAutoKill(bool autoKillOnCompletion);
    // public DG.Tweening.TweenParams SetId(System.Object id)
    // Offset: 0x103EDC0
    ::DG::Tweening::TweenParams* SetId(::Il2CppObject* id);
    // public DG.Tweening.TweenParams SetTarget(System.Object target)
    // Offset: 0x103EDC8
    ::DG::Tweening::TweenParams* SetTarget(::Il2CppObject* target);
    // public DG.Tweening.TweenParams SetLoops(System.Int32 loops, System.Nullable`1<DG.Tweening.LoopType> loopType)
    // Offset: 0x103EDD0
    ::DG::Tweening::TweenParams* SetLoops(int loops, ::System::Nullable_1<::DG::Tweening::LoopType> loopType);
    // public DG.Tweening.TweenParams SetEase(DG.Tweening.Ease ease, System.Nullable`1<System.Single> overshootOrAmplitude, System.Nullable`1<System.Single> period)
    // Offset: 0x103EE6C
    ::DG::Tweening::TweenParams* SetEase(::DG::Tweening::Ease ease, ::System::Nullable_1<float> overshootOrAmplitude, ::System::Nullable_1<float> period);
    // public DG.Tweening.TweenParams SetEase(UnityEngine.AnimationCurve animCurve)
    // Offset: 0x103EF88
    ::DG::Tweening::TweenParams* SetEase(::UnityEngine::AnimationCurve* animCurve);
    // public DG.Tweening.TweenParams SetEase(DG.Tweening.EaseFunction customEase)
    // Offset: 0x103F044
    ::DG::Tweening::TweenParams* SetEase(::DG::Tweening::EaseFunction* customEase);
    // public DG.Tweening.TweenParams SetRecyclable(System.Boolean recyclable)
    // Offset: 0x103F054
    ::DG::Tweening::TweenParams* SetRecyclable(bool recyclable);
    // public DG.Tweening.TweenParams SetUpdate(System.Boolean isIndependentUpdate)
    // Offset: 0x103F060
    ::DG::Tweening::TweenParams* SetUpdate(bool isIndependentUpdate);
    // public DG.Tweening.TweenParams SetUpdate(DG.Tweening.UpdateType updateType, System.Boolean isIndependentUpdate)
    // Offset: 0x103F0E4
    ::DG::Tweening::TweenParams* SetUpdate(::DG::Tweening::UpdateType updateType, bool isIndependentUpdate);
    // public DG.Tweening.TweenParams OnStart(DG.Tweening.TweenCallback action)
    // Offset: 0x103F0F4
    ::DG::Tweening::TweenParams* OnStart(::DG::Tweening::TweenCallback* action);
    // public DG.Tweening.TweenParams OnPlay(DG.Tweening.TweenCallback action)
    // Offset: 0x103F0FC
    ::DG::Tweening::TweenParams* OnPlay(::DG::Tweening::TweenCallback* action);
    // public DG.Tweening.TweenParams OnRewind(DG.Tweening.TweenCallback action)
    // Offset: 0x103F104
    ::DG::Tweening::TweenParams* OnRewind(::DG::Tweening::TweenCallback* action);
    // public DG.Tweening.TweenParams OnUpdate(DG.Tweening.TweenCallback action)
    // Offset: 0x103F10C
    ::DG::Tweening::TweenParams* OnUpdate(::DG::Tweening::TweenCallback* action);
    // public DG.Tweening.TweenParams OnStepComplete(DG.Tweening.TweenCallback action)
    // Offset: 0x103F114
    ::DG::Tweening::TweenParams* OnStepComplete(::DG::Tweening::TweenCallback* action);
    // public DG.Tweening.TweenParams OnComplete(DG.Tweening.TweenCallback action)
    // Offset: 0x103F11C
    ::DG::Tweening::TweenParams* OnComplete(::DG::Tweening::TweenCallback* action);
    // public DG.Tweening.TweenParams OnKill(DG.Tweening.TweenCallback action)
    // Offset: 0x103F124
    ::DG::Tweening::TweenParams* OnKill(::DG::Tweening::TweenCallback* action);
    // public DG.Tweening.TweenParams OnWaypointChange(DG.Tweening.TweenCallback`1<System.Int32> action)
    // Offset: 0x103F12C
    ::DG::Tweening::TweenParams* OnWaypointChange(::DG::Tweening::TweenCallback_1<int>* action);
    // public DG.Tweening.TweenParams SetDelay(System.Single delay)
    // Offset: 0x103F134
    ::DG::Tweening::TweenParams* SetDelay(float delay);
    // public DG.Tweening.TweenParams SetRelative(System.Boolean isRelative)
    // Offset: 0x103F13C
    ::DG::Tweening::TweenParams* SetRelative(bool isRelative);
    // public DG.Tweening.TweenParams SetSpeedBased(System.Boolean isSpeedBased)
    // Offset: 0x103F148
    ::DG::Tweening::TweenParams* SetSpeedBased(bool isSpeedBased);
    // public System.Void .ctor()
    // Offset: 0x103ECA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TweenParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::TweenParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TweenParams*, creationType>()));
    }
  }; // DG.Tweening.TweenParams
  #pragma pack(pop)
  static check_size<sizeof(TweenParams), 140 + sizeof(float)> __DG_Tweening_TweenParamsSizeCheck;
  static_assert(sizeof(TweenParams) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::TweenParams::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&DG::Tweening::TweenParams::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)()>(&DG::Tweening::TweenParams::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::SetAutoKill
// Il2CppName: SetAutoKill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(bool)>(&DG::Tweening::TweenParams::SetAutoKill)> {
  static const MethodInfo* get() {
    static auto* autoKillOnCompletion = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "SetAutoKill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{autoKillOnCompletion});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::SetId
// Il2CppName: SetId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(::Il2CppObject*)>(&DG::Tweening::TweenParams::SetId)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "SetId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::SetTarget
// Il2CppName: SetTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(::Il2CppObject*)>(&DG::Tweening::TweenParams::SetTarget)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "SetTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::SetLoops
// Il2CppName: SetLoops
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(int, ::System::Nullable_1<::DG::Tweening::LoopType>)>(&DG::Tweening::TweenParams::SetLoops)> {
  static const MethodInfo* get() {
    static auto* loops = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* loopType = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DG.Tweening", "LoopType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "SetLoops", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loops, loopType});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::SetEase
// Il2CppName: SetEase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(::DG::Tweening::Ease, ::System::Nullable_1<float>, ::System::Nullable_1<float>)>(&DG::Tweening::TweenParams::SetEase)> {
  static const MethodInfo* get() {
    static auto* ease = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Ease")->byval_arg;
    static auto* overshootOrAmplitude = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    static auto* period = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "SetEase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ease, overshootOrAmplitude, period});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::SetEase
// Il2CppName: SetEase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(::UnityEngine::AnimationCurve*)>(&DG::Tweening::TweenParams::SetEase)> {
  static const MethodInfo* get() {
    static auto* animCurve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "SetEase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animCurve});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::SetEase
// Il2CppName: SetEase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(::DG::Tweening::EaseFunction*)>(&DG::Tweening::TweenParams::SetEase)> {
  static const MethodInfo* get() {
    static auto* customEase = &::il2cpp_utils::GetClassFromName("DG.Tweening", "EaseFunction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "SetEase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{customEase});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::SetRecyclable
// Il2CppName: SetRecyclable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(bool)>(&DG::Tweening::TweenParams::SetRecyclable)> {
  static const MethodInfo* get() {
    static auto* recyclable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "SetRecyclable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recyclable});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::SetUpdate
// Il2CppName: SetUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(bool)>(&DG::Tweening::TweenParams::SetUpdate)> {
  static const MethodInfo* get() {
    static auto* isIndependentUpdate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "SetUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isIndependentUpdate});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::SetUpdate
// Il2CppName: SetUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(::DG::Tweening::UpdateType, bool)>(&DG::Tweening::TweenParams::SetUpdate)> {
  static const MethodInfo* get() {
    static auto* updateType = &::il2cpp_utils::GetClassFromName("DG.Tweening", "UpdateType")->byval_arg;
    static auto* isIndependentUpdate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "SetUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateType, isIndependentUpdate});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::OnStart
// Il2CppName: OnStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(::DG::Tweening::TweenCallback*)>(&DG::Tweening::TweenParams::OnStart)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("DG.Tweening", "TweenCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "OnStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::OnPlay
// Il2CppName: OnPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(::DG::Tweening::TweenCallback*)>(&DG::Tweening::TweenParams::OnPlay)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("DG.Tweening", "TweenCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "OnPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::OnRewind
// Il2CppName: OnRewind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(::DG::Tweening::TweenCallback*)>(&DG::Tweening::TweenParams::OnRewind)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("DG.Tweening", "TweenCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "OnRewind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(::DG::Tweening::TweenCallback*)>(&DG::Tweening::TweenParams::OnUpdate)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("DG.Tweening", "TweenCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::OnStepComplete
// Il2CppName: OnStepComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(::DG::Tweening::TweenCallback*)>(&DG::Tweening::TweenParams::OnStepComplete)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("DG.Tweening", "TweenCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "OnStepComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::OnComplete
// Il2CppName: OnComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(::DG::Tweening::TweenCallback*)>(&DG::Tweening::TweenParams::OnComplete)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("DG.Tweening", "TweenCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "OnComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::OnKill
// Il2CppName: OnKill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(::DG::Tweening::TweenCallback*)>(&DG::Tweening::TweenParams::OnKill)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("DG.Tweening", "TweenCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "OnKill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::OnWaypointChange
// Il2CppName: OnWaypointChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(::DG::Tweening::TweenCallback_1<int>*)>(&DG::Tweening::TweenParams::OnWaypointChange)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening", "TweenCallback`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "OnWaypointChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::SetDelay
// Il2CppName: SetDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(float)>(&DG::Tweening::TweenParams::SetDelay)> {
  static const MethodInfo* get() {
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "SetDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delay});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::SetRelative
// Il2CppName: SetRelative
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(bool)>(&DG::Tweening::TweenParams::SetRelative)> {
  static const MethodInfo* get() {
    static auto* isRelative = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "SetRelative", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isRelative});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::SetSpeedBased
// Il2CppName: SetSpeedBased
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::TweenParams* (DG::Tweening::TweenParams::*)(bool)>(&DG::Tweening::TweenParams::SetSpeedBased)> {
  static const MethodInfo* get() {
    static auto* isSpeedBased = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenParams*), "SetSpeedBased", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isSpeedBased});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
