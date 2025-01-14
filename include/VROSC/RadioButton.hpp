// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SignalNode
#include "VROSC/SignalNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: RadioButtonParent
  class RadioButtonParent;
  // Forward declaring type: Signal
  class Signal;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: RadioButton
  class RadioButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::RadioButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::RadioButton*, "VROSC", "RadioButton");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x59
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.RadioButton
  // [TokenAttribute] Offset: FFFFFFFF
  class RadioButton : public ::VROSC::SignalNode {
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
    // private VROSC.RadioButtonParent _radioButtonParent
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::RadioButtonParent* radioButtonParent;
    // Field size check
    static_assert(sizeof(::VROSC::RadioButtonParent*) == 0x8);
    // private System.Boolean _active
    // Size: 0x1
    // Offset: 0x48
    bool active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: active and: signal
    char __padding1[0x7] = {};
    // private VROSC.Signal _signal
    // Size: 0x8
    // Offset: 0x50
    ::VROSC::Signal* signal;
    // Field size check
    static_assert(sizeof(::VROSC::Signal*) == 0x8);
    // private System.Boolean _signalBeganThisFrame
    // Size: 0x1
    // Offset: 0x58
    bool signalBeganThisFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private VROSC.RadioButtonParent _radioButtonParent
    ::VROSC::RadioButtonParent*& dyn__radioButtonParent();
    // Get instance field reference: private System.Boolean _active
    bool& dyn__active();
    // Get instance field reference: private VROSC.Signal _signal
    ::VROSC::Signal*& dyn__signal();
    // Get instance field reference: private System.Boolean _signalBeganThisFrame
    bool& dyn__signalBeganThisFrame();
    // protected System.Void Awake()
    // Offset: 0x995BAC
    void Awake();
    // private System.Void GetRadioButtonParentRecursive(UnityEngine.Transform t)
    // Offset: 0x995BD8
    void GetRadioButtonParentRecursive(::UnityEngine::Transform* t);
    // public System.Void Update()
    // Offset: 0x995F40
    void Update();
    // public System.Void SetActive(System.Boolean state)
    // Offset: 0x995F6C
    void SetActive(bool state);
    // public System.Void .ctor()
    // Offset: 0x995F8C
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RadioButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::RadioButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RadioButton*, creationType>()));
    }
    // public override System.Void ReceiveSignal(VROSC.Signal signal)
    // Offset: 0x995D68
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::ReceiveSignal(VROSC.Signal signal)
    void ReceiveSignal(::VROSC::Signal* signal);
  }; // VROSC.RadioButton
  #pragma pack(pop)
  static check_size<sizeof(RadioButton), 88 + sizeof(bool)> __VROSC_RadioButtonSizeCheck;
  static_assert(sizeof(RadioButton) == 0x59);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::RadioButton::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::RadioButton::*)()>(&VROSC::RadioButton::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::RadioButton*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::RadioButton::GetRadioButtonParentRecursive
// Il2CppName: GetRadioButtonParentRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::RadioButton::*)(::UnityEngine::Transform*)>(&VROSC::RadioButton::GetRadioButtonParentRecursive)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::RadioButton*), "GetRadioButtonParentRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: VROSC::RadioButton::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::RadioButton::*)()>(&VROSC::RadioButton::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::RadioButton*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::RadioButton::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::RadioButton::*)(bool)>(&VROSC::RadioButton::SetActive)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::RadioButton*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: VROSC::RadioButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::RadioButton::ReceiveSignal
// Il2CppName: ReceiveSignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::RadioButton::*)(::VROSC::Signal*)>(&VROSC::RadioButton::ReceiveSignal)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::RadioButton*), "ReceiveSignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
