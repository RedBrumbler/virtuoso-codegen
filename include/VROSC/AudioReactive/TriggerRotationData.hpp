// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: VROSC::AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: RotateEffectData
  class RotateEffectData;
}
// Completed forward declares
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: TriggerRotationData
  class TriggerRotationData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::TriggerRotationData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::TriggerRotationData*, "VROSC.AudioReactive", "TriggerRotationData");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.TriggerRotationData
  // [TokenAttribute] Offset: FFFFFFFF
  class TriggerRotationData : public ::Il2CppObject {
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
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Quaternion _startRotation
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Quaternion startRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion _endRotation
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Quaternion endRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private System.Boolean _local
    // Size: 0x1
    // Offset: 0x38
    bool local;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Transform _transform
    ::UnityEngine::Transform*& dyn__transform();
    // Get instance field reference: private UnityEngine.Quaternion _startRotation
    ::UnityEngine::Quaternion& dyn__startRotation();
    // Get instance field reference: private UnityEngine.Quaternion _endRotation
    ::UnityEngine::Quaternion& dyn__endRotation();
    // Get instance field reference: private System.Boolean _local
    bool& dyn__local();
    // public System.Void .ctor(UnityEngine.Transform transform, VROSC.AudioReactive.RotateEffectData data)
    // Offset: 0x14067FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TriggerRotationData* New_ctor(::UnityEngine::Transform* transform, ::VROSC::AudioReactive::RotateEffectData* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::TriggerRotationData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TriggerRotationData*, creationType>(transform, data)));
    }
    // public System.Void Lerp(System.Single amount)
    // Offset: 0x14068C0
    void Lerp(float amount);
  }; // VROSC.AudioReactive.TriggerRotationData
  #pragma pack(pop)
  static check_size<sizeof(TriggerRotationData), 56 + sizeof(bool)> __VROSC_AudioReactive_TriggerRotationDataSizeCheck;
  static_assert(sizeof(TriggerRotationData) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::TriggerRotationData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AudioReactive::TriggerRotationData::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::TriggerRotationData::*)(float)>(&VROSC::AudioReactive::TriggerRotationData::Lerp)> {
  static const MethodInfo* get() {
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::TriggerRotationData*), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{amount});
  }
};
