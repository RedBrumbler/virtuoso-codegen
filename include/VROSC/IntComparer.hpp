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
  // Forward declaring type: IntField
  class IntField;
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: IntComparer
  class IntComparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::IntComparer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IntComparer*, "VROSC", "IntComparer");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.IntComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class IntComparer : public ::VROSC::SignalFilter {
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
    // private VROSC.IntField _intA
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::IntField* intA;
    // Field size check
    static_assert(sizeof(::VROSC::IntField*) == 0x8);
    // private VROSC.IntField _intB
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::IntField* intB;
    // Field size check
    static_assert(sizeof(::VROSC::IntField*) == 0x8);
    public:
    // Get instance field reference: private VROSC.IntField _intA
    ::VROSC::IntField*& dyn__intA();
    // Get instance field reference: private VROSC.IntField _intB
    ::VROSC::IntField*& dyn__intB();
    // public System.Void .ctor()
    // Offset: 0x13857B0
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
    static IntComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::IntComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntComparer*, creationType>()));
    }
    // protected override System.Void FilterSignal(VROSC.Signal signal)
    // Offset: 0x13856D4
    // Implemented from: VROSC.SignalFilter
    // Base method: System.Void SignalFilter::FilterSignal(VROSC.Signal signal)
    void FilterSignal(::VROSC::Signal* signal);
  }; // VROSC.IntComparer
  #pragma pack(pop)
  static check_size<sizeof(IntComparer), 72 + sizeof(::VROSC::IntField*)> __VROSC_IntComparerSizeCheck;
  static_assert(sizeof(IntComparer) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::IntComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::IntComparer::FilterSignal
// Il2CppName: FilterSignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IntComparer::*)(::VROSC::Signal*)>(&VROSC::IntComparer::FilterSignal)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IntComparer*), "FilterSignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
