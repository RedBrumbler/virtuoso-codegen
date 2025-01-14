// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: VROSC.Error
#include "VROSC/Error.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: AppValidityChecker
  class AppValidityChecker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AppValidityChecker);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AppValidityChecker*, "VROSC", "AppValidityChecker");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AppValidityChecker
  // [TokenAttribute] Offset: FFFFFFFF
  class AppValidityChecker : public ::Il2CppObject {
    public:
    // Nested type: ::VROSC::AppValidityChecker::ForceUpdates
    class ForceUpdates;
    // Nested type: ::VROSC::AppValidityChecker::$ForceUpdatesDataLoadFailure$d__19
    struct $ForceUpdatesDataLoadFailure$d__19;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.AppValidityChecker/VROSC.ForceUpdates ForceUpdatesData
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::AppValidityChecker::ForceUpdates* ForceUpdatesData;
    // Field size check
    static_assert(sizeof(::VROSC::AppValidityChecker::ForceUpdates*) == 0x8);
    // private System.Boolean _isDataLoadAttempted
    // Size: 0x1
    // Offset: 0x18
    bool isDataLoadAttempted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isDataLoadAttempted and: retries
    char __padding1[0x3] = {};
    // private System.Int32 _retries
    // Size: 0x4
    // Offset: 0x1C
    int retries;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <IsForceUpdateDataLoaded>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool IsForceUpdateDataLoaded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // static field const value: static private System.Int32 TimeoutRetries
    static constexpr const int TimeoutRetries = 2147483647;
    // Get static field: static private System.Int32 TimeoutRetries
    static int _get_TimeoutRetries();
    // Set static field: static private System.Int32 TimeoutRetries
    static void _set_TimeoutRetries(int value);
    // Get static field: static private System.Action _onSuccessCallback
    static ::System::Action* _get__onSuccessCallback();
    // Set static field: static private System.Action _onSuccessCallback
    static void _set__onSuccessCallback(::System::Action* value);
    // Get static field: static private System.Action`1<VROSC.Error> _onFailureCallback
    static ::System::Action_1<::VROSC::Error>* _get__onFailureCallback();
    // Set static field: static private System.Action`1<VROSC.Error> _onFailureCallback
    static void _set__onFailureCallback(::System::Action_1<::VROSC::Error>* value);
    // Get instance field reference: private VROSC.AppValidityChecker/VROSC.ForceUpdates ForceUpdatesData
    ::VROSC::AppValidityChecker::ForceUpdates*& dyn_ForceUpdatesData();
    // Get instance field reference: private System.Boolean _isDataLoadAttempted
    bool& dyn__isDataLoadAttempted();
    // Get instance field reference: private System.Int32 _retries
    int& dyn__retries();
    // Get instance field reference: private System.Boolean <IsForceUpdateDataLoaded>k__BackingField
    bool& dyn_$IsForceUpdateDataLoaded$k__BackingField();
    // public System.String get_EULATermsVersion()
    // Offset: 0x136D660
    ::StringW get_EULATermsVersion();
    // public System.Boolean get_IsForceUpdateDataLoaded()
    // Offset: 0x136D67C
    bool get_IsForceUpdateDataLoaded();
    // private System.Void set_IsForceUpdateDataLoaded(System.Boolean value)
    // Offset: 0x136D684
    void set_IsForceUpdateDataLoaded(bool value);
    // public System.Void LoadData(System.Action onSuccess, System.Action`1<VROSC.Error> onFailure)
    // Offset: 0x136D6F8
    void LoadData(::System::Action* onSuccess, ::System::Action_1<::VROSC::Error>* onFailure);
    // public System.Boolean IsAppValid()
    // Offset: 0x136D84C
    bool IsAppValid();
    // public System.Boolean HasUserAcceptedTerms()
    // Offset: 0x136D854
    bool HasUserAcceptedTerms();
    // public System.Boolean CanUserUseLibrary()
    // Offset: 0x136DBCC
    bool CanUserUseLibrary();
    // private System.Void ForceUpdatesDataLoadSuccess(System.String jsonData)
    // Offset: 0x136DC1C
    void ForceUpdatesDataLoadSuccess(::StringW jsonData);
    // private System.Void ForceUpdatesDataLoadFailure(VROSC.Error error)
    // Offset: 0x136DCC0
    void ForceUpdatesDataLoadFailure(::VROSC::Error error);
    // private System.Boolean IsVersionCompatible(System.String requiredVersion, System.String versionToCheck)
    // Offset: 0x136D8E8
    bool IsVersionCompatible(::StringW requiredVersion, ::StringW versionToCheck);
    // public System.Void .ctor()
    // Offset: 0x136D690
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppValidityChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AppValidityChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppValidityChecker*, creationType>()));
    }
  }; // VROSC.AppValidityChecker
  #pragma pack(pop)
  static check_size<sizeof(AppValidityChecker), 32 + sizeof(bool)> __VROSC_AppValidityCheckerSizeCheck;
  static_assert(sizeof(AppValidityChecker) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AppValidityChecker::get_EULATermsVersion
// Il2CppName: get_EULATermsVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::AppValidityChecker::*)()>(&VROSC::AppValidityChecker::get_EULATermsVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppValidityChecker*), "get_EULATermsVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AppValidityChecker::get_IsForceUpdateDataLoaded
// Il2CppName: get_IsForceUpdateDataLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AppValidityChecker::*)()>(&VROSC::AppValidityChecker::get_IsForceUpdateDataLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppValidityChecker*), "get_IsForceUpdateDataLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AppValidityChecker::set_IsForceUpdateDataLoaded
// Il2CppName: set_IsForceUpdateDataLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AppValidityChecker::*)(bool)>(&VROSC::AppValidityChecker::set_IsForceUpdateDataLoaded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppValidityChecker*), "set_IsForceUpdateDataLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::AppValidityChecker::LoadData
// Il2CppName: LoadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AppValidityChecker::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&VROSC::AppValidityChecker::LoadData)> {
  static const MethodInfo* get() {
    static auto* onSuccess = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* onFailure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppValidityChecker*), "LoadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onSuccess, onFailure});
  }
};
// Writing MetadataGetter for method: VROSC::AppValidityChecker::IsAppValid
// Il2CppName: IsAppValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AppValidityChecker::*)()>(&VROSC::AppValidityChecker::IsAppValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppValidityChecker*), "IsAppValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AppValidityChecker::HasUserAcceptedTerms
// Il2CppName: HasUserAcceptedTerms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AppValidityChecker::*)()>(&VROSC::AppValidityChecker::HasUserAcceptedTerms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppValidityChecker*), "HasUserAcceptedTerms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AppValidityChecker::CanUserUseLibrary
// Il2CppName: CanUserUseLibrary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AppValidityChecker::*)()>(&VROSC::AppValidityChecker::CanUserUseLibrary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppValidityChecker*), "CanUserUseLibrary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AppValidityChecker::ForceUpdatesDataLoadSuccess
// Il2CppName: ForceUpdatesDataLoadSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AppValidityChecker::*)(::StringW)>(&VROSC::AppValidityChecker::ForceUpdatesDataLoadSuccess)> {
  static const MethodInfo* get() {
    static auto* jsonData = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppValidityChecker*), "ForceUpdatesDataLoadSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jsonData});
  }
};
// Writing MetadataGetter for method: VROSC::AppValidityChecker::ForceUpdatesDataLoadFailure
// Il2CppName: ForceUpdatesDataLoadFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AppValidityChecker::*)(::VROSC::Error)>(&VROSC::AppValidityChecker::ForceUpdatesDataLoadFailure)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppValidityChecker*), "ForceUpdatesDataLoadFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::AppValidityChecker::IsVersionCompatible
// Il2CppName: IsVersionCompatible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AppValidityChecker::*)(::StringW, ::StringW)>(&VROSC::AppValidityChecker::IsVersionCompatible)> {
  static const MethodInfo* get() {
    static auto* requiredVersion = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* versionToCheck = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AppValidityChecker*), "IsVersionCompatible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requiredVersion, versionToCheck});
  }
};
// Writing MetadataGetter for method: VROSC::AppValidityChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
