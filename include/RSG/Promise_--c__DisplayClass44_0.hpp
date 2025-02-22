// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RSG.Promise
#include "RSG/Promise.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RSG::Promise::$$c__DisplayClass44_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise::$$c__DisplayClass44_0*, "RSG", "Promise/<>c__DisplayClass44_0");
// Type namespace: RSG
namespace RSG {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RSG.Promise/RSG.<>c__DisplayClass44_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Promise::$$c__DisplayClass44_0 : public ::Il2CppObject {
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
    // public RSG.Promise resultPromise
    // Size: 0x8
    // Offset: 0x10
    ::RSG::Promise* resultPromise;
    // Field size check
    static_assert(sizeof(::RSG::Promise*) == 0x8);
    // public System.Action`1<System.Exception> onRejected
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::System::Exception*>* onRejected;
    // Field size check
    static_assert(sizeof(::System::Action_1<::System::Exception*>*) == 0x8);
    public:
    // Get instance field reference: public RSG.Promise resultPromise
    ::RSG::Promise*& dyn_resultPromise();
    // Get instance field reference: public System.Action`1<System.Exception> onRejected
    ::System::Action_1<::System::Exception*>*& dyn_onRejected();
    // System.Void <Catch>b__0()
    // Offset: 0x13433D8
    void $Catch$b__0();
    // System.Void <Catch>b__1(System.Exception ex)
    // Offset: 0x13433F4
    void $Catch$b__1(::System::Exception* ex);
    // System.Void <Catch>b__2(System.Single v)
    // Offset: 0x1343508
    void $Catch$b__2(float v);
    // public System.Void .ctor()
    // Offset: 0x13433D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Promise::$$c__DisplayClass44_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass44_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Promise::$$c__DisplayClass44_0*, creationType>()));
    }
  }; // RSG.Promise/RSG.<>c__DisplayClass44_0
  #pragma pack(pop)
  static check_size<sizeof(Promise::$$c__DisplayClass44_0), 24 + sizeof(::System::Action_1<::System::Exception*>*)> __RSG_Promise_$$c__DisplayClass44_0SizeCheck;
  static_assert(sizeof(Promise::$$c__DisplayClass44_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass44_0::$Catch$b__0
// Il2CppName: <Catch>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RSG::Promise::$$c__DisplayClass44_0::*)()>(&RSG::Promise::$$c__DisplayClass44_0::$Catch$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass44_0*), "<Catch>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass44_0::$Catch$b__1
// Il2CppName: <Catch>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RSG::Promise::$$c__DisplayClass44_0::*)(::System::Exception*)>(&RSG::Promise::$$c__DisplayClass44_0::$Catch$b__1)> {
  static const MethodInfo* get() {
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass44_0*), "<Catch>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ex});
  }
};
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass44_0::$Catch$b__2
// Il2CppName: <Catch>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RSG::Promise::$$c__DisplayClass44_0::*)(float)>(&RSG::Promise::$$c__DisplayClass44_0::$Catch$b__2)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass44_0*), "<Catch>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass44_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
