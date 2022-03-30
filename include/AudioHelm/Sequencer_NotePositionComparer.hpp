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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::Sequencer::NotePositionComparer);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Sequencer::NotePositionComparer*, "AudioHelm", "Sequencer/NotePositionComparer");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.Sequencer/AudioHelm.NotePositionComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class Sequencer::NotePositionComparer : public ::Il2CppObject/*, public ::System::Collections::Generic::IComparer_1<::AudioHelm::Sequencer::NotePosition>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IComparer_1<::AudioHelm::Sequencer::NotePosition>
    operator ::System::Collections::Generic::IComparer_1<::AudioHelm::Sequencer::NotePosition>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<::AudioHelm::Sequencer::NotePosition>*>(this);
    }
    // public System.Int32 Compare(AudioHelm.Sequencer/AudioHelm.NotePosition left, AudioHelm.Sequencer/AudioHelm.NotePosition right)
    // Offset: 0x134A060
    int Compare(::AudioHelm::Sequencer::NotePosition left, ::AudioHelm::Sequencer::NotePosition right);
    // public System.Void .ctor()
    // Offset: 0x134A09C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sequencer::NotePositionComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::Sequencer::NotePositionComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sequencer::NotePositionComparer*, creationType>()));
    }
  }; // AudioHelm.Sequencer/AudioHelm.NotePositionComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::Sequencer::NotePositionComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (AudioHelm::Sequencer::NotePositionComparer::*)(::AudioHelm::Sequencer::NotePosition, ::AudioHelm::Sequencer::NotePosition)>(&AudioHelm::Sequencer::NotePositionComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("AudioHelm", "Sequencer/NotePosition")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("AudioHelm", "Sequencer/NotePosition")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Sequencer::NotePositionComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right});
  }
};
// Writing MetadataGetter for method: AudioHelm::Sequencer::NotePositionComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!