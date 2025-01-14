// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.BaseDataController
#include "VROSC/BaseDataController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::BaseDataController::$$c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BaseDataController::$$c__DisplayClass14_0*, "VROSC", "BaseDataController/<>c__DisplayClass14_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.BaseDataController/VROSC.<>c__DisplayClass14_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BaseDataController::$$c__DisplayClass14_0 : public ::Il2CppObject {
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
    // public VROSC.BaseDataController <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::BaseDataController* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::BaseDataController*) == 0x8);
    // public System.Action onSuccess
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* onSuccess;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: public VROSC.BaseDataController <>4__this
    ::VROSC::BaseDataController*& dyn_$$4__this();
    // Get instance field reference: public System.Action onSuccess
    ::System::Action*& dyn_onSuccess();
    // System.Void <LoadLocalData>b__0(System.String data)
    // Offset: 0x135B67C
    void $LoadLocalData$b__0(::StringW data);
    // public System.Void .ctor()
    // Offset: 0x135B674
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseDataController::$$c__DisplayClass14_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::BaseDataController::$$c__DisplayClass14_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseDataController::$$c__DisplayClass14_0*, creationType>()));
    }
  }; // VROSC.BaseDataController/VROSC.<>c__DisplayClass14_0
  #pragma pack(pop)
  static check_size<sizeof(BaseDataController::$$c__DisplayClass14_0), 24 + sizeof(::System::Action*)> __VROSC_BaseDataController_$$c__DisplayClass14_0SizeCheck;
  static_assert(sizeof(BaseDataController::$$c__DisplayClass14_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::BaseDataController::$$c__DisplayClass14_0::$LoadLocalData$b__0
// Il2CppName: <LoadLocalData>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BaseDataController::$$c__DisplayClass14_0::*)(::StringW)>(&VROSC::BaseDataController::$$c__DisplayClass14_0::$LoadLocalData$b__0)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BaseDataController::$$c__DisplayClass14_0*), "<LoadLocalData>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: VROSC::BaseDataController::$$c__DisplayClass14_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
