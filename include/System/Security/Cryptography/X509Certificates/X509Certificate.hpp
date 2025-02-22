// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateImpl
  class X509CertificateImpl;
  // Forward declaring type: X509KeyStorageFlags
  struct X509KeyStorageFlags;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Certificate);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Certificate*, "System.Security.Cryptography.X509Certificates", "X509Certificate");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Certificate
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57BA08
  // [MonoTODOAttribute] Offset: 57BA08
  class X509Certificate : public ::Il2CppObject/*, public ::System::IDisposable, public ::System::Runtime::Serialization::ISerializable, public ::System::Runtime::Serialization::IDeserializationCallback*/ {
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
    // private System.Security.Cryptography.X509Certificates.X509CertificateImpl impl
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*) == 0x8);
    // private System.Boolean hideDates
    // Size: 0x1
    // Offset: 0x18
    bool hideDates;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hideDates and: issuer_name
    char __padding1[0x7] = {};
    // private System.String issuer_name
    // Size: 0x8
    // Offset: 0x20
    ::StringW issuer_name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String subject_name
    // Size: 0x8
    // Offset: 0x28
    ::StringW subject_name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::IDeserializationCallback
    operator ::System::Runtime::Serialization::IDeserializationCallback() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509CertificateImpl impl
    ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*& dyn_impl();
    // Get instance field reference: private System.Boolean hideDates
    bool& dyn_hideDates();
    // Get instance field reference: private System.String issuer_name
    ::StringW& dyn_issuer_name();
    // Get instance field reference: private System.String subject_name
    ::StringW& dyn_subject_name();
    // System.Security.Cryptography.X509Certificates.X509CertificateImpl get_Impl()
    // Offset: 0xCF8D54
    ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* get_Impl();
    // System.Boolean get_IsValid()
    // Offset: 0xCF8DC8
    bool get_IsValid();
    // public System.String get_Issuer()
    // Offset: 0xCF9320
    ::StringW get_Issuer();
    // public System.String get_Subject()
    // Offset: 0xCF936C
    ::StringW get_Subject();
    // System.Void .ctor(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0xCF8BC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>(impl)));
    }
    // public System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xCF9200
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>(info, context)));
    }
    // System.Void ImportHandle(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0xCF8D1C
    void ImportHandle(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
    // public System.Boolean Equals(System.Security.Cryptography.X509Certificates.X509Certificate other)
    // Offset: 0xCF8DF4
    bool Equals(::System::Security::Cryptography::X509Certificates::X509Certificate* other);
    // public System.Byte[] GetCertHash()
    // Offset: 0xCF8EBC
    ::ArrayW<uint8_t> GetCertHash();
    // public System.String GetCertHashString()
    // Offset: 0xCF8F2C
    ::StringW GetCertHashString();
    // public System.Byte[] GetRawCertData()
    // Offset: 0xCF90B0
    ::ArrayW<uint8_t> GetRawCertData();
    // public System.Byte[] GetSerialNumber()
    // Offset: 0xCF90E8
    ::ArrayW<uint8_t> GetSerialNumber();
    // public System.String GetSerialNumberString()
    // Offset: 0xCF9124
    ::StringW GetSerialNumberString();
    // public System.String ToString(System.Boolean fVerbose)
    // Offset: 0xCF9190
    ::StringW ToString(bool fVerbose);
    // public System.Void Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0xCF945C
    void Import(::ArrayW<uint8_t> rawData, ::StringW password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0xCF95D0
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xCF95D4
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public System.Void Dispose()
    // Offset: 0xCF969C
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0xCF96B0
    void Dispose(bool disposing);
    // public System.Void Reset()
    // Offset: 0xCF96C8
    void Reset();
    // public System.Void .ctor()
    // Offset: 0xCF91F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::X509Certificates::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>()));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xCF9058
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xCF9188
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xCF93B8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // System.Security.Cryptography.X509Certificates.X509Certificate
  #pragma pack(pop)
  static check_size<sizeof(X509Certificate), 40 + sizeof(::StringW)> __System_Security_Cryptography_X509Certificates_X509CertificateSizeCheck;
  static_assert(sizeof(X509Certificate) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::get_Impl
// Il2CppName: get_Impl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::get_Impl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "get_Impl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::get_Issuer
// Il2CppName: get_Issuer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::get_Issuer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "get_Issuer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::get_Subject
// Il2CppName: get_Subject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::get_Subject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "get_Subject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::ImportHandle
// Il2CppName: ImportHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate::*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*)>(&System::Security::Cryptography::X509Certificates::X509Certificate::ImportHandle)> {
  static const MethodInfo* get() {
    static auto* impl = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateImpl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "ImportHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{impl});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509Certificate::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&System::Security::Cryptography::X509Certificates::X509Certificate::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::GetCertHash
// Il2CppName: GetCertHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::GetCertHash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "GetCertHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::GetCertHashString
// Il2CppName: GetCertHashString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::GetCertHashString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "GetCertHashString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::GetRawCertData
// Il2CppName: GetRawCertData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::GetRawCertData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "GetRawCertData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::GetSerialNumber
// Il2CppName: GetSerialNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::GetSerialNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "GetSerialNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::GetSerialNumberString
// Il2CppName: GetSerialNumberString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::GetSerialNumberString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "GetSerialNumberString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509Certificate::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509Certificate::ToString)> {
  static const MethodInfo* get() {
    static auto* fVerbose = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fVerbose});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate::*)(::ArrayW<uint8_t>, ::StringW, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(&System::Security::Cryptography::X509Certificates::X509Certificate::Import)> {
  static const MethodInfo* get() {
    static auto* rawData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keyStorageFlags = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509KeyStorageFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawData, password, keyStorageFlags});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
// Il2CppName: System.Runtime.Serialization.IDeserializationCallback.OnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate::*)(::Il2CppObject*)>(&System::Security::Cryptography::X509Certificates::X509Certificate::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Security::Cryptography::X509Certificates::X509Certificate::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509Certificate::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::X509Certificates::X509Certificate::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509Certificate::*)(::Il2CppObject*)>(&System::Security::Cryptography::X509Certificates::X509Certificate::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
