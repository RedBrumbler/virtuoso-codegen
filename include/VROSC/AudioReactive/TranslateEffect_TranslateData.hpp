// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioReactive.TranslateEffect
#include "VROSC/AudioReactive/TranslateEffect.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
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
  // Forward declaring type: TranslateEffectData
  class TranslateEffectData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::TranslateEffect::TranslateData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::TranslateEffect::TranslateData*, "VROSC.AudioReactive", "TranslateEffect/TranslateData");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.TranslateEffect/VROSC.AudioReactive.TranslateData
  // [TokenAttribute] Offset: FFFFFFFF
  class TranslateEffect::TranslateData : public ::Il2CppObject {
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
    // private UnityEngine.Vector3 _startPosition
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 startPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _endPosition
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 endPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean _local
    // Size: 0x1
    // Offset: 0x30
    bool local;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Transform _transform
    ::UnityEngine::Transform*& dyn__transform();
    // Get instance field reference: private UnityEngine.Vector3 _startPosition
    ::UnityEngine::Vector3& dyn__startPosition();
    // Get instance field reference: private UnityEngine.Vector3 _endPosition
    ::UnityEngine::Vector3& dyn__endPosition();
    // Get instance field reference: private System.Boolean _local
    bool& dyn__local();
    // public System.Void .ctor(UnityEngine.Transform transform, VROSC.AudioReactive.TranslateEffectData data)
    // Offset: 0x140D808
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TranslateEffect::TranslateData* New_ctor(::UnityEngine::Transform* transform, ::VROSC::AudioReactive::TranslateEffectData* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::TranslateEffect::TranslateData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TranslateEffect::TranslateData*, creationType>(transform, data)));
    }
    // public System.Void Lerp(System.Single amount)
    // Offset: 0x140D760
    void Lerp(float amount);
  }; // VROSC.AudioReactive.TranslateEffect/VROSC.AudioReactive.TranslateData
  #pragma pack(pop)
  static check_size<sizeof(TranslateEffect::TranslateData), 48 + sizeof(bool)> __VROSC_AudioReactive_TranslateEffect_TranslateDataSizeCheck;
  static_assert(sizeof(TranslateEffect::TranslateData) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::TranslateEffect::TranslateData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AudioReactive::TranslateEffect::TranslateData::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::TranslateEffect::TranslateData::*)(float)>(&VROSC::AudioReactive::TranslateEffect::TranslateData::Lerp)> {
  static const MethodInfo* get() {
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::TranslateEffect::TranslateData*), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{amount});
  }
};
