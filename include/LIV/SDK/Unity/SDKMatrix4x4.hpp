// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Forward declaring namespace: LIV::SDK::Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: SDKVector3
  struct SDKVector3;
  // Forward declaring type: SDKQuaternion
  struct SDKQuaternion;
}
// Completed forward declares
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: SDKMatrix4x4
  struct SDKMatrix4x4;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKMatrix4x4, "LIV.SDK.Unity", "SDKMatrix4x4");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LIV.SDK.Unity.SDKMatrix4x4
  // [TokenAttribute] Offset: FFFFFFFF
  struct SDKMatrix4x4/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single m00
    // Size: 0x4
    // Offset: 0x0
    float m00;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m01
    // Size: 0x4
    // Offset: 0x4
    float m01;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m02
    // Size: 0x4
    // Offset: 0x8
    float m02;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m03
    // Size: 0x4
    // Offset: 0xC
    float m03;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m10
    // Size: 0x4
    // Offset: 0x10
    float m10;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m11
    // Size: 0x4
    // Offset: 0x14
    float m11;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m12
    // Size: 0x4
    // Offset: 0x18
    float m12;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m13
    // Size: 0x4
    // Offset: 0x1C
    float m13;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m20
    // Size: 0x4
    // Offset: 0x20
    float m20;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m21
    // Size: 0x4
    // Offset: 0x24
    float m21;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m22
    // Size: 0x4
    // Offset: 0x28
    float m22;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m23
    // Size: 0x4
    // Offset: 0x2C
    float m23;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m30
    // Size: 0x4
    // Offset: 0x30
    float m30;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m31
    // Size: 0x4
    // Offset: 0x34
    float m31;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m32
    // Size: 0x4
    // Offset: 0x38
    float m32;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m33
    // Size: 0x4
    // Offset: 0x3C
    float m33;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: SDKMatrix4x4
    constexpr SDKMatrix4x4(float m00_ = {}, float m01_ = {}, float m02_ = {}, float m03_ = {}, float m10_ = {}, float m11_ = {}, float m12_ = {}, float m13_ = {}, float m20_ = {}, float m21_ = {}, float m22_ = {}, float m23_ = {}, float m30_ = {}, float m31_ = {}, float m32_ = {}, float m33_ = {}) noexcept : m00{m00_}, m01{m01_}, m02{m02_}, m03{m03_}, m10{m10_}, m11{m11_}, m12{m12_}, m13{m13_}, m20{m20_}, m21{m21_}, m22{m22_}, m23{m23_}, m30{m30_}, m31{m31_}, m32{m32_}, m33{m33_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single m00
    float& dyn_m00();
    // Get instance field reference: public System.Single m01
    float& dyn_m01();
    // Get instance field reference: public System.Single m02
    float& dyn_m02();
    // Get instance field reference: public System.Single m03
    float& dyn_m03();
    // Get instance field reference: public System.Single m10
    float& dyn_m10();
    // Get instance field reference: public System.Single m11
    float& dyn_m11();
    // Get instance field reference: public System.Single m12
    float& dyn_m12();
    // Get instance field reference: public System.Single m13
    float& dyn_m13();
    // Get instance field reference: public System.Single m20
    float& dyn_m20();
    // Get instance field reference: public System.Single m21
    float& dyn_m21();
    // Get instance field reference: public System.Single m22
    float& dyn_m22();
    // Get instance field reference: public System.Single m23
    float& dyn_m23();
    // Get instance field reference: public System.Single m30
    float& dyn_m30();
    // Get instance field reference: public System.Single m31
    float& dyn_m31();
    // Get instance field reference: public System.Single m32
    float& dyn_m32();
    // Get instance field reference: public System.Single m33
    float& dyn_m33();
    // static public LIV.SDK.Unity.SDKMatrix4x4 get_identity()
    // Offset: 0xB02850
    static ::LIV::SDK::Unity::SDKMatrix4x4 get_identity();
    // static public LIV.SDK.Unity.SDKMatrix4x4 Perspective(System.Single vFov, System.Single aspect, System.Single zNear, System.Single zFar)
    // Offset: 0xB032E0
    static ::LIV::SDK::Unity::SDKMatrix4x4 Perspective(float vFov, float aspect, float zNear, float zFar);
    // static public LIV.SDK.Unity.SDKMatrix4x4 Translate(LIV.SDK.Unity.SDKVector3 value)
    // Offset: 0xB034A4
    static ::LIV::SDK::Unity::SDKMatrix4x4 Translate(::LIV::SDK::Unity::SDKVector3 value);
    // static public LIV.SDK.Unity.SDKMatrix4x4 Rotate(LIV.SDK.Unity.SDKQuaternion value)
    // Offset: 0xB034E0
    static ::LIV::SDK::Unity::SDKMatrix4x4 Rotate(::LIV::SDK::Unity::SDKQuaternion value);
    // static public LIV.SDK.Unity.SDKMatrix4x4 Scale(LIV.SDK.Unity.SDKVector3 value)
    // Offset: 0xB03574
    static ::LIV::SDK::Unity::SDKMatrix4x4 Scale(::LIV::SDK::Unity::SDKVector3 value);
    // static public LIV.SDK.Unity.SDKMatrix4x4 TRS(LIV.SDK.Unity.SDKVector3 translation, LIV.SDK.Unity.SDKQuaternion rotation, LIV.SDK.Unity.SDKVector3 scale)
    // Offset: 0xB035A0
    static ::LIV::SDK::Unity::SDKMatrix4x4 TRS(::LIV::SDK::Unity::SDKVector3 translation, ::LIV::SDK::Unity::SDKQuaternion rotation, ::LIV::SDK::Unity::SDKVector3 scale);
    // public override System.String ToString()
    // Offset: 0xB0368C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // LIV.SDK.Unity.SDKMatrix4x4
  #pragma pack(pop)
  static check_size<sizeof(SDKMatrix4x4), 60 + sizeof(float)> __LIV_SDK_Unity_SDKMatrix4x4SizeCheck;
  static_assert(sizeof(SDKMatrix4x4) == 0x40);
  // static public LIV.SDK.Unity.SDKMatrix4x4 op_Multiply(LIV.SDK.Unity.SDKMatrix4x4 lhs, LIV.SDK.Unity.SDKMatrix4x4 rhs)
  // Offset: 0xB033A0
  ::LIV::SDK::Unity::SDKMatrix4x4 operator*(const ::LIV::SDK::Unity::SDKMatrix4x4& lhs, const ::LIV::SDK::Unity::SDKMatrix4x4& rhs);
  // static public LIV.SDK.Unity.SDKVector3 op_Multiply(LIV.SDK.Unity.SDKMatrix4x4 lhs, LIV.SDK.Unity.SDKVector3 rhs)
  // Offset: 0xB0344C
  ::LIV::SDK::Unity::SDKVector3 operator*(const ::LIV::SDK::Unity::SDKMatrix4x4& lhs, const ::LIV::SDK::Unity::SDKVector3& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKMatrix4x4::get_identity
// Il2CppName: get_identity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKMatrix4x4 (*)()>(&LIV::SDK::Unity::SDKMatrix4x4::get_identity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKMatrix4x4), "get_identity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKMatrix4x4::Perspective
// Il2CppName: Perspective
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKMatrix4x4 (*)(float, float, float, float)>(&LIV::SDK::Unity::SDKMatrix4x4::Perspective)> {
  static const MethodInfo* get() {
    static auto* vFov = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* aspect = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* zNear = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* zFar = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKMatrix4x4), "Perspective", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vFov, aspect, zNear, zFar});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKMatrix4x4::Translate
// Il2CppName: Translate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKMatrix4x4 (*)(::LIV::SDK::Unity::SDKVector3)>(&LIV::SDK::Unity::SDKMatrix4x4::Translate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("LIV.SDK.Unity", "SDKVector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKMatrix4x4), "Translate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKMatrix4x4::Rotate
// Il2CppName: Rotate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKMatrix4x4 (*)(::LIV::SDK::Unity::SDKQuaternion)>(&LIV::SDK::Unity::SDKMatrix4x4::Rotate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("LIV.SDK.Unity", "SDKQuaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKMatrix4x4), "Rotate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKMatrix4x4::Scale
// Il2CppName: Scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKMatrix4x4 (*)(::LIV::SDK::Unity::SDKVector3)>(&LIV::SDK::Unity::SDKMatrix4x4::Scale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("LIV.SDK.Unity", "SDKVector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKMatrix4x4), "Scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKMatrix4x4::TRS
// Il2CppName: TRS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKMatrix4x4 (*)(::LIV::SDK::Unity::SDKVector3, ::LIV::SDK::Unity::SDKQuaternion, ::LIV::SDK::Unity::SDKVector3)>(&LIV::SDK::Unity::SDKMatrix4x4::TRS)> {
  static const MethodInfo* get() {
    static auto* translation = &::il2cpp_utils::GetClassFromName("LIV.SDK.Unity", "SDKVector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("LIV.SDK.Unity", "SDKQuaternion")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("LIV.SDK.Unity", "SDKVector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKMatrix4x4), "TRS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{translation, rotation, scale});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKMatrix4x4::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LIV::SDK::Unity::SDKMatrix4x4::*)()>(&LIV::SDK::Unity::SDKMatrix4x4::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKMatrix4x4), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKMatrix4x4::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKMatrix4x4::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
