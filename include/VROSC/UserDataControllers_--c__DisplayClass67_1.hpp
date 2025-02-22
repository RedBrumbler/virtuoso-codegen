// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UserDataControllers
#include "VROSC/UserDataControllers.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: VROSC.WidgetSettings/VROSC.Identifier
#include "VROSC/WidgetSettings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: InstrumentDataController
  class InstrumentDataController;
  // Forward declaring type: Error
  struct Error;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UserDataControllers::$$c__DisplayClass67_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserDataControllers::$$c__DisplayClass67_1*, "VROSC", "UserDataControllers/<>c__DisplayClass67_1");
// Type namespace: VROSC
namespace VROSC {
  // WARNING Size may be invalid!
  // Autogenerated type: VROSC.UserDataControllers/VROSC.<>c__DisplayClass67_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UserDataControllers::$$c__DisplayClass67_1 : public ::Il2CppObject {
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
    // public System.Collections.Generic.KeyValuePair`2<VROSC.WidgetSettings/VROSC.Identifier,VROSC.InstrumentDataController> instrumentDataController
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::System::Collections::Generic::KeyValuePair_2<::VROSC::WidgetSettings::Identifier, ::VROSC::InstrumentDataController*> instrumentDataController;
    // public VROSC.UserDataControllers/VROSC.<>c__DisplayClass67_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UserDataControllers::$$c__DisplayClass67_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::VROSC::UserDataControllers::$$c__DisplayClass67_0*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.KeyValuePair`2<VROSC.WidgetSettings/VROSC.Identifier,VROSC.InstrumentDataController> instrumentDataController
    ::System::Collections::Generic::KeyValuePair_2<::VROSC::WidgetSettings::Identifier, ::VROSC::InstrumentDataController*>& dyn_instrumentDataController();
    // Get instance field reference: public VROSC.UserDataControllers/VROSC.<>c__DisplayClass67_0 CS$<>8__locals1
    ::VROSC::UserDataControllers::$$c__DisplayClass67_0*& dyn_CS$$$8__locals1();
    // System.Void <LoadControllers>b__10()
    // Offset: 0x1411030
    void $LoadControllers$b__10();
    // System.Void <LoadControllers>b__11(VROSC.Error error)
    // Offset: 0x1411108
    void $LoadControllers$b__11(::VROSC::Error error);
    // public System.Void .ctor()
    // Offset: 0x1411028
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserDataControllers::$$c__DisplayClass67_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UserDataControllers::$$c__DisplayClass67_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserDataControllers::$$c__DisplayClass67_1*, creationType>()));
    }
  }; // VROSC.UserDataControllers/VROSC.<>c__DisplayClass67_1
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass67_1::$LoadControllers$b__10
// Il2CppName: <LoadControllers>b__10
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass67_1::*)()>(&VROSC::UserDataControllers::$$c__DisplayClass67_1::$LoadControllers$b__10)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass67_1*), "<LoadControllers>b__10", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass67_1::$LoadControllers$b__11
// Il2CppName: <LoadControllers>b__11
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass67_1::*)(::VROSC::Error)>(&VROSC::UserDataControllers::$$c__DisplayClass67_1::$LoadControllers$b__11)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass67_1*), "<LoadControllers>b__11", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass67_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
