// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: OVR
namespace OVR {
  // Forward declaring type: OSPProps
  class OSPProps;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OSPProps);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OSPProps*, "OVR", "OSPProps");
// Type namespace: OVR
namespace OVR {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OSPProps
  // [TokenAttribute] Offset: FFFFFFFF
  class OSPProps : public ::Il2CppObject {
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
    // [TooltipAttribute] Offset: 0x5D5880
    // public System.Boolean enableSpatialization
    // Size: 0x1
    // Offset: 0x10
    bool enableSpatialization;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0x5D58B8
    // public System.Boolean useFastOverride
    // Size: 0x1
    // Offset: 0x11
    bool useFastOverride;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useFastOverride and: gain
    char __padding1[0x2] = {};
    // [RangeAttribute] Offset: 0x5D58F0
    // [TooltipAttribute] Offset: 0x5D58F0
    // public System.Single gain
    // Size: 0x4
    // Offset: 0x14
    float gain;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x5D5944
    // public System.Boolean enableInvSquare
    // Size: 0x1
    // Offset: 0x18
    bool enableInvSquare;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enableInvSquare and: volumetric
    char __padding3[0x3] = {};
    // [RangeAttribute] Offset: 0x5D597C
    // [TooltipAttribute] Offset: 0x5D597C
    // public System.Single volumetric
    // Size: 0x4
    // Offset: 0x1C
    float volumetric;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [MinMaxAttribute] Offset: 0x5D59D4
    // [TooltipAttribute] Offset: 0x5D59D4
    // public UnityEngine.Vector2 invSquareFalloff
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Vector2 invSquareFalloff;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Get instance field reference: public System.Boolean enableSpatialization
    bool& dyn_enableSpatialization();
    // Get instance field reference: public System.Boolean useFastOverride
    bool& dyn_useFastOverride();
    // Get instance field reference: public System.Single gain
    float& dyn_gain();
    // Get instance field reference: public System.Boolean enableInvSquare
    bool& dyn_enableInvSquare();
    // Get instance field reference: public System.Single volumetric
    float& dyn_volumetric();
    // Get instance field reference: public UnityEngine.Vector2 invSquareFalloff
    ::UnityEngine::Vector2& dyn_invSquareFalloff();
    // public System.Void .ctor()
    // Offset: 0x12A6A9C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OSPProps* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OSPProps::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OSPProps*, creationType>()));
    }
  }; // OVR.OSPProps
  #pragma pack(pop)
  static check_size<sizeof(OSPProps), 32 + sizeof(::UnityEngine::Vector2)> __OVR_OSPPropsSizeCheck;
  static_assert(sizeof(OSPProps) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OSPProps::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
