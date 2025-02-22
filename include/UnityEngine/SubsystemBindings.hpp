// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SubsystemBindings
  class SubsystemBindings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::SubsystemBindings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemBindings*, "UnityEngine", "SubsystemBindings");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SubsystemBindings
  // [TokenAttribute] Offset: FFFFFFFF
  class SubsystemBindings : public ::Il2CppObject {
    public:
    // static System.Void DestroySubsystem(System.IntPtr nativePtr)
    // Offset: 0x12FDEEC
    static void DestroySubsystem(::System::IntPtr nativePtr);
  }; // UnityEngine.SubsystemBindings
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SubsystemBindings::DestroySubsystem
// Il2CppName: DestroySubsystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::SubsystemBindings::DestroySubsystem)> {
  static const MethodInfo* get() {
    static auto* nativePtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemBindings*), "DestroySubsystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nativePtr});
  }
};
