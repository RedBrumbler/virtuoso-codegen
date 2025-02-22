// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::Data::Configuration
namespace Facebook::WitAi::Data::Configuration {
  // Forward declaring type: WitApplication
  class WitApplication;
}
// Forward declaring namespace: Facebook::WitAi::Data::Entities
namespace Facebook::WitAi::Data::Entities {
  // Forward declaring type: WitEntity
  class WitEntity;
}
// Forward declaring namespace: Facebook::WitAi::Data::Intents
namespace Facebook::WitAi::Data::Intents {
  // Forward declaring type: WitIntent
  class WitIntent;
}
// Forward declaring namespace: Facebook::WitAi::Data::Traits
namespace Facebook::WitAi::Data::Traits {
  // Forward declaring type: WitTrait
  class WitTrait;
}
// Completed forward declares
// Type namespace: Facebook.WitAi.Data.Configuration
namespace Facebook::WitAi::Data::Configuration {
  // Forward declaring type: WitConfiguration
  class WitConfiguration;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Data::Configuration::WitConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Data::Configuration::WitConfiguration*, "Facebook.WitAi.Data.Configuration", "WitConfiguration");
// Type namespace: Facebook.WitAi.Data.Configuration
namespace Facebook::WitAi::Data::Configuration {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Data.Configuration.WitConfiguration
  // [TokenAttribute] Offset: FFFFFFFF
  class WitConfiguration : public ::UnityEngine::ScriptableObject {
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
    // public Facebook.WitAi.Data.Configuration.WitApplication application
    // Size: 0x8
    // Offset: 0x18
    ::Facebook::WitAi::Data::Configuration::WitApplication* application;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Data::Configuration::WitApplication*) == 0x8);
    // public System.String configId
    // Size: 0x8
    // Offset: 0x20
    ::StringW configId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String clientAccessToken
    // Size: 0x8
    // Offset: 0x28
    ::StringW clientAccessToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public Facebook.WitAi.Data.Entities.WitEntity[] entities
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::Facebook::WitAi::Data::Entities::WitEntity*> entities;
    // Field size check
    static_assert(sizeof(::ArrayW<::Facebook::WitAi::Data::Entities::WitEntity*>) == 0x8);
    // public Facebook.WitAi.Data.Intents.WitIntent[] intents
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::Facebook::WitAi::Data::Intents::WitIntent*> intents;
    // Field size check
    static_assert(sizeof(::ArrayW<::Facebook::WitAi::Data::Intents::WitIntent*>) == 0x8);
    // public Facebook.WitAi.Data.Traits.WitTrait[] traits
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::Facebook::WitAi::Data::Traits::WitTrait*> traits;
    // Field size check
    static_assert(sizeof(::ArrayW<::Facebook::WitAi::Data::Traits::WitTrait*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public Facebook.WitAi.Data.Configuration.WitApplication application
    ::Facebook::WitAi::Data::Configuration::WitApplication*& dyn_application();
    // Get instance field reference: public System.String configId
    ::StringW& dyn_configId();
    // Get instance field reference: public System.String clientAccessToken
    ::StringW& dyn_clientAccessToken();
    // Get instance field reference: public Facebook.WitAi.Data.Entities.WitEntity[] entities
    ::ArrayW<::Facebook::WitAi::Data::Entities::WitEntity*>& dyn_entities();
    // Get instance field reference: public Facebook.WitAi.Data.Intents.WitIntent[] intents
    ::ArrayW<::Facebook::WitAi::Data::Intents::WitIntent*>& dyn_intents();
    // Get instance field reference: public Facebook.WitAi.Data.Traits.WitTrait[] traits
    ::ArrayW<::Facebook::WitAi::Data::Traits::WitTrait*>& dyn_traits();
    // public Facebook.WitAi.Data.Configuration.WitApplication get_Application()
    // Offset: 0x10FDD40
    ::Facebook::WitAi::Data::Configuration::WitApplication* get_Application();
    // private System.Void OnEnable()
    // Offset: 0x10FDD48
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x10FDD4C
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitConfiguration* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Data::Configuration::WitConfiguration::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitConfiguration*, creationType>()));
    }
  }; // Facebook.WitAi.Data.Configuration.WitConfiguration
  #pragma pack(pop)
  static check_size<sizeof(WitConfiguration), 64 + sizeof(::ArrayW<::Facebook::WitAi::Data::Traits::WitTrait*>)> __Facebook_WitAi_Data_Configuration_WitConfigurationSizeCheck;
  static_assert(sizeof(WitConfiguration) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Data::Configuration::WitConfiguration::get_Application
// Il2CppName: get_Application
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Data::Configuration::WitApplication* (Facebook::WitAi::Data::Configuration::WitConfiguration::*)()>(&Facebook::WitAi::Data::Configuration::WitConfiguration::get_Application)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Data::Configuration::WitConfiguration*), "get_Application", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Data::Configuration::WitConfiguration::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Data::Configuration::WitConfiguration::*)()>(&Facebook::WitAi::Data::Configuration::WitConfiguration::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Data::Configuration::WitConfiguration*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Data::Configuration::WitConfiguration::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
