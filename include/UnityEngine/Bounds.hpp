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
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Bounds
  struct Bounds;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bounds, "UnityEngine", "Bounds");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Bounds
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 565194
  // [NativeHeaderAttribute] Offset: 565194
  // [RequiredByNativeCodeAttribute] Offset: 565194
  // [NativeHeaderAttribute] Offset: 565194
  // [NativeTypeAttribute] Offset: 565194
  // [NativeHeaderAttribute] Offset: 565194
  // [NativeClassAttribute] Offset: 565194
  struct Bounds/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Bounds>, public ::System::IFormattable*/ {
    public:
    public:
    // private UnityEngine.Vector3 m_Center
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 m_Center;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [NativeNameAttribute] Offset: 0x56A268
    // private UnityEngine.Vector3 m_Extents
    // Size: 0xC
    // Offset: 0xC
    ::UnityEngine::Vector3 m_Extents;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: Bounds
    constexpr Bounds(::UnityEngine::Vector3 m_Center_ = {}, ::UnityEngine::Vector3 m_Extents_ = {}) noexcept : m_Center{m_Center_}, m_Extents{m_Extents_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Bounds>
    operator ::System::IEquatable_1<::UnityEngine::Bounds>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Bounds>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Get instance field reference: private UnityEngine.Vector3 m_Center
    ::UnityEngine::Vector3& dyn_m_Center();
    // Get instance field reference: private UnityEngine.Vector3 m_Extents
    ::UnityEngine::Vector3& dyn_m_Extents();
    // public UnityEngine.Vector3 get_center()
    // Offset: 0xE3233C
    ::UnityEngine::Vector3 get_center();
    // public System.Void set_center(UnityEngine.Vector3 value)
    // Offset: 0xE32470
    void set_center(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_size()
    // Offset: 0xE3247C
    ::UnityEngine::Vector3 get_size();
    // public System.Void set_size(UnityEngine.Vector3 value)
    // Offset: 0xE32494
    void set_size(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_extents()
    // Offset: 0xE32348
    ::UnityEngine::Vector3 get_extents();
    // public System.Void set_extents(UnityEngine.Vector3 value)
    // Offset: 0xE324B0
    void set_extents(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_min()
    // Offset: 0xE324BC
    ::UnityEngine::Vector3 get_min();
    // public UnityEngine.Vector3 get_max()
    // Offset: 0xE324DC
    ::UnityEngine::Vector3 get_max();
    // public System.Void .ctor(UnityEngine.Vector3 center, UnityEngine.Vector3 size)
    // Offset: 0xE322B8
    // ABORTED: conflicts with another method.  Bounds(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size);
    // public System.Boolean Equals(UnityEngine.Bounds other)
    // Offset: 0xE323F0
    bool Equals(::UnityEngine::Bounds other);
    // public System.Void SetMinMax(UnityEngine.Vector3 min, UnityEngine.Vector3 max)
    // Offset: 0xE325A8
    void SetMinMax(::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max);
    // public System.Void Encapsulate(UnityEngine.Vector3 point)
    // Offset: 0xE325E0
    void Encapsulate(::UnityEngine::Vector3 point);
    // public System.Boolean Intersects(UnityEngine.Bounds bounds)
    // Offset: 0xE32658
    bool Intersects(::UnityEngine::Bounds bounds);
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0xE32780
    ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE322D8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xE32354
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.String ToString()
    // Offset: 0xE326F8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.Bounds
  #pragma pack(pop)
  static check_size<sizeof(Bounds), 12 + sizeof(::UnityEngine::Vector3)> __UnityEngine_BoundsSizeCheck;
  static_assert(sizeof(Bounds) == 0x18);
  // static public System.Boolean op_Equality(UnityEngine.Bounds lhs, UnityEngine.Bounds rhs)
  // Offset: 0xE324FC
  bool operator ==(const ::UnityEngine::Bounds& lhs, const ::UnityEngine::Bounds& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Bounds lhs, UnityEngine.Bounds rhs)
  // Offset: 0xE3255C
  bool operator !=(const ::UnityEngine::Bounds& lhs, const ::UnityEngine::Bounds& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Bounds::get_center
// Il2CppName: get_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Bounds::*)()>(&UnityEngine::Bounds::get_center)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "get_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::set_center
// Il2CppName: set_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bounds::*)(::UnityEngine::Vector3)>(&UnityEngine::Bounds::set_center)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "set_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::get_size
// Il2CppName: get_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Bounds::*)()>(&UnityEngine::Bounds::get_size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "get_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::set_size
// Il2CppName: set_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bounds::*)(::UnityEngine::Vector3)>(&UnityEngine::Bounds::set_size)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "set_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::get_extents
// Il2CppName: get_extents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Bounds::*)()>(&UnityEngine::Bounds::get_extents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "get_extents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::set_extents
// Il2CppName: set_extents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bounds::*)(::UnityEngine::Vector3)>(&UnityEngine::Bounds::set_extents)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "set_extents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::get_min
// Il2CppName: get_min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Bounds::*)()>(&UnityEngine::Bounds::get_min)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "get_min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::get_max
// Il2CppName: get_max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Bounds::*)()>(&UnityEngine::Bounds::get_max)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "get_max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::Bounds
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Bounds::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Bounds::*)(::UnityEngine::Bounds)>(&UnityEngine::Bounds::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::SetMinMax
// Il2CppName: SetMinMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bounds::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&UnityEngine::Bounds::SetMinMax)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "SetMinMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min, max});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::Encapsulate
// Il2CppName: Encapsulate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bounds::*)(::UnityEngine::Vector3)>(&UnityEngine::Bounds::Encapsulate)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "Encapsulate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::Intersects
// Il2CppName: Intersects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Bounds::*)(::UnityEngine::Bounds)>(&UnityEngine::Bounds::Intersects)> {
  static const MethodInfo* get() {
    static auto* bounds = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "Intersects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bounds});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Bounds::*)(::StringW, ::System::IFormatProvider*)>(&UnityEngine::Bounds::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Bounds::*)()>(&UnityEngine::Bounds::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Bounds::*)(::Il2CppObject*)>(&UnityEngine::Bounds::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Bounds::*)()>(&UnityEngine::Bounds::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bounds), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bounds::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Bounds::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!