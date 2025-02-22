// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: BitMaskAttribute
  class BitMaskAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::BitMaskAttribute);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BitMaskAttribute*, "VROSC", "BitMaskAttribute");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.BitMaskAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class BitMaskAttribute : public ::UnityEngine::PropertyAttribute {
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
    // public System.Type propType
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* propType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return propType;
    }
    // Get instance field reference: public System.Type propType
    ::System::Type*& dyn_propType();
    // public System.Void .ctor(System.Type aType)
    // Offset: 0x1323B58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BitMaskAttribute* New_ctor(::System::Type* aType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::BitMaskAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BitMaskAttribute*, creationType>(aType)));
    }
  }; // VROSC.BitMaskAttribute
  #pragma pack(pop)
  static check_size<sizeof(BitMaskAttribute), 16 + sizeof(::System::Type*)> __VROSC_BitMaskAttributeSizeCheck;
  static_assert(sizeof(BitMaskAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::BitMaskAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
