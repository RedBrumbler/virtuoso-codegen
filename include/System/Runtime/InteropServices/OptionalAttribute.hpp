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
  // Forward declaring type: OptionalAttribute
  class OptionalAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::InteropServices::OptionalAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::OptionalAttribute*, "System.Runtime.InteropServices", "OptionalAttribute");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.OptionalAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57CE78
  // [AttributeUsageAttribute] Offset: 57CE78
  class OptionalAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0xEBDD80
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OptionalAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::OptionalAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OptionalAttribute*, creationType>()));
    }
  }; // System.Runtime.InteropServices.OptionalAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::OptionalAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
