// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: FieldPathProxy
  class FieldPathProxy;
}
// Completed forward declares
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: FieldPath
  class FieldPath;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::FieldPath);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FieldPath*, "Firebase.Firestore", "FieldPath");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.FieldPath
  // [TokenAttribute] Offset: FFFFFFFF
  class FieldPath : public ::Il2CppObject/*, public ::System::IEquatable_1<::Firebase::Firestore::FieldPath*>*/ {
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
    // private readonly System.String[] _segments
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::StringW> segments;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.String _encodedPath
    // Size: 0x8
    // Offset: 0x18
    ::StringW encodedPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Firebase::Firestore::FieldPath*>
    operator ::System::IEquatable_1<::Firebase::Firestore::FieldPath*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Firebase::Firestore::FieldPath*>*>(this);
    }
    // Get static field: static private readonly System.Char[] dotSplit
    static ::ArrayW<::Il2CppChar> _get_dotSplit();
    // Set static field: static private readonly System.Char[] dotSplit
    static void _set_dotSplit(::ArrayW<::Il2CppChar> value);
    // Get static field: static private readonly System.Char[] prohibitedCharacters
    static ::ArrayW<::Il2CppChar> _get_prohibitedCharacters();
    // Set static field: static private readonly System.Char[] prohibitedCharacters
    static void _set_prohibitedCharacters(::ArrayW<::Il2CppChar> value);
    // [DebuggerBrowsableAttribute] Offset: 0x5C7A1C
    // Get static field: static private readonly Firebase.Firestore.FieldPath <DocumentId>k__BackingField
    static ::Firebase::Firestore::FieldPath* _get_$DocumentId$k__BackingField();
    // Set static field: static private readonly Firebase.Firestore.FieldPath <DocumentId>k__BackingField
    static void _set_$DocumentId$k__BackingField(::Firebase::Firestore::FieldPath* value);
    // Get static field: static private System.Func`2<System.String,System.Boolean> <>f__am$cache0
    static ::System::Func_2<::StringW, bool>* _get_$$f__am$cache0();
    // Set static field: static private System.Func`2<System.String,System.Boolean> <>f__am$cache0
    static void _set_$$f__am$cache0(::System::Func_2<::StringW, bool>* value);
    // Get instance field reference: private readonly System.String[] _segments
    ::ArrayW<::StringW>& dyn__segments();
    // Get instance field reference: private System.String _encodedPath
    ::StringW& dyn__encodedPath();
    // System.String get_EncodedPath()
    // Offset: 0xC33B40
    ::StringW get_EncodedPath();
    // private System.Void .ctor(System.String[] segments, System.Boolean trusted)
    // Offset: 0xC338DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FieldPath* New_ctor(::ArrayW<::StringW> segments, bool trusted) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::FieldPath::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FieldPath*, creationType>(segments, trusted)));
    }
    // static private System.Void .cctor()
    // Offset: 0xC34380
    static void _cctor();
    // static Firebase.Firestore.FieldPath FromDotSeparatedString(System.String path)
    // Offset: 0xC33DB0
    static ::Firebase::Firestore::FieldPath* FromDotSeparatedString(::StringW path);
    // static private System.String GetCanonicalPath(System.String[] fields)
    // Offset: 0xC33BB4
    static ::StringW GetCanonicalPath(::ArrayW<::StringW> fields);
    // static private System.Boolean IsValidIdentifier(System.String identifier)
    // Offset: 0xC34034
    static bool IsValidIdentifier(::StringW identifier);
    // public System.Boolean Equals(Firebase.Firestore.FieldPath other)
    // Offset: 0xC34168
    bool Equals(::Firebase::Firestore::FieldPath* other);
    // Firebase.Firestore.FieldPathProxy ConvertToProxy()
    // Offset: 0xC341D0
    ::Firebase::Firestore::FieldPathProxy* ConvertToProxy();
    // static private System.Boolean <FieldPath>m__0(System.String n)
    // Offset: 0xC344E8
    static bool $FieldPath$m__0(::StringW n);
    // public override System.String ToString()
    // Offset: 0xC340F4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xC340F8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC341AC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Firebase.Firestore.FieldPath
  #pragma pack(pop)
  static check_size<sizeof(FieldPath), 24 + sizeof(::StringW)> __Firebase_Firestore_FieldPathSizeCheck;
  static_assert(sizeof(FieldPath) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::FieldPath::get_EncodedPath
// Il2CppName: get_EncodedPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::Firestore::FieldPath::*)()>(&Firebase::Firestore::FieldPath::get_EncodedPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldPath*), "get_EncodedPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FieldPath::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::FieldPath::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Firebase::Firestore::FieldPath::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldPath*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FieldPath::FromDotSeparatedString
// Il2CppName: FromDotSeparatedString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldPath* (*)(::StringW)>(&Firebase::Firestore::FieldPath::FromDotSeparatedString)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldPath*), "FromDotSeparatedString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FieldPath::GetCanonicalPath
// Il2CppName: GetCanonicalPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<::StringW>)>(&Firebase::Firestore::FieldPath::GetCanonicalPath)> {
  static const MethodInfo* get() {
    static auto* fields = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldPath*), "GetCanonicalPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fields});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FieldPath::IsValidIdentifier
// Il2CppName: IsValidIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Firebase::Firestore::FieldPath::IsValidIdentifier)> {
  static const MethodInfo* get() {
    static auto* identifier = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldPath*), "IsValidIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{identifier});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FieldPath::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Firebase::Firestore::FieldPath::*)(::Firebase::Firestore::FieldPath*)>(&Firebase::Firestore::FieldPath::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "FieldPath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldPath*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FieldPath::ConvertToProxy
// Il2CppName: ConvertToProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldPathProxy* (Firebase::Firestore::FieldPath::*)()>(&Firebase::Firestore::FieldPath::ConvertToProxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldPath*), "ConvertToProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FieldPath::$FieldPath$m__0
// Il2CppName: <FieldPath>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Firebase::Firestore::FieldPath::$FieldPath$m__0)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldPath*), "<FieldPath>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FieldPath::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::Firestore::FieldPath::*)()>(&Firebase::Firestore::FieldPath::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldPath*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FieldPath::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Firebase::Firestore::FieldPath::*)(::Il2CppObject*)>(&Firebase::Firestore::FieldPath::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldPath*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FieldPath::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Firebase::Firestore::FieldPath::*)()>(&Firebase::Firestore::FieldPath::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldPath*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
