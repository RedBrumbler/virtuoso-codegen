// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVR.EmitterChannel
#include "OVR/EmitterChannel.hpp"
// Including type: OVR.SoundPriority
#include "OVR/SoundPriority.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: AudioVelocityUpdateMode
  struct AudioVelocityUpdateMode;
}
// Forward declaring namespace: OVR
namespace OVR {
  // Forward declaring type: SoundGroup
  class SoundGroup;
  // Forward declaring type: Fade
  struct Fade;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ONSPAudioSource
  class ONSPAudioSource;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioMixerGroup
  class AudioMixerGroup;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: OVR
namespace OVR {
  // Forward declaring type: SoundEmitter
  class SoundEmitter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::SoundEmitter);
DEFINE_IL2CPP_ARG_TYPE(::OVR::SoundEmitter*, "OVR", "SoundEmitter");
// Type namespace: OVR
namespace OVR {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: OVR.SoundEmitter
  // [TokenAttribute] Offset: FFFFFFFF
  class SoundEmitter : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::OVR::SoundEmitter::FadeState
    struct FadeState;
    // Nested type: ::OVR::SoundEmitter::$DelayedSyncTo$d__57
    class $DelayedSyncTo$d__57;
    // Nested type: ::OVR::SoundEmitter::$FadeSoundChannelTo$d__63
    class $FadeSoundChannelTo$d__63;
    // Nested type: ::OVR::SoundEmitter::$FadeSoundChannel$d__64
    class $FadeSoundChannel$d__64;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVR.SoundEmitter/OVR.FadeState
    // [TokenAttribute] Offset: FFFFFFFF
    struct FadeState/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: FadeState
      constexpr FadeState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVR.SoundEmitter/OVR.FadeState Null
      static constexpr const int Null = 0;
      // Get static field: static public OVR.SoundEmitter/OVR.FadeState Null
      static ::OVR::SoundEmitter::FadeState _get_Null();
      // Set static field: static public OVR.SoundEmitter/OVR.FadeState Null
      static void _set_Null(::OVR::SoundEmitter::FadeState value);
      // static field const value: static public OVR.SoundEmitter/OVR.FadeState FadingIn
      static constexpr const int FadingIn = 1;
      // Get static field: static public OVR.SoundEmitter/OVR.FadeState FadingIn
      static ::OVR::SoundEmitter::FadeState _get_FadingIn();
      // Set static field: static public OVR.SoundEmitter/OVR.FadeState FadingIn
      static void _set_FadingIn(::OVR::SoundEmitter::FadeState value);
      // static field const value: static public OVR.SoundEmitter/OVR.FadeState FadingOut
      static constexpr const int FadingOut = 2;
      // Get static field: static public OVR.SoundEmitter/OVR.FadeState FadingOut
      static ::OVR::SoundEmitter::FadeState _get_FadingOut();
      // Set static field: static public OVR.SoundEmitter/OVR.FadeState FadingOut
      static void _set_FadingOut(::OVR::SoundEmitter::FadeState value);
      // static field const value: static public OVR.SoundEmitter/OVR.FadeState Ducking
      static constexpr const int Ducking = 3;
      // Get static field: static public OVR.SoundEmitter/OVR.FadeState Ducking
      static ::OVR::SoundEmitter::FadeState _get_Ducking();
      // Set static field: static public OVR.SoundEmitter/OVR.FadeState Ducking
      static void _set_Ducking(::OVR::SoundEmitter::FadeState value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // OVR.SoundEmitter/OVR.FadeState
    #pragma pack(pop)
    static check_size<sizeof(SoundEmitter::FadeState), 0 + sizeof(int)> __OVR_SoundEmitter_FadeStateSizeCheck;
    static_assert(sizeof(SoundEmitter::FadeState) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public OVR.EmitterChannel channel
    // Size: 0x4
    // Offset: 0x18
    ::OVR::EmitterChannel channel;
    // Field size check
    static_assert(sizeof(::OVR::EmitterChannel) == 0x4);
    // public System.Boolean disableSpatialization
    // Size: 0x1
    // Offset: 0x1C
    bool disableSpatialization;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disableSpatialization and: state
    char __padding1[0x3] = {};
    // private OVR.SoundEmitter/OVR.FadeState state
    // Size: 0x4
    // Offset: 0x20
    ::OVR::SoundEmitter::FadeState state;
    // Field size check
    static_assert(sizeof(::OVR::SoundEmitter::FadeState) == 0x4);
    // Padding between fields: state and: audioSource
    char __padding2[0x4] = {};
    // public UnityEngine.AudioSource audioSource
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // public OVR.SoundPriority priority
    // Size: 0x4
    // Offset: 0x30
    ::OVR::SoundPriority priority;
    // Field size check
    static_assert(sizeof(::OVR::SoundPriority) == 0x4);
    // Padding between fields: priority and: osp
    char __padding4[0x4] = {};
    // public ONSPAudioSource osp
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::ONSPAudioSource* osp;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ONSPAudioSource*) == 0x8);
    // public System.Single endPlayTime
    // Size: 0x4
    // Offset: 0x40
    float endPlayTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: endPlayTime and: lastParentTransform
    char __padding6[0x4] = {};
    // private UnityEngine.Transform lastParentTransform
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* lastParentTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single defaultVolume
    // Size: 0x4
    // Offset: 0x50
    float defaultVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: defaultVolume and: defaultParent
    char __padding8[0x4] = {};
    // public UnityEngine.Transform defaultParent
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Transform* defaultParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Int32 originalIdx
    // Size: 0x4
    // Offset: 0x60
    int originalIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: originalIdx and: onFinished
    char __padding10[0x4] = {};
    // public System.Action onFinished
    // Size: 0x8
    // Offset: 0x68
    ::System::Action* onFinished;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<System.Object> onFinishedObject
    // Size: 0x8
    // Offset: 0x70
    ::System::Action_1<::Il2CppObject*>* onFinishedObject;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Il2CppObject*>*) == 0x8);
    // public System.Object onFinishedParam
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppObject* onFinishedParam;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public OVR.SoundGroup playingSoundGroup
    // Size: 0x8
    // Offset: 0x80
    ::OVR::SoundGroup* playingSoundGroup;
    // Field size check
    static_assert(sizeof(::OVR::SoundGroup*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public OVR.EmitterChannel channel
    ::OVR::EmitterChannel& dyn_channel();
    // Get instance field reference: public System.Boolean disableSpatialization
    bool& dyn_disableSpatialization();
    // Get instance field reference: private OVR.SoundEmitter/OVR.FadeState state
    ::OVR::SoundEmitter::FadeState& dyn_state();
    // Get instance field reference: public UnityEngine.AudioSource audioSource
    ::UnityEngine::AudioSource*& dyn_audioSource();
    // Get instance field reference: public OVR.SoundPriority priority
    ::OVR::SoundPriority& dyn_priority();
    // Get instance field reference: public ONSPAudioSource osp
    ::GlobalNamespace::ONSPAudioSource*& dyn_osp();
    // Get instance field reference: public System.Single endPlayTime
    float& dyn_endPlayTime();
    // Get instance field reference: private UnityEngine.Transform lastParentTransform
    ::UnityEngine::Transform*& dyn_lastParentTransform();
    // Get instance field reference: public System.Single defaultVolume
    float& dyn_defaultVolume();
    // Get instance field reference: public UnityEngine.Transform defaultParent
    ::UnityEngine::Transform*& dyn_defaultParent();
    // Get instance field reference: public System.Int32 originalIdx
    int& dyn_originalIdx();
    // Get instance field reference: public System.Action onFinished
    ::System::Action*& dyn_onFinished();
    // Get instance field reference: public System.Action`1<System.Object> onFinishedObject
    ::System::Action_1<::Il2CppObject*>*& dyn_onFinishedObject();
    // Get instance field reference: public System.Object onFinishedParam
    ::Il2CppObject*& dyn_onFinishedParam();
    // Get instance field reference: public OVR.SoundGroup playingSoundGroup
    ::OVR::SoundGroup*& dyn_playingSoundGroup();
    // public System.Single get_volume()
    // Offset: 0x12A5040
    float get_volume();
    // public System.Void set_volume(System.Single value)
    // Offset: 0x12A6AE8
    void set_volume(float value);
    // public System.Single get_pitch()
    // Offset: 0x12A6B04
    float get_pitch();
    // public System.Void set_pitch(System.Single value)
    // Offset: 0x12A6B20
    void set_pitch(float value);
    // public UnityEngine.AudioClip get_clip()
    // Offset: 0x12A6B3C
    ::UnityEngine::AudioClip* get_clip();
    // public System.Void set_clip(UnityEngine.AudioClip value)
    // Offset: 0x12A6B58
    void set_clip(::UnityEngine::AudioClip* value);
    // public System.Single get_time()
    // Offset: 0x12A6B74
    float get_time();
    // public System.Void set_time(System.Single value)
    // Offset: 0x12A2F98
    void set_time(float value);
    // public System.Single get_length()
    // Offset: 0x12A6B90
    float get_length();
    // public System.Boolean get_loop()
    // Offset: 0x12A6C44
    bool get_loop();
    // public System.Void set_loop(System.Boolean value)
    // Offset: 0x12A6C60
    void set_loop(bool value);
    // public System.Boolean get_mute()
    // Offset: 0x12A6C80
    bool get_mute();
    // public System.Void set_mute(System.Boolean value)
    // Offset: 0x12A6C9C
    void set_mute(bool value);
    // public UnityEngine.AudioVelocityUpdateMode get_velocityUpdateMode()
    // Offset: 0x12A6CBC
    ::UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode();
    // public System.Void set_velocityUpdateMode(UnityEngine.AudioVelocityUpdateMode value)
    // Offset: 0x12A6CD8
    void set_velocityUpdateMode(::UnityEngine::AudioVelocityUpdateMode value);
    // public System.Boolean get_isPlaying()
    // Offset: 0x12A6CF4
    bool get_isPlaying();
    // private System.Void Awake()
    // Offset: 0x12A6D10
    void Awake();
    // public System.Void SetPlayingSoundGroup(OVR.SoundGroup soundGroup)
    // Offset: 0x12A4FFC
    void SetPlayingSoundGroup(::OVR::SoundGroup* soundGroup);
    // public System.Void SetOnFinished(System.Action onFinished)
    // Offset: 0x12A6F00
    void SetOnFinished(::System::Action* onFinished);
    // public System.Void SetOnFinished(System.Action`1<System.Object> onFinished, System.Object obj)
    // Offset: 0x12A531C
    void SetOnFinished(::System::Action_1<::Il2CppObject*>* onFinished, ::Il2CppObject* obj);
    // public System.Void SetChannel(System.Int32 _channel)
    // Offset: 0x12A6F08
    void SetChannel(int _channel);
    // public System.Void SetDefaultParent(UnityEngine.Transform parent)
    // Offset: 0x12A6F10
    void SetDefaultParent(::UnityEngine::Transform* parent);
    // public System.Void SetAudioMixer(UnityEngine.Audio.AudioMixerGroup _mixer)
    // Offset: 0x12A5A9C
    void SetAudioMixer(::UnityEngine::Audio::AudioMixerGroup* _mixer);
    // public System.Boolean IsPlaying()
    // Offset: 0x12A2324
    bool IsPlaying();
    // public System.Void Play()
    // Offset: 0x12A6F18
    void Play();
    // public System.Void Pause()
    // Offset: 0x12A6F78
    void Pause();
    // public System.Void Stop()
    // Offset: 0x12A214C
    void Stop();
    // private System.Int32 GetSampleTime()
    // Offset: 0x12A6FEC
    int GetSampleTime();
    // public System.Void ParentTo(UnityEngine.Transform parent)
    // Offset: 0x12A5548
    void ParentTo(::UnityEngine::Transform* parent);
    // public System.Void DetachFromParent()
    // Offset: 0x12A57A8
    void DetachFromParent();
    // public System.Void ResetParent(UnityEngine.Transform parent)
    // Offset: 0x12A2734
    void ResetParent(::UnityEngine::Transform* parent);
    // public System.Void SyncTo(OVR.SoundEmitter other, System.Single fadeTime, System.Single toVolume)
    // Offset: 0x12A7044
    void SyncTo(::OVR::SoundEmitter* other, float fadeTime, float toVolume);
    // private System.Collections.IEnumerator DelayedSyncTo(OVR.SoundEmitter other, System.Single fadeTime, System.Single toVolume)
    // Offset: 0x12A7070
    ::System::Collections::IEnumerator* DelayedSyncTo(::OVR::SoundEmitter* other, float fadeTime, float toVolume);
    // public System.Void FadeTo(System.Single fadeTime, System.Single toVolume)
    // Offset: 0x12A7128
    void FadeTo(float fadeTime, float toVolume);
    // public System.Void FadeIn(System.Single fadeTime, System.Single defaultVolume)
    // Offset: 0x12A2B24
    void FadeIn(float fadeTime, float defaultVolume);
    // public System.Void FadeIn(System.Single fadeTime)
    // Offset: 0x12A2BA0
    void FadeIn(float fadeTime);
    // public System.Void FadeOut(System.Single fadeTime)
    // Offset: 0x12A29D8
    void FadeOut(float fadeTime);
    // public System.Void FadeOutDelayed(System.Single delayedSecs, System.Single fadeTime)
    // Offset: 0x12A2828
    void FadeOutDelayed(float delayedSecs, float fadeTime);
    // private System.Collections.IEnumerator FadeSoundChannelTo(System.Single fadeTime, System.Single toVolume)
    // Offset: 0x12A7190
    ::System::Collections::IEnumerator* FadeSoundChannelTo(float fadeTime, float toVolume);
    // private System.Collections.IEnumerator FadeSoundChannel(System.Single delaySecs, System.Single fadeTime, OVR.Fade fadeType, System.Single defaultVolume)
    // Offset: 0x12A7210
    ::System::Collections::IEnumerator* FadeSoundChannel(float delaySecs, float fadeTime, ::OVR::Fade fadeType, float defaultVolume);
    // public System.Void .ctor()
    // Offset: 0x12A730C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoundEmitter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::SoundEmitter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoundEmitter*, creationType>()));
    }
  }; // OVR.SoundEmitter
  #pragma pack(pop)
  static check_size<sizeof(SoundEmitter), 128 + sizeof(::OVR::SoundGroup*)> __OVR_SoundEmitterSizeCheck;
  static_assert(sizeof(SoundEmitter) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::SoundEmitter::FadeState, "OVR", "SoundEmitter/FadeState");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::SoundEmitter::get_volume
