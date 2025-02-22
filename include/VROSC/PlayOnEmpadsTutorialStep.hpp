// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.TutorialStep
#include "VROSC/TutorialStep.hpp"
// Including type: VROSC.WidgetSettings
#include "VROSC/WidgetSettings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: PatchSettings
  class PatchSettings;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: PlayOnEmpadsTutorialStep
  class PlayOnEmpadsTutorialStep;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::PlayOnEmpadsTutorialStep);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlayOnEmpadsTutorialStep*, "VROSC", "PlayOnEmpadsTutorialStep");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.PlayOnEmpadsTutorialStep
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayOnEmpadsTutorialStep : public ::VROSC::TutorialStep {
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
    // private System.Int32 _notesPlayed
    // Size: 0x4
    // Offset: 0x50
    int notesPlayed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 _notesPlayed
    int& dyn__notesPlayed();
    // private System.Void NotePlayed(VROSC.WidgetSettings/VROSC.Identifier id, VROSC.PatchSettings patch)
    // Offset: 0x8FCB94
    void NotePlayed(::VROSC::WidgetSettings::Identifier id, ::VROSC::PatchSettings* patch);
    // public System.Void .ctor()
    // Offset: 0x8FCCB4
    // Implemented from: VROSC.TutorialStep
    // Base method: System.Void TutorialStep::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayOnEmpadsTutorialStep* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::PlayOnEmpadsTutorialStep::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayOnEmpadsTutorialStep*, creationType>()));
    }
    // public override System.Void OnEnter(params System.Object[] values)
    // Offset: 0x8FCA94
    // Implemented from: VROSC.TutorialStep
    // Base method: System.Void TutorialStep::OnEnter(params System.Object[] values)
    void OnEnter(::ArrayW<::Il2CppObject*> values);
  }; // VROSC.PlayOnEmpadsTutorialStep
  #pragma pack(pop)
  static check_size<sizeof(PlayOnEmpadsTutorialStep), 80 + sizeof(int)> __VROSC_PlayOnEmpadsTutorialStepSizeCheck;
  static_assert(sizeof(PlayOnEmpadsTutorialStep) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::PlayOnEmpadsTutorialStep::NotePlayed
// Il2CppName: NotePlayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlayOnEmpadsTutorialStep::*)(::VROSC::WidgetSettings::Identifier, ::VROSC::PatchSettings*)>(&VROSC::PlayOnEmpadsTutorialStep::NotePlayed)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("VROSC", "WidgetSettings/Identifier")->byval_arg;
    static auto* patch = &::il2cpp_utils::GetClassFromName("VROSC", "PatchSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlayOnEmpadsTutorialStep*), "NotePlayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, patch});
  }
};
// Writing MetadataGetter for method: VROSC::PlayOnEmpadsTutorialStep::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::PlayOnEmpadsTutorialStep::OnEnter
// Il2CppName: OnEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlayOnEmpadsTutorialStep::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::PlayOnEmpadsTutorialStep::OnEnter)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlayOnEmpadsTutorialStep*), "OnEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
