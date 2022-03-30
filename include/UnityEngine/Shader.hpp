// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: DisableBatchingType
  struct DisableBatchingType;
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Shader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Shader*, "UnityEngine", "Shader");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Shader
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 565B38
  // [NativeHeaderAttribute] Offset: 565B38
  // [NativeHeaderAttribute] Offset: 565B38
  // [NativeHeaderAttribute] Offset: 565B38
  // [NativeHeaderAttribute] Offset: 565B38
  // [NativeHeaderAttribute] Offset: 565B38
  // [NativeHeaderAttribute] Offset: 565B38
  class Shader : public ::UnityEngine::Object {
    public:
    // UnityEngine.DisableBatchingType get_disableBatching()
    // Offset: 0x9DE6FC
    ::UnityEngine::DisableBatchingType get_disableBatching();
    // static public UnityEngine.Shader Find(System.String name)
    // Offset: 0x9DE608
    static ::UnityEngine::Shader* Find(::StringW name);
    // static public System.Void EnableKeyword(System.String keyword)
    // Offset: 0x9DE67C
    static void EnableKeyword(::StringW keyword);
    // static public System.Void DisableKeyword(System.String keyword)
    // Offset: 0x9DE6BC
    static void DisableKeyword(::StringW keyword);
    // static System.Int32 TagToID(System.String name)
    // Offset: 0x9DE73C
    static int TagToID(::StringW name);
    // static public System.Int32 PropertyToID(System.String name)
    // Offset: 0x9DE77C
    static int PropertyToID(::StringW name);
    // static private System.Void SetGlobalFloatImpl(System.Int32 name, System.Single value)
    // Offset: 0x9DE7BC
    static void SetGlobalFloatImpl(int name, float value);
    // static private System.Void SetGlobalVectorImpl(System.Int32 name, UnityEngine.Vector4 value)
    // Offset: 0x9DE80C
    static void SetGlobalVectorImpl(int name, ::UnityEngine::Vector4 value);
    // static public System.Void SetGlobalFloat(System.String name, System.Single value)
    // Offset: 0x9DE8B4
    static void SetGlobalFloat(::StringW name, float value);
    // static public System.Void SetGlobalVector(System.String name, UnityEngine.Vector4 value)
    // Offset: 0x9DE930
    static void SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value);
    // static public System.Void SetGlobalColor(System.String name, UnityEngine.Color value)
    // Offset: 0x9DE9A4
    static void SetGlobalColor(::StringW name, ::UnityEngine::Color value);
    // static private System.Void SetGlobalVectorImpl_Injected(System.Int32 name, ref UnityEngine.Vector4 value)
    // Offset: 0x9DE864
    static void SetGlobalVectorImpl_Injected(int name, ByRef<::UnityEngine::Vector4> value);
    // private System.Void .ctor()
    // Offset: 0x9DEA28
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Shader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Shader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Shader*, creationType>()));
    }
  }; // UnityEngine.Shader
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Shader::get_disableBatching
// Il2CppName: get_disableBatching
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::DisableBatchingType (UnityEngine::Shader::*)()>(&UnityEngine::Shader::get_disableBatching)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Shader*), "get_disableBatching", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Shader::Find
// Il2CppName: Find
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Shader* (*)(::StringW)>(&UnityEngine::Shader::Find)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Shader*), "Find", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Shader::EnableKeyword
// Il2CppName: EnableKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::Shader::EnableKeyword)> {
  static const MethodInfo* get() {
    static auto* keyword = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Shader*), "EnableKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyword});
  }
};
// Writing MetadataGetter for method: UnityEngine::Shader::DisableKeyword
// Il2CppName: DisableKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::Shader::DisableKeyword)> {
  static const MethodInfo* get() {
    static auto* keyword = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Shader*), "DisableKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyword});
  }
};
// Writing MetadataGetter for method: UnityEngine::Shader::TagToID
// Il2CppName: TagToID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&UnityEngine::Shader::TagToID)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Shader*), "TagToID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Shader::PropertyToID
// Il2CppName: PropertyToID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&UnityEngine::Shader::PropertyToID)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Shader*), "PropertyToID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Shader::SetGlobalFloatImpl
// Il2CppName: SetGlobalFloatImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, float)>(&UnityEngine::Shader::SetGlobalFloatImpl)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Shader*), "SetGlobalFloatImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Shader::SetGlobalVectorImpl
// Il2CppName: SetGlobalVectorImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::UnityEngine::Vector4)>(&UnityEngine::Shader::SetGlobalVectorImpl)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Shader*), "SetGlobalVectorImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Shader::SetGlobalFloat
// Il2CppName: SetGlobalFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, float)>(&UnityEngine::Shader::SetGlobalFloat)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Shader*), "SetGlobalFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Shader::SetGlobalVector
// Il2CppName: SetGlobalVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::Vector4)>(&UnityEngine::Shader::SetGlobalVector)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Shader*), "SetGlobalVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Shader::SetGlobalColor
// Il2CppName: SetGlobalColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::Color)>(&UnityEngine::Shader::SetGlobalColor)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Shader*), "SetGlobalColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Shader::SetGlobalVectorImpl_Injected
// Il2CppName: SetGlobalVectorImpl_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ByRef<::UnityEngine::Vector4>)>(&UnityEngine::Shader::SetGlobalVectorImpl_Injected)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Shader*), "SetGlobalVectorImpl_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Shader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!