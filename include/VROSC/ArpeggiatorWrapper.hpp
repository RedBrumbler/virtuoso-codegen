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
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: UISpinner
  class UISpinner;
  // Forward declaring type: UISlider
  class UISlider;
  // Forward declaring type: UISlideToggle
  class UISlideToggle;
  // Forward declaring type: InternalSynthesizer
  class InternalSynthesizer;
  // Forward declaring type: InstrumentController
  class InstrumentController;
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ArpeggiatorWrapper
  class ArpeggiatorWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ArpeggiatorWrapper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ArpeggiatorWrapper*, "VROSC", "ArpeggiatorWrapper");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ArpeggiatorWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class ArpeggiatorWrapper : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::ArpeggiatorWrapper::Pattern
    struct Pattern;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.UISpinner _tempo
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::UISpinner* tempo;
    // Field size check
    static_assert(sizeof(::VROSC::UISpinner*) == 0x8);
    // private VROSC.UISpinner _octaves
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UISpinner* octaves;
    // Field size check
    static_assert(sizeof(::VROSC::UISpinner*) == 0x8);
    // private VROSC.UISpinner _pattern
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::UISpinner* pattern;
    // Field size check
    static_assert(sizeof(::VROSC::UISpinner*) == 0x8);
    // private VROSC.UISlider _gateSlider
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::UISlider* gateSlider;
    // Field size check
    static_assert(sizeof(::VROSC::UISlider*) == 0x8);
    // private VROSC.UISlideToggle _onOffButton
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::UISlideToggle* onOffButton;
    // Field size check
    static_assert(sizeof(::VROSC::UISlideToggle*) == 0x8);
    // private VROSC.InternalSynthesizer _internalSynthesizer
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::InternalSynthesizer* internalSynthesizer;
    // Field size check
    static_assert(sizeof(::VROSC::InternalSynthesizer*) == 0x8);
    // private VROSC.InstrumentController _instrument
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::InstrumentController* instrument;
    // Field size check
    static_assert(sizeof(::VROSC::InstrumentController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.UISpinner _tempo
    ::VROSC::UISpinner*& dyn__tempo();
    // Get instance field reference: private VROSC.UISpinner _octaves
    ::VROSC::UISpinner*& dyn__octaves();
    // Get instance field reference: private VROSC.UISpinner _pattern
    ::VROSC::UISpinner*& dyn__pattern();
    // Get instance field reference: private VROSC.UISlider _gateSlider
    ::VROSC::UISlider*& dyn__gateSlider();
    // Get instance field reference: private VROSC.UISlideToggle _onOffButton
    ::VROSC::UISlideToggle*& dyn__onOffButton();
    // Get instance field reference: private VROSC.InternalSynthesizer _internalSynthesizer
    ::VROSC::InternalSynthesizer*& dyn__internalSynthesizer();
    // Get instance field reference: private VROSC.InstrumentController _instrument
    ::VROSC::InstrumentController*& dyn__instrument();
    // public System.Void Setup(VROSC.InstrumentController instrument)
    // Offset: 0x136E238
    void Setup(::VROSC::InstrumentController* instrument);
    // protected System.Void OnEnable()
    // Offset: 0x136EB54
    void OnEnable();
    // public System.Void ResetArpeggiator()
    // Offset: 0x136EDC8
    void ResetArpeggiator();
    // private System.Void LoadPatchValues()
    // Offset: 0x136EBD4
    void LoadPatchValues();
    // private System.Void UpdateEnableState()
    // Offset: 0x136EEA8
    void UpdateEnableState();
    // private System.Void ChangeTempo(System.Int32 frequency)
    // Offset: 0x136EF94
    void ChangeTempo(int frequency);
    // private System.Void UpdateTempoAndDisplay(System.Int32 frequency)
    // Offset: 0x136EDF8
    void UpdateTempoAndDisplay(int frequency);
    // private System.Void ChangeGate(System.Single gate)
    // Offset: 0x136F094
    void ChangeGate(float gate);
    // private System.Void UpdateGateAndDisplay(System.Single gate)
    // Offset: 0x136EDCC
    void UpdateGateAndDisplay(float gate);
    // private System.Void ChangeOctaves(System.Int32 octaves)
    // Offset: 0x136EE14
    void ChangeOctaves(int octaves);
    // private System.Void UpdateOctavesAndDisplay(System.Int32 octaves)
    // Offset: 0x136F11C
    void UpdateOctavesAndDisplay(int octaves);
    // private System.Void ChangePattern(System.Int32 pattern)
    // Offset: 0x136F138
    void ChangePattern(int pattern);
    // private System.Void UpdatePatternAndDisplay(System.Int32 pattern)
    // Offset: 0x136EE8C
    void UpdatePatternAndDisplay(int pattern);
    // private System.Void ToggleArpeggiator(VROSC.InputDevice device, System.Boolean isOn)
    // Offset: 0x136F1C0
    void ToggleArpeggiator(::VROSC::InputDevice* device, bool isOn);
    // protected System.Void OnDestroy()
    // Offset: 0x136F238
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x136F4F4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArpeggiatorWrapper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ArpeggiatorWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArpeggiatorWrapper*, creationType>()));
    }
  }; // VROSC.ArpeggiatorWrapper
  #pragma pack(pop)
  static check_size<sizeof(ArpeggiatorWrapper), 72 + sizeof(::VROSC::InstrumentController*)> __VROSC_ArpeggiatorWrapperSizeCheck;
  static_assert(sizeof(ArpeggiatorWrapper) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ArpeggiatorWrapper::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ArpeggiatorWrapper::*)(::VROSC::InstrumentController*)>(&VROSC::ArpeggiatorWrapper::Setup)> {
  static const MethodInfo* get() {
    static auto* instrument = &::il2cpp_utils::GetClassFromName("VROSC", "InstrumentController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ArpeggiatorWrapper*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instrument});
  }
};
// Writing MetadataGetter for method: VROSC::ArpeggiatorWrapper::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ArpeggiatorWrapper::*)()>(&VROSC::ArpeggiatorWrapper::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ArpeggiatorWrapper*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ArpeggiatorWrapper::ResetArpeggiator
// Il2CppName: ResetArpeggiator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ArpeggiatorWrapper::*)()>(&VROSC::ArpeggiatorWrapper::ResetArpeggiator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ArpeggiatorWrapper*), "ResetArpeggiator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ArpeggiatorWrapper::LoadPatchValues
// Il2CppName: LoadPatchValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ArpeggiatorWrapper::*)()>(&VROSC::ArpeggiatorWrapper::LoadPatchValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ArpeggiatorWrapper*), "LoadPatchValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ArpeggiatorWrapper::UpdateEnableState
// Il2CppName: UpdateEnableState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ArpeggiatorWrapper::*)()>(&VROSC::ArpeggiatorWrapper::UpdateEnableState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ArpeggiatorWrapper*), "UpdateEnableState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ArpeggiatorWrapper::ChangeTempo
// Il2CppName: ChangeTempo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ArpeggiatorWrapper::*)(int)>(&VROSC::ArpeggiatorWrapper::ChangeTempo)> {
  static const MethodInfo* get() {
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ArpeggiatorWrapper*), "ChangeTempo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frequency});
  }
};
// Writing MetadataGetter for method: VROSC::ArpeggiatorWrapper::UpdateTempoAndDisplay
// Il2CppName: UpdateTempoAndDisplay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ArpeggiatorWrapper::*)(int)>(&VROSC::ArpeggiatorWrapper::UpdateTempoAndDisplay)> {
  static const MethodInfo* get() {
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ArpeggiatorWrapper*), "UpdateTempoAndDisplay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frequency});
  }
};
// Writing MetadataGetter for method: VROSC::ArpeggiatorWrapper::ChangeGate
// Il2CppName: ChangeGate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ArpeggiatorWrapper::*)(float)>(&VROSC::ArpeggiatorWrapper::ChangeGate)> {
  static const MethodInfo* get() {
    static auto* gate = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ArpeggiatorWrapper*), "ChangeGate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gate});
  }
};
// Writing MetadataGetter for method: VROSC::ArpeggiatorWrapper::UpdateGateAndDisplay
// Il2CppName: UpdateGateAndDisplay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ArpeggiatorWrapper::*)(float)>(&VROSC::ArpeggiatorWrapper::UpdateGateAndDisplay)> {
  static const MethodInfo* get() {
    static auto* gate = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ArpeggiatorWrapper*), "UpdateGateAndDisplay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gate});
  }
};
// Writing MetadataGetter for method: VROSC::ArpeggiatorWrapper::ChangeOctaves
// Il2CppName: ChangeOctaves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ArpeggiatorWrapper::*)(int)>(&VROSC::ArpeggiatorWrapper::ChangeOctaves)> {
  static const MethodInfo* get() {
    static auto* octaves = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ArpeggiatorWrapper*), "ChangeOctaves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{octaves});
  }
};
// Writing MetadataGetter for method: VROSC::ArpeggiatorWrapper::UpdateOctavesAndDisplay
// Il2CppName: UpdateOctavesAndDisplay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ArpeggiatorWrapper::*)(int)>(&VROSC::ArpeggiatorWrapper::UpdateOctavesAndDisplay)> {
  static const MethodInfo* get() {
    static auto* octaves = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ArpeggiatorWrapper*), "UpdateOctavesAndDisplay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{octaves});
  }
};
// Writing MetadataGetter for method: VROSC::ArpeggiatorWrapper::ChangePattern
// Il2CppName: ChangePattern
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ArpeggiatorWrapper::*)(int)>(&VROSC::ArpeggiatorWrapper::ChangePattern)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ArpeggiatorWrapper*), "ChangePattern", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern});
  }
};
// Writing MetadataGetter for method: VROSC::ArpeggiatorWrapper::UpdatePatternAndDisplay
// Il2CppName: UpdatePatternAndDisplay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ArpeggiatorWrapper::*)(int)>(&VROSC::ArpeggiatorWrapper::UpdatePatternAndDisplay)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ArpeggiatorWrapper*), "UpdatePatternAndDisplay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern});
  }
};
// Writing MetadataGetter for method: VROSC::ArpeggiatorWrapper::ToggleArpeggiator
// Il2CppName: ToggleArpeggiator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ArpeggiatorWrapper::*)(::VROSC::InputDevice*, bool)>(&VROSC::ArpeggiatorWrapper::ToggleArpeggiator)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ArpeggiatorWrapper*), "ToggleArpeggiator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, isOn});
  }
};
// Writing MetadataGetter for method: VROSC::ArpeggiatorWrapper::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ArpeggiatorWrapper::*)()>(&VROSC::ArpeggiatorWrapper::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ArpeggiatorWrapper*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ArpeggiatorWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
