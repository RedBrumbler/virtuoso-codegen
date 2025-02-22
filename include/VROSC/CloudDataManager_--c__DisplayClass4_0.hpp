// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.CloudDataManager
#include "VROSC/CloudDataManager.hpp"
// Including type: VROSC.Error
#include "VROSC/Error.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::CloudDataManager::$$c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CloudDataManager::$$c__DisplayClass4_0*, "VROSC", "CloudDataManager/<>c__DisplayClass4_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.CloudDataManager/VROSC.<>c__DisplayClass4_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CloudDataManager::$$c__DisplayClass4_0 : public ::Il2CppObject {
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
    // public System.String sessionName
    // Size: 0x8
    // Offset: 0x10
    ::StringW sessionName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean isCommunity
    // Size: 0x1
    // Offset: 0x18
    bool isCommunity;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isOgg
    // Size: 0x1
    // Offset: 0x19
    bool isOgg;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isOgg and: onSuccess
    char __padding2[0x6] = {};
    // public System.Action`1<System.String> onSuccess
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::StringW>* onSuccess;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    // public System.Action`2<System.String,VROSC.Error> onFailure
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_2<::StringW, ::VROSC::Error>* onFailure;
    // Field size check
    static_assert(sizeof(::System::Action_2<::StringW, ::VROSC::Error>*) == 0x8);
    // public System.Action <>9__2
    // Size: 0x8
    // Offset: 0x30
    ::System::Action* $$9__2;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<VROSC.Error> <>9__3
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<::VROSC::Error>* $$9__3;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    public:
    // Get instance field reference: public System.String sessionName
    ::StringW& dyn_sessionName();
    // Get instance field reference: public System.Boolean isCommunity
    bool& dyn_isCommunity();
    // Get instance field reference: public System.Boolean isOgg
    bool& dyn_isOgg();
    // Get instance field reference: public System.Action`1<System.String> onSuccess
    ::System::Action_1<::StringW>*& dyn_onSuccess();
    // Get instance field reference: public System.Action`2<System.String,VROSC.Error> onFailure
    ::System::Action_2<::StringW, ::VROSC::Error>*& dyn_onFailure();
    // Get instance field reference: public System.Action <>9__2
    ::System::Action*& dyn_$$9__2();
    // Get instance field reference: public System.Action`1<VROSC.Error> <>9__3
    ::System::Action_1<::VROSC::Error>*& dyn_$$9__3();
    // System.Void <DeleteSession>b__0()
    // Offset: 0x135D180
    void $DeleteSession$b__0();
    // System.Void <DeleteSession>b__2()
    // Offset: 0x135D320
    void $DeleteSession$b__2();
    // System.Void <DeleteSession>b__3(VROSC.Error e)
    // Offset: 0x135D380
    void $DeleteSession$b__3(::VROSC::Error e);
    // System.Void <DeleteSession>b__1(VROSC.Error e)
    // Offset: 0x135D444
    void $DeleteSession$b__1(::VROSC::Error e);
    // public System.Void .ctor()
    // Offset: 0x135D178
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloudDataManager::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::CloudDataManager::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloudDataManager::$$c__DisplayClass4_0*, creationType>()));
    }
  }; // VROSC.CloudDataManager/VROSC.<>c__DisplayClass4_0
  #pragma pack(pop)
  static check_size<sizeof(CloudDataManager::$$c__DisplayClass4_0), 56 + sizeof(::System::Action_1<::VROSC::Error>*)> __VROSC_CloudDataManager_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(CloudDataManager::$$c__DisplayClass4_0) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::CloudDataManager::$$c__DisplayClass4_0::$DeleteSession$b__0
// Il2CppName: <DeleteSession>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CloudDataManager::$$c__DisplayClass4_0::*)()>(&VROSC::CloudDataManager::$$c__DisplayClass4_0::$DeleteSession$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::CloudDataManager::$$c__DisplayClass4_0*), "<DeleteSession>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::CloudDataManager::$$c__DisplayClass4_0::$DeleteSession$b__2
// Il2CppName: <DeleteSession>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CloudDataManager::$$c__DisplayClass4_0::*)()>(&VROSC::CloudDataManager::$$c__DisplayClass4_0::$DeleteSession$b__2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::CloudDataManager::$$c__DisplayClass4_0*), "<DeleteSession>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::CloudDataManager::$$c__DisplayClass4_0::$DeleteSession$b__3
// Il2CppName: <DeleteSession>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CloudDataManager::$$c__DisplayClass4_0::*)(::VROSC::Error)>(&VROSC::CloudDataManager::$$c__DisplayClass4_0::$DeleteSession$b__3)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CloudDataManager::$$c__DisplayClass4_0*), "<DeleteSession>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: VROSC::CloudDataManager::$$c__DisplayClass4_0::$DeleteSession$b__1
// Il2CppName: <DeleteSession>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CloudDataManager::$$c__DisplayClass4_0::*)(::VROSC::Error)>(&VROSC::CloudDataManager::$$c__DisplayClass4_0::$DeleteSession$b__1)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CloudDataManager::$$c__DisplayClass4_0*), "<DeleteSession>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: VROSC::CloudDataManager::$$c__DisplayClass4_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
