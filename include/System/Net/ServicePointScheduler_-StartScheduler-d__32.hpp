// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.ServicePointScheduler
#include "System/Net/ServicePointScheduler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: System.ValueTuple`3
#include "System/ValueTuple_3.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebOperation
  class WebOperation;
  // Forward declaring type: WebConnection
  class WebConnection;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ServicePointScheduler::$StartScheduler$d__32, "System.Net", "ServicePointScheduler/<StartScheduler>d__32");
// Type namespace: System.Net
namespace System::Net {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.ServicePointScheduler/System.Net.<StartScheduler>d__32
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct ServicePointScheduler::$StartScheduler$d__32/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public System.Net.ServicePointScheduler <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::ServicePointScheduler* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::ServicePointScheduler*) == 0x8);
    // private System.Collections.Generic.List`1<System.Threading.Tasks.Task> <taskList>5__1
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* $taskList$5__1;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*) == 0x8);
    // private System.ValueTuple`2<System.Net.ServicePointScheduler/System.Net.ConnectionGroup,System.Net.WebOperation>[] <operationArray>5__2
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::System::ValueTuple_2<::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebOperation*>> $operationArray$5__2;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::ValueTuple_2<::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebOperation*>>) == 0x8);
    // private System.ValueTuple`3<System.Net.ServicePointScheduler/System.Net.ConnectionGroup,System.Net.WebConnection,System.Threading.Tasks.Task>[] <idleArray>5__3
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::System::ValueTuple_3<::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>> $idleArray$5__3;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::ValueTuple_3<::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>>) == 0x8);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Threading.Tasks.Task> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter $$u__1;
    public:
    // Creating value type constructor for type: $StartScheduler$d__32
    constexpr $StartScheduler$d__32(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::System::Net::ServicePointScheduler* $$4__this_ = {}, ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* $taskList$5__1_ = {}, ::ArrayW<::System::ValueTuple_2<::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebOperation*>> $operationArray$5__2_ = ::ArrayW<::System::ValueTuple_2<::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebOperation*>>(static_cast<void*>(nullptr)), ::ArrayW<::System::ValueTuple_3<::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>> $idleArray$5__3_ = ::ArrayW<::System::ValueTuple_3<::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>>(static_cast<void*>(nullptr)), typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $taskList$5__1{$taskList$5__1_}, $operationArray$5__2{$operationArray$5__2_}, $idleArray$5__3{$idleArray$5__3_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Net.ServicePointScheduler <>4__this
    ::System::Net::ServicePointScheduler*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Threading.Tasks.Task> <taskList>5__1
    ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*& dyn_$taskList$5__1();
    // Get instance field reference: private System.ValueTuple`2<System.Net.ServicePointScheduler/System.Net.ConnectionGroup,System.Net.WebOperation>[] <operationArray>5__2
    ::ArrayW<::System::ValueTuple_2<::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebOperation*>>& dyn_$operationArray$5__2();
    // Get instance field reference: private System.ValueTuple`3<System.Net.ServicePointScheduler/System.Net.ConnectionGroup,System.Net.WebConnection,System.Threading.Tasks.Task>[] <idleArray>5__3
    ::ArrayW<::System::ValueTuple_3<::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>>& dyn_$idleArray$5__3();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/System.Runtime.CompilerServices.ConfiguredTaskAwaiter<System.Threading.Tasks.Task> <>u__1
    typename ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<::System::Threading::Tasks::Task*>::ConfiguredTaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x8E16A8
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x8E23CC
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Net.ServicePointScheduler/System.Net.<StartScheduler>d__32
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::$StartScheduler$d__32::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePointScheduler::$StartScheduler$d__32::*)()>(&System::Net::ServicePointScheduler::$StartScheduler$d__32::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler::$StartScheduler$d__32), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::$StartScheduler$d__32::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePointScheduler::$StartScheduler$d__32::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Net::ServicePointScheduler::$StartScheduler$d__32::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler::$StartScheduler$d__32), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
