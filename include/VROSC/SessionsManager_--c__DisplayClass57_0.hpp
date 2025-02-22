// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SessionsManager
#include "VROSC/SessionsManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: SessionsDataController
  class SessionsDataController;
  // Forward declaring type: Error
  struct Error;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SessionsManager::$$c__DisplayClass57_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsManager::$$c__DisplayClass57_0*, "VROSC", "SessionsManager/<>c__DisplayClass57_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SessionsManager/VROSC.<>c__DisplayClass57_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SessionsManager::$$c__DisplayClass57_0 : public ::Il2CppObject {
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
    // public VROSC.SessionsManager <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::SessionsManager* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::SessionsManager*) == 0x8);
    // public VROSC.SessionsDataController sessionsDataController
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::SessionsDataController* sessionsDataController;
    // Field size check
    static_assert(sizeof(::VROSC::SessionsDataController*) == 0x8);
    // public System.String sessionId
    // Size: 0x8
    // Offset: 0x20
    ::StringW sessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String displayName
    // Size: 0x8
    // Offset: 0x28
    ::StringW displayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public VROSC.SessionsManager <>4__this
    ::VROSC::SessionsManager*& dyn_$$4__this();
    // Get instance field reference: public VROSC.SessionsDataController sessionsDataController
    ::VROSC::SessionsDataController*& dyn_sessionsDataController();
    // Get instance field reference: public System.String sessionId
    ::StringW& dyn_sessionId();
    // Get instance field reference: public System.String displayName
    ::StringW& dyn_displayName();
    // System.Void <SaveSession>b__0()
    // Offset: 0x134A71C
    void $SaveSession$b__0();
    // System.Void <SaveSession>b__1(VROSC.Error error)
    // Offset: 0x134AC2C
    void $SaveSession$b__1(::VROSC::Error error);
    // public System.Void .ctor()
    // Offset: 0x134A714
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionsManager::$$c__DisplayClass57_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SessionsManager::$$c__DisplayClass57_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionsManager::$$c__DisplayClass57_0*, creationType>()));
    }
  }; // VROSC.SessionsManager/VROSC.<>c__DisplayClass57_0
  #pragma pack(pop)
  static check_size<sizeof(SessionsManager::$$c__DisplayClass57_0), 40 + sizeof(::StringW)> __VROSC_SessionsManager_$$c__DisplayClass57_0SizeCheck;
  static_assert(sizeof(SessionsManager::$$c__DisplayClass57_0) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass57_0::$SaveSession$b__0
// Il2CppName: <SaveSession>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass57_0::*)()>(&VROSC::SessionsManager::$$c__DisplayClass57_0::$SaveSession$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass57_0*), "<SaveSession>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass57_0::$SaveSession$b__1
// Il2CppName: <SaveSession>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsManager::$$c__DisplayClass57_0::*)(::VROSC::Error)>(&VROSC::SessionsManager::$$c__DisplayClass57_0::$SaveSession$b__1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsManager::$$c__DisplayClass57_0*), "<SaveSession>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsManager::$$c__DisplayClass57_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
