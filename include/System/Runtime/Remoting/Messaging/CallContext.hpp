// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: CallContext
  class CallContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CallContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CallContext*, "System.Runtime.Remoting.Messaging", "CallContext");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.CallContext
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57C38C
  class CallContext : public ::Il2CppObject {
    public:
    // static System.Object SetCurrentCallContext(System.Runtime.Remoting.Messaging.LogicalCallContext ctx)
    // Offset: 0xCD4D54
    static ::Il2CppObject* SetCurrentCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx);
    // static System.Runtime.Remoting.Messaging.LogicalCallContext SetLogicalCallContext(System.Runtime.Remoting.Messaging.LogicalCallContext callCtx)
    // Offset: 0xCD4D5C
    static ::System::Runtime::Remoting::Messaging::LogicalCallContext* SetLogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx);
    // private System.Void .ctor()
    // Offset: 0xCD4D4C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::CallContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallContext*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.CallContext
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CallContext::SetCurrentCallContext
// Il2CppName: SetCurrentCallContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*)>(&System::Runtime::Remoting::Messaging::CallContext::SetCurrentCallContext)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "LogicalCallContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CallContext*), "SetCurrentCallContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CallContext::SetLogicalCallContext
// Il2CppName: SetLogicalCallContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*)>(&System::Runtime::Remoting::Messaging::CallContext::SetLogicalCallContext)> {
  static const MethodInfo* get() {
    static auto* callCtx = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "LogicalCallContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::CallContext*), "SetLogicalCallContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callCtx});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::CallContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
