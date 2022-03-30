// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Diagnostics.DebuggerBrowsableState
#include "System/Diagnostics/DebuggerBrowsableState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: DebuggerBrowsableAttribute
  class DebuggerBrowsableAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::DebuggerBrowsableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerBrowsableAttribute*, "System.Diagnostics", "DebuggerBrowsableAttribute");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.DebuggerBrowsableAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57E9AC
  // [AttributeUsageAttribute] Offset: 57E9AC
  class DebuggerBrowsableAttribute : public ::System::Attribute {
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
    // private System.Diagnostics.DebuggerBrowsableState state
    // Size: 0x14
    // Offset: 0x10
    ::System::Diagnostics::DebuggerBrowsableState state;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::DebuggerBrowsableState) == 0x14);
    public:
    // Creating conversion operator: operator ::System::Diagnostics::DebuggerBrowsableState
    constexpr operator ::System::Diagnostics::DebuggerBrowsableState() const noexcept {
      return state;
    }
    // Get instance field reference: private System.Diagnostics.DebuggerBrowsableState state
    ::System::Diagnostics::DebuggerBrowsableState& dyn_state();
    // public System.Void .ctor(System.Diagnostics.DebuggerBrowsableState state)
    // Offset: 0xCA5200
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebuggerBrowsableAttribute* New_ctor(::System::Diagnostics::DebuggerBrowsableState state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::DebuggerBrowsableAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebuggerBrowsableAttribute*, creationType>(state)));
    }
  }; // System.Diagnostics.DebuggerBrowsableAttribute
  #pragma pack(pop)
  static check_size<sizeof(DebuggerBrowsableAttribute), 16 + sizeof(::System::Diagnostics::DebuggerBrowsableState)> __System_Diagnostics_DebuggerBrowsableAttributeSizeCheck;
  static_assert(sizeof(DebuggerBrowsableAttribute) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::DebuggerBrowsableAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!