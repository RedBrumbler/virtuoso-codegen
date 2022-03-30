// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: NoteHandler
  class NoteHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::NoteHandler);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::NoteHandler*, "AudioHelm", "NoteHandler");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.NoteHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteHandler {
    public:
    // public System.Void AllNotesOff()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AllNotesOff();
    // public System.Void NoteOn(System.Int32 note, System.Single velocity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void NoteOn(int note, float velocity);
    // public System.Void NoteOff(System.Int32 note)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void NoteOff(int note);
  }; // AudioHelm.NoteHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::NoteHandler::AllNotesOff
// Il2CppName: AllNotesOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::NoteHandler::*)()>(&AudioHelm::NoteHandler::AllNotesOff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::NoteHandler*), "AllNotesOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::NoteHandler::NoteOn
// Il2CppName: NoteOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::NoteHandler::*)(int, float)>(&AudioHelm::NoteHandler::NoteOn)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::NoteHandler*), "NoteOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, velocity});
  }
};
// Writing MetadataGetter for method: AudioHelm::NoteHandler::NoteOff
// Il2CppName: NoteOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::NoteHandler::*)(int)>(&AudioHelm::NoteHandler::NoteOff)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::NoteHandler*), "NoteOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note});
  }
};