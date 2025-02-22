// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.TapeRecorderUI
#include "VROSC/TapeRecorderUI.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorderUI::$DisplayTextAlert$d__45, "VROSC", "TapeRecorderUI/<DisplayTextAlert>d__45");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TapeRecorderUI/VROSC.<DisplayTextAlert>d__45
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct TapeRecorderUI::$DisplayTextAlert$d__45/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$t__builder
    char __padding0[0x4] = {};
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public VROSC.TapeRecorderUI <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::TapeRecorderUI* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::TapeRecorderUI*) == 0x8);
    // public System.String text
    // Size: 0x8
    // Offset: 0x30
    ::StringW text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single displayTime
    // Size: 0x4
    // Offset: 0x38
    float displayTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: displayTime and: $$u__1
    char __padding4[0x4] = {};
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x40
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $DisplayTextAlert$d__45
    constexpr $DisplayTextAlert$d__45(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::VROSC::TapeRecorderUI* $$4__this_ = {}, ::StringW text_ = {}, float displayTime_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, text{text_}, displayTime{displayTime_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public VROSC.TapeRecorderUI <>4__this
    ::VROSC::TapeRecorderUI*& dyn_$$4__this();
    // Get instance field reference: public System.String text
    ::StringW& dyn_text();
    // Get instance field reference: public System.Single displayTime
    float& dyn_displayTime();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x13501FC
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1350488
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // VROSC.TapeRecorderUI/VROSC.<DisplayTextAlert>d__45
  #pragma pack(pop)
  static check_size<sizeof(TapeRecorderUI::$DisplayTextAlert$d__45), 64 + sizeof(::System::Runtime::CompilerServices::TaskAwaiter)> __VROSC_TapeRecorderUI_$DisplayTextAlert$d__45SizeCheck;
  static_assert(sizeof(TapeRecorderUI::$DisplayTextAlert$d__45) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TapeRecorderUI::$DisplayTextAlert$d__45::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderUI::$DisplayTextAlert$d__45::*)()>(&VROSC::TapeRecorderUI::$DisplayTextAlert$d__45::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderUI::$DisplayTextAlert$d__45), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderUI::$DisplayTextAlert$d__45::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderUI::$DisplayTextAlert$d__45::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&VROSC::TapeRecorderUI::$DisplayTextAlert$d__45::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderUI::$DisplayTextAlert$d__45), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
