// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoopPlayerPlaybackState
#include "VROSC/LoopPlayerPlaybackState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlayerPlaybackSettings
  class LoopPlayerPlaybackSettings;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlayerPlaybackLoopingState
  class LoopPlayerPlaybackLoopingState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopPlayerPlaybackLoopingState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerPlaybackLoopingState*, "VROSC", "LoopPlayerPlaybackLoopingState");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x26
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopPlayerPlaybackLoopingState
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopPlayerPlaybackLoopingState : public ::VROSC::LoopPlayerPlaybackState {
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
    // private System.Boolean <Looping>k__BackingField
    // Size: 0x1
    // Offset: 0x25
    bool Looping;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return Looping;
    }
    // Get instance field reference: private System.Boolean <Looping>k__BackingField
    bool& dyn_$Looping$k__BackingField();
    // public System.Boolean get_Looping()
    // Offset: 0x90738C
    bool get_Looping();
    // private System.Void set_Looping(System.Boolean value)
    // Offset: 0x907380
    void set_Looping(bool value);
    // System.Void Set(VROSC.LoopPlayerPlaybackSettings settings, System.Int32 startStateBegin, System.Int32 startStateEnd)
    // Offset: 0x907454
    void Set(::VROSC::LoopPlayerPlaybackSettings* settings, int startStateBegin, int startStateEnd);
    // public System.Void .ctor()
    // Offset: 0x9074EC
    // Implemented from: VROSC.LoopPlayerPlaybackState
    // Base method: System.Void LoopPlayerPlaybackState::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopPlayerPlaybackLoopingState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopPlayerPlaybackLoopingState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopPlayerPlaybackLoopingState*, creationType>()));
    }
    // public override System.String DebugString()
    // Offset: 0x907394
    // Implemented from: VROSC.LoopPlayerPlaybackState
    // Base method: System.String LoopPlayerPlaybackState::DebugString()
    ::StringW DebugString();
    // public override System.Single GetCurrentFade(System.Int32 atSample)
    // Offset: 0x90744C
    // Implemented from: VROSC.LoopPlayerPlaybackState
    // Base method: System.Single LoopPlayerPlaybackState::GetCurrentFade(System.Int32 atSample)
    float GetCurrentFade(int atSample);
    // public override System.Void SetExplicit(System.Int32 startSample, System.Int32 stopSample)
    // Offset: 0x9074D8
    // Implemented from: VROSC.LoopPlayerPlaybackState
    // Base method: System.Void LoopPlayerPlaybackState::SetExplicit(System.Int32 startSample, System.Int32 stopSample)
    void SetExplicit(int startSample, int stopSample);
  }; // VROSC.LoopPlayerPlaybackLoopingState
  #pragma pack(pop)
  static check_size<sizeof(LoopPlayerPlaybackLoopingState), 37 + sizeof(bool)> __VROSC_LoopPlayerPlaybackLoopingStateSizeCheck;
  static_assert(sizeof(LoopPlayerPlaybackLoopingState) == 0x26);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackLoopingState::get_Looping
// Il2CppName: get_Looping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopPlayerPlaybackLoopingState::*)()>(&VROSC::LoopPlayerPlaybackLoopingState::get_Looping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackLoopingState*), "get_Looping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackLoopingState::set_Looping
// Il2CppName: set_Looping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackLoopingState::*)(bool)>(&VROSC::LoopPlayerPlaybackLoopingState::set_Looping)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackLoopingState*), "set_Looping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackLoopingState::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackLoopingState::*)(::VROSC::LoopPlayerPlaybackSettings*, int, int)>(&VROSC::LoopPlayerPlaybackLoopingState::Set)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayerPlaybackSettings")->byval_arg;
    static auto* startStateBegin = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* startStateEnd = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackLoopingState*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings, startStateBegin, startStateEnd});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackLoopingState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackLoopingState::DebugString
// Il2CppName: DebugString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::LoopPlayerPlaybackLoopingState::*)()>(&VROSC::LoopPlayerPlaybackLoopingState::DebugString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackLoopingState*), "DebugString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackLoopingState::GetCurrentFade
// Il2CppName: GetCurrentFade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::LoopPlayerPlaybackLoopingState::*)(int)>(&VROSC::LoopPlayerPlaybackLoopingState::GetCurrentFade)> {
  static const MethodInfo* get() {
    static auto* atSample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackLoopingState*), "GetCurrentFade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{atSample});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackLoopingState::SetExplicit
// Il2CppName: SetExplicit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackLoopingState::*)(int, int)>(&VROSC::LoopPlayerPlaybackLoopingState::SetExplicit)> {
  static const MethodInfo* get() {
    static auto* startSample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* stopSample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackLoopingState*), "SetExplicit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startSample, stopSample});
  }
};
