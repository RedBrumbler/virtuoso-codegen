// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
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
  // Forward declaring type: RectInt
  struct RectInt;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RectInt, "UnityEngine", "RectInt");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.RectInt
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 565350
  struct RectInt/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::RectInt>, public ::System::IFormattable*/ {
    public:
    public:
    // private System.Int32 m_XMin
    // Size: 0x4
    // Offset: 0x0
    int m_XMin;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_YMin
    // Size: 0x4
    // Offset: 0x4
    int m_YMin;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Width
    // Size: 0x4
    // Offset: 0x8
    int m_Width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Height
    // Size: 0x4
    // Offset: 0xC
    int m_Height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RectInt
    constexpr RectInt(int m_XMin_ = {}, int m_YMin_ = {}, int m_Width_ = {}, int m_Height_ = {}) noexcept : m_XMin{m_XMin_}, m_YMin{m_YMin_}, m_Width{m_Width_}, m_Height{m_Height_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::RectInt>
    operator ::System::IEquatable_1<::UnityEngine::RectInt>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::RectInt>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Get instance field reference: private System.Int32 m_XMin
    int& dyn_m_XMin();
    // Get instance field reference: private System.Int32 m_YMin
    int& dyn_m_YMin();
    // Get instance field reference: private System.Int32 m_Width
    int& dyn_m_Width();
    // Get instance field reference: private System.Int32 m_Height
    int& dyn_m_Height();
    // public System.Int32 get_x()
    // Offset: 0x9D528C
    int get_x();
    // public System.Int32 get_y()
    // Offset: 0x9D5294
    int get_y();
    // public System.Int32 get_width()
    // Offset: 0x9D529C
    int get_width();
    // public System.Int32 get_height()
    // Offset: 0x9D52A4
    int get_height();
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0x9D5334
    ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);
    // public System.Boolean Equals(UnityEngine.RectInt other)
    // Offset: 0x9D5500
    bool Equals(::UnityEngine::RectInt other);
    // public override System.String ToString()
    // Offset: 0x9D52AC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.RectInt
  #pragma pack(pop)
  static check_size<sizeof(RectInt), 12 + sizeof(int)> __UnityEngine_RectIntSizeCheck;
  static_assert(sizeof(RectInt) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RectInt::get_x
// Il2CppName: get_x
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RectInt::*)()>(&UnityEngine::RectInt::get_x)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectInt), "get_x", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectInt::get_y
// Il2CppName: get_y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RectInt::*)()>(&UnityEngine::RectInt::get_y)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectInt), "get_y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectInt::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RectInt::*)()>(&UnityEngine::RectInt::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectInt), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectInt::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RectInt::*)()>(&UnityEngine::RectInt::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectInt), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectInt::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::RectInt::*)(::StringW, ::System::IFormatProvider*)>(&UnityEngine::RectInt::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectInt), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectInt::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::RectInt::*)(::UnityEngine::RectInt)>(&UnityEngine::RectInt::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectInt")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectInt), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::RectInt::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::RectInt::*)()>(&UnityEngine::RectInt::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RectInt), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
