// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SubsystemDescriptor
  class SubsystemDescriptor;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Internal_SubsystemDescriptors
  class Internal_SubsystemDescriptors;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Internal_SubsystemDescriptors);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Internal_SubsystemDescriptors*, "UnityEngine", "Internal_SubsystemDescriptors");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Internal_SubsystemDescriptors
  // [TokenAttribute] Offset: FFFFFFFF
  class Internal_SubsystemDescriptors : public ::Il2CppObject {
    public:
    // static System.Void Internal_AddDescriptor(UnityEngine.SubsystemDescriptor descriptor)
    // Offset: 0x12FE0A8
    static void Internal_AddDescriptor(::UnityEngine::SubsystemDescriptor* descriptor);
  }; // UnityEngine.Internal_SubsystemDescriptors
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Internal_SubsystemDescriptors::Internal_AddDescriptor
// Il2CppName: Internal_AddDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::SubsystemDescriptor*)>(&UnityEngine::Internal_SubsystemDescriptors::Internal_AddDescriptor)> {
  static const MethodInfo* get() {
    static auto* descriptor = &::il2cpp_utils::GetClassFromName("UnityEngine", "SubsystemDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Internal_SubsystemDescriptors*), "Internal_AddDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{descriptor});
  }
};
