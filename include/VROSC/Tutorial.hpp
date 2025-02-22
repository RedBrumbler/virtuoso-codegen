// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: TutorialStep
  class TutorialStep;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: Tutorial
  class Tutorial;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::Tutorial);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Tutorial*, "VROSC", "Tutorial");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.Tutorial
  // [TokenAttribute] Offset: FFFFFFFF
  class Tutorial : public ::Il2CppObject {
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
    // private System.String _id
    // Size: 0x8
    // Offset: 0x10
    ::StringW id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private VROSC.TutorialStep[] _steps
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::VROSC::TutorialStep*> steps;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::TutorialStep*>) == 0x8);
    public:
    // Get instance field reference: private System.String _id
    ::StringW& dyn__id();
    // Get instance field reference: private VROSC.TutorialStep[] _steps
    ::ArrayW<::VROSC::TutorialStep*>& dyn__steps();
    // public System.String get_Id()
    // Offset: 0x1406AB8
    ::StringW get_Id();
    // public VROSC.TutorialStep[] get_Steps()
    // Offset: 0x1406AC0
    ::ArrayW<::VROSC::TutorialStep*> get_Steps();
    // public System.Int32 GetStepIndex(VROSC.TutorialStep step)
    // Offset: 0x1406AC8
    int GetStepIndex(::VROSC::TutorialStep* step);
    // public System.Void .ctor()
    // Offset: 0x1406B28
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tutorial* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::Tutorial::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tutorial*, creationType>()));
    }
  }; // VROSC.Tutorial
  #pragma pack(pop)
  static check_size<sizeof(Tutorial), 24 + sizeof(::ArrayW<::VROSC::TutorialStep*>)> __VROSC_TutorialSizeCheck;
  static_assert(sizeof(Tutorial) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::Tutorial::get_Id
// Il2CppName: get_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::Tutorial::*)()>(&VROSC::Tutorial::get_Id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Tutorial*), "get_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Tutorial::get_Steps
// Il2CppName: get_Steps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::VROSC::TutorialStep*> (VROSC::Tutorial::*)()>(&VROSC::Tutorial::get_Steps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Tutorial*), "get_Steps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Tutorial::GetStepIndex
// Il2CppName: GetStepIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::Tutorial::*)(::VROSC::TutorialStep*)>(&VROSC::Tutorial::GetStepIndex)> {
  static const MethodInfo* get() {
    static auto* step = &::il2cpp_utils::GetClassFromName("VROSC", "TutorialStep")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Tutorial*), "GetStepIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{step});
  }
};
// Writing MetadataGetter for method: VROSC::Tutorial::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
