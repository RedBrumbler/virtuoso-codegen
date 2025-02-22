// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebConnection
#include "System/Net/WebConnection.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebOperation
  class WebOperation;
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnection::$Connect$d__16, "System.Net", "WebConnection/<Connect>d__16");
// Type namespace: System.Net
namespace System::Net {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.WebConnection/System.Net.<Connect>d__16
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct WebConnection::$Connect$d__16/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public System.Net.WebConnection <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::WebConnection* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::WebConnection*) == 0x8);
    // public System.Net.WebOperation operation
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::WebOperation* operation;
    // Field size check
    static_assert(sizeof(::System::Net::WebOperation*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x30
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.Exception <connectException>5__1
    // Size: 0x8
    // Offset: 0x38
    ::System::Exception* $connectException$5__1;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    // private System.Net.IPAddress[] <>7__wrap1
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::System::Net::IPAddress*> $$7__wrap1;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Net::IPAddress*>) == 0x8);
    // private System.Int32 <>7__wrap2
    // Size: 0x4
    // Offset: 0x48
    int $$7__wrap2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__1
    // Size: 0x9
    // Offset: 0x50
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter) == 0x9);
    public:
    // Creating value type constructor for type: $Connect$d__16
    constexpr $Connect$d__16(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::System::Net::WebConnection* $$4__this_ = {}, ::System::Net::WebOperation* operation_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::System::Exception* $connectException$5__1_ = {}, ::ArrayW<::System::Net::IPAddress*> $$7__wrap1_ = ::ArrayW<::System::Net::IPAddress*>(static_cast<void*>(nullptr)), int $$7__wrap2_ = {}, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, operation{operation_}, cancellationToken{cancellationToken_}, $connectException$5__1{$connectException$5__1_}, $$7__wrap1{$$7__wrap1_}, $$7__wrap2{$$7__wrap2_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public System.Net.WebConnection <>4__this
    ::System::Net::WebConnection*& dyn_$$4__this();
    // Get instance field reference: public System.Net.WebOperation operation
    ::System::Net::WebOperation*& dyn_operation();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.Exception <connectException>5__1
    ::System::Exception*& dyn_$connectException$5__1();
    // Get instance field reference: private System.Net.IPAddress[] <>7__wrap1
    ::ArrayW<::System::Net::IPAddress*>& dyn_$$7__wrap1();
    // Get instance field reference: private System.Int32 <>7__wrap2
    int& dyn_$$7__wrap2();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__1
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x8E7DC8
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x8E8574
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Net.WebConnection/System.Net.<Connect>d__16
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebConnection::$Connect$d__16::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnection::$Connect$d__16::*)()>(&System::Net::WebConnection::$Connect$d__16::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnection::$Connect$d__16), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnection::$Connect$d__16::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnection::$Connect$d__16::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Net::WebConnection::$Connect$d__16::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnection::$Connect$d__16), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
