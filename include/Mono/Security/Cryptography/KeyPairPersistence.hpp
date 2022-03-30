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
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: CspParameters
  class CspParameters;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Forward declaring type: KeyPairPersistence
  class KeyPairPersistence;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Cryptography::KeyPairPersistence);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::KeyPairPersistence*, "Mono.Security.Cryptography", "KeyPairPersistence");
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.KeyPairPersistence
  // [TokenAttribute] Offset: FFFFFFFF
  class KeyPairPersistence : public ::Il2CppObject {
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
    // private System.Security.Cryptography.CspParameters _params
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::Cryptography::CspParameters* params;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::CspParameters*) == 0x8);
    // private System.String _keyvalue
    // Size: 0x8
    // Offset: 0x18
    ::StringW keyvalue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _filename
    // Size: 0x8
    // Offset: 0x20
    ::StringW filename;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _container
    // Size: 0x8
    // Offset: 0x28
    ::StringW container;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static private System.Boolean _userPathExists
    static bool _get__userPathExists();
    // Set static field: static private System.Boolean _userPathExists
    static void _set__userPathExists(bool value);
    // Get static field: static private System.String _userPath
    static ::StringW _get__userPath();
    // Set static field: static private System.String _userPath
    static void _set__userPath(::StringW value);
    // Get static field: static private System.Boolean _machinePathExists
    static bool _get__machinePathExists();
    // Set static field: static private System.Boolean _machinePathExists
    static void _set__machinePathExists(bool value);
    // Get static field: static private System.String _machinePath
    static ::StringW _get__machinePath();
    // Set static field: static private System.String _machinePath
    static void _set__machinePath(::StringW value);
    // Get static field: static private System.Object lockobj
    static ::Il2CppObject* _get_lockobj();
    // Set static field: static private System.Object lockobj
    static void _set_lockobj(::Il2CppObject* value);
    // Get instance field reference: private System.Security.Cryptography.CspParameters _params
    ::System::Security::Cryptography::CspParameters*& dyn__params();
    // Get instance field reference: private System.String _keyvalue
    ::StringW& dyn__keyvalue();
    // Get instance field reference: private System.String _filename
    ::StringW& dyn__filename();
    // Get instance field reference: private System.String _container
    ::StringW& dyn__container();
    // public System.String get_Filename()
    // Offset: 0xC57F68
    ::StringW get_Filename();
    // public System.String get_KeyValue()
    // Offset: 0xC58E70
    ::StringW get_KeyValue();
    // public System.Void set_KeyValue(System.String value)
    // Offset: 0xC58E78
    void set_KeyValue(::StringW value);
    // static private System.String get_UserPath()
    // Offset: 0xC5886C
    static ::StringW get_UserPath();
    // static private System.String get_MachinePath()
    // Offset: 0xC5826C
    static ::StringW get_MachinePath();
    // private System.Boolean get_CanChange()
    // Offset: 0xC58E8C
    bool get_CanChange();
    // private System.Boolean get_UseDefaultKeyContainer()
    // Offset: 0xC598D8
    bool get_UseDefaultKeyContainer();
    // private System.Boolean get_UseMachineKeyStore()
    // Offset: 0xC5824C
    bool get_UseMachineKeyStore();
    // private System.String get_ContainerName()
    // Offset: 0xC58120
    ::StringW get_ContainerName();
    // public System.Void .ctor(System.Security.Cryptography.CspParameters parameters)
    // Offset: 0xC57E30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyPairPersistence* New_ctor(::System::Security::Cryptography::CspParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Cryptography::KeyPairPersistence::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyPairPersistence*, creationType>(parameters)));
    }
    // public System.Void .ctor(System.Security.Cryptography.CspParameters parameters, System.String keyPair)
    // Offset: 0xC57E38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyPairPersistence* New_ctor(::System::Security::Cryptography::CspParameters* parameters, ::StringW keyPair) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Cryptography::KeyPairPersistence::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyPairPersistence*, creationType>(parameters, keyPair)));
    }
    // static private System.Void .cctor()
    // Offset: 0xC598F8
    static void _cctor();
    // public System.Boolean Load()
    // Offset: 0xC58E9C
    bool Load();
    // public System.Void Save()
    // Offset: 0xC59138
    void Save();
    // public System.Void Remove()
    // Offset: 0xC596A4
    void Remove();
    // static System.Boolean _CanSecure(System.String root)
    // Offset: 0xC597E8
    static bool _CanSecure(::StringW root);
    // static System.Boolean _ProtectUser(System.String path)
    // Offset: 0xC597EC
    static bool _ProtectUser(::StringW path);
    // static System.Boolean _ProtectMachine(System.String path)
    // Offset: 0xC597F0
    static bool _ProtectMachine(::StringW path);
    // static System.Boolean _IsUserProtected(System.String path)
    // Offset: 0xC597F4
    static bool _IsUserProtected(::StringW path);
    // static System.Boolean _IsMachineProtected(System.String path)
    // Offset: 0xC597F8
    static bool _IsMachineProtected(::StringW path);
    // static private System.Boolean CanSecure(System.String path)
    // Offset: 0xC597FC
    static bool CanSecure(::StringW path);
    // static private System.Boolean ProtectUser(System.String path)
    // Offset: 0xC59610
    static bool ProtectUser(::StringW path);
    // static private System.Boolean ProtectMachine(System.String path)
    // Offset: 0xC5957C
    static bool ProtectMachine(::StringW path);
    // static private System.Boolean IsUserProtected(System.String path)
    // Offset: 0xC596C0
    static bool IsUserProtected(::StringW path);
    // static private System.Boolean IsMachineProtected(System.String path)
    // Offset: 0xC59754
    static bool IsMachineProtected(::StringW path);
    // private System.Security.Cryptography.CspParameters Copy(System.Security.Cryptography.CspParameters p)
    // Offset: 0xC57EC4
    ::System::Security::Cryptography::CspParameters* Copy(::System::Security::Cryptography::CspParameters* p);
    // private System.Void FromXml(System.String xml)
    // Offset: 0xC59010
    void FromXml(::StringW xml);
    // private System.String ToXml()
    // Offset: 0xC59364
    ::StringW ToXml();
  }; // Mono.Security.Cryptography.KeyPairPersistence
  #pragma pack(pop)
  static check_size<sizeof(KeyPairPersistence), 40 + sizeof(::StringW)> __Mono_Security_Cryptography_KeyPairPersistenceSizeCheck;
  static_assert(sizeof(KeyPairPersistence) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::get_Filename
// Il2CppName: get_Filename
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::get_Filename)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "get_Filename", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::get_KeyValue
// Il2CppName: get_KeyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::get_KeyValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "get_KeyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::set_KeyValue
// Il2CppName: set_KeyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::KeyPairPersistence::*)(::StringW)>(&Mono::Security::Cryptography::KeyPairPersistence::set_KeyValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "set_KeyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::get_UserPath
// Il2CppName: get_UserPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Mono::Security::Cryptography::KeyPairPersistence::get_UserPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "get_UserPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::get_MachinePath
// Il2CppName: get_MachinePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Mono::Security::Cryptography::KeyPairPersistence::get_MachinePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "get_MachinePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::get_CanChange
// Il2CppName: get_CanChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::get_CanChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "get_CanChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::get_UseDefaultKeyContainer
// Il2CppName: get_UseDefaultKeyContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::get_UseDefaultKeyContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "get_UseDefaultKeyContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::get_UseMachineKeyStore
// Il2CppName: get_UseMachineKeyStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::get_UseMachineKeyStore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "get_UseMachineKeyStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::get_ContainerName
// Il2CppName: get_ContainerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::get_ContainerName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "get_ContainerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::Cryptography::KeyPairPersistence::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::Load)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::Save)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::Remove)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::_CanSecure
// Il2CppName: _CanSecure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Mono::Security::Cryptography::KeyPairPersistence::_CanSecure)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "_CanSecure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::_ProtectUser
// Il2CppName: _ProtectUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Mono::Security::Cryptography::KeyPairPersistence::_ProtectUser)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "_ProtectUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::_ProtectMachine
// Il2CppName: _ProtectMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Mono::Security::Cryptography::KeyPairPersistence::_ProtectMachine)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "_ProtectMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::_IsUserProtected
// Il2CppName: _IsUserProtected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Mono::Security::Cryptography::KeyPairPersistence::_IsUserProtected)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "_IsUserProtected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::_IsMachineProtected
// Il2CppName: _IsMachineProtected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Mono::Security::Cryptography::KeyPairPersistence::_IsMachineProtected)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "_IsMachineProtected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::CanSecure
// Il2CppName: CanSecure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Mono::Security::Cryptography::KeyPairPersistence::CanSecure)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "CanSecure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::ProtectUser
// Il2CppName: ProtectUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Mono::Security::Cryptography::KeyPairPersistence::ProtectUser)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "ProtectUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::ProtectMachine
// Il2CppName: ProtectMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Mono::Security::Cryptography::KeyPairPersistence::ProtectMachine)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "ProtectMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::IsUserProtected
// Il2CppName: IsUserProtected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Mono::Security::Cryptography::KeyPairPersistence::IsUserProtected)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "IsUserProtected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::IsMachineProtected
// Il2CppName: IsMachineProtected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Mono::Security::Cryptography::KeyPairPersistence::IsMachineProtected)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "IsMachineProtected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::CspParameters* (Mono::Security::Cryptography::KeyPairPersistence::*)(::System::Security::Cryptography::CspParameters*)>(&Mono::Security::Cryptography::KeyPairPersistence::Copy)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "CspParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::FromXml
// Il2CppName: FromXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::KeyPairPersistence::*)(::StringW)>(&Mono::Security::Cryptography::KeyPairPersistence::FromXml)> {
  static const MethodInfo* get() {
    static auto* xml = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "FromXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xml});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::KeyPairPersistence::ToXml
// Il2CppName: ToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::Cryptography::KeyPairPersistence::*)()>(&Mono::Security::Cryptography::KeyPairPersistence::ToXml)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::KeyPairPersistence*), "ToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};