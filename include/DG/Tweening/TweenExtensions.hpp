// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening
namespace DG::Tweening {
  // Forward declaring type: Tween
  class Tween;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: YieldInstruction
  class YieldInstruction;
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Completed forward declares
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Forward declaring type: TweenExtensions
  class TweenExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::TweenExtensions);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::TweenExtensions*, "DG.Tweening", "TweenExtensions");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.TweenExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TweenExtensions : public ::Il2CppObject {
    public:
    // static public System.Void Complete(DG.Tweening.Tween t)
    // Offset: 0x1037AB4
    static void Complete(::DG::Tweening::Tween* t);
    // static public System.Void Complete(DG.Tweening.Tween t, System.Boolean withCallbacks)
    // Offset: 0x1037ABC
    static void Complete(::DG::Tweening::Tween* t, bool withCallbacks);
    // static public System.Void Flip(DG.Tweening.Tween t)
    // Offset: 0x1037D78
    static void Flip(::DG::Tweening::Tween* t);
    // static public System.Void ForceInit(DG.Tweening.Tween t)
    // Offset: 0x1037F0C
    static void ForceInit(::DG::Tweening::Tween* t);
    // static public System.Void Goto(DG.Tweening.Tween t, System.Single to, System.Boolean andPlay)
    // Offset: 0x1037034
    static void Goto(::DG::Tweening::Tween* t, float to, bool andPlay);
    // static public System.Void Kill(DG.Tweening.Tween t, System.Boolean complete)
    // Offset: 0x1038248
    static void Kill(::DG::Tweening::Tween* t, bool complete);
    // static public T Pause(T t)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T Pause(T t) {
      static_assert(std::is_convertible_v<T, ::DG::Tweening::Tween*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::TweenExtensions::Pause");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("DG.Tweening", "TweenExtensions", "Pause", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, t);
    }
    // static public T Play(T t)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T Play(T t) {
      static_assert(std::is_convertible_v<T, ::DG::Tweening::Tween*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::TweenExtensions::Play");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("DG.Tweening", "TweenExtensions", "Play", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, t);
    }
    // static public System.Void PlayBackwards(DG.Tweening.Tween t)
    // Offset: 0x1038A2C
    static void PlayBackwards(::DG::Tweening::Tween* t);
    // static public System.Void PlayForward(DG.Tweening.Tween t)
    // Offset: 0x1038CA0
    static void PlayForward(::DG::Tweening::Tween* t);
    // static public System.Void Restart(DG.Tweening.Tween t, System.Boolean includeDelay, System.Single changeDelayTo)
    // Offset: 0x1038ED4
    static void Restart(::DG::Tweening::Tween* t, bool includeDelay, float changeDelayTo);
    // static public System.Void Rewind(DG.Tweening.Tween t, System.Boolean includeDelay)
    // Offset: 0x103915C
    static void Rewind(::DG::Tweening::Tween* t, bool includeDelay);
    // static public System.Void SmoothRewind(DG.Tweening.Tween t)
    // Offset: 0x1039410
    static void SmoothRewind(::DG::Tweening::Tween* t);
    // static public System.Void TogglePause(DG.Tweening.Tween t)
    // Offset: 0x103967C
    static void TogglePause(::DG::Tweening::Tween* t);
    // static public System.Void GotoWaypoint(DG.Tweening.Tween t, System.Int32 waypointIndex, System.Boolean andPlay)
    // Offset: 0x103987C
    static void GotoWaypoint(::DG::Tweening::Tween* t, int waypointIndex, bool andPlay);
    // static public UnityEngine.YieldInstruction WaitForCompletion(DG.Tweening.Tween t)
    // Offset: 0x1039BEC
    static ::UnityEngine::YieldInstruction* WaitForCompletion(::DG::Tweening::Tween* t);
    // static public UnityEngine.YieldInstruction WaitForRewind(DG.Tweening.Tween t)
    // Offset: 0x1039CD8
    static ::UnityEngine::YieldInstruction* WaitForRewind(::DG::Tweening::Tween* t);
    // static public UnityEngine.YieldInstruction WaitForKill(DG.Tweening.Tween t)
    // Offset: 0x1039DC4
    static ::UnityEngine::YieldInstruction* WaitForKill(::DG::Tweening::Tween* t);
    // static public UnityEngine.YieldInstruction WaitForElapsedLoops(DG.Tweening.Tween t, System.Int32 elapsedLoops)
    // Offset: 0x1039EB0
    static ::UnityEngine::YieldInstruction* WaitForElapsedLoops(::DG::Tweening::Tween* t, int elapsedLoops);
    // static public UnityEngine.YieldInstruction WaitForPosition(DG.Tweening.Tween t, System.Single position)
    // Offset: 0x1039FAC
    static ::UnityEngine::YieldInstruction* WaitForPosition(::DG::Tweening::Tween* t, float position);
    // static public UnityEngine.Coroutine WaitForStart(DG.Tweening.Tween t)
    // Offset: 0x103A0A8
    static ::UnityEngine::Coroutine* WaitForStart(::DG::Tweening::Tween* t);
    // static public System.Int32 CompletedLoops(DG.Tweening.Tween t)
    // Offset: 0x103A198
    static int CompletedLoops(::DG::Tweening::Tween* t);
    // static public System.Single Delay(DG.Tweening.Tween t)
    // Offset: 0x103A218
    static float Delay(::DG::Tweening::Tween* t);
    // static public System.Single Duration(DG.Tweening.Tween t, System.Boolean includeLoops)
    // Offset: 0x103A2A4
    static float Duration(::DG::Tweening::Tween* t, bool includeLoops);
    // static public System.Single Elapsed(DG.Tweening.Tween t, System.Boolean includeLoops)
    // Offset: 0x1036F7C
    static float Elapsed(::DG::Tweening::Tween* t, bool includeLoops);
    // static public System.Single ElapsedPercentage(DG.Tweening.Tween t, System.Boolean includeLoops)
    // Offset: 0x103A35C
    static float ElapsedPercentage(::DG::Tweening::Tween* t, bool includeLoops);
    // static public System.Single ElapsedDirectionalPercentage(DG.Tweening.Tween t)
    // Offset: 0x103A430
    static float ElapsedDirectionalPercentage(::DG::Tweening::Tween* t);
    // static public System.Boolean IsActive(DG.Tweening.Tween t)
    // Offset: 0x103A4F8
    static bool IsActive(::DG::Tweening::Tween* t);
    // static public System.Boolean IsBackwards(DG.Tweening.Tween t)
    // Offset: 0x103A510
    static bool IsBackwards(::DG::Tweening::Tween* t);
    // static public System.Boolean IsComplete(DG.Tweening.Tween t)
    // Offset: 0x103A598
    static bool IsComplete(::DG::Tweening::Tween* t);
    // static public System.Boolean IsInitialized(DG.Tweening.Tween t)
    // Offset: 0x103A620
    static bool IsInitialized(::DG::Tweening::Tween* t);
    // static public System.Boolean IsPlaying(DG.Tweening.Tween t)
    // Offset: 0x103A6A8
    static bool IsPlaying(::DG::Tweening::Tween* t);
    // static public System.Int32 Loops(DG.Tweening.Tween t)
    // Offset: 0x103A730
    static int Loops(::DG::Tweening::Tween* t);
    // static public UnityEngine.Vector3 PathGetPoint(DG.Tweening.Tween t, System.Single pathPercentage)
    // Offset: 0x103A7B0
    static ::UnityEngine::Vector3 PathGetPoint(::DG::Tweening::Tween* t, float pathPercentage);
    // static public UnityEngine.Vector3[] PathGetDrawPoints(DG.Tweening.Tween t, System.Int32 subdivisionsXSegment)
    // Offset: 0x103AA1C
    static ::ArrayW<::UnityEngine::Vector3> PathGetDrawPoints(::DG::Tweening::Tween* t, int subdivisionsXSegment);
    // static public System.Single PathLength(DG.Tweening.Tween t)
    // Offset: 0x103AC6C
    static float PathLength(::DG::Tweening::Tween* t);
  }; // DG.Tweening.TweenExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::Complete)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*, bool)>(&DG::Tweening::TweenExtensions::Complete)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* withCallbacks = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, withCallbacks});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::Flip
