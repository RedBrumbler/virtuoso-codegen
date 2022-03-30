// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.SoundFXNext
#include "OVR/SoundFXNext.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.AudioRolloffMode
#include "UnityEngine/AudioRolloffMode.hpp"
// Including type: OVR.SoundPriority
#include "OVR/SoundPriority.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: OVR
namespace OVR {
  // Forward declaring type: OSPProps
  class OSPProps;
  // Forward declaring type: SoundGroup
  class SoundGroup;
}
// Forward declaring namespace: UnityEngine::Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioMixerGroup
  class AudioMixerGroup;
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
// Type namespace: OVR
namespace OVR {
  // Forward declaring type: SoundFX
  class SoundFX;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::SoundFX);
DEFINE_IL2CPP_ARG_TYPE(::OVR::SoundFX*, "OVR", "SoundFX");
// Type namespace: OVR
namespace OVR {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: OVR.SoundFX
  // [TokenAttribute] Offset: FFFFFFFF
  class SoundFX : public ::Il2CppObject {
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
    // [TooltipAttribute] Offset: 0x5D5A34
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [TooltipAttribute] Offset: 0x5D5A6C
    // public OVR.SoundFXNext playback
    // Size: 0x14
    // Offset: 0x18
    ::OVR::SoundFXNext playback;
    // Field size check
    static_assert(sizeof(::OVR::SoundFXNext) == 0x14);
    // [RangeAttribute] Offset: 0x5D5AA4
    // [TooltipAttribute] Offset: 0x5D5AA4
    // public System.Single volume
    // Size: 0x4
    // Offset: 0x1C
    float volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x5D5AF8
    // [MinMaxAttribute] Offset: 0x5D5AF8
    // public UnityEngine.Vector2 pitchVariance
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Vector2 pitchVariance;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [TooltipAttribute] Offset: 0x5D5B54
    // [MinMaxAttribute] Offset: 0x5D5B54
    // public UnityEngine.Vector2 falloffDistance
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Vector2 falloffDistance;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [TooltipAttribute] Offset: 0x5D5BB4
    // public UnityEngine.AudioRolloffMode falloffCurve
    // Size: 0x14
    // Offset: 0x30
    ::UnityEngine::AudioRolloffMode falloffCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioRolloffMode) == 0x14);
    // [TooltipAttribute] Offset: 0x5D5BEC
    // public UnityEngine.AnimationCurve volumeFalloffCurve
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AnimationCurve* volumeFalloffCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0x5D5C24
    // public UnityEngine.AnimationCurve reverbZoneMix
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AnimationCurve* reverbZoneMix;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0x5D5C5C
    // [RangeAttribute] Offset: 0x5D5C5C
    // public System.Single spread
    // Size: 0x4
    // Offset: 0x48
    float spread;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x5D5CB4
    // [RangeAttribute] Offset: 0x5D5CB4
    // public System.Single pctChanceToPlay
    // Size: 0x4
    // Offset: 0x4C
    float pctChanceToPlay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x5D5D08
    // public OVR.SoundPriority priority
    // Size: 0x14
    // Offset: 0x50
    ::OVR::SoundPriority priority;
    // Field size check
    static_assert(sizeof(::OVR::SoundPriority) == 0x14);
    // [TooltipAttribute] Offset: 0x5D5D40
    // [MinMaxAttribute] Offset: 0x5D5D40
    // public UnityEngine.Vector2 delay
    // Size: 0x8
    // Offset: 0x54
    ::UnityEngine::Vector2 delay;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [TooltipAttribute] Offset: 0x5D5D9C
    // public System.Boolean looping
    // Size: 0x1
    // Offset: 0x5C
    bool looping;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: looping and: ospProps
    char __padding12[0x3] = {};
    // public OVR.OSPProps ospProps
    // Size: 0x8
    // Offset: 0x60
    ::OVR::OSPProps* ospProps;
    // Field size check
    static_assert(sizeof(::OVR::OSPProps*) == 0x8);
    // [TooltipAttribute] Offset: 0x5D5DD4
    // public UnityEngine.AudioClip[] soundClips
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::UnityEngine::AudioClip*> soundClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // public System.Boolean visibilityToggle
    // Size: 0x1
    // Offset: 0x70
    bool visibilityToggle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: visibilityToggle and: soundGroup
    char __padding15[0x7] = {};
    // private OVR.SoundGroup soundGroup
    // Size: 0x8
    // Offset: 0x78
    ::OVR::SoundGroup* soundGroup;
    // Field size check
    static_assert(sizeof(::OVR::SoundGroup*) == 0x8);
    // private System.Int32 lastIdx
    // Size: 0x4
    // Offset: 0x80
    int lastIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 playingIdx
    // Size: 0x4
    // Offset: 0x84
    int playingIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.String name
    ::StringW& dyn_name();
    // Get instance field reference: public OVR.SoundFXNext playback
    ::OVR::SoundFXNext& dyn_playback();
    // Get instance field reference: public System.Single volume
    float& dyn_volume();
    // Get instance field reference: public UnityEngine.Vector2 pitchVariance
    ::UnityEngine::Vector2& dyn_pitchVariance();
    // Get instance field reference: public UnityEngine.Vector2 falloffDistance
    ::UnityEngine::Vector2& dyn_falloffDistance();
    // Get instance field reference: public UnityEngine.AudioRolloffMode falloffCurve
    ::UnityEngine::AudioRolloffMode& dyn_falloffCurve();
    // Get instance field reference: public UnityEngine.AnimationCurve volumeFalloffCurve
    ::UnityEngine::AnimationCurve*& dyn_volumeFalloffCurve();
    // Get instance field reference: public UnityEngine.AnimationCurve reverbZoneMix
    ::UnityEngine::AnimationCurve*& dyn_reverbZoneMix();
    // Get instance field reference: public System.Single spread
    float& dyn_spread();
    // Get instance field reference: public System.Single pctChanceToPlay
    float& dyn_pctChanceToPlay();
    // Get instance field reference: public OVR.SoundPriority priority
    ::OVR::SoundPriority& dyn_priority();
    // Get instance field reference: public UnityEngine.Vector2 delay
    ::UnityEngine::Vector2& dyn_delay();
    // Get instance field reference: public System.Boolean looping
    bool& dyn_looping();
    // Get instance field reference: public OVR.OSPProps ospProps
    ::OVR::OSPProps*& dyn_ospProps();
    // Get instance field reference: public UnityEngine.AudioClip[] soundClips
    ::ArrayW<::UnityEngine::AudioClip*>& dyn_soundClips();
    // Get instance field reference: public System.Boolean visibilityToggle
    bool& dyn_visibilityToggle();
    // Get instance field reference: private OVR.SoundGroup soundGroup
    ::OVR::SoundGroup*& dyn_soundGroup();
    // Get instance field reference: private System.Int32 lastIdx
    int& dyn_lastIdx();
    // Get instance field reference: private System.Int32 playingIdx
    int& dyn_playingIdx();
    // public System.Int32 get_Length()
    // Offset: 0x12A7324
    int get_Length();
    // public System.Boolean get_IsValid()
    // Offset: 0x12A7340
    bool get_IsValid();
    // public OVR.SoundGroup get_Group()
    // Offset: 0x12A73E0
    ::OVR::SoundGroup* get_Group();
    // public System.Void set_Group(OVR.SoundGroup value)
    // Offset: 0x12A73E8
    void set_Group(::OVR::SoundGroup* value);
    // public System.Single get_MaxFalloffDistSquared()
    // Offset: 0x12A4F08
    float get_MaxFalloffDistSquared();
    // public System.Single get_GroupVolumeOverride()
    // Offset: 0x12A4F3C
    float get_GroupVolumeOverride();
    // public UnityEngine.AudioClip GetClip()
    // Offset: 0x12A4E38
    ::UnityEngine::AudioClip* GetClip();
    // public UnityEngine.Audio.AudioMixerGroup GetMixerGroup(UnityEngine.Audio.AudioMixerGroup defaultMixerGroup)
    // Offset: 0x12A4F60
    ::UnityEngine::Audio::AudioMixerGroup* GetMixerGroup(::UnityEngine::Audio::AudioMixerGroup* defaultMixerGroup);
    // public System.Boolean ReachedGroupPlayLimit()
    // Offset: 0x12A4F14
    bool ReachedGroupPlayLimit();
    // public System.Single GetClipLength(System.Int32 idx)
    // Offset: 0x12A7410
    float GetClipLength(int idx);
    // public System.Single GetPitch()
    // Offset: 0x12A4F54
    float GetPitch();
    // public System.Int32 PlaySound(System.Single delaySecs)
    // Offset: 0x12A7508
    int PlaySound(float delaySecs);
    // public System.Int32 PlaySoundAt(UnityEngine.Vector3 pos, System.Single delaySecs, System.Single volumeOverride, System.Single pitchMultiplier)
    // Offset: 0x12A75E0
    int PlaySoundAt(::UnityEngine::Vector3 pos, float delaySecs, float volumeOverride, float pitchMultiplier);
    // public System.Void SetOnFinished(System.Action onFinished)
    // Offset: 0x12A76F0
    void SetOnFinished(::System::Action* onFinished);
    // public System.Void SetOnFinished(System.Action`1<System.Object> onFinished, System.Object obj)
    // Offset: 0x12A7778
    void SetOnFinished(::System::Action_1<::Il2CppObject*>* onFinished, ::Il2CppObject* obj);
    // public System.Boolean StopSound()
    // Offset: 0x12A7808
    bool StopSound();
    // public System.Void AttachToParent(UnityEngine.Transform parent)
    // Offset: 0x12A7890
    void AttachToParent(::UnityEngine::Transform* parent);
    // public System.Void DetachFromParent()
    // Offset: 0x12A7918
    void DetachFromParent();
    // public System.Void .ctor()
    // Offset: 0x12A64CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoundFX* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::SoundFX::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoundFX*, creationType>()));
    }
  }; // OVR.SoundFX
  #pragma pack(pop)
  static check_size<sizeof(SoundFX), 132 + sizeof(int)> __OVR_SoundFXSizeCheck;
  static_assert(sizeof(SoundFX) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::SoundFX::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVR::SoundFX::*)()>(&OVR::SoundFX::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::SoundFX::*)()>(&OVR::SoundFX::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::get_Group
// Il2CppName: get_Group
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::SoundGroup* (OVR::SoundFX::*)()>(&OVR::SoundFX::get_Group)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "get_Group", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::set_Group
// Il2CppName: set_Group
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundFX::*)(::OVR::SoundGroup*)>(&OVR::SoundFX::set_Group)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("OVR", "SoundGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "set_Group", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::get_MaxFalloffDistSquared
// Il2CppName: get_MaxFalloffDistSquared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OVR::SoundFX::*)()>(&OVR::SoundFX::get_MaxFalloffDistSquared)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "get_MaxFalloffDistSquared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::get_GroupVolumeOverride
// Il2CppName: get_GroupVolumeOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OVR::SoundFX::*)()>(&OVR::SoundFX::get_GroupVolumeOverride)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "get_GroupVolumeOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::GetClip
// Il2CppName: GetClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (OVR::SoundFX::*)()>(&OVR::SoundFX::GetClip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "GetClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::GetMixerGroup
// Il2CppName: GetMixerGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Audio::AudioMixerGroup* (OVR::SoundFX::*)(::UnityEngine::Audio::AudioMixerGroup*)>(&OVR::SoundFX::GetMixerGroup)> {
  static const MethodInfo* get() {
    static auto* defaultMixerGroup = &::il2cpp_utils::GetClassFromName("UnityEngine.Audio", "AudioMixerGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "GetMixerGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{defaultMixerGroup});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::ReachedGroupPlayLimit
// Il2CppName: ReachedGroupPlayLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::SoundFX::*)()>(&OVR::SoundFX::ReachedGroupPlayLimit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "ReachedGroupPlayLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::GetClipLength
// Il2CppName: GetClipLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OVR::SoundFX::*)(int)>(&OVR::SoundFX::GetClipLength)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "GetClipLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::GetPitch
// Il2CppName: GetPitch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OVR::SoundFX::*)()>(&OVR::SoundFX::GetPitch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "GetPitch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::PlaySound
// Il2CppName: PlaySound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVR::SoundFX::*)(float)>(&OVR::SoundFX::PlaySound)> {
  static const MethodInfo* get() {
    static auto* delaySecs = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "PlaySound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delaySecs});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::PlaySoundAt
// Il2CppName: PlaySoundAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVR::SoundFX::*)(::UnityEngine::Vector3, float, float, float)>(&OVR::SoundFX::PlaySoundAt)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* delaySecs = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* volumeOverride = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pitchMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "PlaySoundAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, delaySecs, volumeOverride, pitchMultiplier});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::SetOnFinished
// Il2CppName: SetOnFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundFX::*)(::System::Action*)>(&OVR::SoundFX::SetOnFinished)> {
  static const MethodInfo* get() {
    static auto* onFinished = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "SetOnFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onFinished});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::SetOnFinished
// Il2CppName: SetOnFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundFX::*)(::System::Action_1<::Il2CppObject*>*, ::Il2CppObject*)>(&OVR::SoundFX::SetOnFinished)> {
  static const MethodInfo* get() {
    static auto* onFinished = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "SetOnFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onFinished, obj});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::StopSound
// Il2CppName: StopSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::SoundFX::*)()>(&OVR::SoundFX::StopSound)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "StopSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::AttachToParent
// Il2CppName: AttachToParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundFX::*)(::UnityEngine::Transform*)>(&OVR::SoundFX::AttachToParent)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "AttachToParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::DetachFromParent
// Il2CppName: DetachFromParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundFX::*)()>(&OVR::SoundFX::DetachFromParent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundFX*), "DetachFromParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundFX::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!