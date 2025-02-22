// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: VROSC.Metronome/VROSC.Mode
#include "VROSC/Metronome.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: MalletSettings
  class MalletSettings;
  // Forward declaring type: ScalePresets
  class ScalePresets;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SettingsDataDefaults
  class SettingsDataDefaults;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SettingsDataDefaults);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SettingsDataDefaults*, "VROSC", "SettingsDataDefaults");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SettingsDataDefaults
  // [TokenAttribute] Offset: FFFFFFFF
  class SettingsDataDefaults : public ::UnityEngine::ScriptableObject {
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
    // public VROSC.MalletSettings MalletSettings
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::MalletSettings* MalletSettings;
    // Field size check
    static_assert(sizeof(::VROSC::MalletSettings*) == 0x8);
    // public VROSC.ScalePresets ScalePresets
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::ScalePresets* ScalePresets;
    // Field size check
    static_assert(sizeof(::VROSC::ScalePresets*) == 0x8);
    // public VROSC.Metronome/VROSC.Mode MetronomeMode
    // Size: 0x4
    // Offset: 0x28
    ::VROSC::Metronome::Mode MetronomeMode;
    // Field size check
    static_assert(sizeof(::VROSC::Metronome::Mode) == 0x4);
    // public System.Boolean UseExternalSynthesizer
    // Size: 0x1
    // Offset: 0x2C
    bool UseExternalSynthesizer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: UseExternalSynthesizer and: SelectedSpectatorCamera
    char __padding3[0x3] = {};
    // public System.Int32 SelectedSpectatorCamera
    // Size: 0x4
    // Offset: 0x30
    int SelectedSpectatorCamera;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single GlobalVolume
    // Size: 0x4
    // Offset: 0x34
    float GlobalVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean PlayAudioWhenUnfocused
    // Size: 0x1
    // Offset: 0x38
    bool PlayAudioWhenUnfocused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean UseClassicControls
    // Size: 0x1
    // Offset: 0x39
    bool UseClassicControls;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: UseClassicControls and: VideoPlayerVolume
    char __padding7[0x2] = {};
    // public System.Single VideoPlayerVolume
    // Size: 0x4
    // Offset: 0x3C
    float VideoPlayerVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean AutoPlayPreviews
    // Size: 0x1
    // Offset: 0x40
    bool AutoPlayPreviews;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: AutoPlayPreviews and: PreviewsVolume
    char __padding9[0x3] = {};
    // public System.Single PreviewsVolume
    // Size: 0x4
    // Offset: 0x44
    float PreviewsVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean SpectatorHideBackground
    // Size: 0x1
    // Offset: 0x48
    bool SpectatorHideBackground;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean PreviewDrums
    // Size: 0x1
    // Offset: 0x49
    bool PreviewDrums;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: PreviewDrums and: PreviewDrumsVolume
    char __padding12[0x2] = {};
    // public System.Single PreviewDrumsVolume
    // Size: 0x4
    // Offset: 0x4C
    float PreviewDrumsVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean AllowExternalKeyboard
    // Size: 0x1
    // Offset: 0x50
    bool AllowExternalKeyboard;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean UseTouchForKeyboard
    // Size: 0x1
    // Offset: 0x51
    bool UseTouchForKeyboard;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean UsePointAndClickForKeyboard
    // Size: 0x1
    // Offset: 0x52
    bool UsePointAndClickForKeyboard;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean KeyboardPlaysClickSound
    // Size: 0x1
    // Offset: 0x53
    bool KeyboardPlaysClickSound;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean Overdub
    // Size: 0x1
    // Offset: 0x54
    bool Overdub;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean SetRecordingLengthToFirstLoopLength
    // Size: 0x1
    // Offset: 0x55
    bool SetRecordingLengthToFirstLoopLength;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: SetRecordingLengthToFirstLoopLength and: SelectedEnvironment
    char __padding19[0x2] = {};
    // public System.String SelectedEnvironment
    // Size: 0x8
    // Offset: 0x58
    ::StringW SelectedEnvironment;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single EnvironmentEffectsAmount
    // Size: 0x4
    // Offset: 0x60
    float EnvironmentEffectsAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public VROSC.MalletSettings MalletSettings
    ::VROSC::MalletSettings*& dyn_MalletSettings();
    // Get instance field reference: public VROSC.ScalePresets ScalePresets
    ::VROSC::ScalePresets*& dyn_ScalePresets();
    // Get instance field reference: public VROSC.Metronome/VROSC.Mode MetronomeMode
    ::VROSC::Metronome::Mode& dyn_MetronomeMode();
    // Get instance field reference: public System.Boolean UseExternalSynthesizer
    bool& dyn_UseExternalSynthesizer();
    // Get instance field reference: public System.Int32 SelectedSpectatorCamera
    int& dyn_SelectedSpectatorCamera();
    // Get instance field reference: public System.Single GlobalVolume
    float& dyn_GlobalVolume();
    // Get instance field reference: public System.Boolean PlayAudioWhenUnfocused
    bool& dyn_PlayAudioWhenUnfocused();
    // Get instance field reference: public System.Boolean UseClassicControls
    bool& dyn_UseClassicControls();
    // Get instance field reference: public System.Single VideoPlayerVolume
    float& dyn_VideoPlayerVolume();
    // Get instance field reference: public System.Boolean AutoPlayPreviews
    bool& dyn_AutoPlayPreviews();
    // Get instance field reference: public System.Single PreviewsVolume
    float& dyn_PreviewsVolume();
    // Get instance field reference: public System.Boolean SpectatorHideBackground
    bool& dyn_SpectatorHideBackground();
    // Get instance field reference: public System.Boolean PreviewDrums
    bool& dyn_PreviewDrums();
    // Get instance field reference: public System.Single PreviewDrumsVolume
    float& dyn_PreviewDrumsVolume();
    // Get instance field reference: public System.Boolean AllowExternalKeyboard
    bool& dyn_AllowExternalKeyboard();
    // Get instance field reference: public System.Boolean UseTouchForKeyboard
    bool& dyn_UseTouchForKeyboard();
    // Get instance field reference: public System.Boolean UsePointAndClickForKeyboard
    bool& dyn_UsePointAndClickForKeyboard();
    // Get instance field reference: public System.Boolean KeyboardPlaysClickSound
    bool& dyn_KeyboardPlaysClickSound();
    // Get instance field reference: public System.Boolean Overdub
    bool& dyn_Overdub();
    // Get instance field reference: public System.Boolean SetRecordingLengthToFirstLoopLength
    bool& dyn_SetRecordingLengthToFirstLoopLength();
    // Get instance field reference: public System.String SelectedEnvironment
    ::StringW& dyn_SelectedEnvironment();
    // Get instance field reference: public System.Single EnvironmentEffectsAmount
    float& dyn_EnvironmentEffectsAmount();
    // public System.Void .ctor()
    // Offset: 0x13B2EC8
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsDataDefaults* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SettingsDataDefaults::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsDataDefaults*, creationType>()));
    }
  }; // VROSC.SettingsDataDefaults
  #pragma pack(pop)
  static check_size<sizeof(SettingsDataDefaults), 96 + sizeof(float)> __VROSC_SettingsDataDefaultsSizeCheck;
  static_assert(sizeof(SettingsDataDefaults) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SettingsDataDefaults::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
