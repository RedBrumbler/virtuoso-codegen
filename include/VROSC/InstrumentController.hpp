// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.WidgetController
#include "VROSC/WidgetController.hpp"
// Including type: VROSC.HandType
#include "VROSC/HandType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: InstrumentControlPanelUI
  class InstrumentControlPanelUI;
  // Forward declaring type: InfoPanel
  class InfoPanel;
  // Forward declaring type: InstrumentDataController
  class InstrumentDataController;
  // Forward declaring type: InstrumentSettings
  class InstrumentSettings;
  // Forward declaring type: PatchSettings
  class PatchSettings;
  // Forward declaring type: UserDataControllers
  class UserDataControllers;
  // Forward declaring type: TransformMover
  class TransformMover;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: InstrumentController
  class InstrumentController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::InstrumentController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentController*, "VROSC", "InstrumentController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.InstrumentController
  // [TokenAttribute] Offset: FFFFFFFF
  class InstrumentController : public ::VROSC::WidgetController {
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
    // protected VROSC.InstrumentControlPanelUI _controlPanelUI
    // Size: 0x8
    // Offset: 0x68
    ::VROSC::InstrumentControlPanelUI* controlPanelUI;
    // Field size check
    static_assert(sizeof(::VROSC::InstrumentControlPanelUI*) == 0x8);
    // protected VROSC.InfoPanel _infoPanel
    // Size: 0x8
    // Offset: 0x70
    ::VROSC::InfoPanel* infoPanel;
    // Field size check
    static_assert(sizeof(::VROSC::InfoPanel*) == 0x8);
    // private UnityEngine.Transform _spawnPosition
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::Transform* spawnPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 _spawnOriginalPosition
    // Size: 0xC
    // Offset: 0x80
    ::UnityEngine::Vector3 spawnOriginalPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean _spawnPointSet
    // Size: 0x1
    // Offset: 0x8C
    bool spawnPointSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: spawnPointSet and: dataController
    char __padding4[0x3] = {};
    // protected VROSC.InstrumentDataController _dataController
    // Size: 0x8
    // Offset: 0x90
    ::VROSC::InstrumentDataController* dataController;
    // Field size check
    static_assert(sizeof(::VROSC::InstrumentDataController*) == 0x8);
    // public System.Action`1<System.Boolean> OnUseMidiChanged
    // Size: 0x8
    // Offset: 0x98
    ::System::Action_1<bool>* OnUseMidiChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // public System.Action`1<VROSC.HandType> OnPlayNote
    // Size: 0x8
    // Offset: 0xA0
    ::System::Action_1<::VROSC::HandType>* OnPlayNote;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::HandType>*) == 0x8);
    // public System.Action`1<VROSC.HandType> OnStopNote
    // Size: 0x8
    // Offset: 0xA8
    ::System::Action_1<::VROSC::HandType>* OnStopNote;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::HandType>*) == 0x8);
    public:
    // Get instance field reference: protected VROSC.InstrumentControlPanelUI _controlPanelUI
    ::VROSC::InstrumentControlPanelUI*& dyn__controlPanelUI();
    // Get instance field reference: protected VROSC.InfoPanel _infoPanel
    ::VROSC::InfoPanel*& dyn__infoPanel();
    // Get instance field reference: private UnityEngine.Transform _spawnPosition
    ::UnityEngine::Transform*& dyn__spawnPosition();
    // Get instance field reference: private UnityEngine.Vector3 _spawnOriginalPosition
    ::UnityEngine::Vector3& dyn__spawnOriginalPosition();
    // Get instance field reference: private System.Boolean _spawnPointSet
    bool& dyn__spawnPointSet();
    // Get instance field reference: protected VROSC.InstrumentDataController _dataController
    ::VROSC::InstrumentDataController*& dyn__dataController();
    // Get instance field reference: public System.Action`1<System.Boolean> OnUseMidiChanged
    ::System::Action_1<bool>*& dyn_OnUseMidiChanged();
    // Get instance field reference: public System.Action`1<VROSC.HandType> OnPlayNote
    ::System::Action_1<::VROSC::HandType>*& dyn_OnPlayNote();
    // Get instance field reference: public System.Action`1<VROSC.HandType> OnStopNote
    ::System::Action_1<::VROSC::HandType>*& dyn_OnStopNote();
    // public VROSC.InstrumentSettings get_InstrumentSettings()
    // Offset: 0x13837B4
    ::VROSC::InstrumentSettings* get_InstrumentSettings();
    // public VROSC.PatchSettings get_CurrentPatchSettings()
    // Offset: 0x1383830
    ::VROSC::PatchSettings* get_CurrentPatchSettings();
    // public System.Int32 get_CurrentMidiChannel()
    // Offset: 0x1383838
    int get_CurrentMidiChannel();
    // protected System.Boolean get_UsingMidi()
    // Offset: 0x1383858
    bool get_UsingMidi();
    // public System.Boolean get_Quantize()
    // Offset: 0x13838B8
    bool get_Quantize();
    // public System.Single get_QuantizeTolerance()
    // Offset: 0x13838DC
    float get_QuantizeTolerance();
    // public System.Int32 get_QuantizeBeatDivision()
    // Offset: 0x1383900
    int get_QuantizeBeatDivision();
    // public System.Void Setup()
    // Offset: 0x1383924
    void Setup();
    // public System.Void PlayNote(System.Int32 note, System.Single velocity, System.Object source, System.Double predictedDspTime, VROSC.HandType handType, System.Single pitch)
    // Offset: 0x1383F88
    void PlayNote(int note, float velocity, ::Il2CppObject* source, double predictedDspTime, ::VROSC::HandType handType, float pitch);
    // public System.Void StopNote(System.Int32 note, System.Object source, VROSC.HandType handType)
    // Offset: 0x13840CC
    void StopNote(int note, ::Il2CppObject* source, ::VROSC::HandType handType);
    // public System.Void SetMidiPitchBend(System.Single value, System.Boolean sendExternal, VROSC.HandType handType)
    // Offset: 0x13841C0
    void SetMidiPitchBend(float value, bool sendExternal, ::VROSC::HandType handType);
    // public System.Void SetMidiCC(System.Single value, System.Int32 midiCC, System.Boolean sendExternal, VROSC.HandType handType, System.Boolean saveToPatch)
    // Offset: 0x1384280
    void SetMidiCC(float value, int midiCC, bool sendExternal, ::VROSC::HandType handType, bool saveToPatch);
    // protected System.Void UpdateOutput()
    // Offset: 0x1384358
    void UpdateOutput();
    // protected System.Void SynthesizerSourceChanged(System.Boolean useMidi)
    // Offset: 0x138435C
    void SynthesizerSourceChanged(bool useMidi);
    // public System.Void SetQuantize(System.Boolean quantize)
    // Offset: 0x13844E0
    void SetQuantize(bool quantize);
    // public System.Void SetQuantizeTolerance(System.Single tolerance)
    // Offset: 0x1384508
    void SetQuantizeTolerance(float tolerance);
    // public System.Void SetQuantizeBeatDivision(System.Int32 division)
    // Offset: 0x138452C
    void SetQuantizeBeatDivision(int division);
    // public System.Void .ctor()
    // Offset: 0x1384550
    // Implemented from: VROSC.WidgetController
    // Base method: System.Void WidgetController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstrumentController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::InstrumentController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstrumentController*, creationType>()));
    }
    // public override System.Void SetActivationPositions(UnityEngine.Vector3 pressPos, System.Boolean active)
    // Offset: 0x1383A88
    // Implemented from: VROSC.WidgetController
    // Base method: System.Void WidgetController::SetActivationPositions(UnityEngine.Vector3 pressPos, System.Boolean active)
    void SetActivationPositions(::UnityEngine::Vector3 pressPos, bool active);
    // protected System.Void OnDestroy()
    // Offset: 0x1383BC4
    // Implemented from: VROSC.WidgetController
    // Base method: System.Void WidgetController::OnDestroy()
    void OnDestroy();
    // protected override System.Void UserDataLoaded(VROSC.UserDataControllers user)
    // Offset: 0x1383D18
    // Implemented from: VROSC.WidgetController
    // Base method: System.Void WidgetController::UserDataLoaded(VROSC.UserDataControllers user)
    void UserDataLoaded(::VROSC::UserDataControllers* user);
    // public override System.Void Toggle()
    // Offset: 0x1383F2C
    // Implemented from: VROSC.WidgetController
    // Base method: System.Void WidgetController::Toggle()
    void Toggle();
    // public override System.Void TransformChanged(VROSC.TransformMover mover)
    // Offset: 0x13843D0
    // Implemented from: VROSC.WidgetController
    // Base method: System.Void WidgetController::TransformChanged(VROSC.TransformMover mover)
    void TransformChanged(::VROSC::TransformMover* mover);
    // public override System.Void ScaleChanged(System.Single scale)
    // Offset: 0x1384478
    // Implemented from: VROSC.WidgetController
    // Base method: System.Void WidgetController::ScaleChanged(System.Single scale)
    void ScaleChanged(float scale);
  }; // VROSC.InstrumentController
  #pragma pack(pop)
  static check_size<sizeof(InstrumentController), 168 + sizeof(::System::Action_1<::VROSC::HandType>*)> __VROSC_InstrumentControllerSizeCheck;
  static_assert(sizeof(InstrumentController) == 0xB0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::InstrumentController::get_InstrumentSettings
// Il2CppName: get_InstrumentSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::InstrumentSettings* (VROSC::InstrumentController::*)()>(&VROSC::InstrumentController::get_InstrumentSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "get_InstrumentSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::get_CurrentPatchSettings
// Il2CppName: get_CurrentPatchSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PatchSettings* (VROSC::InstrumentController::*)()>(&VROSC::InstrumentController::get_CurrentPatchSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "get_CurrentPatchSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::get_CurrentMidiChannel
// Il2CppName: get_CurrentMidiChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::InstrumentController::*)()>(&VROSC::InstrumentController::get_CurrentMidiChannel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "get_CurrentMidiChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::get_UsingMidi
// Il2CppName: get_UsingMidi
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::InstrumentController::*)()>(&VROSC::InstrumentController::get_UsingMidi)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "get_UsingMidi", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::get_Quantize
// Il2CppName: get_Quantize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::InstrumentController::*)()>(&VROSC::InstrumentController::get_Quantize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "get_Quantize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::get_QuantizeTolerance
// Il2CppName: get_QuantizeTolerance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::InstrumentController::*)()>(&VROSC::InstrumentController::get_QuantizeTolerance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "get_QuantizeTolerance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::get_QuantizeBeatDivision
// Il2CppName: get_QuantizeBeatDivision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::InstrumentController::*)()>(&VROSC::InstrumentController::get_QuantizeBeatDivision)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "get_QuantizeBeatDivision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentController::*)()>(&VROSC::InstrumentController::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::PlayNote
// Il2CppName: PlayNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentController::*)(int, float, ::Il2CppObject*, double, ::VROSC::HandType, float)>(&VROSC::InstrumentController::PlayNote)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* predictedDspTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* handType = &::il2cpp_utils::GetClassFromName("VROSC", "HandType")->byval_arg;
    static auto* pitch = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "PlayNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, velocity, source, predictedDspTime, handType, pitch});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::StopNote
