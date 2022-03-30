// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UserDataControllers
#include "VROSC/UserDataControllers.hpp"
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
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UserDataControllers::$$c__DisplayClass68_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UserDataControllers::$$c__DisplayClass68_0*, "VROSC", "UserDataControllers/<>c__DisplayClass68_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UserDataControllers/VROSC.<>c__DisplayClass68_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UserDataControllers::$$c__DisplayClass68_0 : public ::Il2CppObject {
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
    // public VROSC.UserDataControllers <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::UserDataControllers* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::UserDataControllers*) == 0x8);
    // public System.Action`1<VROSC.Error> onFailure
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::VROSC::Error>* onFailure;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    // public System.String sessionId
    // Size: 0x8
    // Offset: 0x20
    ::StringW sessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Action`1<VROSC.Error> <>9__15
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<::VROSC::Error>* $$9__15;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    // public System.Action <>9__18
    // Size: 0x8
    // Offset: 0x30
    ::System::Action* $$9__18;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<VROSC.Error> <>9__19
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<::VROSC::Error>* $$9__19;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    public:
    // Get instance field reference: public VROSC.UserDataControllers <>4__this
    ::VROSC::UserDataControllers*& dyn_$$4__this();
    // Get instance field reference: public System.Action`1<VROSC.Error> onFailure
    ::System::Action_1<::VROSC::Error>*& dyn_onFailure();
    // Get instance field reference: public System.String sessionId
    ::StringW& dyn_sessionId();
    // Get instance field reference: public System.Action`1<VROSC.Error> <>9__15
    ::System::Action_1<::VROSC::Error>*& dyn_$$9__15();
    // Get instance field reference: public System.Action <>9__18
    ::System::Action*& dyn_$$9__18();
    // Get instance field reference: public System.Action`1<VROSC.Error> <>9__19
    ::System::Action_1<::VROSC::Error>*& dyn_$$9__19();
    // System.Void <SaveControllers>b__0(System.Boolean hasPreview, System.Single previewMultiplier)
    // Offset: 0x1411238
    void $SaveControllers$b__0(bool hasPreview, float previewMultiplier);
    // System.Void <SaveControllers>b__2(System.Boolean hasPreview, System.Single previewMultiplier)
    // Offset: 0x1411270
    void $SaveControllers$b__2(bool hasPreview, float previewMultiplier);
    // System.Void <SaveControllers>b__4()
    // Offset: 0x14112A8
    void $SaveControllers$b__4();
    // System.Void <SaveControllers>b__5(VROSC.Error error)
    // Offset: 0x14112C4
    void $SaveControllers$b__5(::VROSC::Error error);
    // System.Void <SaveControllers>b__6()
    // Offset: 0x1411334
    void $SaveControllers$b__6();
    // System.Void <SaveControllers>b__7(VROSC.Error error)
    // Offset: 0x1411350
    void $SaveControllers$b__7(::VROSC::Error error);
    // System.Void <SaveControllers>b__8()
    // Offset: 0x14113C0
    void $SaveControllers$b__8();
    // System.Void <SaveControllers>b__9(VROSC.Error error)
    // Offset: 0x14113DC
    void $SaveControllers$b__9(::VROSC::Error error);
    // System.Void <SaveControllers>b__15(VROSC.Error error)
    // Offset: 0x141144C
    void $SaveControllers$b__15(::VROSC::Error error);
    // System.Void <SaveControllers>b__10()
    // Offset: 0x14114BC
    void $SaveControllers$b__10();
    // System.Void <SaveControllers>b__18()
    // Offset: 0x14115E4
    void $SaveControllers$b__18();
    // System.Void <SaveControllers>b__19(VROSC.Error error)
    // Offset: 0x14116AC
    void $SaveControllers$b__19(::VROSC::Error error);
    // System.Void <SaveControllers>b__11(VROSC.Error error)
    // Offset: 0x14117BC
    void $SaveControllers$b__11(::VROSC::Error error);
    // System.Void <SaveControllers>b__12()
    // Offset: 0x141182C
    void $SaveControllers$b__12();
    // System.Void <SaveControllers>b__13(VROSC.Error error)
    // Offset: 0x14118F4
    void $SaveControllers$b__13(::VROSC::Error error);
    // public System.Void .ctor()
    // Offset: 0x1411230
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserDataControllers::$$c__DisplayClass68_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UserDataControllers::$$c__DisplayClass68_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserDataControllers::$$c__DisplayClass68_0*, creationType>()));
    }
  }; // VROSC.UserDataControllers/VROSC.<>c__DisplayClass68_0
  #pragma pack(pop)
  static check_size<sizeof(UserDataControllers::$$c__DisplayClass68_0), 56 + sizeof(::System::Action_1<::VROSC::Error>*)> __VROSC_UserDataControllers_$$c__DisplayClass68_0SizeCheck;
  static_assert(sizeof(UserDataControllers::$$c__DisplayClass68_0) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__0
// Il2CppName: <SaveControllers>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass68_0::*)(bool, float)>(&VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__0)> {
  static const MethodInfo* get() {
    static auto* hasPreview = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* previewMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass68_0*), "<SaveControllers>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hasPreview, previewMultiplier});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__2
// Il2CppName: <SaveControllers>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass68_0::*)(bool, float)>(&VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__2)> {
  static const MethodInfo* get() {
    static auto* hasPreview = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* previewMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass68_0*), "<SaveControllers>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hasPreview, previewMultiplier});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__4
// Il2CppName: <SaveControllers>b__4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass68_0::*)()>(&VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__4)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass68_0*), "<SaveControllers>b__4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__5
// Il2CppName: <SaveControllers>b__5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass68_0::*)(::VROSC::Error)>(&VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__5)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass68_0*), "<SaveControllers>b__5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__6
// Il2CppName: <SaveControllers>b__6
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass68_0::*)()>(&VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__6)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass68_0*), "<SaveControllers>b__6", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__7
// Il2CppName: <SaveControllers>b__7
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass68_0::*)(::VROSC::Error)>(&VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__7)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass68_0*), "<SaveControllers>b__7", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__8
// Il2CppName: <SaveControllers>b__8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass68_0::*)()>(&VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__8)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass68_0*), "<SaveControllers>b__8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__9
// Il2CppName: <SaveControllers>b__9
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass68_0::*)(::VROSC::Error)>(&VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__9)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass68_0*), "<SaveControllers>b__9", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__15
// Il2CppName: <SaveControllers>b__15
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass68_0::*)(::VROSC::Error)>(&VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__15)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass68_0*), "<SaveControllers>b__15", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__10
// Il2CppName: <SaveControllers>b__10
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass68_0::*)()>(&VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__10)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass68_0*), "<SaveControllers>b__10", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__18
// Il2CppName: <SaveControllers>b__18
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass68_0::*)()>(&VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__18)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass68_0*), "<SaveControllers>b__18", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__19
// Il2CppName: <SaveControllers>b__19
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass68_0::*)(::VROSC::Error)>(&VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__19)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass68_0*), "<SaveControllers>b__19", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__11
// Il2CppName: <SaveControllers>b__11
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass68_0::*)(::VROSC::Error)>(&VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__11)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass68_0*), "<SaveControllers>b__11", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__12
// Il2CppName: <SaveControllers>b__12
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass68_0::*)()>(&VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__12)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass68_0*), "<SaveControllers>b__12", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__13
// Il2CppName: <SaveControllers>b__13
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UserDataControllers::$$c__DisplayClass68_0::*)(::VROSC::Error)>(&VROSC::UserDataControllers::$$c__DisplayClass68_0::$SaveControllers$b__13)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UserDataControllers::$$c__DisplayClass68_0*), "<SaveControllers>b__13", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::UserDataControllers::$$c__DisplayClass68_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!