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
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: InternalSynthesizer
  class InternalSynthesizer;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: AudioHelmInstrumentWrapper
  class AudioHelmInstrumentWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioHelmInstrumentWrapper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioHelmInstrumentWrapper*, "VROSC", "AudioHelmInstrumentWrapper");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioHelmInstrumentWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioHelmInstrumentWrapper : public ::UnityEngine::MonoBehaviour {
    public:
    // public System.Void Setup(VROSC.InternalSynthesizer internalSynthesizer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Setup(::VROSC::InternalSynthesizer* internalSynthesizer);
    // public System.Void NoteOn(System.Int32 note, System.Single velocity, System.Double predictedDspTime, System.Single pitch)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void NoteOn(int note, float velocity, double predictedDspTime, float pitch);
    // public System.Void NoteOff(System.Int32 note)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void NoteOff(int note);
    // public System.Void AllNotesOff()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AllNotesOff();
    // public System.Void SetMidiCC(System.Single midiCCValue, System.Int32 midiCC)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetMidiCC(float midiCCValue, int midiCC);
    // public System.Void SetPitchBend(System.Single pitchBendValue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetPitchBend(float pitchBendValue);
    // protected System.Void .ctor()
    // Offset: 0x1370F64
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioHelmInstrumentWrapper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioHelmInstrumentWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioHelmInstrumentWrapper*, creationType>()));
    }
  }; // VROSC.AudioHelmInstrumentWrapper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioHelmInstrumentWrapper::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioHelmInstrumentWrapper::*)(::VROSC::InternalSynthesizer*)>(&VROSC::AudioHelmInstrumentWrapper::Setup)> {
  static const MethodInfo* get() {
    static auto* internalSynthesizer = &::il2cpp_utils::GetClassFromName("VROSC", "InternalSynthesizer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioHelmInstrumentWrapper*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{internalSynthesizer});
  }
};
// Writing MetadataGetter for method: VROSC::AudioHelmInstrumentWrapper::NoteOn
// Il2CppName: NoteOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioHelmInstrumentWrapper::*)(int, float, double, float)>(&VROSC::AudioHelmInstrumentWrapper::NoteOn)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* predictedDspTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* pitch = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioHelmInstrumentWrapper*), "NoteOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, velocity, predictedDspTime, pitch});
  }
};
// Writing MetadataGetter for method: VROSC::AudioHelmInstrumentWrapper::NoteOff
// Il2CppName: NoteOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioHelmInstrumentWrapper::*)(int)>(&VROSC::AudioHelmInstrumentWrapper::NoteOff)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioHelmInstrumentWrapper*), "NoteOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note});
  }
};
// Writing MetadataGetter for method: VROSC::AudioHelmInstrumentWrapper::AllNotesOff
// Il2CppName: AllNotesOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioHelmInstrumentWrapper::*)()>(&VROSC::AudioHelmInstrumentWrapper::AllNotesOff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioHelmInstrumentWrapper*), "AllNotesOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioHelmInstrumentWrapper::SetMidiCC
// Il2CppName: SetMidiCC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioHelmInstrumentWrapper::*)(float, int)>(&VROSC::AudioHelmInstrumentWrapper::SetMidiCC)> {
  static const MethodInfo* get() {
    static auto* midiCCValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* midiCC = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioHelmInstrumentWrapper*), "SetMidiCC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{midiCCValue, midiCC});
  }
};
// Writing MetadataGetter for method: VROSC::AudioHelmInstrumentWrapper::SetPitchBend
// Il2CppName: SetPitchBend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioHelmInstrumentWrapper::*)(float)>(&VROSC::AudioHelmInstrumentWrapper::SetPitchBend)> {
  static const MethodInfo* get() {
    static auto* pitchBendValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioHelmInstrumentWrapper*), "SetPitchBend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pitchBendValue});
  }
};
// Writing MetadataGetter for method: VROSC::AudioHelmInstrumentWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
