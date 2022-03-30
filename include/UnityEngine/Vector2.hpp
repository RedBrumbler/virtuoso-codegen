// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Vector2, "UnityEngine", "Vector2");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Vector2
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 5668C0
  // [Il2CppEagerStaticClassConstructionAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 5668C0
  // [NativeClassAttribute] Offset: 5668C0
  struct Vector2/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Vector2>, public ::System::IFormattable*/ {
    public:
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: Vector2
    constexpr Vector2(float x_ = {}, float y_ = {}) noexcept : x{x_}, y{y_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Vector2>
    operator ::System::IEquatable_1<::UnityEngine::Vector2>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Vector2>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Get static field: static private readonly UnityEngine.Vector2 zeroVector
    static ::UnityEngine::Vector2 _get_zeroVector();
    // Set static field: static private readonly UnityEngine.Vector2 zeroVector
    static void _set_zeroVector(::UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 oneVector
    static ::UnityEngine::Vector2 _get_oneVector();
    // Set static field: static private readonly UnityEngine.Vector2 oneVector
    static void _set_oneVector(::UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 upVector
    static ::UnityEngine::Vector2 _get_upVector();
    // Set static field: static private readonly UnityEngine.Vector2 upVector
    static void _set_upVector(::UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 downVector
    static ::UnityEngine::Vector2 _get_downVector();
    // Set static field: static private readonly UnityEngine.Vector2 downVector
    static void _set_downVector(::UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 leftVector
    static ::UnityEngine::Vector2 _get_leftVector();
    // Set static field: static private readonly UnityEngine.Vector2 leftVector
    static void _set_leftVector(::UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 rightVector
    static ::UnityEngine::Vector2 _get_rightVector();
    // Set static field: static private readonly UnityEngine.Vector2 rightVector
    static void _set_rightVector(::UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 positiveInfinityVector
    static ::UnityEngine::Vector2 _get_positiveInfinityVector();
    // Set static field: static private readonly UnityEngine.Vector2 positiveInfinityVector
    static void _set_positiveInfinityVector(::UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector2 negativeInfinityVector
    static ::UnityEngine::Vector2 _get_negativeInfinityVector();
    // Set static field: static private readonly UnityEngine.Vector2 negativeInfinityVector
    static void _set_negativeInfinityVector(::UnityEngine::Vector2 value);
    // static field const value: static public System.Single kEpsilon
    static constexpr const float kEpsilon = 1e-05;
    // Get static field: static public System.Single kEpsilon
    static float _get_kEpsilon();
    // Set static field: static public System.Single kEpsilon
    static void _set_kEpsilon(float value);
    // static field const value: static public System.Single kEpsilonNormalSqrt
    static constexpr const float kEpsilonNormalSqrt = 1e-15;
    // Get static field: static public System.Single kEpsilonNormalSqrt
    static float _get_kEpsilonNormalSqrt();
    // Set static field: static public System.Single kEpsilonNormalSqrt
    static void _set_kEpsilonNormalSqrt(float value);
    // Get instance field reference: public System.Single x
    float& dyn_x();
    // Get instance field reference: public System.Single y
    float& dyn_y();
    // public System.Single get_Item(System.Int32 index)
    // Offset: 0x124A594
    float get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Single value)
    // Offset: 0x124A600
    void set_Item(int index, float value);
    // public UnityEngine.Vector2 get_normalized()
    // Offset: 0x124A830
    ::UnityEngine::Vector2 get_normalized();
    // public System.Single get_magnitude()
    // Offset: 0x124A750
    float get_magnitude();
    // public System.Single get_sqrMagnitude()
    // Offset: 0x124AB3C
    float get_sqrMagnitude();
    // static public UnityEngine.Vector2 get_zero()
    // Offset: 0x124A7E4
    static ::UnityEngine::Vector2 get_zero();
    // static public UnityEngine.Vector2 get_one()
    // Offset: 0x124AD20
    static ::UnityEngine::Vector2 get_one();
    // static public UnityEngine.Vector2 get_up()
    // Offset: 0x124AD6C
    static ::UnityEngine::Vector2 get_up();
    // static public UnityEngine.Vector2 get_right()
    // Offset: 0x124ADB8
    static ::UnityEngine::Vector2 get_right();
    // static public UnityEngine.Vector2 get_negativeInfinity()
    // Offset: 0x124AE04
    static ::UnityEngine::Vector2 get_negativeInfinity();
    // public System.Void .ctor(System.Single x, System.Single y)
    // Offset: 0x124A66C
    // ABORTED: conflicts with another method.  Vector2(float x, float y);
    // static private System.Void .cctor()
    // Offset: 0x124AE50
    static void _cctor();
    // static public UnityEngine.Vector2 Lerp(UnityEngine.Vector2 a, UnityEngine.Vector2 b, System.Single t)
    // Offset: 0x124A674
    static ::UnityEngine::Vector2 Lerp(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, float t);
    // static public UnityEngine.Vector2 Scale(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
    // Offset: 0x124A6C8
    static ::UnityEngine::Vector2 Scale(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);
    // public System.Void Normalize()
    // Offset: 0x124A6D4
    void Normalize();
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0x124A8E4
    ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);
    // public System.Boolean Equals(UnityEngine.Vector2 other)
    // Offset: 0x124AB08
    bool Equals(::UnityEngine::Vector2 other);
    // static public System.Single Dot(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs)
    // Offset: 0x124AB2C
    static float Dot(::UnityEngine::Vector2 lhs, ::UnityEngine::Vector2 rhs);
    // static public System.Single Angle(UnityEngine.Vector2 from, UnityEngine.Vector2 to)
    // Offset: 0x124AB50
    static float Angle(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to);
    // public override System.String ToString()
    // Offset: 0x124A85C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x124AA3C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x124AA74
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.Vector2
  #pragma pack(pop)
  static check_size<sizeof(Vector2), 4 + sizeof(float)> __UnityEngine_Vector2SizeCheck;
  static_assert(sizeof(Vector2) == 0x8);
  // static public UnityEngine.Vector2 op_Addition(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
  // Offset: 0x124AC6C
  ::UnityEngine::Vector2 operator+(const ::UnityEngine::Vector2& a, const ::UnityEngine::Vector2& b);
  // static public UnityEngine.Vector2 op_Subtraction(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
  // Offset: 0x124AC78
  ::UnityEngine::Vector2 operator-(const ::UnityEngine::Vector2& a, const ::UnityEngine::Vector2& b);
  // static public UnityEngine.Vector2 op_Multiply(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
  // Offset: 0x124AC84
  ::UnityEngine::Vector2 operator*(const ::UnityEngine::Vector2& a, const ::UnityEngine::Vector2& b);
  // static public UnityEngine.Vector2 op_Division(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
  // Offset: 0x124AC90
  ::UnityEngine::Vector2 operator/(const ::UnityEngine::Vector2& a, const ::UnityEngine::Vector2& b);
  // static public UnityEngine.Vector2 op_Multiply(UnityEngine.Vector2 a, System.Single d)
  // Offset: 0x124AC9C
  ::UnityEngine::Vector2 operator*(const ::UnityEngine::Vector2& a, const float& d);
  // static public UnityEngine.Vector2 op_Multiply(System.Single d, UnityEngine.Vector2 a)
  // Offset: 0x124ACA8
  ::UnityEngine::Vector2 operator*(const float& d, const ::UnityEngine::Vector2& a);
  // static public UnityEngine.Vector2 op_Division(UnityEngine.Vector2 a, System.Single d)
  // Offset: 0x124ACB8
  ::UnityEngine::Vector2 operator/(const ::UnityEngine::Vector2& a, const float& d);
  // static public System.Boolean op_Equality(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs)
  // Offset: 0x124ACC4
  bool operator ==(const ::UnityEngine::Vector2& lhs, const ::UnityEngine::Vector2& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs)
  // Offset: 0x124ACEC
  bool operator !=(const ::UnityEngine::Vector2& lhs, const ::UnityEngine::Vector2& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Vector2::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Vector2::*)(int)>(&UnityEngine::Vector2::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Vector2::*)(int, float)>(&UnityEngine::Vector2::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::get_normalized
// Il2CppName: get_normalized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Vector2::*)()>(&UnityEngine::Vector2::get_normalized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "get_normalized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::get_magnitude
// Il2CppName: get_magnitude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Vector2::*)()>(&UnityEngine::Vector2::get_magnitude)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "get_magnitude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::get_sqrMagnitude
// Il2CppName: get_sqrMagnitude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Vector2::*)()>(&UnityEngine::Vector2::get_sqrMagnitude)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "get_sqrMagnitude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::get_zero
// Il2CppName: get_zero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)()>(&UnityEngine::Vector2::get_zero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "get_zero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::get_one
// Il2CppName: get_one
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)()>(&UnityEngine::Vector2::get_one)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "get_one", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::get_up
// Il2CppName: get_up
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)()>(&UnityEngine::Vector2::get_up)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "get_up", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::get_right
// Il2CppName: get_right
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)()>(&UnityEngine::Vector2::get_right)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "get_right", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::get_negativeInfinity
// Il2CppName: get_negativeInfinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)()>(&UnityEngine::Vector2::get_negativeInfinity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "get_negativeInfinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::Vector2
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Vector2::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Vector2::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float)>(&UnityEngine::Vector2::Lerp)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::Scale
// Il2CppName: Scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&UnityEngine::Vector2::Scale)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "Scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::Normalize
// Il2CppName: Normalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Vector2::*)()>(&UnityEngine::Vector2::Normalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "Normalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Vector2::*)(::StringW, ::System::IFormatProvider*)>(&UnityEngine::Vector2::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Vector2::*)(::UnityEngine::Vector2)>(&UnityEngine::Vector2::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::Dot
// Il2CppName: Dot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&UnityEngine::Vector2::Dot)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "Dot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::Angle
// Il2CppName: Angle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&UnityEngine::Vector2::Angle)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "Angle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Vector2::*)()>(&UnityEngine::Vector2::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Vector2::*)()>(&UnityEngine::Vector2::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Vector2::*)(::Il2CppObject*)>(&UnityEngine::Vector2::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Vector2), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Vector2::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Vector2::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Vector2::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Vector2::operator/
// Il2CppName: op_Division
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Vector2::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Vector2::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Vector2::operator/
// Il2CppName: op_Division
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Vector2::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Vector2::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!