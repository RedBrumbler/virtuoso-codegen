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
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: OidGroup
  struct OidGroup;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: CAPI
  class CAPI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::CAPI);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CAPI*, "System.Security.Cryptography", "CAPI");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.CAPI
  // [TokenAttribute] Offset: FFFFFFFF
  class CAPI : public ::Il2CppObject {
    public:
    // static public System.String CryptFindOIDInfoNameFromKey(System.String key, System.Security.Cryptography.OidGroup oidGroup)
    // Offset: 0xE6985C
    static ::StringW CryptFindOIDInfoNameFromKey(::StringW key, ::System::Security::Cryptography::OidGroup oidGroup);
    // static public System.String CryptFindOIDInfoKeyFromName(System.String name, System.Security.Cryptography.OidGroup oidGroup)
    // Offset: 0xE6A3C4
    static ::StringW CryptFindOIDInfoKeyFromName(::StringW name, ::System::Security::Cryptography::OidGroup oidGroup);
  }; // System.Security.Cryptography.CAPI
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::CAPI::CryptFindOIDInfoNameFromKey
// Il2CppName: CryptFindOIDInfoNameFromKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::Security::Cryptography::OidGroup)>(&System::Security::Cryptography::CAPI::CryptFindOIDInfoNameFromKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* oidGroup = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "OidGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CAPI*), "CryptFindOIDInfoNameFromKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, oidGroup});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CAPI::CryptFindOIDInfoKeyFromName
// Il2CppName: CryptFindOIDInfoKeyFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::Security::Cryptography::OidGroup)>(&System::Security::Cryptography::CAPI::CryptFindOIDInfoKeyFromName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* oidGroup = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "OidGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CAPI*), "CryptFindOIDInfoKeyFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, oidGroup});
  }
};
