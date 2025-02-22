// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Platform.Default.AppConfigExtensions
#include "Firebase/Platform/Default/AppConfigExtensions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Platform
namespace Firebase::Platform {
  // Skipping declaration: IAppConfigExtensions because it is already included!
}
// Completed forward declares
// Type namespace: Firebase.Platform.Default
namespace Firebase::Platform::Default {
  // Forward declaring type: UnityConfigExtensions
  class UnityConfigExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Platform::Default::UnityConfigExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::Default::UnityConfigExtensions*, "Firebase.Platform.Default", "UnityConfigExtensions");
// Type namespace: Firebase.Platform.Default
namespace Firebase::Platform::Default {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Platform.Default.UnityConfigExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityConfigExtensions : public ::Firebase::Platform::Default::AppConfigExtensions {
    public:
    // Get static field: static private Firebase.Platform.Default.UnityConfigExtensions _instance
    static ::Firebase::Platform::Default::UnityConfigExtensions* _get__instance();
    // Set static field: static private Firebase.Platform.Default.UnityConfigExtensions _instance
    static void _set__instance(::Firebase::Platform::Default::UnityConfigExtensions* value);
    // static public Firebase.Platform.IAppConfigExtensions get_DefaultInstance()
    // Offset: 0x12CB8E0
    static ::Firebase::Platform::IAppConfigExtensions* get_DefaultInstance();
    // public System.Void .ctor()
    // Offset: 0x12CB87C
    // Implemented from: Firebase.Platform.Default.AppConfigExtensions
    // Base method: System.Void AppConfigExtensions::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityConfigExtensions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Platform::Default::UnityConfigExtensions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityConfigExtensions*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x12CB944
    // Implemented from: Firebase.Platform.Default.AppConfigExtensions
    // Base method: System.Void AppConfigExtensions::.cctor()
    static void _cctor();
  }; // Firebase.Platform.Default.UnityConfigExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Platform::Default::UnityConfigExtensions::get_DefaultInstance
// Il2CppName: get_DefaultInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Platform::IAppConfigExtensions* (*)()>(&Firebase::Platform::Default::UnityConfigExtensions::get_DefaultInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Platform::Default::UnityConfigExtensions*), "get_DefaultInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Platform::Default::UnityConfigExtensions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Platform::Default::UnityConfigExtensions::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Firebase::Platform::Default::UnityConfigExtensions::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Platform::Default::UnityConfigExtensions*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
