// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TextAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextAsset*, "UnityEngine", "TextAsset");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextAsset
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 567578
  class TextAsset : public ::UnityEngine::Object {
    public:
    // Nested type: ::UnityEngine::TextAsset::EncodingUtility
    class EncodingUtility;
    // public System.Byte[] get_bytes()
    // Offset: 0x9E1CE0
    ::ArrayW<uint8_t> get_bytes();
    // public System.String get_text()
    // Offset: 0x9E1D20
    ::StringW get_text();
    // static System.String DecodeString(System.Byte[] bytes)
    // Offset: 0x9E1D64
    static ::StringW DecodeString(::ArrayW<uint8_t> bytes);
    // public override System.String ToString()
    // Offset: 0x9E205C
    // Implemented from: UnityEngine.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngine.TextAsset
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextAsset::get_bytes
// Il2CppName: get_bytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (UnityEngine::TextAsset::*)()>(&UnityEngine::TextAsset::get_bytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextAsset*), "get_bytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextAsset::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TextAsset::*)()>(&UnityEngine::TextAsset::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextAsset*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextAsset::DecodeString
// Il2CppName: DecodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&UnityEngine::TextAsset::DecodeString)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextAsset*), "DecodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextAsset::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TextAsset::*)()>(&UnityEngine::TextAsset::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextAsset*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
