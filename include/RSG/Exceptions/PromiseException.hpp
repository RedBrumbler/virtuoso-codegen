// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: RSG.Exceptions
namespace RSG::Exceptions {
  // Forward declaring type: PromiseException
  class PromiseException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RSG::Exceptions::PromiseException);
DEFINE_IL2CPP_ARG_TYPE(::RSG::Exceptions::PromiseException*, "RSG.Exceptions", "PromiseException");
// Type namespace: RSG.Exceptions
namespace RSG::Exceptions {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: RSG.Exceptions.PromiseException
  // [TokenAttribute] Offset: FFFFFFFF
  class PromiseException : public ::System::Exception {
    public:
    // public System.Void .ctor()
    // Offset: 0x992108
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PromiseException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Exceptions::PromiseException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PromiseException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x99216C
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PromiseException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Exceptions::PromiseException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PromiseException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception inner)
    // Offset: 0x9921E0
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception inner)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PromiseException* New_ctor(::StringW message, ::System::Exception* inner) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Exceptions::PromiseException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PromiseException*, creationType>(message, inner)));
    }
  }; // RSG.Exceptions.PromiseException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RSG::Exceptions::PromiseException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RSG::Exceptions::PromiseException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RSG::Exceptions::PromiseException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