// Il2CppName: get_volume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OVR::SoundEmitter::*)()>(&OVR::SoundEmitter::get_volume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "get_volume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::set_volume
// Il2CppName: set_volume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(float)>(&OVR::SoundEmitter::set_volume)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "set_volume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::get_pitch
// Il2CppName: get_pitch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OVR::SoundEmitter::*)()>(&OVR::SoundEmitter::get_pitch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "get_pitch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::set_pitch
// Il2CppName: set_pitch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(float)>(&OVR::SoundEmitter::set_pitch)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "set_pitch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::get_clip
// Il2CppName: get_clip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (OVR::SoundEmitter::*)()>(&OVR::SoundEmitter::get_clip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "get_clip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::set_clip
// Il2CppName: set_clip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(::UnityEngine::AudioClip*)>(&OVR::SoundEmitter::set_clip)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "set_clip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OVR::SoundEmitter::*)()>(&OVR::SoundEmitter::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(float)>(&OVR::SoundEmitter::set_time)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OVR::SoundEmitter::*)()>(&OVR::SoundEmitter::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::get_loop
// Il2CppName: get_loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::SoundEmitter::*)()>(&OVR::SoundEmitter::get_loop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "get_loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::set_loop
// Il2CppName: set_loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(bool)>(&OVR::SoundEmitter::set_loop)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "set_loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::get_mute
// Il2CppName: get_mute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::SoundEmitter::*)()>(&OVR::SoundEmitter::get_mute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "get_mute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::set_mute
// Il2CppName: set_mute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(bool)>(&OVR::SoundEmitter::set_mute)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "set_mute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::get_velocityUpdateMode
// Il2CppName: get_velocityUpdateMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioVelocityUpdateMode (OVR::SoundEmitter::*)()>(&OVR::SoundEmitter::get_velocityUpdateMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "get_velocityUpdateMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::set_velocityUpdateMode
// Il2CppName: set_velocityUpdateMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(::UnityEngine::AudioVelocityUpdateMode)>(&OVR::SoundEmitter::set_velocityUpdateMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioVelocityUpdateMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "set_velocityUpdateMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::get_isPlaying
// Il2CppName: get_isPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::SoundEmitter::*)()>(&OVR::SoundEmitter::get_isPlaying)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "get_isPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)()>(&OVR::SoundEmitter::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::SetPlayingSoundGroup
// Il2CppName: SetPlayingSoundGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(::OVR::SoundGroup*)>(&OVR::SoundEmitter::SetPlayingSoundGroup)> {
  static const MethodInfo* get() {
    static auto* soundGroup = &::il2cpp_utils::GetClassFromName("OVR", "SoundGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "SetPlayingSoundGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundGroup});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::SetOnFinished
