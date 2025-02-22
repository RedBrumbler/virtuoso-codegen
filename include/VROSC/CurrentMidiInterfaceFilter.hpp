// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SignalFilter
#include "VROSC/SignalFilter.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
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
  // Forward declaring type: CurrentMidiInterfaceFilter
  class CurrentMidiInterfaceFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::CurrentMidiInterfaceFilter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CurrentMidiInterfaceFilter*, "VROSC", "CurrentMidiInterfaceFilter");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.CurrentMidiInterfaceFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class CurrentMidiInterfaceFilter : public ::VROSC::SignalFilter {
    public:
    // Nested type: ::VROSC::CurrentMidiInterfaceFilter::MidiInterfaceType
    struct MidiInterfaceType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.CurrentMidiInterfaceFilter/VROSC.MidiInterfaceType
    // [TokenAttribute] Offset: FFFFFFFF
    struct MidiInterfaceType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: MidiInterfaceType
      constexpr MidiInterfaceType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.CurrentMidiInterfaceFilter/VROSC.MidiInterfaceType Internal
      static constexpr const int Internal = 0;
      // Get static field: static public VROSC.CurrentMidiInterfaceFilter/VROSC.MidiInterfaceType Internal
      static ::VROSC::CurrentMidiInterfaceFilter::MidiInterfaceType _get_Internal();
      // Set static field: static public VROSC.CurrentMidiInterfaceFilter/VROSC.MidiInterfaceType Internal
      static void _set_Internal(::VROSC::CurrentMidiInterfaceFilter::MidiInterfaceType value);
      // static field const value: static public VROSC.CurrentMidiInterfaceFilter/VROSC.MidiInterfaceType External
      static constexpr const int External = 1;
      // Get static field: static public VROSC.CurrentMidiInterfaceFilter/VROSC.MidiInterfaceType External
      static ::VROSC::CurrentMidiInterfaceFilter::MidiInterfaceType _get_External();
      // Set static field: static public VROSC.CurrentMidiInterfaceFilter/VROSC.MidiInterfaceType External
      static void _set_External(::VROSC::CurrentMidiInterfaceFilter::MidiInterfaceType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.CurrentMidiInterfaceFilter/VROSC.MidiInterfaceType
    #pragma pack(pop)
    static check_size<sizeof(CurrentMidiInterfaceFilter::MidiInterfaceType), 0 + sizeof(int)> __VROSC_CurrentMidiInterfaceFilter_MidiInterfaceTypeSizeCheck;
    static_assert(sizeof(CurrentMidiInterfaceFilter::MidiInterfaceType) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.CurrentMidiInterfaceFilter/VROSC.MidiInterfaceType _allowType
    // Size: 0x4
    // Offset: 0x40
    ::VROSC::CurrentMidiInterfaceFilter::MidiInterfaceType allowType;
    // Field size check
    static_assert(sizeof(::VROSC::CurrentMidiInterfaceFilter::MidiInterfaceType) == 0x4);
    public:
    // Get instance field reference: private VROSC.CurrentMidiInterfaceFilter/VROSC.MidiInterfaceType _allowType
    ::VROSC::CurrentMidiInterfaceFilter::MidiInterfaceType& dyn__allowType();
    // public System.Void .ctor()
    // Offset: 0x1307650
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
    static CurrentMidiInterfaceFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::CurrentMidiInterfaceFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CurrentMidiInterfaceFilter*, creationType>()));
    }
    // protected override System.Void FilterSignal(VROSC.Signal signal)
    // Offset: 0x13075D0
    // Implemented from: VROSC.SignalFilter
    // Base method: System.Void SignalFilter::FilterSignal(VROSC.Signal signal)
    void FilterSignal(::VROSC::Signal* signal);
  }; // VROSC.CurrentMidiInterfaceFilter
  #pragma pack(pop)
  static check_size<sizeof(CurrentMidiInterfaceFilter), 64 + sizeof(::VROSC::CurrentMidiInterfaceFilter::MidiInterfaceType)> __VROSC_CurrentMidiInterfaceFilterSizeCheck;
  static_assert(sizeof(CurrentMidiInterfaceFilter) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CurrentMidiInterfaceFilter::MidiInterfaceType, "VROSC", "CurrentMidiInterfaceFilter/MidiInterfaceType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::CurrentMidiInterfaceFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::CurrentMidiInterfaceFilter::FilterSignal
// Il2CppName: FilterSignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CurrentMidiInterfaceFilter::*)(::VROSC::Signal*)>(&VROSC::CurrentMidiInterfaceFilter::FilterSignal)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CurrentMidiInterfaceFilter*), "FilterSignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
