// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: FieldOffsetAttribute
  class FieldOffsetAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::InteropServices::FieldOffsetAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::FieldOffsetAttribute*, "System.Runtime.InteropServices", "FieldOffsetAttribute");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.FieldOffsetAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 57CF64
  // [ComVisibleAttribute] Offset: 57CF64
  class FieldOffsetAttribute : public ::System::Attribute {
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
    // System.Int32 _val
    // Size: 0x4
    // Offset: 0x10
    int val;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return val;
    }
    // Get instance field reference: System.Int32 _val
    int& dyn__val();
    // public System.Void .ctor(System.Int32 offset)
    // Offset: 0xC14560
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FieldOffsetAttribute* New_ctor(int offset) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::FieldOffsetAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FieldOffsetAttribute*, creationType>(offset)));
    }
  }; // System.Runtime.InteropServices.FieldOffsetAttribute
  #pragma pack(pop)
  static check_size<sizeof(FieldOffsetAttribute), 16 + sizeof(int)> __System_Runtime_InteropServices_FieldOffsetAttributeSizeCheck;
  static_assert(sizeof(FieldOffsetAttribute) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::FieldOffsetAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
