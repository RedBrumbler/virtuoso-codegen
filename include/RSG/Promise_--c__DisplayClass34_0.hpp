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
// Forward declaring namespace: RSG
namespace RSG {
  // Forward declaring type: RejectHandler
  struct RejectHandler;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RSG::Promise::$$c__DisplayClass34_0);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Promise::$$c__DisplayClass34_0*, "RSG", "Promise/<>c__DisplayClass34_0");
// Type namespace: RSG
namespace RSG {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RSG.Promise/RSG.<>c__DisplayClass34_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Promise::$$c__DisplayClass34_0 : public ::Il2CppObject {
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
    // public RSG.Promise <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::RSG::Promise* $$4__this;
    // Field size check
    static_assert(sizeof(::RSG::Promise*) == 0x8);
    // public System.Exception ex
    // Size: 0x8
    // Offset: 0x18
    ::System::Exception* ex;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    public:
    // Get instance field reference: public RSG.Promise <>4__this
    ::RSG::Promise*& dyn_$$4__this();
    // Get instance field reference: public System.Exception ex
    ::System::Exception*& dyn_ex();
    // System.Void <InvokeRejectHandlers>b__0(RSG.RejectHandler handler)
    // Offset: 0x1343380
    void $InvokeRejectHandlers$b__0(::RSG::RejectHandler handler);
    // public System.Void .ctor()
    // Offset: 0x1343378
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Promise::$$c__DisplayClass34_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Promise::$$c__DisplayClass34_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Promise::$$c__DisplayClass34_0*, creationType>()));
    }
  }; // RSG.Promise/RSG.<>c__DisplayClass34_0
  #pragma pack(pop)
  static check_size<sizeof(Promise::$$c__DisplayClass34_0), 24 + sizeof(::System::Exception*)> __RSG_Promise_$$c__DisplayClass34_0SizeCheck;
  static_assert(sizeof(Promise::$$c__DisplayClass34_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass34_0::$InvokeRejectHandlers$b__0
// Il2CppName: <InvokeRejectHandlers>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RSG::Promise::$$c__DisplayClass34_0::*)(::RSG::RejectHandler)>(&RSG::Promise::$$c__DisplayClass34_0::$InvokeRejectHandlers$b__0)> {
  static const MethodInfo* get() {
    static auto* handler = &::il2cpp_utils::GetClassFromName("RSG", "RejectHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RSG::Promise::$$c__DisplayClass34_0*), "<InvokeRejectHandlers>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handler});
  }
};
// Writing MetadataGetter for method: RSG::Promise::$$c__DisplayClass34_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
