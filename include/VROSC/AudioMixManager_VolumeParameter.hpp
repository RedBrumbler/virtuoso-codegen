// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioMixManager
#include "VROSC/AudioMixManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioMixer
  class AudioMixer;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioMixManager::VolumeParameter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioMixManager::VolumeParameter*, "VROSC", "AudioMixManager/VolumeParameter");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioMixManager/VROSC.VolumeParameter
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioMixManager::VolumeParameter : public ::Il2CppObject {
    public:
    // Nested type: ::VROSC::AudioMixManager::VolumeParameter::FadeSource
    class FadeSource;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.String Name
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single UnfadedVolume
    // Size: 0x4
    // Offset: 0x18
    float UnfadedVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: UnfadedVolume and: FadingCoroutine
    char __padding1[0x4] = {};
    // public UnityEngine.Coroutine FadingCoroutine
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Coroutine* FadingCoroutine;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.AudioMixManager/VROSC.VolumeParameter/VROSC.FadeSource> _fadeSources
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::VROSC::AudioMixManager::VolumeParameter::FadeSource*>* fadeSources;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::AudioMixManager::VolumeParameter::FadeSource*>*) == 0x8);
    public:
    // Get instance field reference: public System.String Name
    ::StringW& dyn_Name();
    // Get instance field reference: public System.Single UnfadedVolume
    float& dyn_UnfadedVolume();
    // Get instance field reference: public UnityEngine.Coroutine FadingCoroutine
    ::UnityEngine::Coroutine*& dyn_FadingCoroutine();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.AudioMixManager/VROSC.VolumeParameter/VROSC.FadeSource> _fadeSources
    ::System::Collections::Generic::List_1<::VROSC::AudioMixManager::VolumeParameter::FadeSource*>*& dyn__fadeSources();
    // public System.Void .ctor(System.String name, UnityEngine.Audio.AudioMixer audioMixer)
    // Offset: 0x135A6B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioMixManager::VolumeParameter* New_ctor(::StringW name, ::UnityEngine::Audio::AudioMixer* audioMixer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioMixManager::VolumeParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioMixManager::VolumeParameter*, creationType>(name, audioMixer)));
    }
    // public System.Void RegisterFade(System.Object source, System.Single volume)
    // Offset: 0x135A760
    void RegisterFade(::Il2CppObject* source, float volume);
    // public System.Void UnregisterFade(System.Object source)
    // Offset: 0x135A900
    void UnregisterFade(::Il2CppObject* source);
    // public System.Single GetFadeVolume()
    // Offset: 0x135A9E4
    float GetFadeVolume();
  }; // VROSC.AudioMixManager/VROSC.VolumeParameter
  #pragma pack(pop)
  static check_size<sizeof(AudioMixManager::VolumeParameter), 40 + sizeof(::System::Collections::Generic::List_1<::VROSC::AudioMixManager::VolumeParameter::FadeSource*>*)> __VROSC_AudioMixManager_VolumeParameterSizeCheck;
  static_assert(sizeof(AudioMixManager::VolumeParameter) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioMixManager::VolumeParameter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AudioMixManager::VolumeParameter::RegisterFade
// Il2CppName: RegisterFade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioMixManager::VolumeParameter::*)(::Il2CppObject*, float)>(&VROSC::AudioMixManager::VolumeParameter::RegisterFade)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager::VolumeParameter*), "RegisterFade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, volume});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::VolumeParameter::UnregisterFade
// Il2CppName: UnregisterFade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioMixManager::VolumeParameter::*)(::Il2CppObject*)>(&VROSC::AudioMixManager::VolumeParameter::UnregisterFade)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager::VolumeParameter*), "UnregisterFade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::VolumeParameter::GetFadeVolume
// Il2CppName: GetFadeVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::AudioMixManager::VolumeParameter::*)()>(&VROSC::AudioMixManager::VolumeParameter::GetFadeVolume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager::VolumeParameter*), "GetFadeVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
