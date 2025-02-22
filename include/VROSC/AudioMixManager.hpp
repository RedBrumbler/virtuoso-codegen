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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: UserDataControllers
  class UserDataControllers;
  // Forward declaring type: Error
  struct Error;
}
// Forward declaring namespace: UnityEngine::Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioMixer
  class AudioMixer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: AudioMixManager
  class AudioMixManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioMixManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioMixManager*, "VROSC", "AudioMixManager");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioMixManager
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioMixManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::AudioMixManager::VolumeParameter
    class VolumeParameter;
    // Nested type: ::VROSC::AudioMixManager::$FadeCoroutine$d__11
    class $FadeCoroutine$d__11;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.Audio.AudioMixer _audioMixer
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Audio::AudioMixer* audioMixer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Audio::AudioMixer*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,VROSC.AudioMixManager/VROSC.VolumeParameter> _volumeParameters
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::StringW, ::VROSC::AudioMixManager::VolumeParameter*>* volumeParameters;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::VROSC::AudioMixManager::VolumeParameter*>*) == 0x8);
    // private System.Boolean _fadedOutMaster
    // Size: 0x1
    // Offset: 0x28
    bool fadedOutMaster;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single _minVolumeDb
    static constexpr const float _minVolumeDb = -80;
    // Get static field: static private System.Single _minVolumeDb
    static float _get__minVolumeDb();
    // Set static field: static private System.Single _minVolumeDb
    static void _set__minVolumeDb(float value);
    // static field const value: static public System.String GameSoundsVolume
    static constexpr const char* GameSoundsVolume = "GameSoundsVolume";
    // Get static field: static public System.String GameSoundsVolume
    static ::StringW _get_GameSoundsVolume();
    // Set static field: static public System.String GameSoundsVolume
    static void _set_GameSoundsVolume(::StringW value);
    // static field const value: static public System.String MicrophoneReverbVolume
    static constexpr const char* MicrophoneReverbVolume = "MicrophoneReverbVolume";
    // Get static field: static public System.String MicrophoneReverbVolume
    static ::StringW _get_MicrophoneReverbVolume();
    // Set static field: static public System.String MicrophoneReverbVolume
    static void _set_MicrophoneReverbVolume(::StringW value);
    // static field const value: static public System.String MasterVolume
    static constexpr const char* MasterVolume = "MasterVolume";
    // Get static field: static public System.String MasterVolume
    static ::StringW _get_MasterVolume();
    // Set static field: static public System.String MasterVolume
    static void _set_MasterVolume(::StringW value);
    // Get instance field reference: private UnityEngine.Audio.AudioMixer _audioMixer
    ::UnityEngine::Audio::AudioMixer*& dyn__audioMixer();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,VROSC.AudioMixManager/VROSC.VolumeParameter> _volumeParameters
    ::System::Collections::Generic::Dictionary_2<::StringW, ::VROSC::AudioMixManager::VolumeParameter*>*& dyn__volumeParameters();
    // Get instance field reference: private System.Boolean _fadedOutMaster
    bool& dyn__fadedOutMaster();
    // protected System.Void Awake()
    // Offset: 0x1370F6C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1371508
    void OnDestroy();
    // public System.Void Fade(System.String parameterName, System.Single fadeTime, System.Single targetVolumeFraction, System.Object source)
    // Offset: 0x137198C
    void Fade(::StringW parameterName, float fadeTime, float targetVolumeFraction, ::Il2CppObject* source);
    // private System.Collections.IEnumerator FadeCoroutine(System.String parameterName, System.Single fadeTime, System.Single unfadedVolume, System.Single targetVolumeFractionDb)
    // Offset: 0x1371ADC
    ::System::Collections::IEnumerator* FadeCoroutine(::StringW parameterName, float fadeTime, float unfadedVolume, float targetVolumeFractionDb);
    // public System.Void SetVolume(System.String parameterName, System.Single volume)
    // Offset: 0x1371B78
    void SetVolume(::StringW parameterName, float volume);
    // public System.Void SetVolumeDb(System.String parameterName, System.Single volume)
    // Offset: 0x1371C08
    void SetVolumeDb(::StringW parameterName, float volume);
    // private System.Void PreferencesDataLoaded(VROSC.UserDataControllers userDataControllers)
    // Offset: 0x1371C98
    void PreferencesDataLoaded(::VROSC::UserDataControllers* userDataControllers);
    // private System.Void SaveSucceeded(System.String sessionId)
    // Offset: 0x1371D08
    void SaveSucceeded(::StringW sessionId);
    // private System.Void SaveFailed(System.String sessionId, VROSC.Error error)
    // Offset: 0x1371D7C
    void SaveFailed(::StringW sessionId, ::VROSC::Error error);
    // private System.Void LoadSucceeded(System.String sessionId, System.Boolean isDefaultSession)
    // Offset: 0x1371D80
    void LoadSucceeded(::StringW sessionId, bool isDefaultSession);
    // private System.Void LoadFailed(System.String sessionId, System.Boolean isDefaultSession, VROSC.Error error)
    // Offset: 0x1371D84
    void LoadFailed(::StringW sessionId, bool isDefaultSession, ::VROSC::Error error);
    // private System.Void FadeOutForLoadSave()
    // Offset: 0x1371D88
    void FadeOutForLoadSave();
    // private System.Void FadeInAfterLoadSave()
    // Offset: 0x1371D0C
    void FadeInAfterLoadSave();
    // public System.Void .ctor()
    // Offset: 0x1371DFC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioMixManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioMixManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioMixManager*, creationType>()));
    }
  }; // VROSC.AudioMixManager
  #pragma pack(pop)
  static check_size<sizeof(AudioMixManager), 40 + sizeof(bool)> __VROSC_AudioMixManagerSizeCheck;
  static_assert(sizeof(AudioMixManager) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioMixManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioMixManager::*)()>(&VROSC::AudioMixManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioMixManager::*)()>(&VROSC::AudioMixManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::Fade
// Il2CppName: Fade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioMixManager::*)(::StringW, float, float, ::Il2CppObject*)>(&VROSC::AudioMixManager::Fade)> {
  static const MethodInfo* get() {
    static auto* parameterName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fadeTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* targetVolumeFraction = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager*), "Fade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameterName, fadeTime, targetVolumeFraction, source});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::FadeCoroutine
// Il2CppName: FadeCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VROSC::AudioMixManager::*)(::StringW, float, float, float)>(&VROSC::AudioMixManager::FadeCoroutine)> {
  static const MethodInfo* get() {
    static auto* parameterName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fadeTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* unfadedVolume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* targetVolumeFractionDb = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager*), "FadeCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameterName, fadeTime, unfadedVolume, targetVolumeFractionDb});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::SetVolume
// Il2CppName: SetVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioMixManager::*)(::StringW, float)>(&VROSC::AudioMixManager::SetVolume)> {
  static const MethodInfo* get() {
    static auto* parameterName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager*), "SetVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameterName, volume});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::SetVolumeDb
// Il2CppName: SetVolumeDb
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioMixManager::*)(::StringW, float)>(&VROSC::AudioMixManager::SetVolumeDb)> {
  static const MethodInfo* get() {
    static auto* parameterName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager*), "SetVolumeDb", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameterName, volume});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::PreferencesDataLoaded
