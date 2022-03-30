// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.HttpWebRequest
#include "System/Net/HttpWebRequest.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
// Including type: System.ValueTuple`5
#include "System/ValueTuple_5.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpWebResponse
  class HttpWebResponse;
  // Forward declaring type: WebOperation
  class WebOperation;
  // Forward declaring type: WebException
  class WebException;
  // Forward declaring type: WebCompletionSource
  class WebCompletionSource;
  // Forward declaring type: WebResponseStream
  class WebResponseStream;
  // Forward declaring type: BufferOffsetSize
  class BufferOffsetSize;
  // Forward declaring type: WebRequestStream
  class WebRequestStream;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpWebRequest::$MyGetResponseAsync$d__236, "System.Net", "HttpWebRequest/<MyGetResponseAsync>d__236");
// Type namespace: System.Net
namespace System::Net {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.HttpWebRequest/System.Net.<MyGetResponseAsync>d__236
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct HttpWebRequest::$MyGetResponseAsync$d__236/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Net.HttpWebResponse> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse*> $$t__builder;
    // public System.Net.HttpWebRequest <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::HttpWebRequest* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::HttpWebRequest*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x28
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.Net.WebOperation <operation>5__1
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::WebOperation* $operation$5__1;
    // Field size check
    static_assert(sizeof(::System::Net::WebOperation*) == 0x8);
    // private System.Net.WebException <throwMe>5__2
    // Size: 0x8
    // Offset: 0x38
    ::System::Net::WebException* $throwMe$5__2;
    // Field size check
    static_assert(sizeof(::System::Net::WebException*) == 0x8);
    // private System.Net.WebCompletionSource <completion>5__3
    // Size: 0x8
    // Offset: 0x40
    ::System::Net::WebCompletionSource* $completion$5__3;
    // Field size check
    static_assert(sizeof(::System::Net::WebCompletionSource*) == 0x8);
    // private System.Boolean <redirect>5__4
    // Size: 0x1
    // Offset: 0x48
    bool $redirect$5__4;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Net.HttpWebResponse <response>5__5
    // Size: 0x8
    // Offset: 0x50
    ::System::Net::HttpWebResponse* $response$5__5;
    // Field size check
    static_assert(sizeof(::System::Net::HttpWebResponse*) == 0x8);
    // private System.Net.WebOperation <ntlm>5__6
    // Size: 0x8
    // Offset: 0x58
    ::System::Net::WebOperation* $ntlm$5__6;
    // Field size check
    static_assert(sizeof(::System::Net::WebOperation*) == 0x8);
    // private System.Boolean <mustReadAll>5__7
    // Size: 0x1
    // Offset: 0x60
    bool $mustReadAll$5__7;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Net.WebResponseStream <stream>5__8
    // Size: 0x8
    // Offset: 0x68
    ::System::Net::WebResponseStream* $stream$5__8;
    // Field size check
    static_assert(sizeof(::System::Net::WebResponseStream*) == 0x8);
    // private System.Net.BufferOffsetSize <writeBuffer>5__9
    // Size: 0x8
    // Offset: 0x70
    ::System::Net::BufferOffsetSize* $writeBuffer$5__9;
    // Field size check
    static_assert(sizeof(::System::Net::BufferOffsetSize*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.WebRequestStream> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x78
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebRequestStream*> $$u__1;
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__2
    // Size: 0x9
    // Offset: 0x80
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__2;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter) == 0x9);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.WebResponseStream> <>u__3
    // Size: 0xFFFFFFFF
    // Offset: 0x90
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream*> $$u__3;
    // [TupleElementNamesAttribute] Offset: 0x592F9C
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.ValueTuple`5<System.Net.HttpWebResponse,System.Boolean,System.Boolean,System.Net.BufferOffsetSize,System.Net.WebOperation>> <>u__4
    // Size: 0xFFFFFFFF
    // Offset: 0x98
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*, bool, bool, ::System::Net::BufferOffsetSize*, ::System::Net::WebOperation*>>::ConfiguredTaskAwaiter $$u__4;
    public:
    // Creating value type constructor for type: $MyGetResponseAsync$d__236
    constexpr $MyGetResponseAsync$d__236(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse*> $$t__builder_ = {}, ::System::Net::HttpWebRequest* $$4__this_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::System::Net::WebOperation* $operation$5__1_ = {}, ::System::Net::WebException* $throwMe$5__2_ = {}, ::System::Net::WebCompletionSource* $completion$5__3_ = {}, bool $redirect$5__4_ = {}, ::System::Net::HttpWebResponse* $response$5__5_ = {}, ::System::Net::WebOperation* $ntlm$5__6_ = {}, bool $mustReadAll$5__7_ = {}, ::System::Net::WebResponseStream* $stream$5__8_ = {}, ::System::Net::BufferOffsetSize* $writeBuffer$5__9_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebRequestStream*> $$u__1_ = {}, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream*> $$u__3_ = {}, typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*, bool, bool, ::System::Net::BufferOffsetSize*, ::System::Net::WebOperation*>>::ConfiguredTaskAwaiter $$u__4_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, $operation$5__1{$operation$5__1_}, $throwMe$5__2{$throwMe$5__2_}, $completion$5__3{$completion$5__3_}, $redirect$5__4{$redirect$5__4_}, $response$5__5{$response$5__5_}, $ntlm$5__6{$ntlm$5__6_}, $mustReadAll$5__7{$mustReadAll$5__7_}, $stream$5__8{$stream$5__8_}, $writeBuffer$5__9{$writeBuffer$5__9_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$u__3{$$u__3_}, $$u__4{$$u__4_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Net.HttpWebResponse> <>t__builder
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse*>& dyn_$$t__builder();
    // Get instance field reference: public System.Net.HttpWebRequest <>4__this
    ::System::Net::HttpWebRequest*& dyn_$$4__this();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.Net.WebOperation <operation>5__1
    ::System::Net::WebOperation*& dyn_$operation$5__1();
    // Get instance field reference: private System.Net.WebException <throwMe>5__2
    ::System::Net::WebException*& dyn_$throwMe$5__2();
    // Get instance field reference: private System.Net.WebCompletionSource <completion>5__3
    ::System::Net::WebCompletionSource*& dyn_$completion$5__3();
    // Get instance field reference: private System.Boolean <redirect>5__4
    bool& dyn_$redirect$5__4();
    // Get instance field reference: private System.Net.HttpWebResponse <response>5__5
    ::System::Net::HttpWebResponse*& dyn_$response$5__5();
    // Get instance field reference: private System.Net.WebOperation <ntlm>5__6
    ::System::Net::WebOperation*& dyn_$ntlm$5__6();
    // Get instance field reference: private System.Boolean <mustReadAll>5__7
    bool& dyn_$mustReadAll$5__7();
    // Get instance field reference: private System.Net.WebResponseStream <stream>5__8
    ::System::Net::WebResponseStream*& dyn_$stream$5__8();
    // Get instance field reference: private System.Net.BufferOffsetSize <writeBuffer>5__9
    ::System::Net::BufferOffsetSize*& dyn_$writeBuffer$5__9();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.WebRequestStream> <>u__1
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebRequestStream*>& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__2
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter& dyn_$$u__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.WebResponseStream> <>u__3
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream*>& dyn_$$u__3();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.ValueTuple`5<System.Net.HttpWebResponse,System.Boolean,System.Boolean,System.Net.BufferOffsetSize,System.Net.WebOperation>> <>u__4
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::ValueTuple_5<::System::Net::HttpWebResponse*, bool, bool, ::System::Net::BufferOffsetSize*, ::System::Net::WebOperation*>>::ConfiguredTaskAwaiter& dyn_$$u__4();
    // private System.Void MoveNext()
    // Offset: 0x8DCA64
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x8DD9AC
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Net.HttpWebRequest/System.Net.<MyGetResponseAsync>d__236
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpWebRequest::$MyGetResponseAsync$d__236::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebRequest::$MyGetResponseAsync$d__236::*)()>(&System::Net::HttpWebRequest::$MyGetResponseAsync$d__236::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebRequest::$MyGetResponseAsync$d__236), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebRequest::$MyGetResponseAsync$d__236::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebRequest::$MyGetResponseAsync$d__236::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Net::HttpWebRequest::$MyGetResponseAsync$d__236::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebRequest::$MyGetResponseAsync$d__236), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};