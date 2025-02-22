// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Skipping declaration: Activity because it is already included!
  // Forward declaring type: LoopPlayerPlaybackSettings
  class LoopPlayerPlaybackSettings;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlayerPlaybackState
  class LoopPlayerPlaybackState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopPlayerPlaybackState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerPlaybackState*, "VROSC", "LoopPlayerPlaybackState");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopPlayerPlaybackState
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopPlayerPlaybackState : public ::Il2CppObject {
    public:
    // Nested type: ::VROSC::LoopPlayerPlaybackState::Activity
    struct Activity;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.LoopPlayerPlaybackState/VROSC.Activity
    // [TokenAttribute] Offset: FFFFFFFF
    struct Activity/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Activity
      constexpr Activity(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.LoopPlayerPlaybackState/VROSC.Activity WaitingToBegin
      static constexpr const int WaitingToBegin = 0;
      // Get static field: static public VROSC.LoopPlayerPlaybackState/VROSC.Activity WaitingToBegin
      static ::VROSC::LoopPlayerPlaybackState::Activity _get_WaitingToBegin();
      // Set static field: static public VROSC.LoopPlayerPlaybackState/VROSC.Activity WaitingToBegin
      static void _set_WaitingToBegin(::VROSC::LoopPlayerPlaybackState::Activity value);
      // static field const value: static public VROSC.LoopPlayerPlaybackState/VROSC.Activity Running
      static constexpr const int Running = 1;
      // Get static field: static public VROSC.LoopPlayerPlaybackState/VROSC.Activity Running
      static ::VROSC::LoopPlayerPlaybackState::Activity _get_Running();
      // Set static field: static public VROSC.LoopPlayerPlaybackState/VROSC.Activity Running
      static void _set_Running(::VROSC::LoopPlayerPlaybackState::Activity value);
      // static field const value: static public VROSC.LoopPlayerPlaybackState/VROSC.Activity Ended
      static constexpr const int Ended = 2;
      // Get static field: static public VROSC.LoopPlayerPlaybackState/VROSC.Activity Ended
      static ::VROSC::LoopPlayerPlaybackState::Activity _get_Ended();
      // Set static field: static public VROSC.LoopPlayerPlaybackState/VROSC.Activity Ended
      static void _set_Ended(::VROSC::LoopPlayerPlaybackState::Activity value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.LoopPlayerPlaybackState/VROSC.Activity
    #pragma pack(pop)
    static check_size<sizeof(LoopPlayerPlaybackState::Activity), 0 + sizeof(int)> __VROSC_LoopPlayerPlaybackState_ActivitySizeCheck;
    static_assert(sizeof(LoopPlayerPlaybackState::Activity) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.LoopPlayerPlaybackState <NextState>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::LoopPlayerPlaybackState* NextState;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlayerPlaybackState*) == 0x8);
    // private VROSC.LoopPlayerPlaybackState/VROSC.Activity <CurrentActivity>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    ::VROSC::LoopPlayerPlaybackState::Activity CurrentActivity;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlayerPlaybackState::Activity) == 0x4);
    // private System.Int32 <StateBeginSample>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int StateBeginSample;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <StateEndSample>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int StateEndSample;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <Fading>k__BackingField
    // Size: 0x1
    // Offset: 0x24
    bool Fading;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // static field const value: static public System.Int32 AntiClickFadeLength
    static constexpr const int AntiClickFadeLength = 256;
    // Get static field: static public System.Int32 AntiClickFadeLength
    static int _get_AntiClickFadeLength();
    // Set static field: static public System.Int32 AntiClickFadeLength
    static void _set_AntiClickFadeLength(int value);
    // Get instance field reference: private VROSC.LoopPlayerPlaybackState <NextState>k__BackingField
    ::VROSC::LoopPlayerPlaybackState*& dyn_$NextState$k__BackingField();
    // Get instance field reference: private VROSC.LoopPlayerPlaybackState/VROSC.Activity <CurrentActivity>k__BackingField
    ::VROSC::LoopPlayerPlaybackState::Activity& dyn_$CurrentActivity$k__BackingField();
    // Get instance field reference: private System.Int32 <StateBeginSample>k__BackingField
    int& dyn_$StateBeginSample$k__BackingField();
    // Get instance field reference: private System.Int32 <StateEndSample>k__BackingField
    int& dyn_$StateEndSample$k__BackingField();
    // Get instance field reference: private System.Boolean <Fading>k__BackingField
    bool& dyn_$Fading$k__BackingField();
    // public VROSC.LoopPlayerPlaybackState get_NextState()
    // Offset: 0x907F18
    ::VROSC::LoopPlayerPlaybackState* get_NextState();
    // protected System.Void set_NextState(VROSC.LoopPlayerPlaybackState value)
    // Offset: 0x907F10
    void set_NextState(::VROSC::LoopPlayerPlaybackState* value);
    // public VROSC.LoopPlayerPlaybackState/VROSC.Activity get_CurrentActivity()
    // Offset: 0x907F28
    ::VROSC::LoopPlayerPlaybackState::Activity get_CurrentActivity();
    // protected System.Void set_CurrentActivity(VROSC.LoopPlayerPlaybackState/VROSC.Activity value)
    // Offset: 0x907F20
    void set_CurrentActivity(::VROSC::LoopPlayerPlaybackState::Activity value);
    // public System.Int32 get_StateBeginSample()
    // Offset: 0x907F38
    int get_StateBeginSample();
    // protected System.Void set_StateBeginSample(System.Int32 value)
    // Offset: 0x907F30
    void set_StateBeginSample(int value);
    // public System.Int32 get_StateEndSample()
    // Offset: 0x907F48
    int get_StateEndSample();
    // protected System.Void set_StateEndSample(System.Int32 value)
    // Offset: 0x907F40
    void set_StateEndSample(int value);
    // public System.Boolean get_Fading()
    // Offset: 0x907F5C
    bool get_Fading();
    // protected System.Void set_Fading(System.Boolean value)
    // Offset: 0x907F50
    void set_Fading(bool value);
    // public System.Boolean get_Playing()
    // Offset: 0x907F64
    bool get_Playing();
    // public System.Boolean get_HasEnded()
    // Offset: 0x907F6C
    bool get_HasEnded();
    // public System.Boolean get_WaitingToBegin()
    // Offset: 0x9075B8
    bool get_WaitingToBegin();
    // public System.Single GetCurrentFade(System.Int32 atSample)
    // Offset: 0xFFFFFFFFFFFFFFFF
    float GetCurrentFade(int atSample);
    // public System.Void SetExplicit(System.Int32 startSample, System.Int32 stopSample)
    // Offset: 0x9074E4
    void SetExplicit(int startSample, int stopSample);
    // public System.Void SetNextState(VROSC.LoopPlayerPlaybackState nextState)
    // Offset: 0x907634
    void SetNextState(::VROSC::LoopPlayerPlaybackState* nextState);
    // public System.Boolean CheckActivityChangeBeforeSample(System.Int32 sample)
    // Offset: 0x907CF8
    bool CheckActivityChangeBeforeSample(int sample);
    // public System.Boolean EvaluateRunningAndFlagActivityChangeAtSample(System.Int32 sample)
    // Offset: 0x907DD8
    bool EvaluateRunningAndFlagActivityChangeAtSample(int sample);
    // private System.Void SetActivity(System.Int32 sample)
    // Offset: 0x907F7C
    void SetActivity(int sample);
    // public System.Void SetStateActive(VROSC.LoopPlayerPlaybackSettings settings, System.Int32 atSample)
    // Offset: 0x907FA8
    void SetStateActive(::VROSC::LoopPlayerPlaybackSettings* settings, int atSample);
    // public System.String DebugString()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW DebugString();
    // System.Single GetBeginProgress(System.Int32 startSample, System.Int32 currentSyncSample)
    // Offset: 0x906788
    float GetBeginProgress(int startSample, int currentSyncSample);
    // protected System.Void .ctor()
    // Offset: 0x90736C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopPlayerPlaybackState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopPlayerPlaybackState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopPlayerPlaybackState*, creationType>()));
    }
  }; // VROSC.LoopPlayerPlaybackState
  #pragma pack(pop)
  static check_size<sizeof(LoopPlayerPlaybackState), 36 + sizeof(bool)> __VROSC_LoopPlayerPlaybackStateSizeCheck;
  static_assert(sizeof(LoopPlayerPlaybackState) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerPlaybackState::Activity, "VROSC", "LoopPlayerPlaybackState/Activity");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::get_NextState
