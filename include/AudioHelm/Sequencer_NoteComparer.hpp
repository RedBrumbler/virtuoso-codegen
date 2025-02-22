// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AudioHelm.Sequencer
#include "AudioHelm/Sequencer.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: Note
  class Note;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::Sequencer::NoteComparer);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Sequencer::NoteComparer*, "AudioHelm", "Sequencer/NoteComparer");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.Sequencer/AudioHelm.NoteComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class Sequencer::NoteComparer : public ::Il2CppObject/*, public ::System::Collections::Generic::IComparer_1<::AudioHelm::Note*>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IComparer_1<::AudioHelm::Note*>
    operator ::System::Collections::Generic::IComparer_1<::AudioHelm::Note*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<::AudioHelm::Note*>*>(this);
    }
    // public System.Int32 Compare(AudioHelm.Note left, AudioHelm.Note right)
    // Offset: 0x1349FC4
    int Compare(::AudioHelm::Note* left, ::AudioHelm::Note* right);
    // public System.Void .ctor()
    // Offset: 0x134A000
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sequencer::NoteComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::Sequencer::NoteComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sequencer::NoteComparer*, creationType>()));
    }
  }; // AudioHelm.Sequencer/AudioHelm.NoteComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::Sequencer::NoteComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (AudioHelm::Sequencer::NoteComparer::*)(::AudioHelm::Note*, ::AudioHelm::Note*)>(&AudioHelm::Sequencer::NoteComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("AudioHelm", "Note")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("AudioHelm", "Note")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Sequencer::NoteComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right});
  }
};
// Writing MetadataGetter for method: AudioHelm::Sequencer::NoteComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
