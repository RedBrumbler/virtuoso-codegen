// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoopPlaybackConfig
#include "VROSC/LoopPlaybackConfig.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlaybackConfigOverrideFlags
  class LoopPlaybackConfigOverrideFlags;
  // Forward declaring type: LoopPlaybackConfigData
  class LoopPlaybackConfigData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlaybackConfigOverride
  class LoopPlaybackConfigOverride;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopPlaybackConfigOverride);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlaybackConfigOverride*, "VROSC", "LoopPlaybackConfigOverride");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopPlaybackConfigOverride
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopPlaybackConfigOverride : public ::VROSC::LoopPlaybackConfig {
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
    // private VROSC.LoopPlaybackConfigOverrideFlags <OverrideFlags>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    ::VROSC::LoopPlaybackConfigOverrideFlags* OverrideFlags;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlaybackConfigOverrideFlags*) == 0x8);
    // public System.Action`1<System.Boolean> OnOneShotOverriddenChanged
    // Size: 0x8
    // Offset: 0x68
    ::System::Action_1<bool>* OnOneShotOverriddenChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // public System.Action`1<System.Boolean> OnRetriggerOverriddenChanged
    // Size: 0x8
    // Offset: 0x70
    ::System::Action_1<bool>* OnRetriggerOverriddenChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // public System.Action`1<System.Boolean> OnStartOverriddenChanged
    // Size: 0x8
    // Offset: 0x78
    ::System::Action_1<bool>* OnStartOverriddenChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // public System.Action`1<System.Boolean> OnStopOverriddenChanged
    // Size: 0x8
    // Offset: 0x80
    ::System::Action_1<bool>* OnStopOverriddenChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // public System.Action`1<System.Boolean> OnFadeInOverriddenChanged
    // Size: 0x8
    // Offset: 0x88
    ::System::Action_1<bool>* OnFadeInOverriddenChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // public System.Action`1<System.Boolean> OnFadeOutOverriddenChanged
    // Size: 0x8
    // Offset: 0x90
    ::System::Action_1<bool>* OnFadeOutOverriddenChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // public System.Action OnOverrideConfigChanged
    // Size: 0x8
    // Offset: 0x98
    ::System::Action* OnOverrideConfigChanged;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: private VROSC.LoopPlaybackConfigOverrideFlags <OverrideFlags>k__BackingField
    ::VROSC::LoopPlaybackConfigOverrideFlags*& dyn_$OverrideFlags$k__BackingField();
    // Get instance field reference: public System.Action`1<System.Boolean> OnOneShotOverriddenChanged
    ::System::Action_1<bool>*& dyn_OnOneShotOverriddenChanged();
    // Get instance field reference: public System.Action`1<System.Boolean> OnRetriggerOverriddenChanged
    ::System::Action_1<bool>*& dyn_OnRetriggerOverriddenChanged();
    // Get instance field reference: public System.Action`1<System.Boolean> OnStartOverriddenChanged
    ::System::Action_1<bool>*& dyn_OnStartOverriddenChanged();
    // Get instance field reference: public System.Action`1<System.Boolean> OnStopOverriddenChanged
    ::System::Action_1<bool>*& dyn_OnStopOverriddenChanged();
    // Get instance field reference: public System.Action`1<System.Boolean> OnFadeInOverriddenChanged
    ::System::Action_1<bool>*& dyn_OnFadeInOverriddenChanged();
    // Get instance field reference: public System.Action`1<System.Boolean> OnFadeOutOverriddenChanged
    ::System::Action_1<bool>*& dyn_OnFadeOutOverriddenChanged();
    // Get instance field reference: public System.Action OnOverrideConfigChanged
    ::System::Action*& dyn_OnOverrideConfigChanged();
    // public VROSC.LoopPlaybackConfigOverrideFlags get_OverrideFlags()
    // Offset: 0x1396D24
    ::VROSC::LoopPlaybackConfigOverrideFlags* get_OverrideFlags();
    // private System.Void set_OverrideFlags(VROSC.LoopPlaybackConfigOverrideFlags value)
    // Offset: 0x1396D1C
    void set_OverrideFlags(::VROSC::LoopPlaybackConfigOverrideFlags* value);
    // public System.Void .ctor(VROSC.LoopPlaybackConfigOverrideFlags overrideFlags, VROSC.LoopPlaybackConfigData data)
    // Offset: 0x1396DF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopPlaybackConfigOverride* New_ctor(::VROSC::LoopPlaybackConfigOverrideFlags* overrideFlags, ::VROSC::LoopPlaybackConfigData* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopPlaybackConfigOverride::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopPlaybackConfigOverride*, creationType>(overrideFlags, data)));
    }
    // public System.Void .ctor(VROSC.LoopPlaybackConfigOverride other)
    // Offset: 0x1396E98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopPlaybackConfigOverride* New_ctor(::VROSC::LoopPlaybackConfigOverride* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopPlaybackConfigOverride::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopPlaybackConfigOverride*, creationType>(other)));
    }
    // public System.Void SetOneShotOverridden(System.Boolean state)
    // Offset: 0x1396F6C
    void SetOneShotOverridden(bool state);
    // public System.Void SetStartOverridden(System.Boolean state)
    // Offset: 0x1396FFC
    void SetStartOverridden(bool state);
    // public System.Void SetStopOverridden(System.Boolean state)
    // Offset: 0x139708C
    void SetStopOverridden(bool state);
    // public System.Void SetFadeInOverridden(System.Boolean state)
    // Offset: 0x139711C
    void SetFadeInOverridden(bool state);
    // public System.Void SetFadeOutOverridden(System.Boolean state)
    // Offset: 0x13971AC
    void SetFadeOutOverridden(bool state);
    // public System.Void SetRetriggerOverridden(System.Boolean state)
    // Offset: 0x139723C
    void SetRetriggerOverridden(bool state);
    // public System.Void .ctor()
    // Offset: 0x1396D2C
    // Implemented from: VROSC.LoopPlaybackConfig
    // Base method: System.Void LoopPlaybackConfig::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopPlaybackConfigOverride* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopPlaybackConfigOverride::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopPlaybackConfigOverride*, creationType>()));
    }
    // public override System.Void ApplyTo(VROSC.LoopPlaybackConfig other)
    // Offset: 0x13972CC
    // Implemented from: VROSC.LoopPlaybackConfig
    // Base method: System.Void LoopPlaybackConfig::ApplyTo(VROSC.LoopPlaybackConfig other)
    void ApplyTo(::VROSC::LoopPlaybackConfig* other);
  }; // VROSC.LoopPlaybackConfigOverride
  #pragma pack(pop)
  static check_size<sizeof(LoopPlaybackConfigOverride), 152 + sizeof(::System::Action*)> __VROSC_LoopPlaybackConfigOverrideSizeCheck;
  static_assert(sizeof(LoopPlaybackConfigOverride) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopPlaybackConfigOverride::get_OverrideFlags
// Il2CppName: get_OverrideFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlaybackConfigOverrideFlags* (VROSC::LoopPlaybackConfigOverride::*)()>(&VROSC::LoopPlaybackConfigOverride::get_OverrideFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlaybackConfigOverride*), "get_OverrideFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlaybackConfigOverride::set_OverrideFlags
// Il2CppName: set_OverrideFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlaybackConfigOverride::*)(::VROSC::LoopPlaybackConfigOverrideFlags*)>(&VROSC::LoopPlaybackConfigOverride::set_OverrideFlags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlaybackConfigOverrideFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlaybackConfigOverride*), "set_OverrideFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlaybackConfigOverride::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LoopPlaybackConfigOverride::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LoopPlaybackConfigOverride::SetOneShotOverridden
// Il2CppName: SetOneShotOverridden
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlaybackConfigOverride::*)(bool)>(&VROSC::LoopPlaybackConfigOverride::SetOneShotOverridden)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlaybackConfigOverride*), "SetOneShotOverridden", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlaybackConfigOverride::SetStartOverridden
// Il2CppName: SetStartOverridden
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlaybackConfigOverride::*)(bool)>(&VROSC::LoopPlaybackConfigOverride::SetStartOverridden)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlaybackConfigOverride*), "SetStartOverridden", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlaybackConfigOverride::SetStopOverridden
// Il2CppName: SetStopOverridden
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlaybackConfigOverride::*)(bool)>(&VROSC::LoopPlaybackConfigOverride::SetStopOverridden)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlaybackConfigOverride*), "SetStopOverridden", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlaybackConfigOverride::SetFadeInOverridden
// Il2CppName: SetFadeInOverridden
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlaybackConfigOverride::*)(bool)>(&VROSC::LoopPlaybackConfigOverride::SetFadeInOverridden)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlaybackConfigOverride*), "SetFadeInOverridden", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlaybackConfigOverride::SetFadeOutOverridden
// Il2CppName: SetFadeOutOverridden
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlaybackConfigOverride::*)(bool)>(&VROSC::LoopPlaybackConfigOverride::SetFadeOutOverridden)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlaybackConfigOverride*), "SetFadeOutOverridden", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlaybackConfigOverride::SetRetriggerOverridden
// Il2CppName: SetRetriggerOverridden
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlaybackConfigOverride::*)(bool)>(&VROSC::LoopPlaybackConfigOverride::SetRetriggerOverridden)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlaybackConfigOverride*), "SetRetriggerOverridden", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlaybackConfigOverride::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LoopPlaybackConfigOverride::ApplyTo
// Il2CppName: ApplyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlaybackConfigOverride::*)(::VROSC::LoopPlaybackConfig*)>(&VROSC::LoopPlaybackConfigOverride::ApplyTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlaybackConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlaybackConfigOverride*), "ApplyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
