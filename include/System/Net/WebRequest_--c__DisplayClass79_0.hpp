// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebRequest
#include "System/Net/WebRequest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: WindowsIdentity
  class WindowsIdentity;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebResponse
  class WebResponse;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebRequest::$$c__DisplayClass79_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequest::$$c__DisplayClass79_0*, "System.Net", "WebRequest/<>c__DisplayClass79_0");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebRequest/System.Net.<>c__DisplayClass79_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class WebRequest::$$c__DisplayClass79_0 : public ::Il2CppObject {
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
    // public System.Security.Principal.WindowsIdentity currentUser
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::Principal::WindowsIdentity* currentUser;
    // Field size check
    static_assert(sizeof(::System::Security::Principal::WindowsIdentity*) == 0x8);
    // public System.Net.WebRequest <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::WebRequest* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::WebRequest*) == 0x8);
    public:
    // Get instance field reference: public System.Security.Principal.WindowsIdentity currentUser
    ::System::Security::Principal::WindowsIdentity*& dyn_currentUser();
    // Get instance field reference: public System.Net.WebRequest <>4__this
    ::System::Net::WebRequest*& dyn_$$4__this();
    // System.Threading.Tasks.Task`1<System.Net.WebResponse> <GetResponseAsync>b__1()
    // Offset: 0x8EB818
    ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* $GetResponseAsync$b__1();
    // public System.Void .ctor()
    // Offset: 0x8EB810
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebRequest::$$c__DisplayClass79_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebRequest::$$c__DisplayClass79_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebRequest::$$c__DisplayClass79_0*, creationType>()));
    }
  }; // System.Net.WebRequest/System.Net.<>c__DisplayClass79_0
  #pragma pack(pop)
  static check_size<sizeof(WebRequest::$$c__DisplayClass79_0), 24 + sizeof(::System::Net::WebRequest*)> __System_Net_WebRequest_$$c__DisplayClass79_0SizeCheck;
  static_assert(sizeof(WebRequest::$$c__DisplayClass79_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebRequest::$$c__DisplayClass79_0::$GetResponseAsync$b__1
// Il2CppName: <GetResponseAsync>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* (System::Net::WebRequest::$$c__DisplayClass79_0::*)()>(&System::Net::WebRequest::$$c__DisplayClass79_0::$GetResponseAsync$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest::$$c__DisplayClass79_0*), "<GetResponseAsync>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::$$c__DisplayClass79_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!