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
// Type namespace: System
namespace System {
  // Forward declaring type: NonSerializedAttribute
  class NonSerializedAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::NonSerializedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::NonSerializedAttribute*, "System", "NonSerializedAttribute");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.NonSerializedAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 5788A4
  // [AttributeUsageAttribute] Offset: 5788A4
  class NonSerializedAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0xFCEB60
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NonSerializedAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::NonSerializedAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NonSerializedAttribute*, creationType>()));
    }
  }; // System.NonSerializedAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::NonSerializedAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
