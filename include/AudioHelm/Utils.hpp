// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: System.Double
#include "System/Double.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: Utils
  class Utils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::Utils);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Utils*, "AudioHelm", "Utils");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.Utils
  // [TokenAttribute] Offset: FFFFFFFF
  class Utils : public ::Il2CppObject {
    public:
    // static field const value: static public System.Int32 kMidiSize
    static constexpr const int kMidiSize = 128;
    // Get static field: static public System.Int32 kMidiSize
    static int _get_kMidiSize();
    // Set static field: static public System.Int32 kMidiSize
    static void _set_kMidiSize(int value);
    // static field const value: static public System.Int32 kNotesPerOctave
    static constexpr const int kNotesPerOctave = 12;
    // Get static field: static public System.Int32 kNotesPerOctave
    static int _get_kNotesPerOctave();
    // Set static field: static public System.Int32 kNotesPerOctave
    static void _set_kNotesPerOctave(int value);
    // static field const value: static public System.Int32 kMaxChannels
    static constexpr const int kMaxChannels = 16;
    // Get static field: static public System.Int32 kMaxChannels
    static int _get_kMaxChannels();
    // Set static field: static public System.Int32 kMaxChannels
    static void _set_kMaxChannels(int value);
    // static field const value: static public System.Single kBpmToSixteenths
    static constexpr const float kBpmToSixteenths = 0.06666667;
    // Get static field: static public System.Single kBpmToSixteenths
    static float _get_kBpmToSixteenths();
    // Set static field: static public System.Single kBpmToSixteenths
    static void _set_kBpmToSixteenths(float value);
    // static field const value: static public System.Double kSecondsPerMinute
    static constexpr const double kSecondsPerMinute = 60;
    // Get static field: static public System.Double kSecondsPerMinute
    static double _get_kSecondsPerMinute();
    // Set static field: static public System.Double kSecondsPerMinute
    static void _set_kSecondsPerMinute(double value);
    // static field const value: static public System.Double kSixteenthsPerBeat
    static constexpr const double kSixteenthsPerBeat = 4;
    // Get static field: static public System.Double kSixteenthsPerBeat
    static double _get_kSixteenthsPerBeat();
    // Set static field: static public System.Double kSixteenthsPerBeat
    static void _set_kSixteenthsPerBeat(double value);
    // static field const value: static public System.Int32 kMinOctave
    static constexpr const int kMinOctave = -2;
    // Get static field: static public System.Int32 kMinOctave
    static int _get_kMinOctave();
    // Set static field: static public System.Int32 kMinOctave
    static void _set_kMinOctave(int value);
    // static field const value: static public System.Int32 kMiddleC
    static constexpr const int kMiddleC = 60;
    // Get static field: static public System.Int32 kMiddleC
    static int _get_kMiddleC();
    // Set static field: static public System.Int32 kMiddleC
    static void _set_kMiddleC(int value);
    // Get static field: static private System.Boolean[] blackKeys
    static ::ArrayW<bool> _get_blackKeys();
    // Set static field: static private System.Boolean[] blackKeys
    static void _set_blackKeys(::ArrayW<bool> value);
    // static private System.Void .cctor()
    // Offset: 0x13AD330
    static void _cctor();
    // static public System.Boolean IsBlackKey(System.Int32 key)
    // Offset: 0x13AD0E0
    static bool IsBlackKey(int key);
    // static public System.Boolean IsC(System.Int32 key)
    // Offset: 0x13AD190
    static bool IsC(int key);
    // static public System.Int32 GetOctave(System.Int32 key)
    // Offset: 0x13AD1BC
    static int GetOctave(int key);
    // static public System.Single MidiChangeToRatio(System.Int32 midi)
    // Offset: 0x13AD1DC
    static float MidiChangeToRatio(int midi);
    // static public System.Boolean RangesOverlap(System.Single start, System.Single end, System.Single rangeStart, System.Single rangeEnd)
    // Offset: 0x13AD1EC
    static bool RangesOverlap(float start, float end, float rangeStart, float rangeEnd);
    // static public System.Void InitAudioSource(UnityEngine.AudioSource audio)
    // Offset: 0x13AD21C
    static void InitAudioSource(::UnityEngine::AudioSource* audio);
    // static public T CopyComponent(T original, UnityEngine.GameObject destination)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T CopyComponent(T original, ::UnityEngine::GameObject* destination) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Component*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::Utils::CopyComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("AudioHelm", "Utils", "CopyComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(original), ::il2cpp_utils::ExtractType(destination)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, original, destination);
    }
  }; // AudioHelm.Utils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::Utils::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&AudioHelm::Utils::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Utils*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::Utils::IsBlackKey
// Il2CppName: IsBlackKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&AudioHelm::Utils::IsBlackKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Utils*), "IsBlackKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: AudioHelm::Utils::IsC
// Il2CppName: IsC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&AudioHelm::Utils::IsC)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Utils*), "IsC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: AudioHelm::Utils::GetOctave
// Il2CppName: GetOctave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&AudioHelm::Utils::GetOctave)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Utils*), "GetOctave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: AudioHelm::Utils::MidiChangeToRatio
// Il2CppName: MidiChangeToRatio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(int)>(&AudioHelm::Utils::MidiChangeToRatio)> {
  static const MethodInfo* get() {
    static auto* midi = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Utils*), "MidiChangeToRatio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{midi});
  }
};
// Writing MetadataGetter for method: AudioHelm::Utils::RangesOverlap
// Il2CppName: RangesOverlap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float, float, float, float)>(&AudioHelm::Utils::RangesOverlap)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rangeStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rangeEnd = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Utils*), "RangesOverlap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, rangeStart, rangeEnd});
  }
};
// Writing MetadataGetter for method: AudioHelm::Utils::InitAudioSource
// Il2CppName: InitAudioSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AudioSource*)>(&AudioHelm::Utils::InitAudioSource)> {
  static const MethodInfo* get() {
    static auto* audio = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Utils*), "InitAudioSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audio});
  }
};
// Writing MetadataGetter for method: AudioHelm::Utils::CopyComponent
// Il2CppName: CopyComponent
// Cannot write MetadataGetter for generic methods!
