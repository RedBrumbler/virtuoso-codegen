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
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: IntNode
  class IntNode;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: IntField
  class IntField;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::IntField);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IntField*, "VROSC", "IntField");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.IntField
  // [TokenAttribute] Offset: FFFFFFFF
  class IntField : public ::Il2CppObject {
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
    // protected System.Int32 EnteredValue
    // Size: 0x4
    // Offset: 0x10
    int EnteredValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: EnteredValue and: ConnectedValue
    char __padding0[0x4] = {};
    // protected VROSC.IntNode ConnectedValue
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::IntNode* ConnectedValue;
    // Field size check
    static_assert(sizeof(::VROSC::IntNode*) == 0x8);
    public:
    // Get instance field reference: protected System.Int32 EnteredValue
    int& dyn_EnteredValue();
    // Get instance field reference: protected VROSC.IntNode ConnectedValue
    ::VROSC::IntNode*& dyn_ConnectedValue();
    // public System.Int32 get_Value()
    // Offset: 0x1385720
    int get_Value();
    // public System.Void .ctor(System.Int32 enteredValue)
    // Offset: 0x1385908
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntField* New_ctor(int enteredValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::IntField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntField*, creationType>(enteredValue)));
    }
    // public VROSC.IntNode GetNode()
    // Offset: 0x1385934
    ::VROSC::IntNode* GetNode();
    // public System.Void SetNode(VROSC.IntNode intNode)
    // Offset: 0x138593C
    void SetNode(::VROSC::IntNode* intNode);
  }; // VROSC.IntField
  #pragma pack(pop)
  static check_size<sizeof(IntField), 24 + sizeof(::VROSC::IntNode*)> __VROSC_IntFieldSizeCheck;
  static_assert(sizeof(IntField) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::IntField::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::IntField::*)()>(&VROSC::IntField::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::IntField*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::IntField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::IntField::GetNode
// Il2CppName: GetNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::IntNode* (VROSC::IntField::*)()>(&VROSC::IntField::GetNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::IntField*), "GetNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::IntField::SetNode
// Il2CppName: SetNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IntField::*)(::VROSC::IntNode*)>(&VROSC::IntField::SetNode)> {
  static const MethodInfo* get() {
    static auto* intNode = &::il2cpp_utils::GetClassFromName("VROSC", "IntNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IntField*), "SetNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{intNode});
  }
};