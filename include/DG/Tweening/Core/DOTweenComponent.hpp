// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: DG.Tweening.IDOTweenInit
#include "DG/Tweening/IDOTweenInit.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening::Core
namespace DG::Tweening::Core {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: DG::Tweening
namespace DG::Tweening {
  // Forward declaring type: Tween
  class Tween;
}
// Completed forward declares
// Type namespace: DG.Tweening.Core
namespace DG::Tweening::Core {
  // Forward declaring type: DOTweenComponent
  class DOTweenComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::Core::DOTweenComponent);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::DOTweenComponent*, "DG.Tweening.Core", "DOTweenComponent");
// Type namespace: DG.Tweening.Core
namespace DG::Tweening::Core {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.Core.DOTweenComponent
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 59C434
  class DOTweenComponent : public ::UnityEngine::MonoBehaviour/*, public ::DG::Tweening::IDOTweenInit*/ {
    public:
    // Nested type: ::DG::Tweening::Core::DOTweenComponent::$WaitForCompletion$d__15
    class $WaitForCompletion$d__15;
    // Nested type: ::DG::Tweening::Core::DOTweenComponent::$WaitForRewind$d__16
    class $WaitForRewind$d__16;
    // Nested type: ::DG::Tweening::Core::DOTweenComponent::$WaitForKill$d__17
    class $WaitForKill$d__17;
    // Nested type: ::DG::Tweening::Core::DOTweenComponent::$WaitForElapsedLoops$d__18
    class $WaitForElapsedLoops$d__18;
    // Nested type: ::DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19
    class $WaitForPosition$d__19;
    // Nested type: ::DG::Tweening::Core::DOTweenComponent::$WaitForStart$d__20
    class $WaitForStart$d__20;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Int32 inspectorUpdater
    // Size: 0x4
    // Offset: 0x18
    int inspectorUpdater;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _unscaledTime
    // Size: 0x4
    // Offset: 0x1C
    float unscaledTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _unscaledDeltaTime
    // Size: 0x4
    // Offset: 0x20
    float unscaledDeltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _paused
    // Size: 0x1
    // Offset: 0x24
    bool paused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: paused and: pausedTime
    char __padding3[0x3] = {};
    // private System.Single _pausedTime
    // Size: 0x4
    // Offset: 0x28
    float pausedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _duplicateToDestroy
    // Size: 0x1
    // Offset: 0x2C
    bool duplicateToDestroy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::DG::Tweening::IDOTweenInit
    operator ::DG::Tweening::IDOTweenInit() noexcept {
      return *reinterpret_cast<::DG::Tweening::IDOTweenInit*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Int32 inspectorUpdater
    int& dyn_inspectorUpdater();
    // Get instance field reference: private System.Single _unscaledTime
    float& dyn__unscaledTime();
    // Get instance field reference: private System.Single _unscaledDeltaTime
    float& dyn__unscaledDeltaTime();
    // Get instance field reference: private System.Boolean _paused
    bool& dyn__paused();
    // Get instance field reference: private System.Single _pausedTime
    float& dyn__pausedTime();
    // Get instance field reference: private System.Boolean _duplicateToDestroy
    bool& dyn__duplicateToDestroy();
    // private System.Void Awake()
    // Offset: 0x1098B98
    void Awake();
    // private System.Void Start()
    // Offset: 0x10990E4
    void Start();
    // private System.Void Update()
    // Offset: 0x10991E4
    void Update();
    // private System.Void LateUpdate()
    // Offset: 0x1099568
    void LateUpdate();
    // private System.Void FixedUpdate()
    // Offset: 0x10996A8
    void FixedUpdate();
    // private System.Void OnDrawGizmos()
    // Offset: 0x1099848
    void OnDrawGizmos();
    // private System.Void OnDestroy()
    // Offset: 0x10999B0
    void OnDestroy();
    // public System.Void OnApplicationPause(System.Boolean pauseStatus)
    // Offset: 0x109A138
    void OnApplicationPause(bool pauseStatus);
    // public DG.Tweening.IDOTweenInit SetCapacity(System.Int32 tweenersCapacity, System.Int32 sequencesCapacity)
    // Offset: 0x109A1A0
    ::DG::Tweening::IDOTweenInit* SetCapacity(int tweenersCapacity, int sequencesCapacity);
    // System.Collections.IEnumerator WaitForCompletion(DG.Tweening.Tween t)
    // Offset: 0x109A220
    ::System::Collections::IEnumerator* WaitForCompletion(::DG::Tweening::Tween* t);
    // System.Collections.IEnumerator WaitForRewind(DG.Tweening.Tween t)
    // Offset: 0x109A28C
    ::System::Collections::IEnumerator* WaitForRewind(::DG::Tweening::Tween* t);
    // System.Collections.IEnumerator WaitForKill(DG.Tweening.Tween t)
    // Offset: 0x109A2F8
    ::System::Collections::IEnumerator* WaitForKill(::DG::Tweening::Tween* t);
    // System.Collections.IEnumerator WaitForElapsedLoops(DG.Tweening.Tween t, System.Int32 elapsedLoops)
    // Offset: 0x109A364
    ::System::Collections::IEnumerator* WaitForElapsedLoops(::DG::Tweening::Tween* t, int elapsedLoops);
    // System.Collections.IEnumerator WaitForPosition(DG.Tweening.Tween t, System.Single position)
    // Offset: 0x109A3E0
    ::System::Collections::IEnumerator* WaitForPosition(::DG::Tweening::Tween* t, float position);
    // System.Collections.IEnumerator WaitForStart(DG.Tweening.Tween t)
    // Offset: 0x109A45C
    ::System::Collections::IEnumerator* WaitForStart(::DG::Tweening::Tween* t);
    // static System.Void Create()
    // Offset: 0x1094E00
    static void Create();
    // static System.Void DestroyInstance()
    // Offset: 0x1095374
    static void DestroyInstance();
    // public System.Void .ctor()
    // Offset: 0x109A4C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DOTweenComponent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::Core::DOTweenComponent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DOTweenComponent*, creationType>()));
    }
  }; // DG.Tweening.Core.DOTweenComponent
  #pragma pack(pop)
  static check_size<sizeof(DOTweenComponent), 44 + sizeof(bool)> __DG_Tweening_Core_DOTweenComponentSizeCheck;
  static_assert(sizeof(DOTweenComponent) == 0x2D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Core::DOTweenComponent::*)()>(&DG::Tweening::Core::DOTweenComponent::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Core::DOTweenComponent::*)()>(&DG::Tweening::Core::DOTweenComponent::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Core::DOTweenComponent::*)()>(&DG::Tweening::Core::DOTweenComponent::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Core::DOTweenComponent::*)()>(&DG::Tweening::Core::DOTweenComponent::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Core::DOTweenComponent::*)()>(&DG::Tweening::Core::DOTweenComponent::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Core::DOTweenComponent::*)()>(&DG::Tweening::Core::DOTweenComponent::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Core::DOTweenComponent::*)()>(&DG::Tweening::Core::DOTweenComponent::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::OnApplicationPause
// Il2CppName: OnApplicationPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Core::DOTweenComponent::*)(bool)>(&DG::Tweening::Core::DOTweenComponent::OnApplicationPause)> {
  static const MethodInfo* get() {
    static auto* pauseStatus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent*), "OnApplicationPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pauseStatus});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::SetCapacity
// Il2CppName: SetCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::IDOTweenInit* (DG::Tweening::Core::DOTweenComponent::*)(int, int)>(&DG::Tweening::Core::DOTweenComponent::SetCapacity)> {
  static const MethodInfo* get() {
    static auto* tweenersCapacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sequencesCapacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent*), "SetCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tweenersCapacity, sequencesCapacity});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::WaitForCompletion
// Il2CppName: WaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (DG::Tweening::Core::DOTweenComponent::*)(::DG::Tweening::Tween*)>(&DG::Tweening::Core::DOTweenComponent::WaitForCompletion)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent*), "WaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::WaitForRewind
// Il2CppName: WaitForRewind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (DG::Tweening::Core::DOTweenComponent::*)(::DG::Tweening::Tween*)>(&DG::Tweening::Core::DOTweenComponent::WaitForRewind)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent*), "WaitForRewind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::WaitForKill
// Il2CppName: WaitForKill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (DG::Tweening::Core::DOTweenComponent::*)(::DG::Tweening::Tween*)>(&DG::Tweening::Core::DOTweenComponent::WaitForKill)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent*), "WaitForKill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::WaitForElapsedLoops
// Il2CppName: WaitForElapsedLoops
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (DG::Tweening::Core::DOTweenComponent::*)(::DG::Tweening::Tween*, int)>(&DG::Tweening::Core::DOTweenComponent::WaitForElapsedLoops)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* elapsedLoops = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent*), "WaitForElapsedLoops", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, elapsedLoops});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::WaitForPosition
// Il2CppName: WaitForPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (DG::Tweening::Core::DOTweenComponent::*)(::DG::Tweening::Tween*, float)>(&DG::Tweening::Core::DOTweenComponent::WaitForPosition)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent*), "WaitForPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, position});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::WaitForStart
// Il2CppName: WaitForStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (DG::Tweening::Core::DOTweenComponent::*)(::DG::Tweening::Tween*)>(&DG::Tweening::Core::DOTweenComponent::WaitForStart)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent*), "WaitForStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&DG::Tweening::Core::DOTweenComponent::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::DestroyInstance
// Il2CppName: DestroyInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&DG::Tweening::Core::DOTweenComponent::DestroyInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent*), "DestroyInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
