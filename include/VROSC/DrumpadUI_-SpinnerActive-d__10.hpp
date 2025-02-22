// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.DrumpadUI
#include "VROSC/DrumpadUI.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.YieldAwaitable/System.Runtime.CompilerServices.YieldAwaiter
#include "System/Runtime/CompilerServices/YieldAwaitable_YieldAwaiter.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrumpadUI::$SpinnerActive$d__10, "VROSC", "DrumpadUI/<SpinnerActive>d__10");
// Type namespace: VROSC
namespace VROSC {
  // WARNING Size may be invalid!
  // Autogenerated type: VROSC.DrumpadUI/VROSC.<SpinnerActive>d__10
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct DrumpadUI::$SpinnerActive$d__10/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public VROSC.DrumpadUI <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::DrumpadUI* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::DrumpadUI*) == 0x8);
    // public System.Boolean active
    // Size: 0x1
    // Offset: 0x30
    bool active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Runtime.CompilerServices.YieldAwaitable/System.Runtime.CompilerServices.YieldAwaiter <>u__1
    // Size: 0x1
    // Offset: 0x31
    ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter) == 0x1);
    public:
    // Creating value type constructor for type: $SpinnerActive$d__10
    constexpr $SpinnerActive$d__10(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::VROSC::DrumpadUI* $$4__this_ = {}, bool active_ = {}, ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, active{active_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public VROSC.DrumpadUI <>4__this
    ::VROSC::DrumpadUI*& dyn_$$4__this();
    // Get instance field reference: public System.Boolean active
    bool& dyn_active();
    // Get instance field reference: private System.Runtime.CompilerServices.YieldAwaitable/System.Runtime.CompilerServices.YieldAwaiter <>u__1
    ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x1361D5C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1361FF4
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // VROSC.DrumpadUI/VROSC.<SpinnerActive>d__10
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::DrumpadUI::$SpinnerActive$d__10::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::DrumpadUI::$SpinnerActive$d__10::*)()>(&VROSC::DrumpadUI::$SpinnerActive$d__10::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::DrumpadUI::$SpinnerActive$d__10), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::DrumpadUI::$SpinnerActive$d__10::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::DrumpadUI::$SpinnerActive$d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&VROSC::DrumpadUI::$SpinnerActive$d__10::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::DrumpadUI::$SpinnerActive$d__10), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
