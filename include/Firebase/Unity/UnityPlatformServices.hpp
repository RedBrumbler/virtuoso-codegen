// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Firebase.Unity
namespace Firebase::Unity {
  // Forward declaring type: UnityPlatformServices
  class UnityPlatformServices;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Unity::UnityPlatformServices);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Unity::UnityPlatformServices*, "Firebase.Unity", "UnityPlatformServices");
// Type namespace: Firebase.Unity
namespace Firebase::Unity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Unity.UnityPlatformServices
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityPlatformServices : public ::Il2CppObject {
    public:
    // static public System.Void SetupServices()
    // Offset: 0x12CA4A0
    static void SetupServices();
  }; // Firebase.Unity.UnityPlatformServices
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Unity::UnityPlatformServices::SetupServices
// Il2CppName: SetupServices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Firebase::Unity::UnityPlatformServices::SetupServices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Unity::UnityPlatformServices*), "SetupServices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
