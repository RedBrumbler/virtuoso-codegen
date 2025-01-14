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
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Signal
  class Signal;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: EmissionOnSignal
  class EmissionOnSignal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::EmissionOnSignal);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EmissionOnSignal*, "VROSC", "EmissionOnSignal");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.EmissionOnSignal
  // [TokenAttribute] Offset: FFFFFFFF
  class EmissionOnSignal : public ::VROSC::SignalNode {
    public:
    // Nested type: ::VROSC::EmissionOnSignal::$NodeBegin$d__11
    struct $NodeBegin$d__11;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.Renderer _outputRenderer
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Renderer* outputRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.Color _emissionColor
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Color emissionColor;
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
    // private UnityEngine.Material _materialInstance
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Material* materialInstance;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private System.Single _targetBrightness
    // Size: 0x4
    // Offset: 0x70
    float targetBrightness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _currentBrightness
    // Size: 0x4
    // Offset: 0x74
    float currentBrightness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.Renderer _outputRenderer
    ::UnityEngine::Renderer*& dyn__outputRenderer();
    // Get instance field reference: private UnityEngine.Color _emissionColor
    ::UnityEngine::Color& dyn__emissionColor();
    // Get instance field reference: private System.Single _zeroBrightness
    float& dyn__zeroBrightness();
    // Get instance field reference: private System.Single _oneBrightness
    float& dyn__oneBrightness();
    // Get instance field reference: private System.Single _rampUpTime
    float& dyn__rampUpTime();
    // Get instance field reference: private System.Single _rampDownTime
    float& dyn__rampDownTime();
    // Get instance field reference: private UnityEngine.Material _materialInstance
    ::UnityEngine::Material*& dyn__materialInstance();
    // Get instance field reference: private System.Single _targetBrightness
    float& dyn__targetBrightness();
    // Get instance field reference: private System.Single _currentBrightness
    float& dyn__currentBrightness();
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x1311550
    void SetColor(::UnityEngine::Color color);
    // protected System.Void Awake()
    // Offset: 0x131155C
    void Awake();
    // protected System.Void Update()
    // Offset: 0x13117B4
    void Update();
    // private System.Void TurnOn(VROSC.Signal signal)
    // Offset: 0x1311864
    void TurnOn(::VROSC::Signal* signal);
    // private System.Void StayOn(VROSC.Signal signal)
    // Offset: 0x131173C
    void StayOn(::VROSC::Signal* signal);
    // private System.Void TurnOff(VROSC.Signal signal)
    // Offset: 0x1311798
    void TurnOff(::VROSC::Signal* signal);
    // private System.Void SetEmission(System.Single brightness)
    // Offset: 0x131159C
    void SetEmission(float brightness);
    // public System.Void .ctor()
    // Offset: 0x1311894
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmissionOnSignal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::EmissionOnSignal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmissionOnSignal*, creationType>()));
    }
    // protected override System.Void NodeBegin(VROSC.Signal signal)
    // Offset: 0x1311644
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeBegin(VROSC.Signal signal)
    void NodeBegin(::VROSC::Signal* signal);
    // protected override System.Void NodeStay(VROSC.Signal signal)
    // Offset: 0x131170C
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeStay(VROSC.Signal signal)
    void NodeStay(::VROSC::Signal* signal);
    // protected override System.Void NodeEnd(VROSC.Signal signal)
    // Offset: 0x1311760
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeEnd(VROSC.Signal signal)
    void NodeEnd(::VROSC::Signal* signal);
  }; // VROSC.EmissionOnSignal
  #pragma pack(pop)
  static check_size<sizeof(EmissionOnSignal), 116 + sizeof(float)> __VROSC_EmissionOnSignalSizeCheck;
  static_assert(sizeof(EmissionOnSignal) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::EmissionOnSignal::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EmissionOnSignal::*)(::UnityEngine::Color)>(&VROSC::EmissionOnSignal::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::EmissionOnSignal*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: VROSC::EmissionOnSignal::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EmissionOnSignal::*)()>(&VROSC::EmissionOnSignal::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::EmissionOnSignal*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::EmissionOnSignal::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EmissionOnSignal::*)()>(&VROSC::EmissionOnSignal::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::EmissionOnSignal*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::EmissionOnSignal::TurnOn
// Il2CppName: TurnOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EmissionOnSignal::*)(::VROSC::Signal*)>(&VROSC::EmissionOnSignal::TurnOn)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::EmissionOnSignal*), "TurnOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::EmissionOnSignal::StayOn
// Il2CppName: StayOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EmissionOnSignal::*)(::VROSC::Signal*)>(&VROSC::EmissionOnSignal::StayOn)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::EmissionOnSignal*), "StayOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::EmissionOnSignal::TurnOff
// Il2CppName: TurnOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EmissionOnSignal::*)(::VROSC::Signal*)>(&VROSC::EmissionOnSignal::TurnOff)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::EmissionOnSignal*), "TurnOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::EmissionOnSignal::SetEmission
// Il2CppName: SetEmission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EmissionOnSignal::*)(float)>(&VROSC::EmissionOnSignal::SetEmission)> {
  static const MethodInfo* get() {
    static auto* brightness = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::EmissionOnSignal*), "SetEmission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{brightness});
  }
};
// Writing MetadataGetter for method: VROSC::EmissionOnSignal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::EmissionOnSignal::NodeBegin
// Il2CppName: NodeBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EmissionOnSignal::*)(::VROSC::Signal*)>(&VROSC::EmissionOnSignal::NodeBegin)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::EmissionOnSignal*), "NodeBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::EmissionOnSignal::NodeStay
// Il2CppName: NodeStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EmissionOnSignal::*)(::VROSC::Signal*)>(&VROSC::EmissionOnSignal::NodeStay)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::EmissionOnSignal*), "NodeStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::EmissionOnSignal::NodeEnd
// Il2CppName: NodeEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EmissionOnSignal::*)(::VROSC::Signal*)>(&VROSC::EmissionOnSignal::NodeEnd)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::EmissionOnSignal*), "NodeEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
