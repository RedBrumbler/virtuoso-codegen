// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitHandle
  class WaitHandle;
  // Forward declaring type: WaitOrTimerCallback
  class WaitOrTimerCallback;
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: RegisteredWaitHandle
  class RegisteredWaitHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::RegisteredWaitHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::RegisteredWaitHandle*, "System.Threading", "RegisteredWaitHandle");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x4E
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.RegisteredWaitHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57B080
  class RegisteredWaitHandle : public ::System::MarshalByRefObject {
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
    // private System.Threading.WaitHandle _waitObject
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::WaitHandle* waitObject;
    // Field size check
    static_assert(sizeof(::System::Threading::WaitHandle*) == 0x8);
    // private System.Threading.WaitOrTimerCallback _callback
    // Size: 0x8
    // Offset: 0x20
    ::System::Threading::WaitOrTimerCallback* callback;
    // Field size check
    static_assert(sizeof(::System::Threading::WaitOrTimerCallback*) == 0x8);
    // private System.Object _state
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* state;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Threading.WaitHandle _finalEvent
    // Size: 0x8
    // Offset: 0x30
    ::System::Threading::WaitHandle* finalEvent;
    // Field size check
    static_assert(sizeof(::System::Threading::WaitHandle*) == 0x8);
    // private System.Threading.ManualResetEvent _cancelEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Threading::ManualResetEvent* cancelEvent;
    // Field size check
    static_assert(sizeof(::System::Threading::ManualResetEvent*) == 0x8);
    // private System.TimeSpan _timeout
    // Size: 0x8
    // Offset: 0x40
    ::System::TimeSpan timeout;
    // Field size check
    static_assert(sizeof(::System::TimeSpan) == 0x8);
    // private System.Int32 _callsInProcess
    // Size: 0x4
    // Offset: 0x48
    int callsInProcess;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _executeOnlyOnce
    // Size: 0x1
    // Offset: 0x4C
    bool executeOnlyOnce;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _unregistered
    // Size: 0x1
    // Offset: 0x4D
    bool unregistered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get instance field reference: private System.Threading.WaitHandle _waitObject
    ::System::Threading::WaitHandle*& dyn__waitObject();
    // Get instance field reference: private System.Threading.WaitOrTimerCallback _callback
    ::System::Threading::WaitOrTimerCallback*& dyn__callback();
    // Get instance field reference: private System.Object _state
    ::Il2CppObject*& dyn__state();
    // Get instance field reference: private System.Threading.WaitHandle _finalEvent
    ::System::Threading::WaitHandle*& dyn__finalEvent();
    // Get instance field reference: private System.Threading.ManualResetEvent _cancelEvent
    ::System::Threading::ManualResetEvent*& dyn__cancelEvent();
    // Get instance field reference: private System.TimeSpan _timeout
    ::System::TimeSpan& dyn__timeout();
    // Get instance field reference: private System.Int32 _callsInProcess
    int& dyn__callsInProcess();
    // Get instance field reference: private System.Boolean _executeOnlyOnce
    bool& dyn__executeOnlyOnce();
    // Get instance field reference: private System.Boolean _unregistered
    bool& dyn__unregistered();
    // System.Void .ctor(System.Threading.WaitHandle waitObject, System.Threading.WaitOrTimerCallback callback, System.Object state, System.TimeSpan timeout, System.Boolean executeOnlyOnce)
    // Offset: 0xD41104
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegisteredWaitHandle* New_ctor(::System::Threading::WaitHandle* waitObject, ::System::Threading::WaitOrTimerCallback* callback, ::Il2CppObject* state, ::System::TimeSpan timeout, bool executeOnlyOnce) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::RegisteredWaitHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegisteredWaitHandle*, creationType>(waitObject, callback, state, timeout, executeOnlyOnce)));
    }
    // System.Void Wait(System.Object state)
    // Offset: 0xD411B8
    void Wait(::Il2CppObject* state);
    // private System.Void DoCallBack(System.Object timedOut)
    // Offset: 0xD417AC
    void DoCallBack(::Il2CppObject* timedOut);
  }; // System.Threading.RegisteredWaitHandle
  #pragma pack(pop)
  static check_size<sizeof(RegisteredWaitHandle), 77 + sizeof(bool)> __System_Threading_RegisteredWaitHandleSizeCheck;
  static_assert(sizeof(RegisteredWaitHandle) == 0x4E);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::RegisteredWaitHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::RegisteredWaitHandle::Wait
// Il2CppName: Wait
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::RegisteredWaitHandle::*)(::Il2CppObject*)>(&System::Threading::RegisteredWaitHandle::Wait)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::RegisteredWaitHandle*), "Wait", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Threading::RegisteredWaitHandle::DoCallBack
// Il2CppName: DoCallBack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::RegisteredWaitHandle::*)(::Il2CppObject*)>(&System::Threading::RegisteredWaitHandle::DoCallBack)> {
  static const MethodInfo* get() {
    static auto* timedOut = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::RegisteredWaitHandle*), "DoCallBack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timedOut});
  }
};
