// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.NoteBoardNoteController
#include "VROSC/NoteBoardNoteController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteFieldNoteData
  class NoteFieldNoteData;
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NoteBoardNoteController::HoveredNoteBoardNote);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNoteController::HoveredNoteBoardNote*, "VROSC", "NoteBoardNoteController/HoveredNoteBoardNote");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteBoardNoteController/VROSC.HoveredNoteBoardNote
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteBoardNoteController::HoveredNoteBoardNote : public ::Il2CppObject {
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
    // public VROSC.NoteFieldNoteData NoteBoardNote
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::NoteFieldNoteData* NoteBoardNote;
    // Field size check
    static_assert(sizeof(::VROSC::NoteFieldNoteData*) == 0x8);
    // public VROSC.InputDevice Device
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::InputDevice* Device;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    public:
    // Get instance field reference: public VROSC.NoteFieldNoteData NoteBoardNote
    ::VROSC::NoteFieldNoteData*& dyn_NoteBoardNote();
    // Get instance field reference: public VROSC.InputDevice Device
    ::VROSC::InputDevice*& dyn_Device();
    // public System.Void .ctor(VROSC.NoteFieldNoteData noteBoardNote, VROSC.InputDevice device)
    // Offset: 0x133E0D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteBoardNoteController::HoveredNoteBoardNote* New_ctor(::VROSC::NoteFieldNoteData* noteBoardNote, ::VROSC::InputDevice* device) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteBoardNoteController::HoveredNoteBoardNote::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteBoardNoteController::HoveredNoteBoardNote*, creationType>(noteBoardNote, device)));
    }
  }; // VROSC.NoteBoardNoteController/VROSC.HoveredNoteBoardNote
  #pragma pack(pop)
  static check_size<sizeof(NoteBoardNoteController::HoveredNoteBoardNote), 24 + sizeof(::VROSC::InputDevice*)> __VROSC_NoteBoardNoteController_HoveredNoteBoardNoteSizeCheck;
  static_assert(sizeof(NoteBoardNoteController::HoveredNoteBoardNote) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::HoveredNoteBoardNote::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
