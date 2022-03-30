// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.ToolSettings
#include "VROSC/ToolSettings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: MicrophoneSettings
  class MicrophoneSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::MicrophoneSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MicrophoneSettings*, "VROSC", "MicrophoneSettings");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.MicrophoneSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 669A44
  class MicrophoneSettings : public ::VROSC::ToolSettings {
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
    // public System.Single VolumeMaxValue
    // Size: 0x4
    // Offset: 0x28
    float VolumeMaxValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Volume
    // Size: 0x4
    // Offset: 0x2C
    float Volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single ReverbMaxValue
    // Size: 0x4
    // Offset: 0x30
    float ReverbMaxValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Reverb
    // Size: 0x4
    // Offset: 0x34
    float Reverb;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean UseProximity
    // Size: 0x1
    // Offset: 0x38
    bool UseProximity;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Single VolumeMaxValue
    float& dyn_VolumeMaxValue();
    // Get instance field reference: public System.Single Volume
    float& dyn_Volume();
    // Get instance field reference: public System.Single ReverbMaxValue
    float& dyn_ReverbMaxValue();
    // Get instance field reference: public System.Single Reverb
    float& dyn_Reverb();
    // Get instance field reference: public System.Boolean UseProximity
    bool& dyn_UseProximity();
    // public System.Void .ctor()
    // Offset: 0x8B3AB0
    // Implemented from: VROSC.ToolSettings
    // Base method: System.Void ToolSettings::.ctor()
    // Base method: System.Void WidgetSettings::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MicrophoneSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::MicrophoneSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MicrophoneSettings*, creationType>()));
    }
  }; // VROSC.MicrophoneSettings
  #pragma pack(pop)
  static check_size<sizeof(MicrophoneSettings), 56 + sizeof(bool)> __VROSC_MicrophoneSettingsSizeCheck;
  static_assert(sizeof(MicrophoneSettings) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::MicrophoneSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!