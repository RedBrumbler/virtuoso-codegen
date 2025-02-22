// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SignalControllerInfo
  class SignalControllerInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SignalControllerInfo);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SignalControllerInfo*, "VROSC", "SignalControllerInfo");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SignalControllerInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class SignalControllerInfo : public ::Il2CppObject {
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
    // public VROSC.InputDevice Origin
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::InputDevice* Origin;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // public UnityEngine.Vector3 NormalizedPoint
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 NormalizedPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 NormalizedRotation
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 NormalizedRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 RelativeVelocity
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 RelativeVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public VROSC.InputDevice Origin
    ::VROSC::InputDevice*& dyn_Origin();
    // Get instance field reference: public UnityEngine.Vector3 NormalizedPoint
    ::UnityEngine::Vector3& dyn_NormalizedPoint();
    // Get instance field reference: public UnityEngine.Vector3 NormalizedRotation
    ::UnityEngine::Vector3& dyn_NormalizedRotation();
    // Get instance field reference: public UnityEngine.Vector3 RelativeVelocity
    ::UnityEngine::Vector3& dyn_RelativeVelocity();
    // public System.Void .ctor(VROSC.InputDevice device, UnityEngine.Vector3 normalizedPoint, UnityEngine.Vector3 normalizedRotation, UnityEngine.Vector3 relativeVelocity)
    // Offset: 0x13B53B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalControllerInfo* New_ctor(::VROSC::InputDevice* device, ::UnityEngine::Vector3 normalizedPoint, ::UnityEngine::Vector3 normalizedRotation, ::UnityEngine::Vector3 relativeVelocity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SignalControllerInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalControllerInfo*, creationType>(device, normalizedPoint, normalizedRotation, relativeVelocity)));
    }
  }; // VROSC.SignalControllerInfo
  #pragma pack(pop)
  static check_size<sizeof(SignalControllerInfo), 48 + sizeof(::UnityEngine::Vector3)> __VROSC_SignalControllerInfoSizeCheck;
  static_assert(sizeof(SignalControllerInfo) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SignalControllerInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
