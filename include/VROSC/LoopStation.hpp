// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VROSC.BeatCounter
#include "VROSC/BeatCounter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: MovementPlane
  class MovementPlane;
  // Forward declaring type: LoopStationButtons
  class LoopStationButtons;
  // Forward declaring type: LoopStationLoopHandler
  class LoopStationLoopHandler;
  // Forward declaring type: LoopStationRecorder
  class LoopStationRecorder;
  // Forward declaring type: LoopStationRecordingButton
  class LoopStationRecordingButton;
  // Forward declaring type: LoopStationGroupCore
  class LoopStationGroupCore;
  // Forward declaring type: TransformMover
  class TransformMover;
  // Forward declaring type: SelectionBar
  class SelectionBar;
  // Forward declaring type: LoopStationSoloHandler
  class LoopStationSoloHandler;
  // Forward declaring type: LoopStationDataController
  class LoopStationDataController;
  // Forward declaring type: LoopPlayer
  class LoopPlayer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
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
  // Forward declaring type: LoopStation
  class LoopStation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopStation);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStation*, "VROSC", "LoopStation");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x99
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopStation
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopStation : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.MovementPlane _movementPlane
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::MovementPlane* movementPlane;
    // Field size check
    static_assert(sizeof(::VROSC::MovementPlane*) == 0x8);
    // private VROSC.LoopStationButtons _buttons
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::LoopStationButtons* buttons;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationButtons*) == 0x8);
    // private VROSC.LoopStationLoopHandler _loopHandler
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::LoopStationLoopHandler* loopHandler;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationLoopHandler*) == 0x8);
    // private VROSC.LoopStationRecorder _recorder
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::LoopStationRecorder* recorder;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationRecorder*) == 0x8);
    // private VROSC.LoopStationRecordingButton _recordingButton
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::LoopStationRecordingButton* recordingButton;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationRecordingButton*) == 0x8);
    // private VROSC.LoopStationGroupCore _groups
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::LoopStationGroupCore* groups;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationGroupCore*) == 0x8);
    // private VROSC.TransformMover _mover
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::TransformMover* mover;
    // Field size check
    static_assert(sizeof(::VROSC::TransformMover*) == 0x8);
    // private UnityEngine.Transform _loopLocation
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Transform* loopLocation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _launchpadParent
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Transform* launchpadParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private VROSC.SelectionBar _loopLengthSelectionBar
    // Size: 0x8
    // Offset: 0x60
    ::VROSC::SelectionBar* loopLengthSelectionBar;
    // Field size check
    static_assert(sizeof(::VROSC::SelectionBar*) == 0x8);
    // private UnityEngine.GameObject _loopLengthUIParent
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::GameObject* loopLengthUIParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private VROSC.LoopStationSoloHandler _soloHandler
    // Size: 0x8
    // Offset: 0x70
    ::VROSC::LoopStationSoloHandler* soloHandler;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationSoloHandler*) == 0x8);
    // public System.Action`1<System.Single> OnBPMSet
    // Size: 0x8
    // Offset: 0x78
    ::System::Action_1<float>* OnBPMSet;
    // Field size check
    static_assert(sizeof(::System::Action_1<float>*) == 0x8);
    // public System.Action`1<System.Single> OnVolumeChanged
    // Size: 0x8
    // Offset: 0x80
    ::System::Action_1<float>* OnVolumeChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<float>*) == 0x8);
    // private System.Int32 <LongestLoopLengthSamples>k__BackingField
    // Size: 0x4
    // Offset: 0x88
    int LongestLoopLengthSamples;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: LongestLoopLengthSamples and: Data
    char __padding14[0x4] = {};
    // private VROSC.LoopStationDataController <Data>k__BackingField
    // Size: 0x8
    // Offset: 0x90
    ::VROSC::LoopStationDataController* Data;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationDataController*) == 0x8);
    // private System.Boolean <IsSetup>k__BackingField
    // Size: 0x1
    // Offset: 0x98
    bool IsSetup;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.MovementPlane _movementPlane
    ::VROSC::MovementPlane*& dyn__movementPlane();
    // Get instance field reference: private VROSC.LoopStationButtons _buttons
    ::VROSC::LoopStationButtons*& dyn__buttons();
    // Get instance field reference: private VROSC.LoopStationLoopHandler _loopHandler
    ::VROSC::LoopStationLoopHandler*& dyn__loopHandler();
    // Get instance field reference: private VROSC.LoopStationRecorder _recorder
    ::VROSC::LoopStationRecorder*& dyn__recorder();
    // Get instance field reference: private VROSC.LoopStationRecordingButton _recordingButton
    ::VROSC::LoopStationRecordingButton*& dyn__recordingButton();
    // Get instance field reference: private VROSC.LoopStationGroupCore _groups
    ::VROSC::LoopStationGroupCore*& dyn__groups();
    // Get instance field reference: private VROSC.TransformMover _mover
    ::VROSC::TransformMover*& dyn__mover();
    // Get instance field reference: private UnityEngine.Transform _loopLocation
    ::UnityEngine::Transform*& dyn__loopLocation();
    // Get instance field reference: private UnityEngine.Transform _launchpadParent
    ::UnityEngine::Transform*& dyn__launchpadParent();
    // Get instance field reference: private VROSC.SelectionBar _loopLengthSelectionBar
    ::VROSC::SelectionBar*& dyn__loopLengthSelectionBar();
    // Get instance field reference: private UnityEngine.GameObject _loopLengthUIParent
    ::UnityEngine::GameObject*& dyn__loopLengthUIParent();
    // Get instance field reference: private VROSC.LoopStationSoloHandler _soloHandler
    ::VROSC::LoopStationSoloHandler*& dyn__soloHandler();
    // Get instance field reference: public System.Action`1<System.Single> OnBPMSet
    ::System::Action_1<float>*& dyn_OnBPMSet();
    // Get instance field reference: public System.Action`1<System.Single> OnVolumeChanged
    ::System::Action_1<float>*& dyn_OnVolumeChanged();
    // Get instance field reference: private System.Int32 <LongestLoopLengthSamples>k__BackingField
    int& dyn_$LongestLoopLengthSamples$k__BackingField();
    // Get instance field reference: private VROSC.LoopStationDataController <Data>k__BackingField
    ::VROSC::LoopStationDataController*& dyn_$Data$k__BackingField();
    // Get instance field reference: private System.Boolean <IsSetup>k__BackingField
    bool& dyn_$IsSetup$k__BackingField();
    // public VROSC.MovementPlane get_MovementPlane()
    // Offset: 0x909994
    ::VROSC::MovementPlane* get_MovementPlane();
    // public VROSC.LoopStationGroupCore get_Groups()
    // Offset: 0x90999C
    ::VROSC::LoopStationGroupCore* get_Groups();
    // public VROSC.LoopStationLoopHandler get_LoopHandler()
    // Offset: 0x9099A4
    ::VROSC::LoopStationLoopHandler* get_LoopHandler();
    // public VROSC.LoopStationRecordingButton get_RecordingButton()
    // Offset: 0x9099AC
    ::VROSC::LoopStationRecordingButton* get_RecordingButton();
    // public VROSC.TransformMover get_Mover()
    // Offset: 0x9099B4
    ::VROSC::TransformMover* get_Mover();
    // public UnityEngine.Transform get_LaunchPadParent()
    // Offset: 0x9099BC
    ::UnityEngine::Transform* get_LaunchPadParent();
    // public System.Int32 get_LongestLoopLengthSamples()
    // Offset: 0x9099C4
    int get_LongestLoopLengthSamples();
    // private System.Void set_LongestLoopLengthSamples(System.Int32 value)
    // Offset: 0x9099CC
    void set_LongestLoopLengthSamples(int value);
    // public VROSC.LoopStationDataController get_Data()
    // Offset: 0x9099D4
    ::VROSC::LoopStationDataController* get_Data();
    // private System.Void set_Data(VROSC.LoopStationDataController value)
    // Offset: 0x9099DC
    void set_Data(::VROSC::LoopStationDataController* value);
    // public System.Boolean get_IsSetup()
    // Offset: 0x9099E4
    bool get_IsSetup();
    // private System.Void set_IsSetup(System.Boolean value)
    // Offset: 0x9099EC
    void set_IsSetup(bool value);
    // private System.Void Awake()
    // Offset: 0x9099F8
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x909DC4
    void OnDestroy();
    // protected System.Void OnEnable()
    // Offset: 0x90A10C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x90A1F8
    void OnDisable();
    // public System.Void Setup(VROSC.LoopStationDataController dataController)
    // Offset: 0x90A458
    void Setup(::VROSC::LoopStationDataController* dataController);
    // public System.Void CreateNewLoopByRecording(System.String trackId, System.Int32 globalSyncStartOffset, System.Boolean overdub)
    // Offset: 0x90A830
    void CreateNewLoopByRecording(::StringW trackId, int globalSyncStartOffset, bool overdub);
    // public System.Void SetRecordingText(System.String text)
    // Offset: 0x90ABEC
    void SetRecordingText(::StringW text);
    // public System.Void RecordingOfLoopComplete()
    // Offset: 0x90ACA8
    void RecordingOfLoopComplete();
    // public System.Void CancelRecording(System.Boolean restart)
    // Offset: 0x908960
    void CancelRecording(bool restart);
    // public System.Void Rerecord()
    // Offset: 0x90AE44
    void Rerecord();
    // private System.Void RemoveLoop(VROSC.LoopPlayer loopToRemove, System.Boolean fromReset)
    // Offset: 0x90AF2C
    void RemoveLoop(::VROSC::LoopPlayer* loopToRemove, bool fromReset);
    // private System.Void ResetLoopStation(System.Boolean keepLoopLength)
    // Offset: 0x90B2C0
    void ResetLoopStation(bool keepLoopLength);
    // private System.Void SyncSourceChanged(VROSC.BeatCounter/VROSC.SyncSource syncSource)
    // Offset: 0x90B650
    void SyncSourceChanged(::VROSC::BeatCounter::SyncSource syncSource);
    // public System.Boolean IsEmpty()
    // Offset: 0x90B294
    bool IsEmpty();
    // public System.Void ShowAsPlaying()
    // Offset: 0x90A158
    void ShowAsPlaying();
    // public System.Void PlayAll()
    // Offset: 0x90B70C
    void PlayAll();
    // public System.Void StopAll()
    // Offset: 0x90B988
    void StopAll();
    // private System.Void DeleteAll()
    // Offset: 0x90BAE0
    void DeleteAll();
    // private System.Void VolumeChanged(System.Single volume)
    // Offset: 0x90BC1C
    void VolumeChanged(float volume);
    // public System.Void SetAutoRecordingLength()
    // Offset: 0x90BCDC
    void SetAutoRecordingLength();
    // public System.Single GetLoopLengthSetting()
    // Offset: 0x90BCFC
    float GetLoopLengthSetting();
    // public System.Void SetRecordingLength(System.Single lengthInBars)
    // Offset: 0x90BDF0
    void SetRecordingLength(float lengthInBars);
    // public System.Void LoopStationDataLoaded(VROSC.LoopStationDataController dataController)
    // Offset: 0x90BF20
    void LoopStationDataLoaded(::VROSC::LoopStationDataController* dataController);
    // private System.Void LoadLaunchPads()
    // Offset: 0x90D1C8
    void LoadLaunchPads();
    // public System.Void .ctor()
    // Offset: 0x90DB88
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopStation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopStation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopStation*, creationType>()));
    }
  }; // VROSC.LoopStation
  #pragma pack(pop)
  static check_size<sizeof(LoopStation), 152 + sizeof(bool)> __VROSC_LoopStationSizeCheck;
  static_assert(sizeof(LoopStation) == 0x99);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopStation::get_MovementPlane
