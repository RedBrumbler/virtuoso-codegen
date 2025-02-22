// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SignalNode
#include "VROSC/SignalNode.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextMesh
  class TextMesh;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SetTextColorOnSignal
  class SetTextColorOnSignal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SetTextColorOnSignal);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetTextColorOnSignal*, "VROSC", "SetTextColorOnSignal");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SetTextColorOnSignal
  // [TokenAttribute] Offset: FFFFFFFF
  class SetTextColorOnSignal : public ::VROSC::SignalNode {
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
    // private UnityEngine.TextMesh _textMesh
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::TextMesh* textMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextMesh*) == 0x8);
    // private UnityEngine.Color _onSignalColor
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Color onSignalColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single _zeroBrightness
    // Size: 0x4
    // Offset: 0x58
    float zeroBrightness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _oneBrightness
    // Size: 0x4
    // Offset: 0x5C
    float oneBrightness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rampUpTime
    // Size: 0x4
    // Offset: 0x60
    float rampUpTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rampDownTime
    // Size: 0x4
    // Offset: 0x64
    float rampDownTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _targetBrightness
    // Size: 0x4
    // Offset: 0x68
    float targetBrightness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _currentBrightness
    // Size: 0x4
    // Offset: 0x6C
    float currentBrightness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _defaultColor
    // Size: 0x10
    // Offset: 0x70
    ::UnityEngine::Color defaultColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: private UnityEngine.TextMesh _textMesh
    ::UnityEngine::TextMesh*& dyn__textMesh();
    // Get instance field reference: private UnityEngine.Color _onSignalColor
    ::UnityEngine::Color& dyn__onSignalColor();
    // Get instance field reference: private System.Single _zeroBrightness
    float& dyn__zeroBrightness();
    // Get instance field reference: private System.Single _oneBrightness
    float& dyn__oneBrightness();
    // Get instance field reference: private System.Single _rampUpTime
    float& dyn__rampUpTime();
    // Get instance field reference: private System.Single _rampDownTime
    float& dyn__rampDownTime();
    // Get instance field reference: private System.Single _targetBrightness
    float& dyn__targetBrightness();
    // Get instance field reference: private System.Single _currentBrightness
    float& dyn__currentBrightness();
    // Get instance field reference: private UnityEngine.Color _defaultColor
    ::UnityEngine::Color& dyn__defaultColor();
    // protected System.Void Awake()
    // Offset: 0x13B2BC8
    void Awake();
    // protected System.Void Update()
    // Offset: 0x13B2D30
    void Update();
    // private System.Void TurnOn(VROSC.Signal signal)
    // Offset: 0x13B2C80
    void TurnOn(::VROSC::Signal* signal);
    // private System.Void StayOn(VROSC.Signal signal)
    // Offset: 0x13B2CD4
    void StayOn(::VROSC::Signal* signal);
    // private System.Void TurnOff(VROSC.Signal signal)
    // Offset: 0x13B2D14
    void TurnOff(::VROSC::Signal* signal);
    // private System.Void SetColorAmount(System.Single brightness)
    // Offset: 0x13B2C10
    void SetColorAmount(float brightness);
    // public System.Void .ctor()
    // Offset: 0x13B2DE0
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetTextColorOnSignal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SetTextColorOnSignal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetTextColorOnSignal*, creationType>()));
    }
    // protected override System.Void NodeBegin(VROSC.Signal signal)
    // Offset: 0x13B2C7C
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeBegin(VROSC.Signal signal)
    void NodeBegin(::VROSC::Signal* signal);
    // protected override System.Void NodeStay(VROSC.Signal signal)
    // Offset: 0x13B2CB0
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeStay(VROSC.Signal signal)
    void NodeStay(::VROSC::Signal* signal);
    // protected override System.Void NodeEnd(VROSC.Signal signal)
    // Offset: 0x13B2CF8
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeEnd(VROSC.Signal signal)
    void NodeEnd(::VROSC::Signal* signal);
  }; // VROSC.SetTextColorOnSignal
  #pragma pack(pop)
  static check_size<sizeof(SetTextColorOnSignal), 112 + sizeof(::UnityEngine::Color)> __VROSC_SetTextColorOnSignalSizeCheck;
  static_assert(sizeof(SetTextColorOnSignal) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SetTextColorOnSignal::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetTextColorOnSignal::*)()>(&VROSC::SetTextColorOnSignal::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetTextColorOnSignal*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SetTextColorOnSignal::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetTextColorOnSignal::*)()>(&VROSC::SetTextColorOnSignal::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetTextColorOnSignal*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SetTextColorOnSignal::TurnOn
// Il2CppName: TurnOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetTextColorOnSignal::*)(::VROSC::Signal*)>(&VROSC::SetTextColorOnSignal::TurnOn)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetTextColorOnSignal*), "TurnOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::SetTextColorOnSignal::StayOn
// Il2CppName: StayOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetTextColorOnSignal::*)(::VROSC::Signal*)>(&VROSC::SetTextColorOnSignal::StayOn)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetTextColorOnSignal*), "StayOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::SetTextColorOnSignal::TurnOff
// Il2CppName: TurnOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetTextColorOnSignal::*)(::VROSC::Signal*)>(&VROSC::SetTextColorOnSignal::TurnOff)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetTextColorOnSignal*), "TurnOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::SetTextColorOnSignal::SetColorAmount
// Il2CppName: SetColorAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetTextColorOnSignal::*)(float)>(&VROSC::SetTextColorOnSignal::SetColorAmount)> {
  static const MethodInfo* get() {
    static auto* brightness = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetTextColorOnSignal*), "SetColorAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{brightness});
  }
};
// Writing MetadataGetter for method: VROSC::SetTextColorOnSignal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SetTextColorOnSignal::NodeBegin
// Il2CppName: NodeBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetTextColorOnSignal::*)(::VROSC::Signal*)>(&VROSC::SetTextColorOnSignal::NodeBegin)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetTextColorOnSignal*), "NodeBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::SetTextColorOnSignal::NodeStay
// Il2CppName: NodeStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetTextColorOnSignal::*)(::VROSC::Signal*)>(&VROSC::SetTextColorOnSignal::NodeStay)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetTextColorOnSignal*), "NodeStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::SetTextColorOnSignal::NodeEnd
// Il2CppName: NodeEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetTextColorOnSignal::*)(::VROSC::Signal*)>(&VROSC::SetTextColorOnSignal::NodeEnd)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetTextColorOnSignal*), "NodeEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
