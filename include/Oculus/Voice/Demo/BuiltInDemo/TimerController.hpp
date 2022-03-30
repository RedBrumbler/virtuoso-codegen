// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: Oculus.Voice.Demo.BuiltInDemo
namespace Oculus::Voice::Demo::BuiltInDemo {
  // Forward declaring type: TimerController
  class TimerController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::Demo::BuiltInDemo::TimerController);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Demo::BuiltInDemo::TimerController*, "Oculus.Voice.Demo.BuiltInDemo", "TimerController");
// Type namespace: Oculus.Voice.Demo.BuiltInDemo
namespace Oculus::Voice::Demo::BuiltInDemo {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Voice.Demo.BuiltInDemo.TimerController
  // [TokenAttribute] Offset: FFFFFFFF
  class TimerController : public ::UnityEngine::MonoBehaviour {
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
    // private System.Single _time
    // Size: 0x4
    // Offset: 0x18
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _timerExist
    // Size: 0x1
    // Offset: 0x1C
    bool timerExist;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _timerRunning
    // Size: 0x1
    // Offset: 0x1D
    bool timerRunning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: timerRunning and: logText
    char __padding2[0x2] = {};
    // [TooltipAttribute] Offset: 0x677E2C
    // public UnityEngine.UI.Text logText
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Text* logText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // [TooltipAttribute] Offset: 0x677E64
    // public UnityEngine.AudioClip buzzSound
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AudioClip* buzzSound;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _time
    float& dyn__time();
    // Get instance field reference: private System.Boolean _timerExist
    bool& dyn__timerExist();
    // Get instance field reference: private System.Boolean _timerRunning
    bool& dyn__timerRunning();
    // Get instance field reference: public UnityEngine.UI.Text logText
    ::UnityEngine::UI::Text*& dyn_logText();
    // Get instance field reference: public UnityEngine.AudioClip buzzSound
    ::UnityEngine::AudioClip*& dyn_buzzSound();
    // private System.Void Update()
    // Offset: 0x13FF7BC
    void Update();
    // private System.Void Log(System.String msg)
    // Offset: 0x13FF88C
    void Log(::StringW msg);
    // private System.Void OnElapsedTime()
    // Offset: 0x13FF820
    void OnElapsedTime();
    // public System.Void DeleteTimer()
    // Offset: 0x13FF91C
    void DeleteTimer();
    // public System.Void CreateTimer(System.String[] entityValues)
    // Offset: 0x13FF990
    void CreateTimer(::ArrayW<::StringW> entityValues);
    // public System.Void GetTimerIntent()
    // Offset: 0x13FFD1C
    void GetTimerIntent();
    // public System.Void PauseTimer()
    // Offset: 0x13FFDCC
    void PauseTimer();
    // public System.Void ResumeTimer()
    // Offset: 0x13FFE1C
    void ResumeTimer();
    // public System.Void SubtractTimeTimer(System.String[] entityValues)
    // Offset: 0x13FFE70
    void SubtractTimeTimer(::ArrayW<::StringW> entityValues);
    // public System.Void AddTimeToTimer(System.String[] entityValues)
    // Offset: 0x13FFF88
    void AddTimeToTimer(::ArrayW<::StringW> entityValues);
    // public System.Single GetRemainingTime()
    // Offset: 0x1400094
    float GetRemainingTime();
    // public System.String GetFormattedTimeFromSeconds()
    // Offset: 0x13FFD44
    ::StringW GetFormattedTimeFromSeconds();
    // private System.Boolean ParseTime(System.String[] entityValues, out System.Single time)
    // Offset: 0x13FFBA8
    bool ParseTime(::ArrayW<::StringW> entityValues, ByRef<float> time);
    // public System.Void .ctor()
    // Offset: 0x140009C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimerController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Demo::BuiltInDemo::TimerController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimerController*, creationType>()));
    }
  }; // Oculus.Voice.Demo.BuiltInDemo.TimerController
  #pragma pack(pop)
  static check_size<sizeof(TimerController), 40 + sizeof(::UnityEngine::AudioClip*)> __Oculus_Voice_Demo_BuiltInDemo_TimerControllerSizeCheck;
  static_assert(sizeof(TimerController) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::Demo::BuiltInDemo::TimerController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::BuiltInDemo::TimerController::*)()>(&Oculus::Voice::Demo::BuiltInDemo::TimerController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::BuiltInDemo::TimerController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::BuiltInDemo::TimerController::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::BuiltInDemo::TimerController::*)(::StringW)>(&Oculus::Voice::Demo::BuiltInDemo::TimerController::Log)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::BuiltInDemo::TimerController*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::BuiltInDemo::TimerController::OnElapsedTime