// Il2CppName: get_MovementPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MovementPlane* (VROSC::LoopStation::*)()>(&VROSC::LoopStation::get_MovementPlane)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "get_MovementPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::get_Groups
// Il2CppName: get_Groups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopStationGroupCore* (VROSC::LoopStation::*)()>(&VROSC::LoopStation::get_Groups)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "get_Groups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::get_LoopHandler
// Il2CppName: get_LoopHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopStationLoopHandler* (VROSC::LoopStation::*)()>(&VROSC::LoopStation::get_LoopHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "get_LoopHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::get_RecordingButton
// Il2CppName: get_RecordingButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopStationRecordingButton* (VROSC::LoopStation::*)()>(&VROSC::LoopStation::get_RecordingButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "get_RecordingButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::get_Mover
// Il2CppName: get_Mover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TransformMover* (VROSC::LoopStation::*)()>(&VROSC::LoopStation::get_Mover)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "get_Mover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::get_LaunchPadParent
// Il2CppName: get_LaunchPadParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (VROSC::LoopStation::*)()>(&VROSC::LoopStation::get_LaunchPadParent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "get_LaunchPadParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::get_LongestLoopLengthSamples
// Il2CppName: get_LongestLoopLengthSamples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::LoopStation::*)()>(&VROSC::LoopStation::get_LongestLoopLengthSamples)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "get_LongestLoopLengthSamples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::set_LongestLoopLengthSamples
// Il2CppName: set_LongestLoopLengthSamples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)(int)>(&VROSC::LoopStation::set_LongestLoopLengthSamples)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "set_LongestLoopLengthSamples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopStationDataController* (VROSC::LoopStation::*)()>(&VROSC::LoopStation::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::set_Data
// Il2CppName: set_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)(::VROSC::LoopStationDataController*)>(&VROSC::LoopStation::set_Data)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationDataController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "set_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::get_IsSetup
// Il2CppName: get_IsSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopStation::*)()>(&VROSC::LoopStation::get_IsSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "get_IsSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::set_IsSetup
// Il2CppName: set_IsSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)(bool)>(&VROSC::LoopStation::set_IsSetup)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "set_IsSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)()>(&VROSC::LoopStation::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)()>(&VROSC::LoopStation::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)()>(&VROSC::LoopStation::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)()>(&VROSC::LoopStation::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)(::VROSC::LoopStationDataController*)>(&VROSC::LoopStation::Setup)> {
  static const MethodInfo* get() {
    static auto* dataController = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationDataController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataController});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::CreateNewLoopByRecording
