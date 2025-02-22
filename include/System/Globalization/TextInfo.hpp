// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureData
  class CultureData;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: TextInfo
  class TextInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::TextInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TextInfo*, "System.Globalization", "TextInfo");
// Type namespace: System.Globalization
namespace System::Globalization {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Globalization.TextInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57AB50
  class TextInfo : public ::Il2CppObject/*, public ::System::ICloneable, public ::System::Runtime::Serialization::IDeserializationCallback*/ {
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
    // [OptionalFieldAttribute] Offset: 0x57FA60
    // private System.String m_listSeparator
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_listSeparator;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [OptionalFieldAttribute] Offset: 0x57FA98
    // private System.Boolean m_isReadOnly
    // Size: 0x1
    // Offset: 0x18
    bool m_isReadOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [OptionalFieldAttribute] Offset: 0x57FAD0
    // private System.String m_cultureName
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_cultureName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Globalization.CultureData m_cultureData
    // Size: 0x8
    // Offset: 0x28
    ::System::Globalization::CultureData* m_cultureData;
    // Field size check
    static_assert(sizeof(::System::Globalization::CultureData*) == 0x8);
    // private System.String m_textInfoName
    // Size: 0x8
    // Offset: 0x30
    ::StringW m_textInfoName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Nullable`1<System.Boolean> m_IsAsciiCasingSameAsInvariant
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Nullable_1<bool> m_IsAsciiCasingSameAsInvariant;
    // [OptionalFieldAttribute] Offset: 0x57FB08
    // private System.String customCultureName
    // Size: 0x8
    // Offset: 0x40
    ::StringW customCultureName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [OptionalFieldAttribute] Offset: 0x57FB40
    // System.Int32 m_nDataItem
    // Size: 0x4
    // Offset: 0x48
    int m_nDataItem;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [OptionalFieldAttribute] Offset: 0x57FB78
    // System.Boolean m_useUserOverride
    // Size: 0x1
    // Offset: 0x4C
    bool m_useUserOverride;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [OptionalFieldAttribute] Offset: 0x57FBB0
    // System.Int32 m_win32LangID
    // Size: 0x4
    // Offset: 0x50
    int m_win32LangID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::IDeserializationCallback
    operator ::System::Runtime::Serialization::IDeserializationCallback() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Get static field: static System.Globalization.TextInfo s_Invariant
    static ::System::Globalization::TextInfo* _get_s_Invariant();
    // Set static field: static System.Globalization.TextInfo s_Invariant
    static void _set_s_Invariant(::System::Globalization::TextInfo* value);
    // static field const value: static private System.Int32 wordSeparatorMask
    static constexpr const int wordSeparatorMask = 536672256;
    // Get static field: static private System.Int32 wordSeparatorMask
    static int _get_wordSeparatorMask();
    // Set static field: static private System.Int32 wordSeparatorMask
    static void _set_wordSeparatorMask(int value);
    // Get instance field reference: private System.String m_listSeparator
    ::StringW& dyn_m_listSeparator();
    // Get instance field reference: private System.Boolean m_isReadOnly
    bool& dyn_m_isReadOnly();
    // Get instance field reference: private System.String m_cultureName
    ::StringW& dyn_m_cultureName();
    // Get instance field reference: private System.Globalization.CultureData m_cultureData
    ::System::Globalization::CultureData*& dyn_m_cultureData();
    // Get instance field reference: private System.String m_textInfoName
    ::StringW& dyn_m_textInfoName();
    // Get instance field reference: private System.Nullable`1<System.Boolean> m_IsAsciiCasingSameAsInvariant
    ::System::Nullable_1<bool>& dyn_m_IsAsciiCasingSameAsInvariant();
    // Get instance field reference: private System.String customCultureName
    ::StringW& dyn_customCultureName();
    // Get instance field reference: System.Int32 m_nDataItem
    int& dyn_m_nDataItem();
    // Get instance field reference: System.Boolean m_useUserOverride
    bool& dyn_m_useUserOverride();
    // Get instance field reference: System.Int32 m_win32LangID
    int& dyn_m_win32LangID();
    // static System.Globalization.TextInfo get_Invariant()
    // Offset: 0xF06E7C
    static ::System::Globalization::TextInfo* get_Invariant();
    // public System.String get_CultureName()
    // Offset: 0xF07580
    ::StringW get_CultureName();
    // private System.Boolean get_IsAsciiCasingSameAsInvariant()
    // Offset: 0xF07698
    bool get_IsAsciiCasingSameAsInvariant();
    // System.Void .ctor(System.Globalization.CultureData cultureData)
    // Offset: 0xF06F20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextInfo* New_ctor(::System::Globalization::CultureData* cultureData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::TextInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextInfo*, creationType>(cultureData)));
    }
    // private System.Void OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0xF06F64
    void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnDeserialized()
    // Offset: 0xF06F6C
    void OnDeserialized();
    // private System.Void OnDeserialized(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0xF0706C
    void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnSerializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0xF07070
    void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx);
    // static System.Int32 GetHashCodeOrdinalIgnoreCase(System.String s)
    // Offset: 0xF070FC
    static int GetHashCodeOrdinalIgnoreCase(::StringW s);
    // static System.Int32 GetHashCodeOrdinalIgnoreCase(System.String s, System.Boolean forceRandomizedHashing, System.Int64 additionalEntropy)
    // Offset: 0xF07108
    static int GetHashCodeOrdinalIgnoreCase(::StringW s, bool forceRandomizedHashing, int64_t additionalEntropy);
    // static System.Int32 CompareOrdinalIgnoreCase(System.String str1, System.String str2)
    // Offset: 0xF07244
    static int CompareOrdinalIgnoreCase(::StringW str1, ::StringW str2);
    // static System.Int32 CompareOrdinalIgnoreCaseEx(System.String strA, System.Int32 indexA, System.String strB, System.Int32 indexB, System.Int32 lengthA, System.Int32 lengthB)
    // Offset: 0xF07440
    static int CompareOrdinalIgnoreCaseEx(::StringW strA, int indexA, ::StringW strB, int indexB, int lengthA, int lengthB);
    // static System.Int32 IndexOfStringOrdinalIgnoreCase(System.String source, System.String value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0xF07444
    static int IndexOfStringOrdinalIgnoreCase(::StringW source, ::StringW value, int startIndex, int count);
    // static System.Int32 LastIndexOfStringOrdinalIgnoreCase(System.String source, System.String value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0xF074EC
    static int LastIndexOfStringOrdinalIgnoreCase(::StringW source, ::StringW value, int startIndex, int count);
    // public System.Object Clone()
    // Offset: 0xF07588
    ::Il2CppObject* Clone();
    // System.Void SetReadOnlyState(System.Boolean readOnly)
    // Offset: 0xF07614
    void SetReadOnlyState(bool readOnly);
    // public System.Char ToLower(System.Char c)
    // Offset: 0xF07620
    ::Il2CppChar ToLower(::Il2CppChar c);
    // public System.String ToLower(System.String str)
    // Offset: 0xF07CA4
    ::StringW ToLower(::StringW str);
    // static private System.Char ToLowerAsciiInvariant(System.Char c)
    // Offset: 0xF077A8
    static ::Il2CppChar ToLowerAsciiInvariant(::Il2CppChar c);
    // public System.Char ToUpper(System.Char c)
    // Offset: 0xF07DE8
    ::Il2CppChar ToUpper(::Il2CppChar c);
    // public System.String ToUpper(System.String str)
    // Offset: 0xF08358
    ::StringW ToUpper(::StringW str);
    // static private System.Char ToUpperAsciiInvariant(System.Char c)
    // Offset: 0xF07E50
    static ::Il2CppChar ToUpperAsciiInvariant(::Il2CppChar c);
    // static private System.Boolean IsAscii(System.Char c)
    // Offset: 0xF07688
    static bool IsAscii(::Il2CppChar c);
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0xF085C8
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // System.Int32 GetCaseInsensitiveHashCode(System.String str)
    // Offset: 0xF085CC
    int GetCaseInsensitiveHashCode(::StringW str);
    // System.Int32 GetCaseInsensitiveHashCode(System.String str, System.Boolean forceRandomizedHashing, System.Int64 additionalEntropy)
    // Offset: 0xF07138
    int GetCaseInsensitiveHashCode(::StringW str, bool forceRandomizedHashing, int64_t additionalEntropy);
    // private System.Int32 GetInvariantCaseInsensitiveHashCode(System.String str)
    // Offset: 0xF085D4
    int GetInvariantCaseInsensitiveHashCode(::StringW str);
    // private System.String ToUpperInternal(System.String str)
    // Offset: 0xF083B4
    ::StringW ToUpperInternal(::StringW str);
    // private System.String ToLowerInternal(System.String str)
    // Offset: 0xF07D00
    ::StringW ToLowerInternal(::StringW str);
    // private System.Char ToUpperInternal(System.Char c)
    // Offset: 0xF07E6C
    ::Il2CppChar ToUpperInternal(::Il2CppChar c);
    // private System.Char ToLowerInternal(System.Char c)
    // Offset: 0xF077C4
    ::Il2CppChar ToLowerInternal(::Il2CppChar c);
    // static private System.Int32 InternalCompareStringOrdinalIgnoreCase(System.String strA, System.Int32 indexA, System.String strB, System.Int32 indexB, System.Int32 lenA, System.Int32 lenB)
    // Offset: 0xF07274
    static int InternalCompareStringOrdinalIgnoreCase(::StringW strA, int indexA, ::StringW strB, int indexB, int lenA, int lenB);
    // System.Void .ctor()
    // Offset: 0xF08718
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::TextInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextInfo*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF0849C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF0854C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xF0856C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Globalization.TextInfo
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::TextInfo::get_Invariant
// Il2CppName: get_Invariant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::TextInfo* (*)()>(&System::Globalization::TextInfo::get_Invariant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "get_Invariant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::get_CultureName
// Il2CppName: get_CultureName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::TextInfo::*)()>(&System::Globalization::TextInfo::get_CultureName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "get_CultureName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::get_IsAsciiCasingSameAsInvariant
// Il2CppName: get_IsAsciiCasingSameAsInvariant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::TextInfo::*)()>(&System::Globalization::TextInfo::get_IsAsciiCasingSameAsInvariant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "get_IsAsciiCasingSameAsInvariant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::TextInfo::OnDeserializing
// Il2CppName: OnDeserializing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::TextInfo::*)(::System::Runtime::Serialization::StreamingContext)>(&System::Globalization::TextInfo::OnDeserializing)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "OnDeserializing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::OnDeserialized
// Il2CppName: OnDeserialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::TextInfo::*)()>(&System::Globalization::TextInfo::OnDeserialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "OnDeserialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::OnDeserialized
// Il2CppName: OnDeserialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::TextInfo::*)(::System::Runtime::Serialization::StreamingContext)>(&System::Globalization::TextInfo::OnDeserialized)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "OnDeserialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::OnSerializing
// Il2CppName: OnSerializing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::TextInfo::*)(::System::Runtime::Serialization::StreamingContext)>(&System::Globalization::TextInfo::OnSerializing)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "OnSerializing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::GetHashCodeOrdinalIgnoreCase
// Il2CppName: GetHashCodeOrdinalIgnoreCase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&System::Globalization::TextInfo::GetHashCodeOrdinalIgnoreCase)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "GetHashCodeOrdinalIgnoreCase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::GetHashCodeOrdinalIgnoreCase
// Il2CppName: GetHashCodeOrdinalIgnoreCase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, bool, int64_t)>(&System::Globalization::TextInfo::GetHashCodeOrdinalIgnoreCase)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* forceRandomizedHashing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* additionalEntropy = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "GetHashCodeOrdinalIgnoreCase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, forceRandomizedHashing, additionalEntropy});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::CompareOrdinalIgnoreCase
// Il2CppName: CompareOrdinalIgnoreCase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, ::StringW)>(&System::Globalization::TextInfo::CompareOrdinalIgnoreCase)> {
  static const MethodInfo* get() {
    static auto* str1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* str2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "CompareOrdinalIgnoreCase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str1, str2});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::CompareOrdinalIgnoreCaseEx
// Il2CppName: CompareOrdinalIgnoreCaseEx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, int, ::StringW, int, int, int)>(&System::Globalization::TextInfo::CompareOrdinalIgnoreCaseEx)> {
  static const MethodInfo* get() {
    static auto* strA = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* indexA = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* strB = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* indexB = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lengthA = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lengthB = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "CompareOrdinalIgnoreCaseEx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{strA, indexA, strB, indexB, lengthA, lengthB});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::IndexOfStringOrdinalIgnoreCase
// Il2CppName: IndexOfStringOrdinalIgnoreCase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, ::StringW, int, int)>(&System::Globalization::TextInfo::IndexOfStringOrdinalIgnoreCase)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "IndexOfStringOrdinalIgnoreCase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, value, startIndex, count});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::LastIndexOfStringOrdinalIgnoreCase
// Il2CppName: LastIndexOfStringOrdinalIgnoreCase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, ::StringW, int, int)>(&System::Globalization::TextInfo::LastIndexOfStringOrdinalIgnoreCase)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "LastIndexOfStringOrdinalIgnoreCase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, value, startIndex, count});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Globalization::TextInfo::*)()>(&System::Globalization::TextInfo::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::SetReadOnlyState
// Il2CppName: SetReadOnlyState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::TextInfo::*)(bool)>(&System::Globalization::TextInfo::SetReadOnlyState)> {
  static const MethodInfo* get() {
    static auto* readOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "SetReadOnlyState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{readOnly});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::ToLower
// Il2CppName: ToLower
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Globalization::TextInfo::*)(::Il2CppChar)>(&System::Globalization::TextInfo::ToLower)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "ToLower", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::ToLower
// Il2CppName: ToLower
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::TextInfo::*)(::StringW)>(&System::Globalization::TextInfo::ToLower)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "ToLower", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::ToLowerAsciiInvariant
// Il2CppName: ToLowerAsciiInvariant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(::Il2CppChar)>(&System::Globalization::TextInfo::ToLowerAsciiInvariant)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "ToLowerAsciiInvariant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::ToUpper
// Il2CppName: ToUpper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Globalization::TextInfo::*)(::Il2CppChar)>(&System::Globalization::TextInfo::ToUpper)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "ToUpper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::ToUpper
// Il2CppName: ToUpper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::TextInfo::*)(::StringW)>(&System::Globalization::TextInfo::ToUpper)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "ToUpper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::ToUpperAsciiInvariant
// Il2CppName: ToUpperAsciiInvariant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(::Il2CppChar)>(&System::Globalization::TextInfo::ToUpperAsciiInvariant)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "ToUpperAsciiInvariant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::IsAscii
// Il2CppName: IsAscii
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&System::Globalization::TextInfo::IsAscii)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "IsAscii", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
// Il2CppName: System.Runtime.Serialization.IDeserializationCallback.OnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::TextInfo::*)(::Il2CppObject*)>(&System::Globalization::TextInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::GetCaseInsensitiveHashCode
// Il2CppName: GetCaseInsensitiveHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::TextInfo::*)(::StringW)>(&System::Globalization::TextInfo::GetCaseInsensitiveHashCode)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "GetCaseInsensitiveHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::GetCaseInsensitiveHashCode
// Il2CppName: GetCaseInsensitiveHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::TextInfo::*)(::StringW, bool, int64_t)>(&System::Globalization::TextInfo::GetCaseInsensitiveHashCode)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* forceRandomizedHashing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* additionalEntropy = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "GetCaseInsensitiveHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, forceRandomizedHashing, additionalEntropy});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::GetInvariantCaseInsensitiveHashCode
// Il2CppName: GetInvariantCaseInsensitiveHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::TextInfo::*)(::StringW)>(&System::Globalization::TextInfo::GetInvariantCaseInsensitiveHashCode)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "GetInvariantCaseInsensitiveHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::ToUpperInternal
// Il2CppName: ToUpperInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::TextInfo::*)(::StringW)>(&System::Globalization::TextInfo::ToUpperInternal)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "ToUpperInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::ToLowerInternal
// Il2CppName: ToLowerInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::TextInfo::*)(::StringW)>(&System::Globalization::TextInfo::ToLowerInternal)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "ToLowerInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::ToUpperInternal
// Il2CppName: ToUpperInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Globalization::TextInfo::*)(::Il2CppChar)>(&System::Globalization::TextInfo::ToUpperInternal)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "ToUpperInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::ToLowerInternal
// Il2CppName: ToLowerInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Globalization::TextInfo::*)(::Il2CppChar)>(&System::Globalization::TextInfo::ToLowerInternal)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "ToLowerInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::InternalCompareStringOrdinalIgnoreCase
// Il2CppName: InternalCompareStringOrdinalIgnoreCase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, int, ::StringW, int, int, int)>(&System::Globalization::TextInfo::InternalCompareStringOrdinalIgnoreCase)> {
  static const MethodInfo* get() {
    static auto* strA = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* indexA = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* strB = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* indexB = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lenA = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lenB = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "InternalCompareStringOrdinalIgnoreCase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{strA, indexA, strB, indexB, lenA, lenB});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::TextInfo::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::TextInfo::*)(::Il2CppObject*)>(&System::Globalization::TextInfo::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::TextInfo::*)()>(&System::Globalization::TextInfo::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::TextInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::TextInfo::*)()>(&System::Globalization::TextInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TextInfo*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
