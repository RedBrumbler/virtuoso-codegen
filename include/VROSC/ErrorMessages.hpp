// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ErrorMessages
  class ErrorMessages;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ErrorMessages);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ErrorMessages*, "VROSC", "ErrorMessages");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ErrorMessages
  // [TokenAttribute] Offset: FFFFFFFF
  class ErrorMessages : public ::UnityEngine::ScriptableObject {
    public:
    // Nested type: ::VROSC::ErrorMessages::ErrorMessagePair
    class ErrorMessagePair;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Collections.Generic.List`1<VROSC.ErrorMessages/VROSC.ErrorMessagePair> Errors
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::VROSC::ErrorMessages::ErrorMessagePair*>* Errors;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::ErrorMessages::ErrorMessagePair*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Collections.Generic.List`1<VROSC.ErrorMessages/VROSC.ErrorMessagePair> Errors
    ::System::Collections::Generic::List_1<::VROSC::ErrorMessages::ErrorMessagePair*>*& dyn_Errors();
    // public System.Void .ctor()
    // Offset: 0x1316210
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ErrorMessages* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ErrorMessages::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ErrorMessages*, creationType>()));
    }
  }; // VROSC.ErrorMessages
  #pragma pack(pop)
  static check_size<sizeof(ErrorMessages), 24 + sizeof(::System::Collections::Generic::List_1<::VROSC::ErrorMessages::ErrorMessagePair*>*)> __VROSC_ErrorMessagesSizeCheck;
  static_assert(sizeof(ErrorMessages) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ErrorMessages::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
