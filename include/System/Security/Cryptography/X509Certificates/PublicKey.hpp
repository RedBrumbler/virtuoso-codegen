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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
  // Forward declaring type: AsnEncodedData
  class AsnEncodedData;
  // Forward declaring type: Oid
  class Oid;
  // Forward declaring type: DSA
  class DSA;
  // Forward declaring type: RSA
  class RSA;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: PublicKey
  class PublicKey;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::PublicKey);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::PublicKey*, "System.Security.Cryptography.X509Certificates", "PublicKey");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.PublicKey
  // [TokenAttribute] Offset: FFFFFFFF
  class PublicKey : public ::Il2CppObject {
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
    // private System.Security.Cryptography.AsymmetricAlgorithm _key
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::Cryptography::AsymmetricAlgorithm* key;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::AsymmetricAlgorithm*) == 0x8);
    // private System.Security.Cryptography.AsnEncodedData _keyValue
    // Size: 0x8
    // Offset: 0x18
    ::System::Security::Cryptography::AsnEncodedData* keyValue;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::AsnEncodedData*) == 0x8);
    // private System.Security.Cryptography.AsnEncodedData _params
    // Size: 0x8
    // Offset: 0x20
    ::System::Security::Cryptography::AsnEncodedData* params;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::AsnEncodedData*) == 0x8);
    // private System.Security.Cryptography.Oid _oid
    // Size: 0x8
    // Offset: 0x28
    ::System::Security::Cryptography::Oid* oid;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::Oid*) == 0x8);
    public:
    // Get static field: static private System.Byte[] Empty
    static ::ArrayW<uint8_t> _get_Empty();
    // Set static field: static private System.Byte[] Empty
    static void _set_Empty(::ArrayW<uint8_t> value);
    // Get instance field reference: private System.Security.Cryptography.AsymmetricAlgorithm _key
    ::System::Security::Cryptography::AsymmetricAlgorithm*& dyn__key();
    // Get instance field reference: private System.Security.Cryptography.AsnEncodedData _keyValue
    ::System::Security::Cryptography::AsnEncodedData*& dyn__keyValue();
    // Get instance field reference: private System.Security.Cryptography.AsnEncodedData _params
    ::System::Security::Cryptography::AsnEncodedData*& dyn__params();
    // Get instance field reference: private System.Security.Cryptography.Oid _oid
    ::System::Security::Cryptography::Oid*& dyn__oid();
    // public System.Security.Cryptography.AsnEncodedData get_EncodedKeyValue()
    // Offset: 0xBFBBAC
    ::System::Security::Cryptography::AsnEncodedData* get_EncodedKeyValue();
    // public System.Security.Cryptography.AsnEncodedData get_EncodedParameters()
    // Offset: 0xBFBBB4
    ::System::Security::Cryptography::AsnEncodedData* get_EncodedParameters();
    // public System.Security.Cryptography.AsymmetricAlgorithm get_Key()
    // Offset: 0xBFBBBC
    ::System::Security::Cryptography::AsymmetricAlgorithm* get_Key();
    // public System.Security.Cryptography.Oid get_Oid()
    // Offset: 0xBFC5E0
    ::System::Security::Cryptography::Oid* get_Oid();
    // System.Void .ctor(Mono.Security.X509.X509Certificate certificate)
    // Offset: 0xBFB7A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PublicKey* New_ctor(::Mono::Security::X509::X509Certificate* certificate) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::PublicKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PublicKey*, creationType>(certificate)));
    }
    // static private System.Void .cctor()
    // Offset: 0xBFC690
    static void _cctor();
    // static private System.Byte[] GetUnsignedBigInteger(System.Byte[] integer)
    // Offset: 0xBFC5E8
    static ::ArrayW<uint8_t> GetUnsignedBigInteger(::ArrayW<uint8_t> integer);
    // static System.Security.Cryptography.DSA DecodeDSA(System.Byte[] rawPublicKey, System.Byte[] rawParameters)
    // Offset: 0xBFC144
    static ::System::Security::Cryptography::DSA* DecodeDSA(::ArrayW<uint8_t> rawPublicKey, ::ArrayW<uint8_t> rawParameters);
    // static System.Security.Cryptography.RSA DecodeRSA(System.Byte[] rawPublicKey)
    // Offset: 0xBFBD88
    static ::System::Security::Cryptography::RSA* DecodeRSA(::ArrayW<uint8_t> rawPublicKey);
  }; // System.Security.Cryptography.X509Certificates.PublicKey
  #pragma pack(pop)
  static check_size<sizeof(PublicKey), 40 + sizeof(::System::Security::Cryptography::Oid*)> __System_Security_Cryptography_X509Certificates_PublicKeySizeCheck;
  static_assert(sizeof(PublicKey) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::PublicKey::get_EncodedKeyValue
// Il2CppName: get_EncodedKeyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::AsnEncodedData* (System::Security::Cryptography::X509Certificates::PublicKey::*)()>(&System::Security::Cryptography::X509Certificates::PublicKey::get_EncodedKeyValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::PublicKey*), "get_EncodedKeyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::PublicKey::get_EncodedParameters
// Il2CppName: get_EncodedParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::AsnEncodedData* (System::Security::Cryptography::X509Certificates::PublicKey::*)()>(&System::Security::Cryptography::X509Certificates::PublicKey::get_EncodedParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::PublicKey*), "get_EncodedParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::PublicKey::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::AsymmetricAlgorithm* (System::Security::Cryptography::X509Certificates::PublicKey::*)()>(&System::Security::Cryptography::X509Certificates::PublicKey::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::PublicKey*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::PublicKey::get_Oid
// Il2CppName: get_Oid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::Oid* (System::Security::Cryptography::X509Certificates::PublicKey::*)()>(&System::Security::Cryptography::X509Certificates::PublicKey::get_Oid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::PublicKey*), "get_Oid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::PublicKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::PublicKey::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::X509Certificates::PublicKey::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::PublicKey*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::PublicKey::GetUnsignedBigInteger
// Il2CppName: GetUnsignedBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::X509Certificates::PublicKey::GetUnsignedBigInteger)> {
  static const MethodInfo* get() {
    static auto* integer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::PublicKey*), "GetUnsignedBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{integer});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::PublicKey::DecodeDSA
// Il2CppName: DecodeDSA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DSA* (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::X509Certificates::PublicKey::DecodeDSA)> {
  static const MethodInfo* get() {
    static auto* rawPublicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* rawParameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::PublicKey*), "DecodeDSA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawPublicKey, rawParameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::PublicKey::DecodeRSA
// Il2CppName: DecodeRSA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::X509Certificates::PublicKey::DecodeRSA)> {
  static const MethodInfo* get() {
    static auto* rawPublicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::PublicKey*), "DecodeRSA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawPublicKey});
  }
};
