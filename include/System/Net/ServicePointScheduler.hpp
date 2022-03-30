// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: System.ValueTuple`3
#include "System/ValueTuple_3.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ServicePoint
  class ServicePoint;
  // Forward declaring type: WebOperation
  class WebOperation;
  // Forward declaring type: WebConnection
  class WebConnection;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: ServicePointScheduler
  class ServicePointScheduler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::ServicePointScheduler);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ServicePointScheduler*, "System.Net", "ServicePointScheduler");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ServicePointScheduler
  // [TokenAttribute] Offset: FFFFFFFF
  class ServicePointScheduler : public ::Il2CppObject {
    public:
    // Nested type: ::System::Net::ServicePointScheduler::ConnectionGroup
    class ConnectionGroup;
    // Nested type: ::System::Net::ServicePointScheduler::AsyncManualResetEvent
    class AsyncManualResetEvent;
    // Nested type: ::System::Net::ServicePointScheduler::$StartScheduler$d__32
    struct $StartScheduler$d__32;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Net.ServicePoint <ServicePoint>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::ServicePoint* ServicePoint;
    // Field size check
    static_assert(sizeof(::System::Net::ServicePoint*) == 0x8);
    // private System.Int32 running
    // Size: 0x4
    // Offset: 0x18
    int running;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 maxIdleTime
    // Size: 0x4
    // Offset: 0x1C
    int maxIdleTime;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Net.ServicePointScheduler/System.Net.AsyncManualResetEvent schedulerEvent
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::ServicePointScheduler::AsyncManualResetEvent* schedulerEvent;
    // Field size check
    static_assert(sizeof(::System::Net::ServicePointScheduler::AsyncManualResetEvent*) == 0x8);
    // private System.Net.ServicePointScheduler/System.Net.ConnectionGroup defaultGroup
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::ServicePointScheduler::ConnectionGroup* defaultGroup;
    // Field size check
    static_assert(sizeof(::System::Net::ServicePointScheduler::ConnectionGroup*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.Net.ServicePointScheduler/System.Net.ConnectionGroup> groups
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::ServicePointScheduler::ConnectionGroup*>* groups;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::ServicePointScheduler::ConnectionGroup*>*) == 0x8);
    // private System.Collections.Generic.LinkedList`1<System.ValueTuple`2<System.Net.ServicePointScheduler/System.Net.ConnectionGroup,System.Net.WebOperation>> operations
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebOperation*>>* operations;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebOperation*>>*) == 0x8);
    // private System.Collections.Generic.LinkedList`1<System.ValueTuple`3<System.Net.ServicePointScheduler/System.Net.ConnectionGroup,System.Net.WebConnection,System.Threading.Tasks.Task>> idleConnections
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>>* idleConnections;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>>*) == 0x8);
    // private System.Int32 currentConnections
    // Size: 0x4
    // Offset: 0x48
    int currentConnections;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 connectionLimit
    // Size: 0x4
    // Offset: 0x4C
    int connectionLimit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.DateTime idleSince
    // Size: 0x8
    // Offset: 0x50
    ::System::DateTime idleSince;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public readonly System.Int32 ID
    // Size: 0x4
    // Offset: 0x58
    int _ID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: _ID and: ME
    char __padding11[0x4] = {};
    // private readonly System.String <ME>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    ::StringW ME;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static private System.Int32 nextId
    static int _get_nextId();
    // Set static field: static private System.Int32 nextId
    static void _set_nextId(int value);
    // Get instance field reference: private readonly System.Net.ServicePoint <ServicePoint>k__BackingField
    ::System::Net::ServicePoint*& dyn_$ServicePoint$k__BackingField();
    // Get instance field reference: private System.Int32 running
    int& dyn_running();
    // Get instance field reference: private System.Int32 maxIdleTime
    int& dyn_maxIdleTime();
    // Get instance field reference: private System.Net.ServicePointScheduler/System.Net.AsyncManualResetEvent schedulerEvent
    ::System::Net::ServicePointScheduler::AsyncManualResetEvent*& dyn_schedulerEvent();
    // Get instance field reference: private System.Net.ServicePointScheduler/System.Net.ConnectionGroup defaultGroup
    ::System::Net::ServicePointScheduler::ConnectionGroup*& dyn_defaultGroup();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.Net.ServicePointScheduler/System.Net.ConnectionGroup> groups
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Net::ServicePointScheduler::ConnectionGroup*>*& dyn_groups();
    // Get instance field reference: private System.Collections.Generic.LinkedList`1<System.ValueTuple`2<System.Net.ServicePointScheduler/System.Net.ConnectionGroup,System.Net.WebOperation>> operations
    ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebOperation*>>*& dyn_operations();
    // Get instance field reference: private System.Collections.Generic.LinkedList`1<System.ValueTuple`3<System.Net.ServicePointScheduler/System.Net.ConnectionGroup,System.Net.WebConnection,System.Threading.Tasks.Task>> idleConnections
    ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebConnection*, ::System::Threading::Tasks::Task*>>*& dyn_idleConnections();
    // Get instance field reference: private System.Int32 currentConnections
    int& dyn_currentConnections();
    // Get instance field reference: private System.Int32 connectionLimit
    int& dyn_connectionLimit();
    // Get instance field reference: private System.DateTime idleSince
    ::System::DateTime& dyn_idleSince();
    // Get instance field reference: public readonly System.Int32 ID
    int& dyn_ID();
    // Get instance field reference: private readonly System.String <ME>k__BackingField
    ::StringW& dyn_$ME$k__BackingField();
    // public System.Net.ServicePoint get_ServicePoint()
    // Offset: 0x947AF0
    ::System::Net::ServicePoint* get_ServicePoint();
    // public System.Int32 get_MaxIdleTime()
    // Offset: 0x947AF8
    int get_MaxIdleTime();
    // public System.Int32 get_ConnectionLimit()
    // Offset: 0x947B00
    int get_ConnectionLimit();
    // public System.Void .ctor(System.Net.ServicePoint servicePoint, System.Int32 connectionLimit, System.Int32 maxIdleTime)
    // Offset: 0x945D54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServicePointScheduler* New_ctor(::System::Net::ServicePoint* servicePoint, int connectionLimit, int maxIdleTime) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::ServicePointScheduler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServicePointScheduler*, creationType>(servicePoint, connectionLimit, maxIdleTime)));
    }
    // public System.Void Run()
    // Offset: 0x947B08
    void Run();
    // private System.Void StartScheduler()
    // Offset: 0x947C04
    void StartScheduler();
    // private System.Void Cleanup()
    // Offset: 0x947CC4
    void Cleanup();
    // private System.Void RunSchedulerIteration()
    // Offset: 0x947E9C
    void RunSchedulerIteration();
    // private System.Boolean OperationCompleted(System.Net.ServicePointScheduler/System.Net.ConnectionGroup group, System.Net.WebOperation operation, System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>> task)
    // Offset: 0x948164
    bool OperationCompleted(::System::Net::ServicePointScheduler::ConnectionGroup* group, ::System::Net::WebOperation* operation, ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool, ::System::Net::WebOperation*>>* task);
    // private System.Void CloseIdleConnection(System.Net.ServicePointScheduler/System.Net.ConnectionGroup group, System.Net.WebConnection connection)
    // Offset: 0x948494
    void CloseIdleConnection(::System::Net::ServicePointScheduler::ConnectionGroup* group, ::System::Net::WebConnection* connection);
    // private System.Boolean SchedulerIteration(System.Net.ServicePointScheduler/System.Net.ConnectionGroup group)
    // Offset: 0x94806C
    bool SchedulerIteration(::System::Net::ServicePointScheduler::ConnectionGroup* group);
    // private System.Void RemoveOperation(System.Net.WebOperation operation)
    // Offset: 0x9484D4
    void RemoveOperation(::System::Net::WebOperation* operation);
    // private System.Void RemoveIdleConnection(System.Net.WebConnection connection)
    // Offset: 0x9483C4
    void RemoveIdleConnection(::System::Net::WebConnection* connection);
    // public System.Void SendRequest(System.Net.WebOperation operation, System.String groupName)
    // Offset: 0x946AD4
    void SendRequest(::System::Net::WebOperation* operation, ::StringW groupName);
    // private System.Net.ServicePointScheduler/System.Net.ConnectionGroup GetConnectionGroup(System.String name)
    // Offset: 0x9485A4
    ::System::Net::ServicePointScheduler::ConnectionGroup* GetConnectionGroup(::StringW name);
    // private System.Void OnConnectionCreated(System.Net.WebConnection connection)
    // Offset: 0x948798
    void OnConnectionCreated(::System::Net::WebConnection* connection);
    // private System.Void OnConnectionClosed(System.Net.WebConnection connection)
    // Offset: 0x9487A4
    void OnConnectionClosed(::System::Net::WebConnection* connection);
  }; // System.Net.ServicePointScheduler
  #pragma pack(pop)
  static check_size<sizeof(ServicePointScheduler), 96 + sizeof(::StringW)> __System_Net_ServicePointSchedulerSizeCheck;
  static_assert(sizeof(ServicePointScheduler) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::get_ServicePoint
// Il2CppName: get_ServicePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePoint* (System::Net::ServicePointScheduler::*)()>(&System::Net::ServicePointScheduler::get_ServicePoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler*), "get_ServicePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::get_MaxIdleTime
// Il2CppName: get_MaxIdleTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::ServicePointScheduler::*)()>(&System::Net::ServicePointScheduler::get_MaxIdleTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler*), "get_MaxIdleTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::get_ConnectionLimit
// Il2CppName: get_ConnectionLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::ServicePointScheduler::*)()>(&System::Net::ServicePointScheduler::get_ConnectionLimit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler*), "get_ConnectionLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePointScheduler::*)()>(&System::Net::ServicePointScheduler::Run)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::StartScheduler
// Il2CppName: StartScheduler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePointScheduler::*)()>(&System::Net::ServicePointScheduler::StartScheduler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler*), "StartScheduler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePointScheduler::*)()>(&System::Net::ServicePointScheduler::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::RunSchedulerIteration
// Il2CppName: RunSchedulerIteration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePointScheduler::*)()>(&System::Net::ServicePointScheduler::RunSchedulerIteration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler*), "RunSchedulerIteration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::OperationCompleted
// Il2CppName: OperationCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePointScheduler::*)(::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebOperation*, ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool, ::System::Net::WebOperation*>>*)>(&System::Net::ServicePointScheduler::OperationCompleted)> {
  static const MethodInfo* get() {
    static auto* group = &::il2cpp_utils::GetClassFromName("System.Net", "ServicePointScheduler/ConnectionGroup")->byval_arg;
    static auto* operation = &::il2cpp_utils::GetClassFromName("System.Net", "WebOperation")->byval_arg;
    static auto* task = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ValueTuple`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean"), ::il2cpp_utils::GetClassFromName("System.Net", "WebOperation")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler*), "OperationCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{group, operation, task});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::CloseIdleConnection
// Il2CppName: CloseIdleConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePointScheduler::*)(::System::Net::ServicePointScheduler::ConnectionGroup*, ::System::Net::WebConnection*)>(&System::Net::ServicePointScheduler::CloseIdleConnection)> {
  static const MethodInfo* get() {
    static auto* group = &::il2cpp_utils::GetClassFromName("System.Net", "ServicePointScheduler/ConnectionGroup")->byval_arg;
    static auto* connection = &::il2cpp_utils::GetClassFromName("System.Net", "WebConnection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler*), "CloseIdleConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{group, connection});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::SchedulerIteration
// Il2CppName: SchedulerIteration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePointScheduler::*)(::System::Net::ServicePointScheduler::ConnectionGroup*)>(&System::Net::ServicePointScheduler::SchedulerIteration)> {
  static const MethodInfo* get() {
    static auto* group = &::il2cpp_utils::GetClassFromName("System.Net", "ServicePointScheduler/ConnectionGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler*), "SchedulerIteration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{group});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::RemoveOperation
// Il2CppName: RemoveOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePointScheduler::*)(::System::Net::WebOperation*)>(&System::Net::ServicePointScheduler::RemoveOperation)> {
  static const MethodInfo* get() {
    static auto* operation = &::il2cpp_utils::GetClassFromName("System.Net", "WebOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler*), "RemoveOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{operation});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::RemoveIdleConnection
// Il2CppName: RemoveIdleConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePointScheduler::*)(::System::Net::WebConnection*)>(&System::Net::ServicePointScheduler::RemoveIdleConnection)> {
  static const MethodInfo* get() {
    static auto* connection = &::il2cpp_utils::GetClassFromName("System.Net", "WebConnection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler*), "RemoveIdleConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connection});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::SendRequest
// Il2CppName: SendRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePointScheduler::*)(::System::Net::WebOperation*, ::StringW)>(&System::Net::ServicePointScheduler::SendRequest)> {
  static const MethodInfo* get() {
    static auto* operation = &::il2cpp_utils::GetClassFromName("System.Net", "WebOperation")->byval_arg;
    static auto* groupName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler*), "SendRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{operation, groupName});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::GetConnectionGroup
// Il2CppName: GetConnectionGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePointScheduler::ConnectionGroup* (System::Net::ServicePointScheduler::*)(::StringW)>(&System::Net::ServicePointScheduler::GetConnectionGroup)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler*), "GetConnectionGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::OnConnectionCreated
// Il2CppName: OnConnectionCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePointScheduler::*)(::System::Net::WebConnection*)>(&System::Net::ServicePointScheduler::OnConnectionCreated)> {
  static const MethodInfo* get() {
    static auto* connection = &::il2cpp_utils::GetClassFromName("System.Net", "WebConnection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler*), "OnConnectionCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connection});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::OnConnectionClosed
// Il2CppName: OnConnectionClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePointScheduler::*)(::System::Net::WebConnection*)>(&System::Net::ServicePointScheduler::OnConnectionClosed)> {
  static const MethodInfo* get() {
    static auto* connection = &::il2cpp_utils::GetClassFromName("System.Net", "WebConnection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler*), "OnConnectionClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connection});
  }
};