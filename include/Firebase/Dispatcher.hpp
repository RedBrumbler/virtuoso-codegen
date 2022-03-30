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
// Forward declaring namespace: Firebase
namespace Firebase {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: Firebase
namespace Firebase {
  // Forward declaring type: Dispatcher
  class Dispatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Dispatcher);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Dispatcher*, "Firebase", "Dispatcher");
// Type namespace: Firebase
namespace Firebase {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Dispatcher
  // [TokenAttribute] Offset: FFFFFFFF
  class Dispatcher : public ::Il2CppObject {
    public:
    // Nested type: ::Firebase::Dispatcher::CallbackStorage_1<TResult>
    template<typename TResult>
    class CallbackStorage_1;
    // Nested type: ::Firebase::Dispatcher::$Run$c__AnonStorey0_1<TResult>
    template<typename TResult>
    class $Run$c__AnonStorey0_1;
    // Nested type: ::Firebase::Dispatcher::$RunAsync$c__AnonStorey1_1<TResult>
    template<typename TResult>
    class $RunAsync$c__AnonStorey1_1;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Int32 ownerThreadId
    // Size: 0x4
    // Offset: 0x10
    int ownerThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ownerThreadId and: queue
    char __padding0[0x4] = {};
    // private System.Collections.Generic.Queue`1<System.Action> queue
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Queue_1<::System::Action*>* queue;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::System::Action*>*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 ownerThreadId
    int& dyn_ownerThreadId();
    // Get instance field reference: private System.Collections.Generic.Queue`1<System.Action> queue
    ::System::Collections::Generic::Queue_1<::System::Action*>*& dyn_queue();
    // public TResult Run(System.Func`1<TResult> callback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TResult>
    TResult Run(::System::Func_1<TResult>* callback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Dispatcher::Run");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Run", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(callback)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<TResult, false>(this, ___generic__method, callback);
    }
    // public System.Threading.Tasks.Task`1<TResult> RunAsync(System.Func`1<TResult> callback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TResult>
    ::System::Threading::Tasks::Task_1<TResult>* RunAsync(::System::Func_1<TResult>* callback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Dispatcher::RunAsync");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RunAsync", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(callback)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(this, ___generic__method, callback);
    }
    // static System.Threading.Tasks.Task`1<TResult> RunAsyncNow(System.Func`1<TResult> callback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TResult>
    static ::System::Threading::Tasks::Task_1<TResult>* RunAsyncNow(::System::Func_1<TResult>* callback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Dispatcher::RunAsyncNow");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Firebase", "Dispatcher", "RunAsyncNow", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(callback)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, callback);
    }
    // System.Boolean ManagesThisThread()
    // Offset: 0x12C8240
    bool ManagesThisThread();
    // public System.Void PollJobs()
    // Offset: 0x12C8280
    void PollJobs();
    // public System.Void .ctor()
    // Offset: 0x12C81A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dispatcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Dispatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dispatcher*, creationType>()));
    }
  }; // Firebase.Dispatcher
  #pragma pack(pop)
  static check_size<sizeof(Dispatcher), 24 + sizeof(::System::Collections::Generic::Queue_1<::System::Action*>*)> __Firebase_DispatcherSizeCheck;
  static_assert(sizeof(Dispatcher) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Dispatcher::Run
// Il2CppName: Run
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Firebase::Dispatcher::RunAsync
// Il2CppName: RunAsync
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Firebase::Dispatcher::RunAsyncNow
// Il2CppName: RunAsyncNow
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Firebase::Dispatcher::ManagesThisThread
// Il2CppName: ManagesThisThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Firebase::Dispatcher::*)()>(&Firebase::Dispatcher::ManagesThisThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Dispatcher*), "ManagesThisThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Dispatcher::PollJobs
// Il2CppName: PollJobs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Dispatcher::*)()>(&Firebase::Dispatcher::PollJobs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Dispatcher*), "PollJobs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Dispatcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!