// Il2CppName: Flip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::Flip)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "Flip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::ForceInit
// Il2CppName: ForceInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::ForceInit)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "ForceInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::Goto
// Il2CppName: Goto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*, float, bool)>(&DG::Tweening::TweenExtensions::Goto)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* andPlay = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "Goto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, to, andPlay});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::Kill
// Il2CppName: Kill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*, bool)>(&DG::Tweening::TweenExtensions::Kill)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* complete = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "Kill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, complete});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::Pause
// Il2CppName: Pause
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::Play
// Il2CppName: Play
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::PlayBackwards
// Il2CppName: PlayBackwards
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::PlayBackwards)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "PlayBackwards", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::PlayForward
// Il2CppName: PlayForward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::PlayForward)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "PlayForward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::Restart
// Il2CppName: Restart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*, bool, float)>(&DG::Tweening::TweenExtensions::Restart)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* includeDelay = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* changeDelayTo = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "Restart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, includeDelay, changeDelayTo});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::Rewind
// Il2CppName: Rewind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*, bool)>(&DG::Tweening::TweenExtensions::Rewind)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* includeDelay = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "Rewind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, includeDelay});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::SmoothRewind
// Il2CppName: SmoothRewind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::SmoothRewind)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "SmoothRewind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::TogglePause
// Il2CppName: TogglePause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::TogglePause)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "TogglePause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::GotoWaypoint
// Il2CppName: GotoWaypoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DG::Tweening::Tween*, int, bool)>(&DG::Tweening::TweenExtensions::GotoWaypoint)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* waypointIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* andPlay = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "GotoWaypoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, waypointIndex, andPlay});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::WaitForCompletion
// Il2CppName: WaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::YieldInstruction* (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::WaitForCompletion)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "WaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::WaitForRewind
// Il2CppName: WaitForRewind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::YieldInstruction* (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::WaitForRewind)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "WaitForRewind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::WaitForKill
// Il2CppName: WaitForKill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::YieldInstruction* (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::WaitForKill)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "WaitForKill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::WaitForElapsedLoops
// Il2CppName: WaitForElapsedLoops
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::YieldInstruction* (*)(::DG::Tweening::Tween*, int)>(&DG::Tweening::TweenExtensions::WaitForElapsedLoops)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* elapsedLoops = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "WaitForElapsedLoops", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, elapsedLoops});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::WaitForPosition
// Il2CppName: WaitForPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::YieldInstruction* (*)(::DG::Tweening::Tween*, float)>(&DG::Tweening::TweenExtensions::WaitForPosition)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "WaitForPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, position});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::WaitForStart
// Il2CppName: WaitForStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Coroutine* (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::WaitForStart)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "WaitForStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::CompletedLoops
// Il2CppName: CompletedLoops
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::CompletedLoops)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "CompletedLoops", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::Delay
// Il2CppName: Delay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::Delay)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "Delay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::Duration
// Il2CppName: Duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::DG::Tweening::Tween*, bool)>(&DG::Tweening::TweenExtensions::Duration)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* includeLoops = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "Duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, includeLoops});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::Elapsed
// Il2CppName: Elapsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::DG::Tweening::Tween*, bool)>(&DG::Tweening::TweenExtensions::Elapsed)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* includeLoops = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "Elapsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, includeLoops});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::ElapsedPercentage
// Il2CppName: ElapsedPercentage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::DG::Tweening::Tween*, bool)>(&DG::Tweening::TweenExtensions::ElapsedPercentage)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* includeLoops = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "ElapsedPercentage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, includeLoops});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::ElapsedDirectionalPercentage
// Il2CppName: ElapsedDirectionalPercentage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::ElapsedDirectionalPercentage)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "ElapsedDirectionalPercentage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::IsActive
// Il2CppName: IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::IsActive)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::IsBackwards
// Il2CppName: IsBackwards
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::IsBackwards)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "IsBackwards", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::IsComplete
// Il2CppName: IsComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::IsComplete)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "IsComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::IsInitialized
// Il2CppName: IsInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::IsInitialized)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "IsInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::IsPlaying
// Il2CppName: IsPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::IsPlaying)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "IsPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::Loops
// Il2CppName: Loops
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::Loops)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "Loops", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::PathGetPoint
// Il2CppName: PathGetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::DG::Tweening::Tween*, float)>(&DG::Tweening::TweenExtensions::PathGetPoint)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* pathPercentage = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "PathGetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, pathPercentage});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::PathGetDrawPoints
// Il2CppName: PathGetDrawPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(::DG::Tweening::Tween*, int)>(&DG::Tweening::TweenExtensions::PathGetDrawPoints)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* subdivisionsXSegment = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "PathGetDrawPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, subdivisionsXSegment});
  }
};
// Writing MetadataGetter for method: DG::Tweening::TweenExtensions::PathLength
// Il2CppName: PathLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::DG::Tweening::Tween*)>(&DG::Tweening::TweenExtensions::PathLength)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::TweenExtensions*), "PathLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
