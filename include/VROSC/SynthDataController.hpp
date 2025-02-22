// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.InstrumentDataController
#include "VROSC/InstrumentDataController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: PatchSettings
  class PatchSettings;
  // Forward declaring type: SynthDataModel
  class SynthDataModel;
  // Forward declaring type: SynthData
  class SynthData;
  // Forward declaring type: Scale
  struct Scale;
  // Forward declaring type: WidgetSettings
  class WidgetSettings;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: HelmPatchFormat
  class HelmPatchFormat;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SynthDataController
  class SynthDataController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SynthDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthDataController*, "VROSC", "SynthDataController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SynthDataController
  // [TokenAttribute] Offset: FFFFFFFF
  class SynthDataController : public ::VROSC::InstrumentDataController {
    public:
    // Nested type: ::VROSC::SynthDataController::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    // Nested type: ::VROSC::SynthDataController::$SaveData$d__7
    struct $SaveData$d__7;
    // Nested type: ::VROSC::SynthDataController::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Nested type: ::VROSC::SynthDataController::$$c__DisplayClass8_1
    class $$c__DisplayClass8_1;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.Generic.List`1<VROSC.PatchSettings> _patches
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::VROSC::PatchSettings*>* patches;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::PatchSettings*>*) == 0x8);
    // private System.Int32 _selectedPatchIndex
    // Size: 0x4
    // Offset: 0x30
    int selectedPatchIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.PatchSettings> _patches
    ::System::Collections::Generic::List_1<::VROSC::PatchSettings*>*& dyn__patches();
    // Get instance field reference: private System.Int32 _selectedPatchIndex
    int& dyn__selectedPatchIndex();
    // public VROSC.SynthDataModel get_DataModel()
    // Offset: 0x13BFC78
    ::VROSC::SynthDataModel* get_DataModel();
    // public VROSC.PatchSettings get_SelectedPatchSettings()
    // Offset: 0x13BE720
    ::VROSC::PatchSettings* get_SelectedPatchSettings();
    // public System.Collections.Generic.List`1<VROSC.PatchSettings> get_Patches()
    // Offset: 0x13C0B38
    ::System::Collections::Generic::List_1<::VROSC::PatchSettings*>* get_Patches();
    // public System.Int32 get_SelectedMidiChannel()
    // Offset: 0x13BE6DC
    int get_SelectedMidiChannel();
    // public System.Void set_SelectedMidiChannel(System.Int32 value)
    // Offset: 0x13BF2A4
    void set_SelectedMidiChannel(int value);
    // public System.Int32 get_MinOctave()
    // Offset: 0x13BE7EC
    int get_MinOctave();
    // public System.Int32 get_MaxOctave()
    // Offset: 0x13C0B40
    int get_MaxOctave();
    // public System.Int32 get_MinMidiChannel()
    // Offset: 0x13BE830
    int get_MinMidiChannel();
    // public System.Int32 get_MaxMidiChannel()
    // Offset: 0x13BE874
    int get_MaxMidiChannel();
    // public System.Int32 get_SelectedOctave()
    // Offset: 0x13BE7A8
    int get_SelectedOctave();
    // public System.Void set_SelectedOctave(System.Int32 value)
    // Offset: 0x13C0B68
    void set_SelectedOctave(int value);
    // public System.Void CopyOldSynthData(VROSC.SynthData oldSynthData)
    // Offset: 0x13BFE6C
    void CopyOldSynthData(::VROSC::SynthData* oldSynthData);
    // public System.Void AddPatch(AudioHelm.HelmPatchFormat patch)
    // Offset: 0x13BEF98
    void AddPatch(::AudioHelm::HelmPatchFormat* patch);
    // public System.Boolean HasPatch(System.String patchName)
    // Offset: 0x13BEE2C
    bool HasPatch(::StringW patchName);
    // public System.Void SelectPatch(System.Int32 index)
    // Offset: 0x13BF3E0
    void SelectPatch(int index);
    // public System.Void SelectNextOctave()
    // Offset: 0x13BF6A4
    void SelectNextOctave();
    // public System.Void SelectPreviousOctave()
    // Offset: 0x13BF740
    void SelectPreviousOctave();
    // public System.Void SetScale(System.Int32 scaleIndex, VROSC.Scale scale)
    // Offset: 0x13C0BA8
    void SetScale(int scaleIndex, ::VROSC::Scale scale);
    // public VROSC.Scale GetScale(System.Int32 scaleIndex)
    // Offset: 0x13C0D14
    ::VROSC::Scale GetScale(int scaleIndex);
    // public System.Void SetStartNoteOffset(System.Int32 scaleIndex, System.Int32 startNoteOffset)
    // Offset: 0x13C0E60
    void SetStartNoteOffset(int scaleIndex, int startNoteOffset);
    // public System.Int32 GetStartNoteOffset(System.Int32 scaleIndex)
    // Offset: 0x13C0FCC
    int GetStartNoteOffset(int scaleIndex);
    // public System.Void SetIsScaleRowLocked(System.Int32 scaleIndex, System.Boolean locked)
    // Offset: 0x13C1118
    void SetIsScaleRowLocked(int scaleIndex, bool locked);
    // public System.Boolean IsScaleRowLocked(System.Int32 scaleIndex)
    // Offset: 0x13C1288
    bool IsScaleRowLocked(int scaleIndex);
    // public System.Void SetIsScaleRowCustomized(System.Int32 scaleIndex, System.Boolean customized)
    // Offset: 0x13C13DC
    void SetIsScaleRowCustomized(int scaleIndex, bool customized);
    // public System.Boolean IsScaleRowCustomized(System.Int32 scaleIndex)
    // Offset: 0x13C154C
    bool IsScaleRowCustomized(int scaleIndex);
    // public override System.Boolean get_IsOpen()
    // Offset: 0x13C16A0
    // Implemented from: VROSC.InstrumentDataController
    // Base method: System.Boolean InstrumentDataController::get_IsOpen()
    bool get_IsOpen();
    // public override System.Void set_IsOpen(System.Boolean value)
    // Offset: 0x13C16C8
    // Implemented from: VROSC.InstrumentDataController
    // Base method: System.Void InstrumentDataController::set_IsOpen(System.Boolean value)
    void set_IsOpen(bool value);
    // public override UnityEngine.Vector3 get_Position()
    // Offset: 0x13C170C
    // Implemented from: VROSC.InstrumentDataController
    // Base method: UnityEngine.Vector3 InstrumentDataController::get_Position()
    ::UnityEngine::Vector3 get_Position();
    // public override System.Void set_Position(UnityEngine.Vector3 value)
    // Offset: 0x13C17C4
    // Implemented from: VROSC.InstrumentDataController
    // Base method: System.Void InstrumentDataController::set_Position(UnityEngine.Vector3 value)
    void set_Position(::UnityEngine::Vector3 value);
    // public override UnityEngine.Quaternion get_Rotation()
    // Offset: 0x13C1888
    // Implemented from: VROSC.InstrumentDataController
    // Base method: UnityEngine.Quaternion InstrumentDataController::get_Rotation()
    ::UnityEngine::Quaternion get_Rotation();
    // public override System.Void set_Rotation(UnityEngine.Quaternion value)
    // Offset: 0x13C1998
    // Implemented from: VROSC.InstrumentDataController
    // Base method: System.Void InstrumentDataController::set_Rotation(UnityEngine.Quaternion value)
    void set_Rotation(::UnityEngine::Quaternion value);
    // public override UnityEngine.Vector3 get_Scale()
    // Offset: 0x13C1A6C
    // Implemented from: VROSC.InstrumentDataController
    // Base method: UnityEngine.Vector3 InstrumentDataController::get_Scale()
    ::UnityEngine::Vector3 get_Scale();
    // public override System.Void set_Scale(UnityEngine.Vector3 value)
    // Offset: 0x13C1B24
    // Implemented from: VROSC.InstrumentDataController
    // Base method: System.Void InstrumentDataController::set_Scale(UnityEngine.Vector3 value)
    void set_Scale(::UnityEngine::Vector3 value);
    // public override System.Boolean get_Quantize()
    // Offset: 0x13C1BE8
    // Implemented from: VROSC.InstrumentDataController
    // Base method: System.Boolean InstrumentDataController::get_Quantize()
    bool get_Quantize();
    // public override System.Void set_Quantize(System.Boolean value)
    // Offset: 0x13C1C08
    // Implemented from: VROSC.InstrumentDataController
    // Base method: System.Void InstrumentDataController::set_Quantize(System.Boolean value)
    void set_Quantize(bool value);
    // public override System.Single get_QuantizeTolerance()
    // Offset: 0x13C1C44
    // Implemented from: VROSC.InstrumentDataController
    // Base method: System.Single InstrumentDataController::get_QuantizeTolerance()
    float get_QuantizeTolerance();
    // public override System.Void set_QuantizeTolerance(System.Single value)
    // Offset: 0x13C1C64
    // Implemented from: VROSC.InstrumentDataController
    // Base method: System.Void InstrumentDataController::set_QuantizeTolerance(System.Single value)
    void set_QuantizeTolerance(float value);
    // public override System.Int32 get_QuantizeBeatDivision()
    // Offset: 0x13C1CA4
    // Implemented from: VROSC.InstrumentDataController
    // Base method: System.Int32 InstrumentDataController::get_QuantizeBeatDivision()
    int get_QuantizeBeatDivision();
    // public override System.Void set_QuantizeBeatDivision(System.Int32 value)
    // Offset: 0x13C1CC4
    // Implemented from: VROSC.InstrumentDataController
    // Base method: System.Void InstrumentDataController::set_QuantizeBeatDivision(System.Int32 value)
    void set_QuantizeBeatDivision(int value);
    // public System.Void .ctor()
    // Offset: 0x13BFCF4
    // Implemented from: VROSC.InstrumentDataController
    // Base method: System.Void InstrumentDataController::.ctor()
    // Base method: System.Void BaseDataController::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SynthDataController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SynthDataController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SynthDataController*, creationType>()));
    }
    // public override System.Void ApplyDefaults(VROSC.WidgetSettings widgetDefaultSettings)
    // Offset: 0x13C02A4
    // Implemented from: VROSC.InstrumentDataController
    // Base method: System.Void InstrumentDataController::ApplyDefaults(VROSC.WidgetSettings widgetDefaultSettings)
    void ApplyDefaults(::VROSC::WidgetSettings* widgetDefaultSettings);
    // public override System.Void SaveData(System.String sessionName, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0x13C0864
    // Implemented from: VROSC.BaseDataController
    // Base method: System.Void BaseDataController::SaveData(System.String sessionName, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    void SaveData(::StringW sessionName, ::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public override System.Void LoadData(System.String sessionId, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0x13C0948
    // Implemented from: VROSC.BaseDataController
    // Base method: System.Void BaseDataController::LoadData(System.String sessionId, System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    void LoadData(::StringW sessionId, ::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public override System.Int32 GetLoadSteps()
    // Offset: 0x13C0A88
    // Implemented from: VROSC.BaseDataController
    // Base method: System.Int32 BaseDataController::GetLoadSteps()
    int GetLoadSteps();
    // public override System.Int32 GetSaveSteps()
    // Offset: 0x13C0AE0
    // Implemented from: VROSC.BaseDataController
    // Base method: System.Int32 BaseDataController::GetSaveSteps()
    int GetSaveSteps();
  }; // VROSC.SynthDataController
  #pragma pack(pop)
  static check_size<sizeof(SynthDataController), 48 + sizeof(int)> __VROSC_SynthDataControllerSizeCheck;
  static_assert(sizeof(SynthDataController) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SynthDataController::get_DataModel
// Il2CppName: get_DataModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::SynthDataModel* (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::get_DataModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "get_DataModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::get_SelectedPatchSettings
// Il2CppName: get_SelectedPatchSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PatchSettings* (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::get_SelectedPatchSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "get_SelectedPatchSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::get_Patches
// Il2CppName: get_Patches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::PatchSettings*>* (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::get_Patches)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "get_Patches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::get_SelectedMidiChannel
// Il2CppName: get_SelectedMidiChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::get_SelectedMidiChannel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "get_SelectedMidiChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::set_SelectedMidiChannel
// Il2CppName: set_SelectedMidiChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(int)>(&VROSC::SynthDataController::set_SelectedMidiChannel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "set_SelectedMidiChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::get_MinOctave
// Il2CppName: get_MinOctave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::get_MinOctave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "get_MinOctave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::get_MaxOctave
// Il2CppName: get_MaxOctave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::get_MaxOctave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "get_MaxOctave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::get_MinMidiChannel
// Il2CppName: get_MinMidiChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::get_MinMidiChannel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "get_MinMidiChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::get_MaxMidiChannel
// Il2CppName: get_MaxMidiChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::get_MaxMidiChannel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "get_MaxMidiChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::get_SelectedOctave
// Il2CppName: get_SelectedOctave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::get_SelectedOctave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "get_SelectedOctave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::set_SelectedOctave
// Il2CppName: set_SelectedOctave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(int)>(&VROSC::SynthDataController::set_SelectedOctave)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "set_SelectedOctave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::CopyOldSynthData
// Il2CppName: CopyOldSynthData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(::VROSC::SynthData*)>(&VROSC::SynthDataController::CopyOldSynthData)> {
  static const MethodInfo* get() {
    static auto* oldSynthData = &::il2cpp_utils::GetClassFromName("VROSC", "SynthData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "CopyOldSynthData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldSynthData});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::AddPatch
// Il2CppName: AddPatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(::AudioHelm::HelmPatchFormat*)>(&VROSC::SynthDataController::AddPatch)> {
  static const MethodInfo* get() {
    static auto* patch = &::il2cpp_utils::GetClassFromName("AudioHelm", "HelmPatchFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "AddPatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{patch});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::HasPatch
// Il2CppName: HasPatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::SynthDataController::*)(::StringW)>(&VROSC::SynthDataController::HasPatch)> {
  static const MethodInfo* get() {
    static auto* patchName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "HasPatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{patchName});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::SelectPatch
// Il2CppName: SelectPatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(int)>(&VROSC::SynthDataController::SelectPatch)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "SelectPatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::SelectNextOctave
// Il2CppName: SelectNextOctave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::SelectNextOctave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "SelectNextOctave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::SelectPreviousOctave
// Il2CppName: SelectPreviousOctave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::SelectPreviousOctave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "SelectPreviousOctave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::SetScale
// Il2CppName: SetScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(int, ::VROSC::Scale)>(&VROSC::SynthDataController::SetScale)> {
  static const MethodInfo* get() {
    static auto* scaleIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("VROSC", "Scale")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "SetScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleIndex, scale});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::GetScale
// Il2CppName: GetScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Scale (VROSC::SynthDataController::*)(int)>(&VROSC::SynthDataController::GetScale)> {
  static const MethodInfo* get() {
    static auto* scaleIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "GetScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleIndex});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::SetStartNoteOffset
// Il2CppName: SetStartNoteOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(int, int)>(&VROSC::SynthDataController::SetStartNoteOffset)> {
  static const MethodInfo* get() {
    static auto* scaleIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* startNoteOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "SetStartNoteOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleIndex, startNoteOffset});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::GetStartNoteOffset
// Il2CppName: GetStartNoteOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SynthDataController::*)(int)>(&VROSC::SynthDataController::GetStartNoteOffset)> {
  static const MethodInfo* get() {
    static auto* scaleIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "GetStartNoteOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleIndex});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::SetIsScaleRowLocked
// Il2CppName: SetIsScaleRowLocked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(int, bool)>(&VROSC::SynthDataController::SetIsScaleRowLocked)> {
  static const MethodInfo* get() {
    static auto* scaleIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* locked = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "SetIsScaleRowLocked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleIndex, locked});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::IsScaleRowLocked
// Il2CppName: IsScaleRowLocked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::SynthDataController::*)(int)>(&VROSC::SynthDataController::IsScaleRowLocked)> {
  static const MethodInfo* get() {
    static auto* scaleIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "IsScaleRowLocked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleIndex});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::SetIsScaleRowCustomized
// Il2CppName: SetIsScaleRowCustomized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(int, bool)>(&VROSC::SynthDataController::SetIsScaleRowCustomized)> {
  static const MethodInfo* get() {
    static auto* scaleIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* customized = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "SetIsScaleRowCustomized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleIndex, customized});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::IsScaleRowCustomized
// Il2CppName: IsScaleRowCustomized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::SynthDataController::*)(int)>(&VROSC::SynthDataController::IsScaleRowCustomized)> {
  static const MethodInfo* get() {
    static auto* scaleIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "IsScaleRowCustomized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleIndex});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::get_IsOpen
// Il2CppName: get_IsOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::get_IsOpen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "get_IsOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::set_IsOpen
// Il2CppName: set_IsOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(bool)>(&VROSC::SynthDataController::set_IsOpen)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "set_IsOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(::UnityEngine::Vector3)>(&VROSC::SynthDataController::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::get_Rotation
// Il2CppName: get_Rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::get_Rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "get_Rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::set_Rotation
// Il2CppName: set_Rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(::UnityEngine::Quaternion)>(&VROSC::SynthDataController::set_Rotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "set_Rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::get_Scale
// Il2CppName: get_Scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::get_Scale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "get_Scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::set_Scale
// Il2CppName: set_Scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(::UnityEngine::Vector3)>(&VROSC::SynthDataController::set_Scale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "set_Scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::get_Quantize
// Il2CppName: get_Quantize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::get_Quantize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "get_Quantize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::set_Quantize
// Il2CppName: set_Quantize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(bool)>(&VROSC::SynthDataController::set_Quantize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "set_Quantize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::get_QuantizeTolerance
// Il2CppName: get_QuantizeTolerance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::get_QuantizeTolerance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "get_QuantizeTolerance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::set_QuantizeTolerance
// Il2CppName: set_QuantizeTolerance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(float)>(&VROSC::SynthDataController::set_QuantizeTolerance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "set_QuantizeTolerance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::get_QuantizeBeatDivision
// Il2CppName: get_QuantizeBeatDivision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::get_QuantizeBeatDivision)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "get_QuantizeBeatDivision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::set_QuantizeBeatDivision
// Il2CppName: set_QuantizeBeatDivision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(int)>(&VROSC::SynthDataController::set_QuantizeBeatDivision)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "set_QuantizeBeatDivision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SynthDataController::ApplyDefaults
// Il2CppName: ApplyDefaults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(::VROSC::WidgetSettings*)>(&VROSC::SynthDataController::ApplyDefaults)> {
  static const MethodInfo* get() {
    static auto* widgetDefaultSettings = &::il2cpp_utils::GetClassFromName("VROSC", "WidgetSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "ApplyDefaults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{widgetDefaultSettings});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::SaveData
// Il2CppName: SaveData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::SynthDataController::SaveData)> {
  static const MethodInfo* get() {
    static auto* sessionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "SaveData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionName, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::LoadData
// Il2CppName: LoadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::SynthDataController::LoadData)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "LoadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::GetLoadSteps
// Il2CppName: GetLoadSteps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::GetLoadSteps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "GetLoadSteps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::GetSaveSteps
// Il2CppName: GetSaveSteps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SynthDataController::*)()>(&VROSC::SynthDataController::GetSaveSteps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController*), "GetSaveSteps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
