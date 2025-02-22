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
// Forward declaring namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: HelmPatchSettings
  class HelmPatchSettings;
}
// Completed forward declares
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: HelmPatchFormat
  class HelmPatchFormat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::HelmPatchFormat);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmPatchFormat*, "AudioHelm", "HelmPatchFormat");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.HelmPatchFormat
  // [TokenAttribute] Offset: FFFFFFFF
  class HelmPatchFormat : public ::Il2CppObject {
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
    // public System.String license
    // Size: 0x8
    // Offset: 0x10
    ::StringW license;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String synth_version
    // Size: 0x8
    // Offset: 0x18
    ::StringW synth_version;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String patch_name
    // Size: 0x8
    // Offset: 0x20
    ::StringW patch_name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String folder_name
    // Size: 0x8
    // Offset: 0x28
    ::StringW folder_name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String author
    // Size: 0x8
    // Offset: 0x30
    ::StringW author;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public AudioHelm.HelmPatchSettings settings
    // Size: 0x8
    // Offset: 0x38
    ::AudioHelm::HelmPatchSettings* settings;
    // Field size check
    static_assert(sizeof(::AudioHelm::HelmPatchSettings*) == 0x8);
    public:
    // Get instance field reference: public System.String license
    ::StringW& dyn_license();
    // Get instance field reference: public System.String synth_version
    ::StringW& dyn_synth_version();
    // Get instance field reference: public System.String patch_name
    ::StringW& dyn_patch_name();
    // Get instance field reference: public System.String folder_name
    ::StringW& dyn_folder_name();
    // Get instance field reference: public System.String author
    ::StringW& dyn_author();
    // Get instance field reference: public AudioHelm.HelmPatchSettings settings
    ::AudioHelm::HelmPatchSettings*& dyn_settings();
    // public System.Void .ctor()
    // Offset: 0x89ABF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelmPatchFormat* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::HelmPatchFormat::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelmPatchFormat*, creationType>()));
    }
  }; // AudioHelm.HelmPatchFormat
  #pragma pack(pop)
  static check_size<sizeof(HelmPatchFormat), 56 + sizeof(::AudioHelm::HelmPatchSettings*)> __AudioHelm_HelmPatchFormatSizeCheck;
  static_assert(sizeof(HelmPatchFormat) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::HelmPatchFormat::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
