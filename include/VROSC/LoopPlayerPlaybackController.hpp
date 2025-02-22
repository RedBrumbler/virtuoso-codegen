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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlayerPlaybackSettings
  class LoopPlayerPlaybackSettings;
  // Forward declaring type: LoopPlaybackSettingsUI
  class LoopPlaybackSettingsUI;
  // Forward declaring type: Loop
  class Loop;
  // Forward declaring type: LoopStation
  class LoopStation;
  // Forward declaring type: LoopPlayer
  class LoopPlayer;
  // Forward declaring type: LoopPlaybackConfig
  class LoopPlaybackConfig;
  // Forward declaring type: LoopPlaybackConfigOverride
  class LoopPlaybackConfigOverride;
  // Forward declaring type: LoopStationGroup
  class LoopStationGroup;
  // Forward declaring type: PlaybackProgressUIData
  struct PlaybackProgressUIData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlayerPlaybackController
  class LoopPlayerPlaybackController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopPlayerPlaybackController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerPlaybackController*, "VROSC", "LoopPlayerPlaybackController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopPlayerPlaybackController
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 66967C
  class LoopPlayerPlaybackController : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.LoopPlayerPlaybackSettings <PlaybackSettings>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::LoopPlayerPlaybackSettings* PlaybackSettings;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlayerPlaybackSettings*) == 0x8);
    // private UnityEngine.AudioSource _recordingSource
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AudioSource* recordingSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private TMPro.TextMeshPro _tmp
    // Size: 0x8
    // Offset: 0x28
    ::TMPro::TextMeshPro* tmp;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private VROSC.LoopPlaybackSettingsUI _loopPlaybackSettingsUI
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::LoopPlaybackSettingsUI* loopPlaybackSettingsUI;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlaybackSettingsUI*) == 0x8);
    // private VROSC.Loop _loop
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::Loop* loop;
    // Field size check
    static_assert(sizeof(::VROSC::Loop*) == 0x8);
    // private VROSC.LoopStation _loopStation
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::LoopStation* loopStation;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStation*) == 0x8);
    // private VROSC.LoopPlayer _loopPlayer
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::LoopPlayer* loopPlayer;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlayer*) == 0x8);
    // private VROSC.LoopPlaybackConfig _playbackConfig
    // Size: 0x8
    // Offset: 0x50
    ::VROSC::LoopPlaybackConfig* playbackConfig;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlaybackConfig*) == 0x8);
    // private System.Boolean _isMutedBySolo
    // Size: 0x1
    // Offset: 0x58
    bool isMutedBySolo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isMutedBySolo and: groupVolumeMultiplier
    char __padding8[0x3] = {};
    // private System.Single _groupVolumeMultiplier
    // Size: 0x4
    // Offset: 0x5C
    float groupVolumeMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _lastCommandInputSample
    // Size: 0x4
    // Offset: 0x60
    int lastCommandInputSample;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.LoopPlayerPlaybackSettings <PlaybackSettings>k__BackingField
    ::VROSC::LoopPlayerPlaybackSettings*& dyn_$PlaybackSettings$k__BackingField();
    // Get instance field reference: private UnityEngine.AudioSource _recordingSource
    ::UnityEngine::AudioSource*& dyn__recordingSource();
    // Get instance field reference: private TMPro.TextMeshPro _tmp
    ::TMPro::TextMeshPro*& dyn__tmp();
    // Get instance field reference: private VROSC.LoopPlaybackSettingsUI _loopPlaybackSettingsUI
    ::VROSC::LoopPlaybackSettingsUI*& dyn__loopPlaybackSettingsUI();
    // Get instance field reference: private VROSC.Loop _loop
    ::VROSC::Loop*& dyn__loop();
    // Get instance field reference: private VROSC.LoopStation _loopStation
    ::VROSC::LoopStation*& dyn__loopStation();
    // Get instance field reference: private VROSC.LoopPlayer _loopPlayer
    ::VROSC::LoopPlayer*& dyn__loopPlayer();
    // Get instance field reference: private VROSC.LoopPlaybackConfig _playbackConfig
    ::VROSC::LoopPlaybackConfig*& dyn__playbackConfig();
    // Get instance field reference: private System.Boolean _isMutedBySolo
    bool& dyn__isMutedBySolo();
    // Get instance field reference: private System.Single _groupVolumeMultiplier
    float& dyn__groupVolumeMultiplier();
    // Get instance field reference: private System.Int32 _lastCommandInputSample
    int& dyn__lastCommandInputSample();
    // public VROSC.LoopPlayerPlaybackSettings get_PlaybackSettings()
    // Offset: 0x9055F4
    ::VROSC::LoopPlayerPlaybackSettings* get_PlaybackSettings();
    // private System.Void set_PlaybackSettings(VROSC.LoopPlayerPlaybackSettings value)
    // Offset: 0x9055EC
    void set_PlaybackSettings(::VROSC::LoopPlayerPlaybackSettings* value);
    // public System.Boolean get_Active()
    // Offset: 0x902524
    bool get_Active();
    // private System.Void OnEnable()
    // Offset: 0x9055FC
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x905618
    void OnDisable();
    // public System.Void Setup(VROSC.LoopStation loopStation, VROSC.LoopPlayer loopPlayer, VROSC.LoopPlaybackConfig config, System.Int32 globalSyncStartOffset, System.Boolean overdub)
    // Offset: 0x9035BC
    void Setup(::VROSC::LoopStation* loopStation, ::VROSC::LoopPlayer* loopPlayer, ::VROSC::LoopPlaybackConfig* config, int globalSyncStartOffset, bool overdub);
    // private System.Void OnDestroy()
    // Offset: 0x905B68
    void OnDestroy();
    // public System.Void UpdateClip(System.Boolean overdub)
    // Offset: 0x9038C8
    void UpdateClip(bool overdub);
    // public System.Void TogglePlay(System.Boolean play)
    // Offset: 0x903AB8
    void TogglePlay(bool play);
    // public System.Void SetSolo(System.Boolean isMutedBySolo)
    // Offset: 0x904158
    void SetSolo(bool isMutedBySolo);
    // public System.Void Play(VROSC.LoopPlaybackConfig config)
    // Offset: 0x90371C
    void Play(::VROSC::LoopPlaybackConfig* config);
    // public System.Void Stop(System.Boolean instant)
    // Offset: 0x903F10
    void Stop(bool instant);
    // private System.Void StartPlayback(VROSC.LoopPlaybackConfig config)
    // Offset: 0x905E58
    void StartPlayback(::VROSC::LoopPlaybackConfig* config);
    // System.Void UpdatePlayConfig(VROSC.LoopPlaybackConfigOverride playbackConfig)
    // Offset: 0x903E88
    void UpdatePlayConfig(::VROSC::LoopPlaybackConfigOverride* playbackConfig);
    // public System.Void SetVolumeOnSource(System.Single volume)
    // Offset: 0x904008
    void SetVolumeOnSource(float volume);
    // public System.Void UpdateAudioSourceVolume()
    // Offset: 0x903BEC
    void UpdateAudioSourceVolume();
    // public System.Void AdjustVolumeToNewGroup(VROSC.LoopStationGroup loopStationGroup)
    // Offset: 0x902E34
    void AdjustVolumeToNewGroup(::VROSC::LoopStationGroup* loopStationGroup);
    // public VROSC.PlaybackProgressUIData GetPlaybackProgress()
    // Offset: 0x90417C
    ::VROSC::PlaybackProgressUIData GetPlaybackProgress();
    // private System.Void ConfigChanged()
    // Offset: 0x9067B0
    void ConfigChanged();
    // private System.Void Update()
    // Offset: 0x9067B4
    void Update();
    // public System.Void SetIsMutedByGroup(System.Boolean muted)
    // Offset: 0x906820
    void SetIsMutedByGroup(bool muted);
    // protected System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0x906860
    void OnAudioFilterRead(::ArrayW<float> data, int channels);
    // private System.Void DebugPrintVolume()
    // Offset: 0x906D08
    void DebugPrintVolume();
    // public System.Void .ctor()
    // Offset: 0x907040
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopPlayerPlaybackController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopPlayerPlaybackController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopPlayerPlaybackController*, creationType>()));
    }
  }; // VROSC.LoopPlayerPlaybackController
  #pragma pack(pop)
  static check_size<sizeof(LoopPlayerPlaybackController), 96 + sizeof(int)> __VROSC_LoopPlayerPlaybackControllerSizeCheck;
  static_assert(sizeof(LoopPlayerPlaybackController) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::get_PlaybackSettings
// Il2CppName: get_PlaybackSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlayerPlaybackSettings* (VROSC::LoopPlayerPlaybackController::*)()>(&VROSC::LoopPlayerPlaybackController::get_PlaybackSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "get_PlaybackSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::set_PlaybackSettings
// Il2CppName: set_PlaybackSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)(::VROSC::LoopPlayerPlaybackSettings*)>(&VROSC::LoopPlayerPlaybackController::set_PlaybackSettings)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayerPlaybackSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "set_PlaybackSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopPlayerPlaybackController::*)()>(&VROSC::LoopPlayerPlaybackController::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)()>(&VROSC::LoopPlayerPlaybackController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)()>(&VROSC::LoopPlayerPlaybackController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)(::VROSC::LoopStation*, ::VROSC::LoopPlayer*, ::VROSC::LoopPlaybackConfig*, int, bool)>(&VROSC::LoopPlayerPlaybackController::Setup)> {
  static const MethodInfo* get() {
    static auto* loopStation = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStation")->byval_arg;
    static auto* loopPlayer = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayer")->byval_arg;
    static auto* config = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlaybackConfig")->byval_arg;
    static auto* globalSyncStartOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* overdub = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loopStation, loopPlayer, config, globalSyncStartOffset, overdub});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)()>(&VROSC::LoopPlayerPlaybackController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::UpdateClip
// Il2CppName: UpdateClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)(bool)>(&VROSC::LoopPlayerPlaybackController::UpdateClip)> {
  static const MethodInfo* get() {
    static auto* overdub = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "UpdateClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{overdub});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::TogglePlay
// Il2CppName: TogglePlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)(bool)>(&VROSC::LoopPlayerPlaybackController::TogglePlay)> {
  static const MethodInfo* get() {
    static auto* play = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "TogglePlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{play});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::SetSolo
// Il2CppName: SetSolo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)(bool)>(&VROSC::LoopPlayerPlaybackController::SetSolo)> {
  static const MethodInfo* get() {
    static auto* isMutedBySolo = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "SetSolo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isMutedBySolo});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)(::VROSC::LoopPlaybackConfig*)>(&VROSC::LoopPlayerPlaybackController::Play)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlaybackConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)(bool)>(&VROSC::LoopPlayerPlaybackController::Stop)> {
  static const MethodInfo* get() {
    static auto* instant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instant});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::StartPlayback
// Il2CppName: StartPlayback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)(::VROSC::LoopPlaybackConfig*)>(&VROSC::LoopPlayerPlaybackController::StartPlayback)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlaybackConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "StartPlayback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::UpdatePlayConfig
// Il2CppName: UpdatePlayConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)(::VROSC::LoopPlaybackConfigOverride*)>(&VROSC::LoopPlayerPlaybackController::UpdatePlayConfig)> {
  static const MethodInfo* get() {
    static auto* playbackConfig = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlaybackConfigOverride")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "UpdatePlayConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playbackConfig});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::SetVolumeOnSource
// Il2CppName: SetVolumeOnSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)(float)>(&VROSC::LoopPlayerPlaybackController::SetVolumeOnSource)> {
  static const MethodInfo* get() {
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "SetVolumeOnSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volume});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::UpdateAudioSourceVolume
// Il2CppName: UpdateAudioSourceVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)()>(&VROSC::LoopPlayerPlaybackController::UpdateAudioSourceVolume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "UpdateAudioSourceVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::AdjustVolumeToNewGroup
// Il2CppName: AdjustVolumeToNewGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)(::VROSC::LoopStationGroup*)>(&VROSC::LoopPlayerPlaybackController::AdjustVolumeToNewGroup)> {
  static const MethodInfo* get() {
    static auto* loopStationGroup = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "AdjustVolumeToNewGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loopStationGroup});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::GetPlaybackProgress
// Il2CppName: GetPlaybackProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PlaybackProgressUIData (VROSC::LoopPlayerPlaybackController::*)()>(&VROSC::LoopPlayerPlaybackController::GetPlaybackProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "GetPlaybackProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::ConfigChanged
// Il2CppName: ConfigChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)()>(&VROSC::LoopPlayerPlaybackController::ConfigChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "ConfigChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)()>(&VROSC::LoopPlayerPlaybackController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::SetIsMutedByGroup
// Il2CppName: SetIsMutedByGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)(bool)>(&VROSC::LoopPlayerPlaybackController::SetIsMutedByGroup)> {
  static const MethodInfo* get() {
    static auto* muted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "SetIsMutedByGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{muted});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::OnAudioFilterRead
// Il2CppName: OnAudioFilterRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)(::ArrayW<float>, int)>(&VROSC::LoopPlayerPlaybackController::OnAudioFilterRead)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "OnAudioFilterRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, channels});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::DebugPrintVolume
// Il2CppName: DebugPrintVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerPlaybackController::*)()>(&VROSC::LoopPlayerPlaybackController::DebugPrintVolume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerPlaybackController*), "DebugPrintVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerPlaybackController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
