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
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: TutorialEvent
  struct TutorialEvent;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: EnableTempoSyncTutorialStep
  class EnableTempoSyncTutorialStep;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::EnableTempoSyncTutorialStep);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EnableTempoSyncTutorialStep*, "VROSC", "EnableTempoSyncTutorialStep");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.EnableTempoSyncTutorialStep
  // [TokenAttribute] Offset: FFFFFFFF
  class EnableTempoSyncTutorialStep : public ::VROSC::TutorialStep {
    public:
    // public System.Void TutorialEventTriggered(VROSC.TutorialEvent tutorialEvent)
    // Offset: 0x1313258
    void TutorialEventTriggered(::VROSC::TutorialEvent tutorialEvent);
    // public System.Void .ctor()
    // Offset: 0x1313374
    // Implemented from: VROSC.TutorialStep
    // Base method: System.Void TutorialStep::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnableTempoSyncTutorialStep* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::EnableTempoSyncTutorialStep::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnableTempoSyncTutorialStep*, creationType>()));
    }
    // public override System.Void OnEnter(params System.Object[] values)
    // Offset: 0x1313154
    // Implemented from: VROSC.TutorialStep
    // Base method: System.Void TutorialStep::OnEnter(params System.Object[] values)
    void OnEnter(::ArrayW<::Il2CppObject*> values);
  }; // VROSC.EnableTempoSyncTutorialStep
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::EnableTempoSyncTutorialStep::TutorialEventTriggered
// Il2CppName: TutorialEventTriggered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EnableTempoSyncTutorialStep::*)(::VROSC::TutorialEvent)>(&VROSC::EnableTempoSyncTutorialStep::TutorialEventTriggered)> {
  static const MethodInfo* get() {
    static auto* tutorialEvent = &::il2cpp_utils::GetClassFromName("VROSC", "TutorialEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::EnableTempoSyncTutorialStep*), "TutorialEventTriggered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tutorialEvent});
  }
};
// Writing MetadataGetter for method: VROSC::EnableTempoSyncTutorialStep::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::EnableTempoSyncTutorialStep::OnEnter
// Il2CppName: OnEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EnableTempoSyncTutorialStep::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::EnableTempoSyncTutorialStep::OnEnter)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::EnableTempoSyncTutorialStep*), "OnEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
