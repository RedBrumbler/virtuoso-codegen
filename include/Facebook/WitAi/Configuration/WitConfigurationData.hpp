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
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::Data::Configuration
namespace Facebook::WitAi::Data::Configuration {
  // Forward declaring type: WitConfiguration
  class WitConfiguration;
}
// Completed forward declares
// Type namespace: Facebook.WitAi.Configuration
namespace Facebook::WitAi::Configuration {
  // Forward declaring type: WitConfigurationData
  class WitConfigurationData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Configuration::WitConfigurationData);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Configuration::WitConfigurationData*, "Facebook.WitAi.Configuration", "WitConfigurationData");
// Type namespace: Facebook.WitAi.Configuration
namespace Facebook::WitAi::Configuration {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Configuration.WitConfigurationData
  // [TokenAttribute] Offset: FFFFFFFF
  class WitConfigurationData : public ::Il2CppObject {
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
    // public Facebook.WitAi.Data.Configuration.WitConfiguration witConfiguration
    // Size: 0x8
    // Offset: 0x10
    ::Facebook::WitAi::Data::Configuration::WitConfiguration* witConfiguration;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Data::Configuration::WitConfiguration*) == 0x8);
    public:
    // Creating conversion operator: operator ::Facebook::WitAi::Data::Configuration::WitConfiguration*
    constexpr operator ::Facebook::WitAi::Data::Configuration::WitConfiguration*() const noexcept {
      return witConfiguration;
    }
    // Get instance field reference: public Facebook.WitAi.Data.Configuration.WitConfiguration witConfiguration
    ::Facebook::WitAi::Data::Configuration::WitConfiguration*& dyn_witConfiguration();
    // protected System.Void .ctor()
    // Offset: 0x10FD964
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitConfigurationData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Configuration::WitConfigurationData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitConfigurationData*, creationType>()));
    }
  }; // Facebook.WitAi.Configuration.WitConfigurationData
  #pragma pack(pop)
  static check_size<sizeof(WitConfigurationData), 16 + sizeof(::Facebook::WitAi::Data::Configuration::WitConfiguration*)> __Facebook_WitAi_Configuration_WitConfigurationDataSizeCheck;
  static_assert(sizeof(WitConfigurationData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Configuration::WitConfigurationData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
