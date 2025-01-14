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
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: MidiInterface
  class MidiInterface;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::MidiInterface);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MidiInterface*, "VROSC", "MidiInterface");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.MidiInterface
  // [TokenAttribute] Offset: FFFFFFFF
  class MidiInterface : public ::UnityEngine::MonoBehaviour {
    public:
    // public System.Void Setup()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Setup();
    // public System.Void PlayNote(System.Int32 note, System.Int32 channel, System.Single velocity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void PlayNote(int note, int channel, float velocity);
    // public System.Void StopNote(System.Int32 note, System.Int32 channel)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void StopNote(int note, int channel);
    // public System.Void SetMidiCC(System.Single midiCCValue, System.Int32 midiCC, System.Int32 channel)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetMidiCC(float midiCCValue, int midiCC, int channel);
    // public System.Void SetPitchBend(System.Single pitchBendValue, System.Int32 channel)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetPitchBend(float pitchBendValue, int channel);
    // public System.Void AllNotesOff()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AllNotesOff();
    // protected System.Void .ctor()
    // Offset: 0x8B3BB0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MidiInterface* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::MidiInterface::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MidiInterface*, creationType>()));
    }
  }; // VROSC.MidiInterface
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::MidiInterface::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MidiInterface::*)()>(&VROSC::MidiInterface::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MidiInterface*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MidiInterface::PlayNote
// Il2CppName: PlayNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MidiInterface::*)(int, int, float)>(&VROSC::MidiInterface::PlayNote)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MidiInterface*), "PlayNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, channel, velocity});
  }
};
// Writing MetadataGetter for method: VROSC::MidiInterface::StopNote
// Il2CppName: StopNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MidiInterface::*)(int, int)>(&VROSC::MidiInterface::StopNote)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MidiInterface*), "StopNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, channel});
  }
};
// Writing MetadataGetter for method: VROSC::MidiInterface::SetMidiCC
// Il2CppName: SetMidiCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MidiInterface::*)(float, int, int)>(&VROSC::MidiInterface::SetMidiCC)> {
  static const MethodInfo* get() {
    static auto* midiCCValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* midiCC = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MidiInterface*), "SetMidiCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{midiCCValue, midiCC, channel});
  }
};
// Writing MetadataGetter for method: VROSC::MidiInterface::SetPitchBend
// Il2CppName: SetPitchBend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MidiInterface::*)(float, int)>(&VROSC::MidiInterface::SetPitchBend)> {
  static const MethodInfo* get() {
    static auto* pitchBendValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MidiInterface*), "SetPitchBend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pitchBendValue, channel});
  }
};
// Writing MetadataGetter for method: VROSC::MidiInterface::AllNotesOff
// Il2CppName: AllNotesOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MidiInterface::*)()>(&VROSC::MidiInterface::AllNotesOff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MidiInterface*), "AllNotesOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MidiInterface::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
