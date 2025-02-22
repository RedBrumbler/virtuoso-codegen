// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: Core
  class Core;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Core);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Core*, "Oculus.Platform", "Core");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Core
  // [TokenAttribute] Offset: FFFFFFFF
  class Core : public ::Il2CppObject {
    public:
    // Get static field: static private System.Boolean IsPlatformInitialized
    static bool _get_IsPlatformInitialized();
    // Set static field: static private System.Boolean IsPlatformInitialized
    static void _set_IsPlatformInitialized(bool value);
    // Get static field: static public System.Boolean LogMessages
    static bool _get_LogMessages();
    // Set static field: static public System.Boolean LogMessages
    static void _set_LogMessages(bool value);
    // Get static field: static public System.String PlatformUninitializedError
    static ::StringW _get_PlatformUninitializedError();
    // Set static field: static public System.String PlatformUninitializedError
    static void _set_PlatformUninitializedError(::StringW value);
    // static private System.Void .cctor()
    // Offset: 0x7DFB84
    static void _cctor();
    // static public System.Boolean IsInitialized()
    // Offset: 0x7DF278
    static bool IsInitialized();
    // static System.Void ForceInitialized()
    // Offset: 0x7DF2DC
    static void ForceInitialized();
    // static private System.String getAppID(System.String appId)
    // Offset: 0x7DF344
    static ::StringW getAppID(::StringW appId);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> AsyncInitialize(System.String appId)
    // Offset: 0x7DF538
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(::StringW appId);
    // static public System.Void Initialize(System.String appId)
    // Offset: 0x7DF838
    static void Initialize(::StringW appId);
    // static private System.String GetAppIDFromConfig()
    // Offset: 0x7DF508
    static ::StringW GetAppIDFromConfig();
    // public System.Void .ctor()
    // Offset: 0x7DFB7C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Core* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Core::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Core*, creationType>()));
    }
  }; // Oculus.Platform.Core
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Core::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Platform::Core::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Core*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Core::IsInitialized
// Il2CppName: IsInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Oculus::Platform::Core::IsInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Core*), "IsInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Core::ForceInitialized
// Il2CppName: ForceInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Platform::Core::ForceInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Core*), "ForceInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Core::getAppID
// Il2CppName: getAppID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&Oculus::Platform::Core::getAppID)> {
  static const MethodInfo* get() {
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Core*), "getAppID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appId});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Core::AsyncInitialize
// Il2CppName: AsyncInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* (*)(::StringW)>(&Oculus::Platform::Core::AsyncInitialize)> {
  static const MethodInfo* get() {
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Core*), "AsyncInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appId});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Core::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&Oculus::Platform::Core::Initialize)> {
  static const MethodInfo* get() {
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Core*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appId});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Core::GetAppIDFromConfig
// Il2CppName: GetAppIDFromConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Oculus::Platform::Core::GetAppIDFromConfig)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Core*), "GetAppIDFromConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Core::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
