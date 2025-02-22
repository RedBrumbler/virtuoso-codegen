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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Style
  class TMP_Style;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_Style);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Style*, "TMPro", "TMP_Style");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_Style
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_Style : public ::Il2CppObject {
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
    // private System.String m_Name
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 m_HashCode
    // Size: 0x4
    // Offset: 0x18
    int m_HashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_HashCode and: m_OpeningDefinition
    char __padding1[0x4] = {};
    // private System.String m_OpeningDefinition
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_OpeningDefinition;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_ClosingDefinition
    // Size: 0x8
    // Offset: 0x28
    ::StringW m_ClosingDefinition;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32[] m_OpeningTagArray
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<int> m_OpeningTagArray;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32[] m_ClosingTagArray
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<int> m_ClosingTagArray;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.UInt32[] m_OpeningTagUnicodeArray
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint> m_OpeningTagUnicodeArray;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // System.UInt32[] m_ClosingTagUnicodeArray
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint> m_ClosingTagUnicodeArray;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    public:
    // Get static field: static TMPro.TMP_Style k_NormalStyle
    static ::TMPro::TMP_Style* _get_k_NormalStyle();
    // Set static field: static TMPro.TMP_Style k_NormalStyle
    static void _set_k_NormalStyle(::TMPro::TMP_Style* value);
    // Get instance field reference: private System.String m_Name
    ::StringW& dyn_m_Name();
    // Get instance field reference: private System.Int32 m_HashCode
    int& dyn_m_HashCode();
    // Get instance field reference: private System.String m_OpeningDefinition
    ::StringW& dyn_m_OpeningDefinition();
    // Get instance field reference: private System.String m_ClosingDefinition
    ::StringW& dyn_m_ClosingDefinition();
    // Get instance field reference: private System.Int32[] m_OpeningTagArray
    ::ArrayW<int>& dyn_m_OpeningTagArray();
    // Get instance field reference: private System.Int32[] m_ClosingTagArray
    ::ArrayW<int>& dyn_m_ClosingTagArray();
    // Get instance field reference: System.UInt32[] m_OpeningTagUnicodeArray
    ::ArrayW<uint>& dyn_m_OpeningTagUnicodeArray();
    // Get instance field reference: System.UInt32[] m_ClosingTagUnicodeArray
    ::ArrayW<uint>& dyn_m_ClosingTagUnicodeArray();
    // static public TMPro.TMP_Style get_NormalStyle()
    // Offset: 0x85CBB8
    static ::TMPro::TMP_Style* get_NormalStyle();
    // public System.String get_name()
    // Offset: 0x85CD18
    ::StringW get_name();
    // public System.Void set_name(System.String value)
    // Offset: 0x85CD20
    void set_name(::StringW value);
    // public System.Int32 get_hashCode()
    // Offset: 0x85CD5C
    int get_hashCode();
    // public System.Void set_hashCode(System.Int32 value)
    // Offset: 0x85CD64
    void set_hashCode(int value);
    // public System.String get_styleOpeningDefinition()
    // Offset: 0x85CD78
    ::StringW get_styleOpeningDefinition();
    // public System.String get_styleClosingDefinition()
    // Offset: 0x85CD80
    ::StringW get_styleClosingDefinition();
    // public System.Int32[] get_styleOpeningTagArray()
    // Offset: 0x85CD88
    ::ArrayW<int> get_styleOpeningTagArray();
    // public System.Int32[] get_styleClosingTagArray()
    // Offset: 0x85CD90
    ::ArrayW<int> get_styleClosingTagArray();
    // System.Void .ctor(System.String styleName, System.String styleOpeningDefinition, System.String styleClosingDefinition)
    // Offset: 0x85CC78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Style* New_ctor(::StringW styleName, ::StringW styleOpeningDefinition, ::StringW styleClosingDefinition) {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_Style::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Style*, creationType>(styleName, styleOpeningDefinition, styleClosingDefinition)));
    }
    // public System.Void RefreshStyle()
    // Offset: 0x85CD98
    void RefreshStyle();
  }; // TMPro.TMP_Style
  #pragma pack(pop)
  static check_size<sizeof(TMP_Style), 72 + sizeof(::ArrayW<uint>)> __TMPro_TMP_StyleSizeCheck;
  static_assert(sizeof(TMP_Style) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_Style::get_NormalStyle
// Il2CppName: get_NormalStyle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Style* (*)()>(&TMPro::TMP_Style::get_NormalStyle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Style*), "get_NormalStyle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Style::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (TMPro::TMP_Style::*)()>(&TMPro::TMP_Style::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Style*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Style::set_name
// Il2CppName: set_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_Style::*)(::StringW)>(&TMPro::TMP_Style::set_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Style*), "set_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Style::get_hashCode
// Il2CppName: get_hashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (TMPro::TMP_Style::*)()>(&TMPro::TMP_Style::get_hashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Style*), "get_hashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Style::set_hashCode
// Il2CppName: set_hashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_Style::*)(int)>(&TMPro::TMP_Style::set_hashCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Style*), "set_hashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Style::get_styleOpeningDefinition
// Il2CppName: get_styleOpeningDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (TMPro::TMP_Style::*)()>(&TMPro::TMP_Style::get_styleOpeningDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Style*), "get_styleOpeningDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Style::get_styleClosingDefinition
// Il2CppName: get_styleClosingDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (TMPro::TMP_Style::*)()>(&TMPro::TMP_Style::get_styleClosingDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Style*), "get_styleClosingDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Style::get_styleOpeningTagArray
// Il2CppName: get_styleOpeningTagArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (TMPro::TMP_Style::*)()>(&TMPro::TMP_Style::get_styleOpeningTagArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Style*), "get_styleOpeningTagArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Style::get_styleClosingTagArray
// Il2CppName: get_styleClosingTagArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (TMPro::TMP_Style::*)()>(&TMPro::TMP_Style::get_styleClosingTagArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Style*), "get_styleClosingTagArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Style::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_Style::RefreshStyle
// Il2CppName: RefreshStyle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_Style::*)()>(&TMPro::TMP_Style::RefreshStyle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Style*), "RefreshStyle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
