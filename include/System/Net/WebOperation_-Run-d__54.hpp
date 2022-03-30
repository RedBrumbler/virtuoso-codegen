// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebOperation
#include "System/Net/WebOperation.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebRequestStream
  class WebRequestStream;
  // Forward declaring type: WebResponseStream
  class WebResponseStream;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebOperation::$Run$d__54, "System.Net", "WebOperation/<Run>d__54");
// Type namespace: System.Net
namespace System::Net {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.WebOperation/System.Net.<Run>d__54
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct WebOperation::$Run$d__54/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public System.Net.WebOperation <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::WebOperation* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::WebOperation*) == 0x8);
    // private System.Net.WebRequestStream <requestStream>5__1
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::WebRequestStream* $requestStream$5__1;
    // Field size check
    static_assert(sizeof(::System::Net::WebRequestStream*) == 0x8);
    // private System.Net.WebResponseStream <stream>5__2
    // Size: 0x8
    // Offset: 0x38
    ::System::Net::WebResponseStream* $stream$5__2;
    // Field size check
    static_assert(sizeof(::System::Net::WebResponseStream*) == 0x8);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Net.WebRequestStream> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Net::WebRequestStream*>::ConfiguredTaskAwaiter $$u__1;
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__2
    // Size: 0x9
    // Offset: 0x50
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__2;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter) == 0x9);
    public:
    // Creating value type constructor for type: $Run$d__54
    constexpr $Run$d__54(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::System::Net::WebOperation* $$4__this_ = {}, ::System::Net::WebRequestStream* $requestStream$5__1_ = {}, ::System::Net::WebResponseStream* $stream$5__2_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Net::WebRequestStream*>::ConfiguredTaskAwaiter $$u__1_ = {}, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $requestStream$5__1{$requestStream$5__1_}, $stream$5__2{$stream$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public System.Net.WebOperation <>4__this
    ::System::Net::WebOperation*& dyn_$$4__this();
    // Get instance field reference: private System.Net.WebRequestStream <requestStream>5__1
    ::System::Net::WebRequestStream*& dyn_$requestStream$5__1();
    // Get instance field reference: private System.Net.WebResponseStream <stream>5__2
    ::System::Net::WebResponseStream*& dyn_$stream$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Net.WebRequestStream> <>u__1
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Net::WebRequestStream*>::ConfiguredTaskAwaiter& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__2
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x8EAE78
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x8EB47C
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Net.WebOperation/System.Net.<Run>d__54
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebOperation::$Run$d__54::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebOperation::$Run$d__54::*)()>(&System::Net::WebOperation::$Run$d__54::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebOperation::$Run$d__54), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebOperation::$Run$d__54::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebOperation::$Run$d__54::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Net::WebOperation::$Run$d__54::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebOperation::$Run$d__54), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};