// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.Node
#include "VROSC/Node.hpp"
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
  // Forward declaring type: TieSizeToInt
  class TieSizeToInt;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TieSizeToInt);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TieSizeToInt*, "VROSC", "TieSizeToInt");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TieSizeToInt
  // [TokenAttribute] Offset: FFFFFFFF
  class TieSizeToInt : public ::VROSC::Node {
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
    // private VROSC.IntNode _x
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::IntNode* x;
    // Field size check
    static_assert(sizeof(::VROSC::IntNode*) == 0x8);
    // private System.Int32 _previousValueX
    // Size: 0x4
    // Offset: 0x20
    int previousValueX;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: previousValueX and: y
    char __padding1[0x4] = {};
    // private VROSC.IntNode _y
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::IntNode* y;
    // Field size check
    static_assert(sizeof(::VROSC::IntNode*) == 0x8);
    // private System.Int32 _previousValueY
    // Size: 0x4
    // Offset: 0x30
    int previousValueY;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: previousValueY and: z
    char __padding3[0x4] = {};
    // private VROSC.IntNode _z
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::IntNode* z;
    // Field size check
    static_assert(sizeof(::VROSC::IntNode*) == 0x8);
    // private System.Int32 _previousValueZ
    // Size: 0x4
    // Offset: 0x40
    int previousValueZ;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.IntNode _x
    ::VROSC::IntNode*& dyn__x();
    // Get instance field reference: private System.Int32 _previousValueX
    int& dyn__previousValueX();
    // Get instance field reference: private VROSC.IntNode _y
    ::VROSC::IntNode*& dyn__y();
    // Get instance field reference: private System.Int32 _previousValueY
    int& dyn__previousValueY();
    // Get instance field reference: private VROSC.IntNode _z
    ::VROSC::IntNode*& dyn__z();
    // Get instance field reference: private System.Int32 _previousValueZ
    int& dyn__previousValueZ();
    // protected System.Void Start()
    // Offset: 0x13FE5E8
    void Start();
    // private System.Void ValueChangedX(System.Int32 newValue)
    // Offset: 0x13FE89C
    void ValueChangedX(int newValue);
    // private System.Void ValueChangedY(System.Int32 newValue)
    // Offset: 0x13FE968
    void ValueChangedY(int newValue);
    // private System.Void ValueChangedZ(System.Int32 newValue)
    // Offset: 0x13FEA34
    void ValueChangedZ(int newValue);
    // public System.Void .ctor()
    // Offset: 0x13FEB04
    // Implemented from: VROSC.Node
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TieSizeToInt* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TieSizeToInt::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TieSizeToInt*, creationType>()));
    }
  }; // VROSC.TieSizeToInt
  #pragma pack(pop)
  static check_size<sizeof(TieSizeToInt), 64 + sizeof(int)> __VROSC_TieSizeToIntSizeCheck;
  static_assert(sizeof(TieSizeToInt) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TieSizeToInt::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TieSizeToInt::*)()>(&VROSC::TieSizeToInt::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TieSizeToInt*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TieSizeToInt::ValueChangedX
// Il2CppName: ValueChangedX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TieSizeToInt::*)(int)>(&VROSC::TieSizeToInt::ValueChangedX)> {
  static const MethodInfo* get() {
    static auto* newValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TieSizeToInt*), "ValueChangedX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newValue});
  }
};
// Writing MetadataGetter for method: VROSC::TieSizeToInt::ValueChangedY
// Il2CppName: ValueChangedY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TieSizeToInt::*)(int)>(&VROSC::TieSizeToInt::ValueChangedY)> {
  static const MethodInfo* get() {
    static auto* newValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TieSizeToInt*), "ValueChangedY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newValue});
  }
};
// Writing MetadataGetter for method: VROSC::TieSizeToInt::ValueChangedZ
// Il2CppName: ValueChangedZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TieSizeToInt::*)(int)>(&VROSC::TieSizeToInt::ValueChangedZ)> {
  static const MethodInfo* get() {
    static auto* newValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TieSizeToInt*), "ValueChangedZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newValue});
  }
};
// Writing MetadataGetter for method: VROSC::TieSizeToInt::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
