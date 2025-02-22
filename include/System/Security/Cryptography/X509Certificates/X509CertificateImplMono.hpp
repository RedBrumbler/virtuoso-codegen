// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509CertificateImpl
#include "System/Security/Cryptography/X509Certificates/X509CertificateImpl.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateImplMono
  class X509CertificateImplMono;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509CertificateImplMono);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509CertificateImplMono*, "System.Security.Cryptography.X509Certificates", "X509CertificateImplMono");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509CertificateImplMono
  // [TokenAttribute] Offset: FFFFFFFF
  class X509CertificateImplMono : public ::System::Security::Cryptography::X509Certificates::X509CertificateImpl {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private Mono.Security.X509.X509Certificate x509
    // Size: 0x8
    // Offset: 0x18
    ::Mono::Security::X509::X509Certificate* x509;
    // Field size check
    static_assert(sizeof(::Mono::Security::X509::X509Certificate*) == 0x8);
    public:
    // Deleting conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept = delete;
    // Get instance field reference: private Mono.Security.X509.X509Certificate x509
    ::Mono::Security::X509::X509Certificate*& dyn_x509();
    // public System.Void .ctor(Mono.Security.X509.X509Certificate x509)
    // Offset: 0xCF9CB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateImplMono* New_ctor(::Mono::Security::X509::X509Certificate* x509) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509CertificateImplMono::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateImplMono*, creationType>(x509)));
    }
    // public override System.Boolean get_IsValid()
    // Offset: 0xCF9CE0
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Boolean X509CertificateImpl::get_IsValid()
    bool get_IsValid();
    // public override System.Security.Cryptography.X509Certificates.X509CertificateImpl Clone()
    // Offset: 0xCF9CF0
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Security.Cryptography.X509Certificates.X509CertificateImpl X509CertificateImpl::Clone()
    ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Clone();
    // public override System.String GetIssuerName(System.Boolean legacyV1Mode)
    // Offset: 0xCF9D5C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.String X509CertificateImpl::GetIssuerName(System.Boolean legacyV1Mode)
    ::StringW GetIssuerName(bool legacyV1Mode);
    // public override System.String GetSubjectName(System.Boolean legacyV1Mode)
    // Offset: 0xCF9E20
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.String X509CertificateImpl::GetSubjectName(System.Boolean legacyV1Mode)
    ::StringW GetSubjectName(bool legacyV1Mode);
    // public override System.Byte[] GetRawCertData()
    // Offset: 0xCF9EE4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Byte[] X509CertificateImpl::GetRawCertData()
    ::ArrayW<uint8_t> GetRawCertData();
    // protected override System.Byte[] GetCertHash(System.Boolean lazy)
    // Offset: 0xCF9F18
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Byte[] X509CertificateImpl::GetCertHash(System.Boolean lazy)
    ::ArrayW<uint8_t> GetCertHash(bool lazy);
    // public override System.DateTime GetValidFrom()
    // Offset: 0xCF9F70
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.DateTime X509CertificateImpl::GetValidFrom()
    ::System::DateTime GetValidFrom();
    // public override System.DateTime GetValidUntil()
    // Offset: 0xCF9FA4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.DateTime X509CertificateImpl::GetValidUntil()
    ::System::DateTime GetValidUntil();
    // public override System.Boolean Equals(System.Security.Cryptography.X509Certificates.X509CertificateImpl other, out System.Boolean result)
    // Offset: 0xCF9FD8
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Boolean X509CertificateImpl::Equals(System.Security.Cryptography.X509Certificates.X509CertificateImpl other, out System.Boolean result)
    bool Equals(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* other, ByRef<bool> result);
    // public override System.Byte[] GetSerialNumber()
    // Offset: 0xCF9FE4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Byte[] X509CertificateImpl::GetSerialNumber()
    ::ArrayW<uint8_t> GetSerialNumber();
    // public override System.String ToString(System.Boolean full)
    // Offset: 0xCFA018
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.String X509CertificateImpl::ToString(System.Boolean full)
    ::StringW ToString(bool full);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0xCFA250
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Void X509CertificateImpl::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.X509Certificates.X509CertificateImplMono
  #pragma pack(pop)
  static check_size<sizeof(X509CertificateImplMono), 24 + sizeof(::Mono::Security::X509::X509Certificate*)> __System_Security_Cryptography_X509Certificates_X509CertificateImplMonoSizeCheck;
  static_assert(sizeof(X509CertificateImplMono) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplMono::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplMono::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509CertificateImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImplMono::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplMono*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplMono::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (System::Security::Cryptography::X509Certificates::X509CertificateImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImplMono::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplMono*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetIssuerName
// Il2CppName: GetIssuerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509CertificateImplMono::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetIssuerName)> {
  static const MethodInfo* get() {
    static auto* legacyV1Mode = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplMono*), "GetIssuerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{legacyV1Mode});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetSubjectName
// Il2CppName: GetSubjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509CertificateImplMono::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetSubjectName)> {
  static const MethodInfo* get() {
    static auto* legacyV1Mode = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplMono*), "GetSubjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{legacyV1Mode});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetRawCertData
// Il2CppName: GetRawCertData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509CertificateImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetRawCertData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplMono*), "GetRawCertData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetCertHash
// Il2CppName: GetCertHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509CertificateImplMono::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetCertHash)> {
  static const MethodInfo* get() {
    static auto* lazy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplMono*), "GetCertHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lazy});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetValidFrom
// Il2CppName: GetValidFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Security::Cryptography::X509Certificates::X509CertificateImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetValidFrom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplMono*), "GetValidFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetValidUntil
// Il2CppName: GetValidUntil
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Security::Cryptography::X509Certificates::X509CertificateImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetValidUntil)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplMono*), "GetValidUntil", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplMono::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509CertificateImplMono::*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, ByRef<bool>)>(&System::Security::Cryptography::X509Certificates::X509CertificateImplMono::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateImpl")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplMono*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other, result});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetSerialNumber
// Il2CppName: GetSerialNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509CertificateImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509CertificateImplMono::GetSerialNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplMono*), "GetSerialNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplMono::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509CertificateImplMono::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509CertificateImplMono::ToString)> {
  static const MethodInfo* get() {
    static auto* full = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplMono*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{full});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509CertificateImplMono::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509CertificateImplMono::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509CertificateImplMono::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509CertificateImplMono*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