// Il2CppName: CreateNewLoopByRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)(::StringW, int, bool)>(&VROSC::LoopStation::CreateNewLoopByRecording)> {
  static const MethodInfo* get() {
    static auto* trackId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* globalSyncStartOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* overdub = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "CreateNewLoopByRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trackId, globalSyncStartOffset, overdub});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::SetRecordingText
// Il2CppName: SetRecordingText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)(::StringW)>(&VROSC::LoopStation::SetRecordingText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "SetRecordingText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::RecordingOfLoopComplete
// Il2CppName: RecordingOfLoopComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)()>(&VROSC::LoopStation::RecordingOfLoopComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "RecordingOfLoopComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::CancelRecording
// Il2CppName: CancelRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)(bool)>(&VROSC::LoopStation::CancelRecording)> {
  static const MethodInfo* get() {
    static auto* restart = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "CancelRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{restart});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::Rerecord
// Il2CppName: Rerecord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)()>(&VROSC::LoopStation::Rerecord)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "Rerecord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::RemoveLoop
// Il2CppName: RemoveLoop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)(::VROSC::LoopPlayer*, bool)>(&VROSC::LoopStation::RemoveLoop)> {
  static const MethodInfo* get() {
    static auto* loopToRemove = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayer")->byval_arg;
    static auto* fromReset = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "RemoveLoop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loopToRemove, fromReset});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::ResetLoopStation
// Il2CppName: ResetLoopStation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)(bool)>(&VROSC::LoopStation::ResetLoopStation)> {
  static const MethodInfo* get() {
    static auto* keepLoopLength = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "ResetLoopStation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keepLoopLength});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::SyncSourceChanged
// Il2CppName: SyncSourceChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)(::VROSC::BeatCounter::SyncSource)>(&VROSC::LoopStation::SyncSourceChanged)> {
  static const MethodInfo* get() {
    static auto* syncSource = &::il2cpp_utils::GetClassFromName("VROSC", "BeatCounter/SyncSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "SyncSourceChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{syncSource});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::IsEmpty
// Il2CppName: IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopStation::*)()>(&VROSC::LoopStation::IsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::ShowAsPlaying
// Il2CppName: ShowAsPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)()>(&VROSC::LoopStation::ShowAsPlaying)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "ShowAsPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::PlayAll
// Il2CppName: PlayAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)()>(&VROSC::LoopStation::PlayAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "PlayAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::StopAll
// Il2CppName: StopAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)()>(&VROSC::LoopStation::StopAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "StopAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::DeleteAll
// Il2CppName: DeleteAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)()>(&VROSC::LoopStation::DeleteAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "DeleteAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::VolumeChanged
// Il2CppName: VolumeChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)(float)>(&VROSC::LoopStation::VolumeChanged)> {
  static const MethodInfo* get() {
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "VolumeChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volume});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::SetAutoRecordingLength
// Il2CppName: SetAutoRecordingLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)()>(&VROSC::LoopStation::SetAutoRecordingLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "SetAutoRecordingLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::GetLoopLengthSetting
// Il2CppName: GetLoopLengthSetting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::LoopStation::*)()>(&VROSC::LoopStation::GetLoopLengthSetting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "GetLoopLengthSetting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::SetRecordingLength
// Il2CppName: SetRecordingLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)(float)>(&VROSC::LoopStation::SetRecordingLength)> {
  static const MethodInfo* get() {
    static auto* lengthInBars = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "SetRecordingLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lengthInBars});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::LoopStationDataLoaded
// Il2CppName: LoopStationDataLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)(::VROSC::LoopStationDataController*)>(&VROSC::LoopStation::LoopStationDataLoaded)> {
  static const MethodInfo* get() {
    static auto* dataController = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationDataController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "LoopStationDataLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataController});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::LoadLaunchPads
// Il2CppName: LoadLaunchPads
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStation::*)()>(&VROSC::LoopStation::LoadLaunchPads)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStation*), "LoadLaunchPads", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!