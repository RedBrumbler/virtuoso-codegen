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
// Type namespace: Microsoft.CodeAnalysis
namespace Microsoft::CodeAnalysis {
  // Forward declaring type: EmbeddedAttribute
  class EmbeddedAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Microsoft::CodeAnalysis::EmbeddedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::CodeAnalysis::EmbeddedAttribute*, "Microsoft.CodeAnalysis", "EmbeddedAttribute");
// Type namespace: Microsoft.CodeAnalysis
namespace Microsoft::CodeAnalysis {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.CodeAnalysis.EmbeddedAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  // [EmbeddedAttribute] Offset: 6682C8
  class EmbeddedAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x1311548
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmbeddedAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Microsoft::CodeAnalysis::EmbeddedAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmbeddedAttribute*, creationType>()));
    }
  }; // Microsoft.CodeAnalysis.EmbeddedAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::CodeAnalysis::EmbeddedAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
