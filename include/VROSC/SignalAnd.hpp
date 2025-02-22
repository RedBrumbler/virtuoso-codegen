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
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SignalAnd
  class SignalAnd;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SignalAnd);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SignalAnd*, "VROSC", "SignalAnd");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SignalAnd
  // [TokenAttribute] Offset: FFFFFFFF
  class SignalAnd : public ::VROSC::SignalNode {
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
    // private System.Single _cachedFirstValue
    // Size: 0x4
    // Offset: 0x40
    float cachedFirstValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Single _cachedFirstValue
    float& dyn__cachedFirstValue();
    // private VROSC.Signal TransformValue(VROSC.Signal signal)
    // Offset: 0x13B4D20
    ::VROSC::Signal* TransformValue(::VROSC::Signal* signal);
    // protected override System.Int32 get_MaxInputs()
    // Offset: 0x13B4D14
    // Implemented from: VROSC.SignalNode
    // Base method: System.Int32 SignalNode::get_MaxInputs()
    int get_MaxInputs();
    // public System.Void .ctor()
    // Offset: 0x13B4D80
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalAnd* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SignalAnd::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalAnd*, creationType>()));
    }
    // protected override System.Void NodeBegin(VROSC.Signal signal)
    // Offset: 0x13B4D1C
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeBegin(VROSC.Signal signal)
    void NodeBegin(::VROSC::Signal* signal);
    // protected override System.Void NodeStay(VROSC.Signal signal)
    // Offset: 0x13B4D78
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeStay(VROSC.Signal signal)
    void NodeStay(::VROSC::Signal* signal);
    // protected override System.Void NodeEnd(VROSC.Signal signal)
    // Offset: 0x13B4D7C
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeEnd(VROSC.Signal signal)
    void NodeEnd(::VROSC::Signal* signal);
  }; // VROSC.SignalAnd
  #pragma pack(pop)
  static check_size<sizeof(SignalAnd), 64 + sizeof(float)> __VROSC_SignalAndSizeCheck;
  static_assert(sizeof(SignalAnd) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SignalAnd::TransformValue
// Il2CppName: TransformValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Signal* (VROSC::SignalAnd::*)(::VROSC::Signal*)>(&VROSC::SignalAnd::TransformValue)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SignalAnd*), "TransformValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::SignalAnd::get_MaxInputs
// Il2CppName: get_MaxInputs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SignalAnd::*)()>(&VROSC::SignalAnd::get_MaxInputs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SignalAnd*), "get_MaxInputs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SignalAnd::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SignalAnd::NodeBegin
// Il2CppName: NodeBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SignalAnd::*)(::VROSC::Signal*)>(&VROSC::SignalAnd::NodeBegin)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SignalAnd*), "NodeBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::SignalAnd::NodeStay
// Il2CppName: NodeStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SignalAnd::*)(::VROSC::Signal*)>(&VROSC::SignalAnd::NodeStay)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SignalAnd*), "NodeStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::SignalAnd::NodeEnd
// Il2CppName: NodeEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SignalAnd::*)(::VROSC::Signal*)>(&VROSC::SignalAnd::NodeEnd)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SignalAnd*), "NodeEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
