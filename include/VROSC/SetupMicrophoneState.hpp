// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.IState
#include "VROSC/IState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: MicrophoneDeviceManager
  class MicrophoneDeviceManager;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SetupMicrophoneState
  class SetupMicrophoneState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SetupMicrophoneState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetupMicrophoneState*, "VROSC", "SetupMicrophoneState");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SetupMicrophoneState
  // [TokenAttribute] Offset: FFFFFFFF
  class SetupMicrophoneState : public ::Il2CppObject/*, public ::VROSC::IState*/ {
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
    // private VROSC.MicrophoneDeviceManager _microphoneManager
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::MicrophoneDeviceManager* microphoneManager;
    // Field size check
    static_assert(sizeof(::VROSC::MicrophoneDeviceManager*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::VROSC::IState
    operator ::VROSC::IState() noexcept {
      return *reinterpret_cast<::VROSC::IState*>(this);
    }
    // Creating conversion operator: operator ::VROSC::MicrophoneDeviceManager*
    constexpr operator ::VROSC::MicrophoneDeviceManager*() const noexcept {
      return microphoneManager;
    }
    // Get instance field reference: private VROSC.MicrophoneDeviceManager _microphoneManager
    ::VROSC::MicrophoneDeviceManager*& dyn__microphoneManager();
    // public System.Void .ctor(VROSC.MicrophoneDeviceManager microphoneManager)
    // Offset: 0x13B3A6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetupMicrophoneState* New_ctor(::VROSC::MicrophoneDeviceManager* microphoneManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SetupMicrophoneState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetupMicrophoneState*, creationType>(microphoneManager)));
    }
    // public System.Void OnEnter(params System.Object[] values)
    // Offset: 0x13B3A98
    void OnEnter(::ArrayW<::Il2CppObject*> values);
    // public System.Void OnExit()
    // Offset: 0x13B3AB4
    void OnExit();
    // public System.Void Tick()
    // Offset: 0x13B3AB8
    void Tick();
    // public System.Void UpdateData(params System.Object[] values)
    // Offset: 0x13B3ABC
    void UpdateData(::ArrayW<::Il2CppObject*> values);
  }; // VROSC.SetupMicrophoneState
  #pragma pack(pop)
  static check_size<sizeof(SetupMicrophoneState), 16 + sizeof(::VROSC::MicrophoneDeviceManager*)> __VROSC_SetupMicrophoneStateSizeCheck;
  static_assert(sizeof(SetupMicrophoneState) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SetupMicrophoneState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SetupMicrophoneState::OnEnter
// Il2CppName: OnEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetupMicrophoneState::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::SetupMicrophoneState::OnEnter)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetupMicrophoneState*), "OnEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: VROSC::SetupMicrophoneState::OnExit
// Il2CppName: OnExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetupMicrophoneState::*)()>(&VROSC::SetupMicrophoneState::OnExit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetupMicrophoneState*), "OnExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SetupMicrophoneState::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetupMicrophoneState::*)()>(&VROSC::SetupMicrophoneState::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetupMicrophoneState*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SetupMicrophoneState::UpdateData
// Il2CppName: UpdateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetupMicrophoneState::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::SetupMicrophoneState::UpdateData)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetupMicrophoneState*), "UpdateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};