// Il2CppName: OnElapsedTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::BuiltInDemo::TimerController::*)()>(&Oculus::Voice::Demo::BuiltInDemo::TimerController::OnElapsedTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::BuiltInDemo::TimerController*), "OnElapsedTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::BuiltInDemo::TimerController::DeleteTimer
// Il2CppName: DeleteTimer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::BuiltInDemo::TimerController::*)()>(&Oculus::Voice::Demo::BuiltInDemo::TimerController::DeleteTimer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::BuiltInDemo::TimerController*), "DeleteTimer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::BuiltInDemo::TimerController::CreateTimer
// Il2CppName: CreateTimer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::BuiltInDemo::TimerController::*)(::ArrayW<::StringW>)>(&Oculus::Voice::Demo::BuiltInDemo::TimerController::CreateTimer)> {
  static const MethodInfo* get() {
    static auto* entityValues = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::BuiltInDemo::TimerController*), "CreateTimer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entityValues});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::BuiltInDemo::TimerController::GetTimerIntent
// Il2CppName: GetTimerIntent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::BuiltInDemo::TimerController::*)()>(&Oculus::Voice::Demo::BuiltInDemo::TimerController::GetTimerIntent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::BuiltInDemo::TimerController*), "GetTimerIntent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::BuiltInDemo::TimerController::PauseTimer
// Il2CppName: PauseTimer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::BuiltInDemo::TimerController::*)()>(&Oculus::Voice::Demo::BuiltInDemo::TimerController::PauseTimer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::BuiltInDemo::TimerController*), "PauseTimer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::BuiltInDemo::TimerController::ResumeTimer
// Il2CppName: ResumeTimer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::BuiltInDemo::TimerController::*)()>(&Oculus::Voice::Demo::BuiltInDemo::TimerController::ResumeTimer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::BuiltInDemo::TimerController*), "ResumeTimer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::BuiltInDemo::TimerController::SubtractTimeTimer
// Il2CppName: SubtractTimeTimer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::BuiltInDemo::TimerController::*)(::ArrayW<::StringW>)>(&Oculus::Voice::Demo::BuiltInDemo::TimerController::SubtractTimeTimer)> {
  static const MethodInfo* get() {
    static auto* entityValues = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::BuiltInDemo::TimerController*), "SubtractTimeTimer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entityValues});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::BuiltInDemo::TimerController::AddTimeToTimer
// Il2CppName: AddTimeToTimer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::BuiltInDemo::TimerController::*)(::ArrayW<::StringW>)>(&Oculus::Voice::Demo::BuiltInDemo::TimerController::AddTimeToTimer)> {
  static const MethodInfo* get() {
    static auto* entityValues = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::BuiltInDemo::TimerController*), "AddTimeToTimer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entityValues});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::BuiltInDemo::TimerController::GetRemainingTime
// Il2CppName: GetRemainingTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Voice::Demo::BuiltInDemo::TimerController::*)()>(&Oculus::Voice::Demo::BuiltInDemo::TimerController::GetRemainingTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::BuiltInDemo::TimerController*), "GetRemainingTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::BuiltInDemo::TimerController::GetFormattedTimeFromSeconds
// Il2CppName: GetFormattedTimeFromSeconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Oculus::Voice::Demo::BuiltInDemo::TimerController::*)()>(&Oculus::Voice::Demo::BuiltInDemo::TimerController::GetFormattedTimeFromSeconds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::BuiltInDemo::TimerController*), "GetFormattedTimeFromSeconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::BuiltInDemo::TimerController::ParseTime
// Il2CppName: ParseTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Voice::Demo::BuiltInDemo::TimerController::*)(::ArrayW<::StringW>, ByRef<float>)>(&Oculus::Voice::Demo::BuiltInDemo::TimerController::ParseTime)> {
  static const MethodInfo* get() {
    static auto* entityValues = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::BuiltInDemo::TimerController*), "ParseTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entityValues, time});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::BuiltInDemo::TimerController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!