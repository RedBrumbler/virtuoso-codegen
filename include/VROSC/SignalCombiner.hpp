// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SignalNode
#include "VROSC/SignalNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SignalCombiner
  class SignalCombiner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SignalCombiner);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SignalCombiner*, "VROSC", "SignalCombiner");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SignalCombiner
  // [TokenAttribute] Offset: FFFFFFFF
  class SignalCombiner : public ::VROSC::SignalNode {
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
    // private System.Collections.Generic.List`1<VROSC.Signal> _signals
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::VROSC::Signal*>* signals;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::Signal*>*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.Signal> _signals
    ::System::Collections::Generic::List_1<::VROSC::Signal*>*& dyn__signals();
    // private System.Void AddSignal(VROSC.Signal signal)
    // Offset: 0x13B52D4
    void AddSignal(::VROSC::Signal* signal);
    // private VROSC.Signal GetCombinedSignal(System.Collections.Generic.List`1<VROSC.Signal> signals)
    // Offset: 0x13B4EC4
    ::VROSC::Signal* GetCombinedSignal(::System::Collections::Generic::List_1<::VROSC::Signal*>* signals);
    // protected override System.Int32 get_MaxInputs()
    // Offset: 0x13B4D88
    // Implemented from: VROSC.SignalNode
    // Base method: System.Int32 SignalNode::get_MaxInputs()
    int get_MaxInputs();
    // public System.Void .ctor()
    // Offset: 0x13B5338
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalCombiner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SignalCombiner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalCombiner*, creationType>()));
    }
    // protected override System.Void LateUpdate()
    // Offset: 0x13B4D90
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::LateUpdate()
    void LateUpdate();
    // protected override System.Void OnDisable()
    // Offset: 0x13B5148
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::OnDisable()
    void OnDisable();
    // public override System.Void ReceiveSignal(VROSC.Signal signal)
    // Offset: 0x13B521C
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::ReceiveSignal(VROSC.Signal signal)
    void ReceiveSignal(::VROSC::Signal* signal);
  }; // VROSC.SignalCombiner
  #pragma pack(pop)
  static check_size<sizeof(SignalCombiner), 64 + sizeof(::System::Collections::Generic::List_1<::VROSC::Signal*>*)> __VROSC_SignalCombinerSizeCheck;
  static_assert(sizeof(SignalCombiner) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SignalCombiner::AddSignal
// Il2CppName: AddSignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SignalCombiner::*)(::VROSC::Signal*)>(&VROSC::SignalCombiner::AddSignal)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SignalCombiner*), "AddSignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::SignalCombiner::GetCombinedSignal
// Il2CppName: GetCombinedSignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Signal* (VROSC::SignalCombiner::*)(::System::Collections::Generic::List_1<::VROSC::Signal*>*)>(&VROSC::SignalCombiner::GetCombinedSignal)> {
  static const MethodInfo* get() {
    static auto* signals = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Signal")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SignalCombiner*), "GetCombinedSignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signals});
  }
};
// Writing MetadataGetter for method: VROSC::SignalCombiner::get_MaxInputs
// Il2CppName: get_MaxInputs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SignalCombiner::*)()>(&VROSC::SignalCombiner::get_MaxInputs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SignalCombiner*), "get_MaxInputs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SignalCombiner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SignalCombiner::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SignalCombiner::*)()>(&VROSC::SignalCombiner::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SignalCombiner*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SignalCombiner::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SignalCombiner::*)()>(&VROSC::SignalCombiner::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SignalCombiner*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SignalCombiner::ReceiveSignal
// Il2CppName: ReceiveSignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SignalCombiner::*)(::VROSC::Signal*)>(&VROSC::SignalCombiner::ReceiveSignal)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SignalCombiner*), "ReceiveSignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
