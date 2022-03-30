// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: DebugHelpers
  class DebugHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::DebugHelpers);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DebugHelpers*, "VROSC", "DebugHelpers");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.DebugHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugHelpers : public ::Il2CppObject {
    public:
    // static public System.String GetTransformPath(UnityEngine.Transform transform)
    // Offset: 0x130A3AC
    static ::StringW GetTransformPath(::UnityEngine::Transform* transform);
    // static private System.String GetParentPathRecursive(UnityEngine.Transform transform, System.String text)
    // Offset: 0x130A3F0
    static ::StringW GetParentPathRecursive(::UnityEngine::Transform* transform, ::StringW text);
  }; // VROSC.DebugHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::DebugHelpers::GetTransformPath
// Il2CppName: GetTransformPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Transform*)>(&VROSC::DebugHelpers::GetTransformPath)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::DebugHelpers*), "GetTransformPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: VROSC::DebugHelpers::GetParentPathRecursive
// Il2CppName: GetParentPathRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Transform*, ::StringW)>(&VROSC::DebugHelpers::GetParentPathRecursive)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::DebugHelpers*), "GetParentPathRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, text});
  }
};