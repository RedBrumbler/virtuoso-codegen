// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
// Including type: UnityEngine.Timeline.ITimelineClipAsset
#include "UnityEngine/Timeline/ITimelineClipAsset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: AudioClipProperties
  class AudioClipProperties;
  // Forward declaring type: ClipCaps
  struct ClipCaps;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: AudioPlayableAsset
  class AudioPlayableAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::AudioPlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AudioPlayableAsset*, "UnityEngine.Timeline", "AudioPlayableAsset");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.AudioPlayableAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioPlayableAsset : public ::UnityEngine::Playables::PlayableAsset/*, public ::UnityEngine::Timeline::ITimelineClipAsset*/ {
    public:
    // Nested type: ::UnityEngine::Timeline::AudioPlayableAsset::$get_outputs$d__16
    class $get_outputs$d__16;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.AudioClip m_Clip
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioClip* m_Clip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private System.Boolean m_Loop
    // Size: 0x1
    // Offset: 0x20
    bool m_Loop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_Loop and: m_bufferingTime
    char __padding1[0x3] = {};
    // private System.Single m_bufferingTime
    // Size: 0x4
    // Offset: 0x24
    float m_bufferingTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Timeline.AudioClipProperties m_ClipProperties
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Timeline::AudioClipProperties* m_ClipProperties;
    // Field size check
    static_assert(sizeof(::UnityEngine::Timeline::AudioClipProperties*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Timeline::ITimelineClipAsset
    operator ::UnityEngine::Timeline::ITimelineClipAsset() noexcept {
      return *reinterpret_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.AudioClip m_Clip
    ::UnityEngine::AudioClip*& dyn_m_Clip();
    // Get instance field reference: private System.Boolean m_Loop
    bool& dyn_m_Loop();
    // Get instance field reference: private System.Single m_bufferingTime
    float& dyn_m_bufferingTime();
    // Get instance field reference: private UnityEngine.Timeline.AudioClipProperties m_ClipProperties
    ::UnityEngine::Timeline::AudioClipProperties*& dyn_m_ClipProperties();
    // System.Single get_bufferingTime()
    // Offset: 0xA78BF0
    float get_bufferingTime();
    // System.Void set_bufferingTime(System.Single value)
    // Offset: 0xA78BF8
    void set_bufferingTime(float value);
    // public UnityEngine.AudioClip get_clip()
    // Offset: 0xA78C00
    ::UnityEngine::AudioClip* get_clip();
    // public System.Void set_clip(UnityEngine.AudioClip value)
    // Offset: 0xA78C08
    void set_clip(::UnityEngine::AudioClip* value);
    // public System.Boolean get_loop()
    // Offset: 0xA78C10
    bool get_loop();
    // public System.Void set_loop(System.Boolean value)
    // Offset: 0xA78C18
    void set_loop(bool value);
    // public UnityEngine.Timeline.ClipCaps get_clipCaps()
    // Offset: 0xA78E84
    ::UnityEngine::Timeline::ClipCaps get_clipCaps();
    // public override System.Double get_duration()
    // Offset: 0xA78C24
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Double PlayableAsset::get_duration()
    double get_duration();
    // public override System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> get_outputs()
    // Offset: 0xA78CE4
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> PlayableAsset::get_outputs()
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();
    // public System.Void .ctor()
    // Offset: 0xA78E90
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioPlayableAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::AudioPlayableAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioPlayableAsset*, creationType>()));
    }
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    // Offset: 0xA78D50
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);
  }; // UnityEngine.Timeline.AudioPlayableAsset
  #pragma pack(pop)
  static check_size<sizeof(AudioPlayableAsset), 40 + sizeof(::UnityEngine::Timeline::AudioClipProperties*)> __UnityEngine_Timeline_AudioPlayableAssetSizeCheck;
  static_assert(sizeof(AudioPlayableAsset) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioPlayableAsset::get_bufferingTime
// Il2CppName: get_bufferingTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Timeline::AudioPlayableAsset::*)()>(&UnityEngine::Timeline::AudioPlayableAsset::get_bufferingTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AudioPlayableAsset*), "get_bufferingTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioPlayableAsset::set_bufferingTime
// Il2CppName: set_bufferingTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AudioPlayableAsset::*)(float)>(&UnityEngine::Timeline::AudioPlayableAsset::set_bufferingTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AudioPlayableAsset*), "set_bufferingTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioPlayableAsset::get_clip
// Il2CppName: get_clip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (UnityEngine::Timeline::AudioPlayableAsset::*)()>(&UnityEngine::Timeline::AudioPlayableAsset::get_clip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AudioPlayableAsset*), "get_clip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioPlayableAsset::set_clip
// Il2CppName: set_clip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AudioPlayableAsset::*)(::UnityEngine::AudioClip*)>(&UnityEngine::Timeline::AudioPlayableAsset::set_clip)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AudioPlayableAsset*), "set_clip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioPlayableAsset::get_loop
// Il2CppName: get_loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::AudioPlayableAsset::*)()>(&UnityEngine::Timeline::AudioPlayableAsset::get_loop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AudioPlayableAsset*), "get_loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioPlayableAsset::set_loop
// Il2CppName: set_loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AudioPlayableAsset::*)(bool)>(&UnityEngine::Timeline::AudioPlayableAsset::set_loop)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AudioPlayableAsset*), "set_loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioPlayableAsset::get_clipCaps
// Il2CppName: get_clipCaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::ClipCaps (UnityEngine::Timeline::AudioPlayableAsset::*)()>(&UnityEngine::Timeline::AudioPlayableAsset::get_clipCaps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AudioPlayableAsset*), "get_clipCaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioPlayableAsset::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Timeline::AudioPlayableAsset::*)()>(&UnityEngine::Timeline::AudioPlayableAsset::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AudioPlayableAsset*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioPlayableAsset::get_outputs
// Il2CppName: get_outputs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* (UnityEngine::Timeline::AudioPlayableAsset::*)()>(&UnityEngine::Timeline::AudioPlayableAsset::get_outputs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AudioPlayableAsset*), "get_outputs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioPlayableAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioPlayableAsset::CreatePlayable
// Il2CppName: CreatePlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (UnityEngine::Timeline::AudioPlayableAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&UnityEngine::Timeline::AudioPlayableAsset::CreatePlayable)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AudioPlayableAsset*), "CreatePlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, go});
  }
};