// Il2CppName: StopNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentController::*)(int, ::Il2CppObject*, ::VROSC::HandType)>(&VROSC::InstrumentController::StopNote)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* handType = &::il2cpp_utils::GetClassFromName("VROSC", "HandType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "StopNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, source, handType});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::SetMidiPitchBend
// Il2CppName: SetMidiPitchBend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentController::*)(float, bool, ::VROSC::HandType)>(&VROSC::InstrumentController::SetMidiPitchBend)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sendExternal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* handType = &::il2cpp_utils::GetClassFromName("VROSC", "HandType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "SetMidiPitchBend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, sendExternal, handType});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::SetMidiCC
// Il2CppName: SetMidiCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentController::*)(float, int, bool, ::VROSC::HandType, bool)>(&VROSC::InstrumentController::SetMidiCC)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* midiCC = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sendExternal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* handType = &::il2cpp_utils::GetClassFromName("VROSC", "HandType")->byval_arg;
    static auto* saveToPatch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "SetMidiCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, midiCC, sendExternal, handType, saveToPatch});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::UpdateOutput
// Il2CppName: UpdateOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentController::*)()>(&VROSC::InstrumentController::UpdateOutput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "UpdateOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::SynthesizerSourceChanged
// Il2CppName: SynthesizerSourceChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentController::*)(bool)>(&VROSC::InstrumentController::SynthesizerSourceChanged)> {
  static const MethodInfo* get() {
    static auto* useMidi = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "SynthesizerSourceChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useMidi});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::SetQuantize
// Il2CppName: SetQuantize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentController::*)(bool)>(&VROSC::InstrumentController::SetQuantize)> {
  static const MethodInfo* get() {
    static auto* quantize = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "SetQuantize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{quantize});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::SetQuantizeTolerance
// Il2CppName: SetQuantizeTolerance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentController::*)(float)>(&VROSC::InstrumentController::SetQuantizeTolerance)> {
  static const MethodInfo* get() {
    static auto* tolerance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "SetQuantizeTolerance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tolerance});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::SetQuantizeBeatDivision
// Il2CppName: SetQuantizeBeatDivision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentController::*)(int)>(&VROSC::InstrumentController::SetQuantizeBeatDivision)> {
  static const MethodInfo* get() {
    static auto* division = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "SetQuantizeBeatDivision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{division});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::InstrumentController::SetActivationPositions
// Il2CppName: SetActivationPositions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentController::*)(::UnityEngine::Vector3, bool)>(&VROSC::InstrumentController::SetActivationPositions)> {
  static const MethodInfo* get() {
    static auto* pressPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "SetActivationPositions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pressPos, active});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentController::*)()>(&VROSC::InstrumentController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::UserDataLoaded
// Il2CppName: UserDataLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentController::*)(::VROSC::UserDataControllers*)>(&VROSC::InstrumentController::UserDataLoaded)> {
  static const MethodInfo* get() {
    static auto* user = &::il2cpp_utils::GetClassFromName("VROSC", "UserDataControllers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "UserDataLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{user});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::Toggle
// Il2CppName: Toggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentController::*)()>(&VROSC::InstrumentController::Toggle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "Toggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::TransformChanged
// Il2CppName: TransformChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentController::*)(::VROSC::TransformMover*)>(&VROSC::InstrumentController::TransformChanged)> {
  static const MethodInfo* get() {
    static auto* mover = &::il2cpp_utils::GetClassFromName("VROSC", "TransformMover")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "TransformChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mover});
  }
};
// Writing MetadataGetter for method: VROSC::InstrumentController::ScaleChanged
// Il2CppName: ScaleChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentController::*)(float)>(&VROSC::InstrumentController::ScaleChanged)> {
  static const MethodInfo* get() {
    static auto* scale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentController*), "ScaleChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scale});
  }
};