// Il2CppName: PreferencesDataLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioMixManager::*)(::VROSC::UserDataControllers*)>(&VROSC::AudioMixManager::PreferencesDataLoaded)> {
  static const MethodInfo* get() {
    static auto* userDataControllers = &::il2cpp_utils::GetClassFromName("VROSC", "UserDataControllers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager*), "PreferencesDataLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userDataControllers});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::SaveSucceeded
// Il2CppName: SaveSucceeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioMixManager::*)(::StringW)>(&VROSC::AudioMixManager::SaveSucceeded)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager*), "SaveSucceeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::SaveFailed
// Il2CppName: SaveFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioMixManager::*)(::StringW, ::VROSC::Error)>(&VROSC::AudioMixManager::SaveFailed)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager*), "SaveFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, error});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::LoadSucceeded
// Il2CppName: LoadSucceeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioMixManager::*)(::StringW, bool)>(&VROSC::AudioMixManager::LoadSucceeded)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isDefaultSession = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager*), "LoadSucceeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, isDefaultSession});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::LoadFailed
// Il2CppName: LoadFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioMixManager::*)(::StringW, bool, ::VROSC::Error)>(&VROSC::AudioMixManager::LoadFailed)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isDefaultSession = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager*), "LoadFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, isDefaultSession, error});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::FadeOutForLoadSave
// Il2CppName: FadeOutForLoadSave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioMixManager::*)()>(&VROSC::AudioMixManager::FadeOutForLoadSave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager*), "FadeOutForLoadSave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::FadeInAfterLoadSave
// Il2CppName: FadeInAfterLoadSave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioMixManager::*)()>(&VROSC::AudioMixManager::FadeInAfterLoadSave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager*), "FadeInAfterLoadSave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
