// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PlayerPrefs
  class PlayerPrefs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::PlayerPrefs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerPrefs*, "UnityEngine", "PlayerPrefs");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.PlayerPrefs
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 566A90
  class PlayerPrefs : public ::Il2CppObject {
    public:
    // static private System.Boolean TrySetInt(System.String key, System.Int32 value)
    // Offset: 0x9D2988
    static bool TrySetInt(::StringW key, int value);
    // static private System.Boolean TrySetFloat(System.String key, System.Single value)
    // Offset: 0x9D29D8
    static bool TrySetFloat(::StringW key, float value);
    // static private System.Boolean TrySetSetString(System.String key, System.String value)
    // Offset: 0x9D2A28
    static bool TrySetSetString(::StringW key, ::StringW value);
    // static public System.Void SetInt(System.String key, System.Int32 value)
    // Offset: 0x9D2A78
    static void SetInt(::StringW key, int value);
    // static public System.Int32 GetInt(System.String key, System.Int32 defaultValue)
    // Offset: 0x9D2B88
    static int GetInt(::StringW key, int defaultValue);
    // static public System.Int32 GetInt(System.String key)
    // Offset: 0x9D2BD8
    static int GetInt(::StringW key);
    // static public System.Void SetFloat(System.String key, System.Single value)
    // Offset: 0x9D2C1C
    static void SetFloat(::StringW key, float value);
    // static public System.Single GetFloat(System.String key, System.Single defaultValue)
    // Offset: 0x9D2CB8
    static float GetFloat(::StringW key, float defaultValue);
    // static public System.Single GetFloat(System.String key)
    // Offset: 0x9D2D08
    static float GetFloat(::StringW key);
    // static public System.Void SetString(System.String key, System.String value)
    // Offset: 0x9D2D4C
    static void SetString(::StringW key, ::StringW value);
    // static public System.String GetString(System.String key, System.String defaultValue)
    // Offset: 0x9D2DE8
    static ::StringW GetString(::StringW key, ::StringW defaultValue);
    // static public System.String GetString(System.String key)
    // Offset: 0x9D2E38
    static ::StringW GetString(::StringW key);
    // static public System.Boolean HasKey(System.String key)
    // Offset: 0x9D2EB0
    static bool HasKey(::StringW key);
    // static public System.Void DeleteKey(System.String key)
    // Offset: 0x9D2EF0
    static void DeleteKey(::StringW key);
  }; // UnityEngine.PlayerPrefs
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::TrySetInt
// Il2CppName: TrySetInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int)>(&UnityEngine::PlayerPrefs::TrySetInt)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "TrySetInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::TrySetFloat
// Il2CppName: TrySetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, float)>(&UnityEngine::PlayerPrefs::TrySetFloat)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "TrySetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::TrySetSetString
// Il2CppName: TrySetSetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&UnityEngine::PlayerPrefs::TrySetSetString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "TrySetSetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::SetInt
// Il2CppName: SetInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, int)>(&UnityEngine::PlayerPrefs::SetInt)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "SetInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::GetInt
// Il2CppName: GetInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, int)>(&UnityEngine::PlayerPrefs::GetInt)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "GetInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, defaultValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::GetInt
// Il2CppName: GetInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&UnityEngine::PlayerPrefs::GetInt)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "GetInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::SetFloat
// Il2CppName: SetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, float)>(&UnityEngine::PlayerPrefs::SetFloat)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "SetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::GetFloat
// Il2CppName: GetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::StringW, float)>(&UnityEngine::PlayerPrefs::GetFloat)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "GetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, defaultValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::GetFloat
// Il2CppName: GetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::StringW)>(&UnityEngine::PlayerPrefs::GetFloat)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "GetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::SetString
// Il2CppName: SetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&UnityEngine::PlayerPrefs::SetString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "SetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&UnityEngine::PlayerPrefs::GetString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, defaultValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&UnityEngine::PlayerPrefs::GetString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::HasKey
// Il2CppName: HasKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&UnityEngine::PlayerPrefs::HasKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "HasKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerPrefs::DeleteKey
// Il2CppName: DeleteKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::PlayerPrefs::DeleteKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerPrefs*), "DeleteKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
