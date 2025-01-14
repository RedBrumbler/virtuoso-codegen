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
// Type namespace: Firebase
namespace Firebase {
  // Forward declaring type: FirebaseException
  class FirebaseException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::FirebaseException);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::FirebaseException*, "Firebase", "FirebaseException");
// Type namespace: Firebase
namespace Firebase {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.FirebaseException
  // [TokenAttribute] Offset: FFFFFFFF
  class FirebaseException : public ::System::Exception {
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
    // [DebuggerBrowsableAttribute] Offset: 0x5D8C34
    // private System.Int32 <ErrorCode>k__BackingField
    // Size: 0x4
    // Offset: 0x88
    int ErrorCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return ErrorCode;
    }
    // Get instance field reference: private System.Int32 <ErrorCode>k__BackingField
    int& dyn_$ErrorCode$k__BackingField();
    // public System.Int32 get_ErrorCode()
    // Offset: 0x1299AAC
    int get_ErrorCode();
    // private System.Void set_ErrorCode(System.Int32 value)
    // Offset: 0x1299AB4
    void set_ErrorCode(int value);
    // public System.Void .ctor(System.Int32 errorCode, System.String message)
    // Offset: 0x1299A2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseException* New_ctor(int errorCode, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::FirebaseException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseException*, creationType>(errorCode, message)));
    }
  }; // Firebase.FirebaseException
  #pragma pack(pop)
  static check_size<sizeof(FirebaseException), 136 + sizeof(int)> __Firebase_FirebaseExceptionSizeCheck;
  static_assert(sizeof(FirebaseException) == 0x8C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::FirebaseException::get_ErrorCode
// Il2CppName: get_ErrorCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Firebase::FirebaseException::*)()>(&Firebase::FirebaseException::get_ErrorCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseException*), "get_ErrorCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseException::set_ErrorCode
// Il2CppName: set_ErrorCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::FirebaseException::*)(int)>(&Firebase::FirebaseException::set_ErrorCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseException*), "set_ErrorCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
