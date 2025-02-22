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
// Forward declaring namespace: RSG
namespace RSG {
  // Forward declaring type: IPromise
  class IPromise;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RSG::Promise::$$c__DisplayClass62_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise::$$c__DisplayClass62_0*, "RSG", "Promise/<>c__DisplayClass62_0");
// Type namespace: RSG
namespace RSG {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RSG.Promise/RSG.<>c__DisplayClass62_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Promise::$$c__DisplayClass62_0 : public ::Il2CppObject {
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
    // public System.Int32 count
    // Size: 0x4
    // Offset: 0x10
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: count and: promise
    char __padding0[0x4] = {};
    // public RSG.Promise promise
    // Size: 0x8
    // Offset: 0x18
    ::RSG::Promise* promise;
    // Field size check
    static_assert(sizeof(::RSG::Promise*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 count
    int& dyn_count();
    // Get instance field reference: public RSG.Promise promise
    ::RSG::Promise*& dyn_promise();
    // RSG.IPromise <Sequence>b__0(RSG.IPromise prevPromise, System.Func`1<RSG.IPromise> fn)
    // Offset: 0x1343F40
    ::RSG::IPromise* $Sequence$b__0(::RSG::IPromise* prevPromise, ::System::Func_1<::RSG::IPromise*>* fn);
    // System.Void <Sequence>b__1()
    // Offset: 0x1344170
    void $Sequence$b__1();
    // public System.Void .ctor()
    // Offset: 0x1343F38
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Promise::$$c__DisplayClass62_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass62_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Promise::$$c__DisplayClass62_0*, creationType>()));
    }
  }; // RSG.Promise/RSG.<>c__DisplayClass62_0
  #pragma pack(pop)
  static check_size<sizeof(Promise::$$c__DisplayClass62_0), 24 + sizeof(::RSG::Promise*)> __RSG_Promise_$$c__DisplayClass62_0SizeCheck;
  static_assert(sizeof(Promise::$$c__DisplayClass62_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass62_0::$Sequence$b__0
// Il2CppName: <Sequence>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RSG::IPromise* (RSG::Promise::$$c__DisplayClass62_0::*)(::RSG::IPromise*, ::System::Func_1<::RSG::IPromise*>*)>(&RSG::Promise::$$c__DisplayClass62_0::$Sequence$b__0)> {
  static const MethodInfo* get() {
    static auto* prevPromise = &::il2cpp_utils::GetClassFromName("RSG", "IPromise")->byval_arg;
    static auto* fn = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("RSG", "IPromise")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass62_0*), "<Sequence>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prevPromise, fn});
  }
};
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass62_0::$Sequence$b__1
// Il2CppName: <Sequence>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RSG::Promise::$$c__DisplayClass62_0::*)()>(&RSG::Promise::$$c__DisplayClass62_0::$Sequence$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass62_0*), "<Sequence>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass62_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
