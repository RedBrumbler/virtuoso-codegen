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
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RSG::Promise::$$c__DisplayClass70_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise::$$c__DisplayClass70_0*, "RSG", "Promise/<>c__DisplayClass70_0");
// Type namespace: RSG
namespace RSG {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: RSG.Promise/RSG.<>c__DisplayClass70_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Promise::$$c__DisplayClass70_0 : public ::Il2CppObject {
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
    // public RSG.Promise promise
    // Size: 0x8
    // Offset: 0x10
    ::RSG::Promise* promise;
    // Field size check
    static_assert(sizeof(::RSG::Promise*) == 0x8);
    public:
    // Creating conversion operator: operator ::RSG::Promise*
    constexpr operator ::RSG::Promise*() const noexcept {
      return promise;
    }
    // Get instance field reference: public RSG.Promise promise
    ::RSG::Promise*& dyn_promise();
    // System.Void <ContinueWith>b__0()
    // Offset: 0x1344824
    void $ContinueWith$b__0();
    // System.Void <ContinueWith>b__1(System.Exception e)
    // Offset: 0x1344840
    void $ContinueWith$b__1(::System::Exception* e);
    // public System.Void .ctor()
    // Offset: 0x134481C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Promise::$$c__DisplayClass70_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass70_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Promise::$$c__DisplayClass70_0*, creationType>()));
    }
  }; // RSG.Promise/RSG.<>c__DisplayClass70_0
  #pragma pack(pop)
  static check_size<sizeof(Promise::$$c__DisplayClass70_0), 16 + sizeof(::RSG::Promise*)> __RSG_Promise_$$c__DisplayClass70_0SizeCheck;
  static_assert(sizeof(Promise::$$c__DisplayClass70_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass70_0::$ContinueWith$b__0
// Il2CppName: <ContinueWith>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RSG::Promise::$$c__DisplayClass70_0::*)()>(&RSG::Promise::$$c__DisplayClass70_0::$ContinueWith$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass70_0*), "<ContinueWith>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass70_0::$ContinueWith$b__1
// Il2CppName: <ContinueWith>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RSG::Promise::$$c__DisplayClass70_0::*)(::System::Exception*)>(&RSG::Promise::$$c__DisplayClass70_0::$ContinueWith$b__1)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass70_0*), "<ContinueWith>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass70_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
