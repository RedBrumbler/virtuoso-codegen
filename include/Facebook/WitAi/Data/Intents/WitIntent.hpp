// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Facebook.WitAi.Configuration.WitConfigurationData
#include "Facebook/WitAi/Configuration/WitConfigurationData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::Data::Entities
namespace Facebook::WitAi::Data::Entities {
  // Forward declaring type: WitEntity
  class WitEntity;
}
// Completed forward declares
// Type namespace: Facebook.WitAi.Data.Intents
namespace Facebook::WitAi::Data::Intents {
  // Forward declaring type: WitIntent
  class WitIntent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Data::Intents::WitIntent);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Data::Intents::WitIntent*, "Facebook.WitAi.Data.Intents", "WitIntent");
// Type namespace: Facebook.WitAi.Data.Intents
namespace Facebook::WitAi::Data::Intents {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Data.Intents.WitIntent
  // [TokenAttribute] Offset: FFFFFFFF
  class WitIntent : public ::Facebook::WitAi::Configuration::WitConfigurationData {
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
    // public System.String id
    // Size: 0x8
    // Offset: 0x18
    ::StringW id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String name
    // Size: 0x8
    // Offset: 0x20
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public Facebook.WitAi.Data.Entities.WitEntity[] entities
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Facebook::WitAi::Data::Entities::WitEntity*> entities;
    // Field size check
    static_assert(sizeof(::ArrayW<::Facebook::WitAi::Data::Entities::WitEntity*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::Facebook::WitAi::Data::Configuration::WitConfiguration*
    constexpr operator ::Facebook::WitAi::Data::Configuration::WitConfiguration*() const noexcept = delete;
    // Get instance field reference: public System.String id
    ::StringW& dyn_id();
    // Get instance field reference: public System.String name
    ::StringW& dyn_name();
    // Get instance field reference: public Facebook.WitAi.Data.Entities.WitEntity[] entities
    ::ArrayW<::Facebook::WitAi::Data::Entities::WitEntity*>& dyn_entities();
    // public System.Void .ctor()
    // Offset: 0x10FEBB0
    // Implemented from: Facebook.WitAi.Configuration.WitConfigurationData
    // Base method: System.Void WitConfigurationData::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitIntent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Data::Intents::WitIntent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitIntent*, creationType>()));
    }
  }; // Facebook.WitAi.Data.Intents.WitIntent
  #pragma pack(pop)
  static check_size<sizeof(WitIntent), 40 + sizeof(::ArrayW<::Facebook::WitAi::Data::Entities::WitEntity*>)> __Facebook_WitAi_Data_Intents_WitIntentSizeCheck;
  static_assert(sizeof(WitIntent) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Data::Intents::WitIntent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
