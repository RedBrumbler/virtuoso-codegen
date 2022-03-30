// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.Aes
#include "System/Security/Cryptography/Aes.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Skipping declaration: CipherMode because it is already included!
  // Skipping declaration: PaddingMode because it is already included!
  // Forward declaring type: ICryptoTransform
  class ICryptoTransform;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AesCryptoServiceProvider
  class AesCryptoServiceProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::AesCryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AesCryptoServiceProvider*, "System.Security.Cryptography", "AesCryptoServiceProvider");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.AesCryptoServiceProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class AesCryptoServiceProvider : public ::System::Security::Cryptography::Aes {
    public:
    // public override System.Byte[] get_IV()
    // Offset: 0x12BE7B8
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Byte[] SymmetricAlgorithm::get_IV()
    ::ArrayW<uint8_t> get_IV();
    // public override System.Void set_IV(System.Byte[] value)
    // Offset: 0x12BE7C0
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_IV(System.Byte[] value)
    void set_IV(::ArrayW<uint8_t> value);
    // public override System.Byte[] get_Key()
    // Offset: 0x12BE7C8
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Byte[] SymmetricAlgorithm::get_Key()
    ::ArrayW<uint8_t> get_Key();
    // public override System.Void set_Key(System.Byte[] value)
    // Offset: 0x12BE7D0
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Key(System.Byte[] value)
    void set_Key(::ArrayW<uint8_t> value);
    // public override System.Int32 get_KeySize()
    // Offset: 0x12BE7D8
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Int32 SymmetricAlgorithm::get_KeySize()
    int get_KeySize();
    // public override System.Void set_KeySize(System.Int32 value)
    // Offset: 0x12BE7E0
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_KeySize(System.Int32 value)
    void set_KeySize(int value);
    // public override System.Int32 get_FeedbackSize()
    // Offset: 0x12BE7E8
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Int32 SymmetricAlgorithm::get_FeedbackSize()
    int get_FeedbackSize();
    // public override System.Security.Cryptography.CipherMode get_Mode()
    // Offset: 0x12BE7F0
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.CipherMode SymmetricAlgorithm::get_Mode()
    ::System::Security::Cryptography::CipherMode get_Mode();
    // public override System.Void set_Mode(System.Security.Cryptography.CipherMode value)
    // Offset: 0x12BE7F8
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode value)
    void set_Mode(::System::Security::Cryptography::CipherMode value);
    // public override System.Security.Cryptography.PaddingMode get_Padding()
    // Offset: 0x12BE85C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.PaddingMode SymmetricAlgorithm::get_Padding()
    ::System::Security::Cryptography::PaddingMode get_Padding();
    // public override System.Void set_Padding(System.Security.Cryptography.PaddingMode value)
    // Offset: 0x12BE864
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode value)
    void set_Padding(::System::Security::Cryptography::PaddingMode value);
    // public System.Void .ctor()
    // Offset: 0x12BDDF4
    // Implemented from: System.Security.Cryptography.Aes
    // Base method: System.Void Aes::.ctor()
    // Base method: System.Void SymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AesCryptoServiceProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::AesCryptoServiceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AesCryptoServiceProvider*, creationType>()));
    }
    // public override System.Void GenerateIV()
    // Offset: 0x12BDE64
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateIV()
    void GenerateIV();
    // public override System.Void GenerateKey()
    // Offset: 0x12BDE94
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateKey()
    void GenerateKey();
    // public override System.Security.Cryptography.ICryptoTransform CreateDecryptor(System.Byte[] key, System.Byte[] iv)
    // Offset: 0x12BDEC4
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateDecryptor(System.Byte[] key, System.Byte[] iv)
    ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv);
    // public override System.Security.Cryptography.ICryptoTransform CreateEncryptor(System.Byte[] key, System.Byte[] iv)
    // Offset: 0x12BE6C4
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateEncryptor(System.Byte[] key, System.Byte[] iv)
    ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv);
    // public override System.Security.Cryptography.ICryptoTransform CreateDecryptor()
    // Offset: 0x12BE86C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateDecryptor()
    ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor();
    // public override System.Security.Cryptography.ICryptoTransform CreateEncryptor()
    // Offset: 0x12BE8C0
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateEncryptor()
    ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x12BE914
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.AesCryptoServiceProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::get_IV
// Il2CppName: get_IV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::get_IV)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "get_IV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::set_IV
// Il2CppName: set_IV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesCryptoServiceProvider::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::AesCryptoServiceProvider::set_IV)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "set_IV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::set_Key
// Il2CppName: set_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesCryptoServiceProvider::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::AesCryptoServiceProvider::set_Key)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "set_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::get_KeySize
// Il2CppName: get_KeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::get_KeySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "get_KeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::set_KeySize
// Il2CppName: set_KeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesCryptoServiceProvider::*)(int)>(&System::Security::Cryptography::AesCryptoServiceProvider::set_KeySize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "set_KeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::get_FeedbackSize
// Il2CppName: get_FeedbackSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::get_FeedbackSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "get_FeedbackSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::get_Mode
// Il2CppName: get_Mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::CipherMode (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::get_Mode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "get_Mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::set_Mode
// Il2CppName: set_Mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesCryptoServiceProvider::*)(::System::Security::Cryptography::CipherMode)>(&System::Security::Cryptography::AesCryptoServiceProvider::set_Mode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "CipherMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "set_Mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::get_Padding
// Il2CppName: get_Padding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::PaddingMode (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::get_Padding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "get_Padding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::set_Padding
// Il2CppName: set_Padding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesCryptoServiceProvider::*)(::System::Security::Cryptography::PaddingMode)>(&System::Security::Cryptography::AesCryptoServiceProvider::set_Padding)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "PaddingMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "set_Padding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::GenerateIV
// Il2CppName: GenerateIV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::GenerateIV)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "GenerateIV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::GenerateKey
// Il2CppName: GenerateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::GenerateKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "GenerateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::CreateDecryptor
// Il2CppName: CreateDecryptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (System::Security::Cryptography::AesCryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::AesCryptoServiceProvider::CreateDecryptor)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* iv = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "CreateDecryptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, iv});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::CreateEncryptor
// Il2CppName: CreateEncryptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (System::Security::Cryptography::AesCryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::AesCryptoServiceProvider::CreateEncryptor)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* iv = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "CreateEncryptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, iv});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::CreateDecryptor
// Il2CppName: CreateDecryptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::CreateDecryptor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "CreateDecryptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::CreateEncryptor
// Il2CppName: CreateEncryptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&System::Security::Cryptography::AesCryptoServiceProvider::CreateEncryptor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "CreateEncryptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AesCryptoServiceProvider::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesCryptoServiceProvider::*)(bool)>(&System::Security::Cryptography::AesCryptoServiceProvider::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AesCryptoServiceProvider*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};