// Il2CppName: get_NextState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlayerPlaybackState* (VROSC::LoopPlayerPlaybackState::*)()>(&VROSC::LoopPlayerPlaybackState::get_NextState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "get_NextState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::set_NextState
// Il2CppName: set_NextState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackState::*)(::VROSC::LoopPlayerPlaybackState*)>(&VROSC::LoopPlayerPlaybackState::set_NextState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayerPlaybackState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "set_NextState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::get_CurrentActivity
// Il2CppName: get_CurrentActivity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlayerPlaybackState::Activity (VROSC::LoopPlayerPlaybackState::*)()>(&VROSC::LoopPlayerPlaybackState::get_CurrentActivity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "get_CurrentActivity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::set_CurrentActivity
// Il2CppName: set_CurrentActivity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackState::*)(::VROSC::LoopPlayerPlaybackState::Activity)>(&VROSC::LoopPlayerPlaybackState::set_CurrentActivity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayerPlaybackState/Activity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "set_CurrentActivity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::get_StateBeginSample
// Il2CppName: get_StateBeginSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::LoopPlayerPlaybackState::*)()>(&VROSC::LoopPlayerPlaybackState::get_StateBeginSample)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "get_StateBeginSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::set_StateBeginSample
// Il2CppName: set_StateBeginSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackState::*)(int)>(&VROSC::LoopPlayerPlaybackState::set_StateBeginSample)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "set_StateBeginSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::get_StateEndSample
// Il2CppName: get_StateEndSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::LoopPlayerPlaybackState::*)()>(&VROSC::LoopPlayerPlaybackState::get_StateEndSample)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "get_StateEndSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::set_StateEndSample
// Il2CppName: set_StateEndSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackState::*)(int)>(&VROSC::LoopPlayerPlaybackState::set_StateEndSample)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "set_StateEndSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::get_Fading
// Il2CppName: get_Fading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopPlayerPlaybackState::*)()>(&VROSC::LoopPlayerPlaybackState::get_Fading)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "get_Fading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::set_Fading
// Il2CppName: set_Fading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackState::*)(bool)>(&VROSC::LoopPlayerPlaybackState::set_Fading)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "set_Fading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::get_Playing
// Il2CppName: get_Playing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopPlayerPlaybackState::*)()>(&VROSC::LoopPlayerPlaybackState::get_Playing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "get_Playing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::get_HasEnded
// Il2CppName: get_HasEnded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopPlayerPlaybackState::*)()>(&VROSC::LoopPlayerPlaybackState::get_HasEnded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "get_HasEnded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::get_WaitingToBegin
// Il2CppName: get_WaitingToBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopPlayerPlaybackState::*)()>(&VROSC::LoopPlayerPlaybackState::get_WaitingToBegin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "get_WaitingToBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::GetCurrentFade
// Il2CppName: GetCurrentFade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::LoopPlayerPlaybackState::*)(int)>(&VROSC::LoopPlayerPlaybackState::GetCurrentFade)> {
  static const MethodInfo* get() {
    static auto* atSample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "GetCurrentFade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{atSample});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::SetExplicit
// Il2CppName: SetExplicit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackState::*)(int, int)>(&VROSC::LoopPlayerPlaybackState::SetExplicit)> {
  static const MethodInfo* get() {
    static auto* startSample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* stopSample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "SetExplicit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startSample, stopSample});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::SetNextState
// Il2CppName: SetNextState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackState::*)(::VROSC::LoopPlayerPlaybackState*)>(&VROSC::LoopPlayerPlaybackState::SetNextState)> {
  static const MethodInfo* get() {
    static auto* nextState = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayerPlaybackState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "SetNextState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nextState});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::CheckActivityChangeBeforeSample
// Il2CppName: CheckActivityChangeBeforeSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopPlayerPlaybackState::*)(int)>(&VROSC::LoopPlayerPlaybackState::CheckActivityChangeBeforeSample)> {
  static const MethodInfo* get() {
    static auto* sample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "CheckActivityChangeBeforeSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sample});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::EvaluateRunningAndFlagActivityChangeAtSample
// Il2CppName: EvaluateRunningAndFlagActivityChangeAtSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopPlayerPlaybackState::*)(int)>(&VROSC::LoopPlayerPlaybackState::EvaluateRunningAndFlagActivityChangeAtSample)> {
  static const MethodInfo* get() {
    static auto* sample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "EvaluateRunningAndFlagActivityChangeAtSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sample});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::SetActivity
// Il2CppName: SetActivity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackState::*)(int)>(&VROSC::LoopPlayerPlaybackState::SetActivity)> {
  static const MethodInfo* get() {
    static auto* sample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "SetActivity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sample});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::SetStateActive
// Il2CppName: SetStateActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackState::*)(::VROSC::LoopPlayerPlaybackSettings*, int)>(&VROSC::LoopPlayerPlaybackState::SetStateActive)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayerPlaybackSettings")->byval_arg;
    static auto* atSample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "SetStateActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings, atSample});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::DebugString
// Il2CppName: DebugString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::LoopPlayerPlaybackState::*)()>(&VROSC::LoopPlayerPlaybackState::DebugString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "DebugString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::GetBeginProgress
// Il2CppName: GetBeginProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::LoopPlayerPlaybackState::*)(int, int)>(&VROSC::LoopPlayerPlaybackState::GetBeginProgress)> {
  static const MethodInfo* get() {
    static auto* startSample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* currentSyncSample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackState*), "GetBeginProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startSample, currentSyncSample});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
