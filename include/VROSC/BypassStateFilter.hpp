// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SignalFilter
#include "VROSC/SignalFilter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Skipping declaration: SignalNode because it is already included!
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: BypassStateFilter
  class BypassStateFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::BypassStateFilter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BypassStateFilter*, "VROSC", "BypassStateFilter");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.BypassStateFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class BypassStateFilter : public ::VROSC::SignalFilter {
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
    // private VROSC.SignalNode _signalNodeToCheck
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::SignalNode* signalNodeToCheck;
    // Field size check
    static_assert(sizeof(::VROSC::SignalNode*) == 0x8);
    // private System.Boolean _passOnFalse
    // Size: 0x1
    // Offset: 0x48
    bool passOnFalse;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private VROSC.SignalNode _signalNodeToCheck
    ::VROSC::SignalNode*& dyn__signalNodeToCheck();
    // Get instance field reference: private System.Boolean _passOnFalse
    bool& dyn__passOnFalse();
    // public System.Void .ctor()
    // Offset: 0x1327490
    // Implemented from: VROSC.SignalFilter
    // Base method: System.Void SignalFilter::.ctor()
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BypassStateFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::BypassStateFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BypassStateFilter*, creationType>()));
    }
    // protected override System.Void FilterSignal(VROSC.Signal signal)
    // Offset: 0x1327458
    // Implemented from: VROSC.SignalFilter
    // Base method: System.Void SignalFilter::FilterSignal(VROSC.Signal signal)
    void FilterSignal(::VROSC::Signal* signal);
  }; // VROSC.BypassStateFilter
  #pragma pack(pop)
  static check_size<sizeof(BypassStateFilter), 72 + sizeof(bool)> __VROSC_BypassStateFilterSizeCheck;
  static_assert(sizeof(BypassStateFilter) == 0x49);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::BypassStateFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::BypassStateFilter::FilterSignal
// Il2CppName: FilterSignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BypassStateFilter::*)(::VROSC::Signal*)>(&VROSC::BypassStateFilter::FilterSignal)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BypassStateFilter*), "FilterSignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};