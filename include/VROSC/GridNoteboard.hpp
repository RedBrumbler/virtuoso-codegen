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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteBoardNote
  class NoteBoardNote;
  // Forward declaring type: NoteFieldParameters
  class NoteFieldParameters;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: GridNoteboard
  class GridNoteboard;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::GridNoteboard);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GridNoteboard*, "VROSC", "GridNoteboard");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.GridNoteboard
  // [TokenAttribute] Offset: FFFFFFFF
  class GridNoteboard : public ::VROSC::NoteBoardNoteController {
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
    // private VROSC.NoteBoardNote[,,] <NoteBoardNotes>k__BackingField
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::VROSC::NoteBoardNote*> NoteBoardNotes;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::NoteBoardNote*>) == 0x8);
    public:
    // Get instance field reference: private VROSC.NoteBoardNote[,,] <NoteBoardNotes>k__BackingField
    ::ArrayW<::VROSC::NoteBoardNote*>& dyn_$NoteBoardNotes$k__BackingField();
    // public VROSC.NoteBoardNote[,,] get_NoteBoardNotes()
    // Offset: 0x894788
    ::ArrayW<::VROSC::NoteBoardNote*> get_NoteBoardNotes();
    // private System.Void set_NoteBoardNotes(VROSC.NoteBoardNote[,,] value)
    // Offset: 0x894780
    void set_NoteBoardNotes(::ArrayW<::VROSC::NoteBoardNote*> value);
    // private System.Void SetupNoteNeighbours()
    // Offset: 0x894BEC
    void SetupNoteNeighbours();
    // public System.Void .ctor()
    // Offset: 0x894D08
    // Implemented from: VROSC.NoteBoardNoteController
    // Base method: System.Void NoteBoardNoteController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GridNoteboard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::GridNoteboard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GridNoteboard*, creationType>()));
    }
    // public override System.Void ClearNotefield()
    // Offset: 0x894790
    // Implemented from: VROSC.NoteBoardNoteController
    // Base method: System.Void NoteBoardNoteController::ClearNotefield()
    void ClearNotefield();
    // public override System.Void UpdateNoteboard(VROSC.NoteFieldParameters parameters)
    // Offset: 0x894800
    // Implemented from: VROSC.NoteBoardNoteController
    // Base method: System.Void NoteBoardNoteController::UpdateNoteboard(VROSC.NoteFieldParameters parameters)
    void UpdateNoteboard(::VROSC::NoteFieldParameters* parameters);
  }; // VROSC.GridNoteboard
  #pragma pack(pop)
  static check_size<sizeof(GridNoteboard), 112 + sizeof(::ArrayW<::VROSC::NoteBoardNote*>)> __VROSC_GridNoteboardSizeCheck;
  static_assert(sizeof(GridNoteboard) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::GridNoteboard::get_NoteBoardNotes
// Il2CppName: get_NoteBoardNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::VROSC::NoteBoardNote*> (VROSC::GridNoteboard::*)()>(&VROSC::GridNoteboard::get_NoteBoardNotes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GridNoteboard*), "get_NoteBoardNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GridNoteboard::set_NoteBoardNotes
// Il2CppName: set_NoteBoardNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GridNoteboard::*)(::ArrayW<::VROSC::NoteBoardNote*>)>(&VROSC::GridNoteboard::set_NoteBoardNotes)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("VROSC", "NoteBoardNote"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GridNoteboard*), "set_NoteBoardNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::GridNoteboard::SetupNoteNeighbours
// Il2CppName: SetupNoteNeighbours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GridNoteboard::*)()>(&VROSC::GridNoteboard::SetupNoteNeighbours)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GridNoteboard*), "SetupNoteNeighbours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GridNoteboard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::GridNoteboard::ClearNotefield
// Il2CppName: ClearNotefield
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GridNoteboard::*)()>(&VROSC::GridNoteboard::ClearNotefield)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GridNoteboard*), "ClearNotefield", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GridNoteboard::UpdateNoteboard
// Il2CppName: UpdateNoteboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GridNoteboard::*)(::VROSC::NoteFieldParameters*)>(&VROSC::GridNoteboard::UpdateNoteboard)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GridNoteboard*), "UpdateNoteboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