// Il2CppName: SetOnFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(::System::Action*)>(&OVR::SoundEmitter::SetOnFinished)> {
  static const MethodInfo* get() {
    static auto* onFinished = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "SetOnFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onFinished});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::SetOnFinished
// Il2CppName: SetOnFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(::System::Action_1<::Il2CppObject*>*, ::Il2CppObject*)>(&OVR::SoundEmitter::SetOnFinished)> {
  static const MethodInfo* get() {
    static auto* onFinished = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "SetOnFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onFinished, obj});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::SetChannel
// Il2CppName: SetChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(int)>(&OVR::SoundEmitter::SetChannel)> {
  static const MethodInfo* get() {
    static auto* _channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "SetChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_channel});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::SetDefaultParent
// Il2CppName: SetDefaultParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(::UnityEngine::Transform*)>(&OVR::SoundEmitter::SetDefaultParent)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "SetDefaultParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::SetAudioMixer
// Il2CppName: SetAudioMixer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(::UnityEngine::Audio::AudioMixerGroup*)>(&OVR::SoundEmitter::SetAudioMixer)> {
  static const MethodInfo* get() {
    static auto* _mixer = &::il2cpp_utils::GetClassFromName("UnityEngine.Audio", "AudioMixerGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "SetAudioMixer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_mixer});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::IsPlaying
// Il2CppName: IsPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::SoundEmitter::*)()>(&OVR::SoundEmitter::IsPlaying)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "IsPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)()>(&OVR::SoundEmitter::Play)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)()>(&OVR::SoundEmitter::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)()>(&OVR::SoundEmitter::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::GetSampleTime
// Il2CppName: GetSampleTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVR::SoundEmitter::*)()>(&OVR::SoundEmitter::GetSampleTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "GetSampleTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::ParentTo
// Il2CppName: ParentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(::UnityEngine::Transform*)>(&OVR::SoundEmitter::ParentTo)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "ParentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::DetachFromParent
// Il2CppName: DetachFromParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)()>(&OVR::SoundEmitter::DetachFromParent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "DetachFromParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::ResetParent
// Il2CppName: ResetParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(::UnityEngine::Transform*)>(&OVR::SoundEmitter::ResetParent)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "ResetParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::SyncTo
// Il2CppName: SyncTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(::OVR::SoundEmitter*, float, float)>(&OVR::SoundEmitter::SyncTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("OVR", "SoundEmitter")->byval_arg;
    static auto* fadeTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* toVolume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "SyncTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other, fadeTime, toVolume});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::DelayedSyncTo
// Il2CppName: DelayedSyncTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (OVR::SoundEmitter::*)(::OVR::SoundEmitter*, float, float)>(&OVR::SoundEmitter::DelayedSyncTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("OVR", "SoundEmitter")->byval_arg;
    static auto* fadeTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* toVolume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "DelayedSyncTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other, fadeTime, toVolume});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::FadeTo
// Il2CppName: FadeTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(float, float)>(&OVR::SoundEmitter::FadeTo)> {
  static const MethodInfo* get() {
    static auto* fadeTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* toVolume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "FadeTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fadeTime, toVolume});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::FadeIn
// Il2CppName: FadeIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(float, float)>(&OVR::SoundEmitter::FadeIn)> {
  static const MethodInfo* get() {
    static auto* fadeTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* defaultVolume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "FadeIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fadeTime, defaultVolume});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::FadeIn
// Il2CppName: FadeIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(float)>(&OVR::SoundEmitter::FadeIn)> {
  static const MethodInfo* get() {
    static auto* fadeTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "FadeIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fadeTime});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::FadeOut
// Il2CppName: FadeOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(float)>(&OVR::SoundEmitter::FadeOut)> {
  static const MethodInfo* get() {
    static auto* fadeTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "FadeOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fadeTime});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::FadeOutDelayed
// Il2CppName: FadeOutDelayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::*)(float, float)>(&OVR::SoundEmitter::FadeOutDelayed)> {
  static const MethodInfo* get() {
    static auto* delayedSecs = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fadeTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "FadeOutDelayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delayedSecs, fadeTime});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::FadeSoundChannelTo
// Il2CppName: FadeSoundChannelTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (OVR::SoundEmitter::*)(float, float)>(&OVR::SoundEmitter::FadeSoundChannelTo)> {
  static const MethodInfo* get() {
    static auto* fadeTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* toVolume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "FadeSoundChannelTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fadeTime, toVolume});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::FadeSoundChannel
// Il2CppName: FadeSoundChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (OVR::SoundEmitter::*)(float, float, ::OVR::Fade, float)>(&OVR::SoundEmitter::FadeSoundChannel)> {
  static const MethodInfo* get() {
    static auto* delaySecs = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fadeTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fadeType = &::il2cpp_utils::GetClassFromName("OVR", "Fade")->byval_arg;
    static auto* defaultVolume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter*), "FadeSoundChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delaySecs, fadeTime, fadeType, defaultVolume});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
