// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ExceptionHandlingClause
  class ExceptionHandlingClause;
  // Forward declaring type: LocalVariableInfo
  class LocalVariableInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBody
  class MethodBody;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::MethodBody);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MethodBody*, "System.Reflection", "MethodBody");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x34
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.MethodBody
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57A278
  class MethodBody : public ::Il2CppObject {
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
    // private System.Reflection.ExceptionHandlingClause[] clauses
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::Reflection::ExceptionHandlingClause*> clauses;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Reflection::ExceptionHandlingClause*>) == 0x8);
    // private System.Reflection.LocalVariableInfo[] locals
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::System::Reflection::LocalVariableInfo*> locals;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Reflection::LocalVariableInfo*>) == 0x8);
    // private System.Byte[] il
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> il;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Boolean init_locals
    // Size: 0x1
    // Offset: 0x28
    bool init_locals;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: init_locals and: sig_token
    char __padding3[0x3] = {};
    // private System.Int32 sig_token
    // Size: 0x4
    // Offset: 0x2C
    int sig_token;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 max_stack
    // Size: 0x4
    // Offset: 0x30
    int max_stack;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Reflection.ExceptionHandlingClause[] clauses
    ::ArrayW<::System::Reflection::ExceptionHandlingClause*>& dyn_clauses();
    // Get instance field reference: private System.Reflection.LocalVariableInfo[] locals
    ::ArrayW<::System::Reflection::LocalVariableInfo*>& dyn_locals();
    // Get instance field reference: private System.Byte[] il
    ::ArrayW<uint8_t>& dyn_il();
    // Get instance field reference: private System.Boolean init_locals
    bool& dyn_init_locals();
    // Get instance field reference: private System.Int32 sig_token
    int& dyn_sig_token();
    // Get instance field reference: private System.Int32 max_stack
    int& dyn_max_stack();
    // protected System.Void .ctor()
    // Offset: 0xED4148
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodBody* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::MethodBody::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodBody*, creationType>()));
    }
  }; // System.Reflection.MethodBody
  #pragma pack(pop)
  static check_size<sizeof(MethodBody), 48 + sizeof(int)> __System_Reflection_MethodBodySizeCheck;
  static_assert(sizeof(MethodBody) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::MethodBody::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
