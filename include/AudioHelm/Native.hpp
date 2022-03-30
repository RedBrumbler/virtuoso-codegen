// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: Native
  class Native;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::Native);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Native*, "AudioHelm", "Native");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.Native
  // [TokenAttribute] Offset: FFFFFFFF
  class Native : public ::Il2CppObject {
    public:
    // static public System.Void HelmNoteOn(System.Int32 channel, System.Int32 note, System.Single velocity)
    // Offset: 0xA0B89C
    static void HelmNoteOn(int channel, int note, float velocity);
    // static public System.Void HelmNoteOff(System.Int32 channel, System.Int32 note)
    // Offset: 0xA0B93C
    static void HelmNoteOff(int channel, int note);
    // static public System.Void HelmFrequencyOn(System.Int32 channel, System.Single frequency, System.Single velocity)
    // Offset: 0xA0B9CC
    static void HelmFrequencyOn(int channel, float frequency, float velocity);
    // static public System.Void HelmFrequencyOff(System.Int32 channel, System.Single frequency)
    // Offset: 0xA0BA60
    static void HelmFrequencyOff(int channel, float frequency);
    // static public System.Void HelmAllNotesOff(System.Int32 channel)
    // Offset: 0xA0BAF0
    static void HelmAllNotesOff(int channel);
    // static public System.Void HelmSetPitchWheel(System.Int32 channel, System.Single value)
    // Offset: 0xA0BB6C
    static void HelmSetPitchWheel(int channel, float value);
    // static public System.Void HelmSetModWheel(System.Int32 channel, System.Single value)
    // Offset: 0xA0BBFC
    static void HelmSetModWheel(int channel, float value);
    // static public System.Void HelmSetAftertouch(System.Int32 channel, System.Int32 note, System.Single value)
    // Offset: 0xA0BC88
    static void HelmSetAftertouch(int channel, int note, float value);
    // static public System.Void HelmClearModulations(System.Int32 channel)
    // Offset: 0xA0BD28
    static void HelmClearModulations(int channel);
    // static public System.Void HelmAddModulation(System.Int32 channel, System.Int32 index, System.String source, System.String dest, System.Single amount)
    // Offset: 0xA0BDA8
    static void HelmAddModulation(int channel, int index, ::StringW source, ::StringW dest, float amount);
    // static public System.Single HelmGetParameterMinimum(System.Int32 index)
    // Offset: 0xA0BE88
    static float HelmGetParameterMinimum(int index);
    // static public System.Single HelmGetParameterMaximum(System.Int32 index)
    // Offset: 0xA0BF08
    static float HelmGetParameterMaximum(int index);
    // static public System.Single HelmGetParameterValue(System.Int32 channel, System.Int32 paramIndex)
    // Offset: 0xA0BF88
    static float HelmGetParameterValue(int channel, int paramIndex);
    // static public System.Boolean HelmSetParameterValue(System.Int32 channel, System.Int32 paramIndex, System.Single newValue)
    // Offset: 0xA0C018
    static bool HelmSetParameterValue(int channel, int paramIndex, float newValue);
    // static public System.Single HelmGetParameterPercent(System.Int32 channel, System.Int32 paramIndex)
    // Offset: 0xA0C0C0
    static float HelmGetParameterPercent(int channel, int paramIndex);
    // static public System.Boolean HelmSetParameterPercent(System.Int32 channel, System.Int32 paramIndex, System.Single newPercent)
    // Offset: 0xA0C150
    static bool HelmSetParameterPercent(int channel, int paramIndex, float newPercent);
    // static public System.Boolean HelmSilence(System.Int32 channel, System.Boolean silent)
    // Offset: 0xA0C1F8
    static bool HelmSilence(int channel, bool silent);
    // static public System.Boolean HelmGetBufferData(System.Int32 channel, System.Single[] buffer, System.Int32 samples, System.Int32 numAudioChannels)
    // Offset: 0xA0C290
    static bool HelmGetBufferData(int channel, ::ArrayW<float> buffer, int samples, int numAudioChannels);
    // static public System.Void SetBpm(System.Single bpm)
    // Offset: 0xA0C348
    static void SetBpm(float bpm);
    // static public System.IntPtr CreateSequencer()
    // Offset: 0xA0C3CC
    static ::System::IntPtr CreateSequencer();
    // static public System.Void DeleteSequencer(System.IntPtr sequencer)
    // Offset: 0xA0C43C
    static void DeleteSequencer(::System::IntPtr sequencer);
    // static public System.Void EnableSequencer(System.IntPtr sequencer, System.Boolean enable)
    // Offset: 0xA0C4B8
    static void EnableSequencer(::System::IntPtr sequencer, bool enable);
    // static public System.Void ChangeSequencerLength(System.IntPtr sequencer, System.Single length)
    // Offset: 0xA0C544
    static void ChangeSequencerLength(::System::IntPtr sequencer, float length);
    // static public System.Void LoopSequencer(System.IntPtr sequencer, System.Boolean loop)
    // Offset: 0xA0C5D4
    static void LoopSequencer(::System::IntPtr sequencer, bool loop);
    // static public System.Boolean ChangeSequencerChannel(System.IntPtr sequencer, System.Int32 channel)
    // Offset: 0xA0C664
    static bool ChangeSequencerChannel(::System::IntPtr sequencer, int channel);
    // static public System.Void SetSequencerStart(System.IntPtr sequencer, System.Double startBeat)
    // Offset: 0xA0C6FC
    static void SetSequencerStart(::System::IntPtr sequencer, double startBeat);
    // static public System.IntPtr CreateNote(System.IntPtr sequencer, System.Int32 note, System.Single velocity, System.Single start, System.Single end)
    // Offset: 0xA0C78C
    static ::System::IntPtr CreateNote(::System::IntPtr sequencer, int note, float velocity, float start, float end);
    // static public System.IntPtr DeleteNote(System.IntPtr sequencer, System.IntPtr note)
    // Offset: 0xA0C844
    static ::System::IntPtr DeleteNote(::System::IntPtr sequencer, ::System::IntPtr note);
    // static public System.IntPtr ChangeNoteStart(System.IntPtr sequencer, System.IntPtr note, System.Single newStart)
    // Offset: 0xA0C8D4
    static ::System::IntPtr ChangeNoteStart(::System::IntPtr sequencer, ::System::IntPtr note, float newStart);
    // static public System.IntPtr ChangeNoteEnd(System.IntPtr sequencer, System.IntPtr note, System.Single newEnd)
    // Offset: 0xA0C970
    static ::System::IntPtr ChangeNoteEnd(::System::IntPtr sequencer, ::System::IntPtr note, float newEnd);
    // static public System.IntPtr ChangeNoteValues(System.IntPtr sequencer, System.IntPtr note, System.Int32 newMidiKey, System.Single newStart, System.Single newEnd, System.Single newVelocity)
    // Offset: 0xA0CA10
    static ::System::IntPtr ChangeNoteValues(::System::IntPtr sequencer, ::System::IntPtr note, int newMidiKey, float newStart, float newEnd, float newVelocity);
    // static public System.IntPtr ChangeNoteKey(System.IntPtr sequencer, System.IntPtr note, System.Int32 key)
    // Offset: 0xA0CAD0
    static ::System::IntPtr ChangeNoteKey(::System::IntPtr sequencer, ::System::IntPtr note, int key);
    // static public System.IntPtr ChangeNoteVelocity(System.IntPtr note, System.Single velocity)
    // Offset: 0xA0CB68
    static ::System::IntPtr ChangeNoteVelocity(::System::IntPtr note, float velocity);
    // static public System.Void SetBeatTime(System.Double time)
    // Offset: 0xA0CBF8
    static void SetBeatTime(double time);
    // static public System.Void Pause(System.Boolean pause)
    // Offset: 0xA0CC7C
    static void Pause(bool pause);
  }; // AudioHelm.Native
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::Native::HelmNoteOn
// Il2CppName: HelmNoteOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int, float)>(&AudioHelm::Native::HelmNoteOn)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmNoteOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, note, velocity});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::HelmNoteOff
// Il2CppName: HelmNoteOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int)>(&AudioHelm::Native::HelmNoteOff)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmNoteOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, note});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::HelmFrequencyOn
// Il2CppName: HelmFrequencyOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, float, float)>(&AudioHelm::Native::HelmFrequencyOn)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmFrequencyOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, frequency, velocity});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::HelmFrequencyOff
// Il2CppName: HelmFrequencyOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, float)>(&AudioHelm::Native::HelmFrequencyOff)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmFrequencyOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, frequency});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::HelmAllNotesOff
// Il2CppName: HelmAllNotesOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&AudioHelm::Native::HelmAllNotesOff)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmAllNotesOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::HelmSetPitchWheel
// Il2CppName: HelmSetPitchWheel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, float)>(&AudioHelm::Native::HelmSetPitchWheel)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmSetPitchWheel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, value});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::HelmSetModWheel
// Il2CppName: HelmSetModWheel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, float)>(&AudioHelm::Native::HelmSetModWheel)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmSetModWheel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, value});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::HelmSetAftertouch
// Il2CppName: HelmSetAftertouch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int, float)>(&AudioHelm::Native::HelmSetAftertouch)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmSetAftertouch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, note, value});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::HelmClearModulations
// Il2CppName: HelmClearModulations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&AudioHelm::Native::HelmClearModulations)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmClearModulations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::HelmAddModulation
// Il2CppName: HelmAddModulation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int, ::StringW, ::StringW, float)>(&AudioHelm::Native::HelmAddModulation)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmAddModulation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, index, source, dest, amount});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::HelmGetParameterMinimum
// Il2CppName: HelmGetParameterMinimum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(int)>(&AudioHelm::Native::HelmGetParameterMinimum)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmGetParameterMinimum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::HelmGetParameterMaximum
// Il2CppName: HelmGetParameterMaximum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(int)>(&AudioHelm::Native::HelmGetParameterMaximum)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmGetParameterMaximum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::HelmGetParameterValue
// Il2CppName: HelmGetParameterValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(int, int)>(&AudioHelm::Native::HelmGetParameterValue)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* paramIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmGetParameterValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, paramIndex});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::HelmSetParameterValue
// Il2CppName: HelmSetParameterValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, int, float)>(&AudioHelm::Native::HelmSetParameterValue)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* paramIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* newValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmSetParameterValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, paramIndex, newValue});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::HelmGetParameterPercent
// Il2CppName: HelmGetParameterPercent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(int, int)>(&AudioHelm::Native::HelmGetParameterPercent)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* paramIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmGetParameterPercent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, paramIndex});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::HelmSetParameterPercent
// Il2CppName: HelmSetParameterPercent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, int, float)>(&AudioHelm::Native::HelmSetParameterPercent)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* paramIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* newPercent = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmSetParameterPercent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, paramIndex, newPercent});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::HelmSilence
// Il2CppName: HelmSilence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, bool)>(&AudioHelm::Native::HelmSilence)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* silent = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmSilence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, silent});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::HelmGetBufferData
// Il2CppName: HelmGetBufferData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, ::ArrayW<float>, int, int)>(&AudioHelm::Native::HelmGetBufferData)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* samples = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* numAudioChannels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "HelmGetBufferData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel, buffer, samples, numAudioChannels});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::SetBpm
// Il2CppName: SetBpm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&AudioHelm::Native::SetBpm)> {
  static const MethodInfo* get() {
    static auto* bpm = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "SetBpm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bpm});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::CreateSequencer
// Il2CppName: CreateSequencer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&AudioHelm::Native::CreateSequencer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "CreateSequencer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::DeleteSequencer
// Il2CppName: DeleteSequencer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&AudioHelm::Native::DeleteSequencer)> {
  static const MethodInfo* get() {
    static auto* sequencer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "DeleteSequencer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sequencer});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::EnableSequencer
// Il2CppName: EnableSequencer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(&AudioHelm::Native::EnableSequencer)> {
  static const MethodInfo* get() {
    static auto* sequencer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "EnableSequencer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sequencer, enable});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::ChangeSequencerLength
// Il2CppName: ChangeSequencerLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, float)>(&AudioHelm::Native::ChangeSequencerLength)> {
  static const MethodInfo* get() {
    static auto* sequencer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "ChangeSequencerLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sequencer, length});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::LoopSequencer
// Il2CppName: LoopSequencer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(&AudioHelm::Native::LoopSequencer)> {
  static const MethodInfo* get() {
    static auto* sequencer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* loop = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "LoopSequencer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sequencer, loop});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::ChangeSequencerChannel
// Il2CppName: ChangeSequencerChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, int)>(&AudioHelm::Native::ChangeSequencerChannel)> {
  static const MethodInfo* get() {
    static auto* sequencer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "ChangeSequencerChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sequencer, channel});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::SetSequencerStart
// Il2CppName: SetSequencerStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, double)>(&AudioHelm::Native::SetSequencerStart)> {
  static const MethodInfo* get() {
    static auto* sequencer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* startBeat = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "SetSequencerStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sequencer, startBeat});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::CreateNote
// Il2CppName: CreateNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, int, float, float, float)>(&AudioHelm::Native::CreateNote)> {
  static const MethodInfo* get() {
    static auto* sequencer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "CreateNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sequencer, note, velocity, start, end});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::DeleteNote
// Il2CppName: DeleteNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr)>(&AudioHelm::Native::DeleteNote)> {
  static const MethodInfo* get() {
    static auto* sequencer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "DeleteNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sequencer, note});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::ChangeNoteStart
// Il2CppName: ChangeNoteStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, float)>(&AudioHelm::Native::ChangeNoteStart)> {
  static const MethodInfo* get() {
    static auto* sequencer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* newStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "ChangeNoteStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sequencer, note, newStart});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::ChangeNoteEnd
// Il2CppName: ChangeNoteEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, float)>(&AudioHelm::Native::ChangeNoteEnd)> {
  static const MethodInfo* get() {
    static auto* sequencer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* newEnd = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "ChangeNoteEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sequencer, note, newEnd});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::ChangeNoteValues
// Il2CppName: ChangeNoteValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, int, float, float, float)>(&AudioHelm::Native::ChangeNoteValues)> {
  static const MethodInfo* get() {
    static auto* sequencer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* newMidiKey = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* newStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* newEnd = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* newVelocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "ChangeNoteValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sequencer, note, newMidiKey, newStart, newEnd, newVelocity});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::ChangeNoteKey
// Il2CppName: ChangeNoteKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, int)>(&AudioHelm::Native::ChangeNoteKey)> {
  static const MethodInfo* get() {
    static auto* sequencer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "ChangeNoteKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sequencer, note, key});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::ChangeNoteVelocity
// Il2CppName: ChangeNoteVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, float)>(&AudioHelm::Native::ChangeNoteVelocity)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "ChangeNoteVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, velocity});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::SetBeatTime
// Il2CppName: SetBeatTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(double)>(&AudioHelm::Native::SetBeatTime)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "SetBeatTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: AudioHelm::Native::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&AudioHelm::Native::Pause)> {
  static const MethodInfo* get() {
    static auto* pause = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Native*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pause});
  }
};