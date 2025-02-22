// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioReactive.AudioReactiveEffectData
#include "VROSC/AudioReactive/AudioReactiveEffectData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: MinMaxVector3
  class MinMaxVector3;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: RotateEffectData
  class RotateEffectData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::RotateEffectData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::RotateEffectData*, "VROSC.AudioReactive", "RotateEffectData");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.RotateEffectData
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 66AB88
  class RotateEffectData : public ::VROSC::AudioReactive::AudioReactiveEffectData {
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
    // [HeaderAttribute] Offset: 0x67614C
    // private System.Boolean _uniformRandom
    // Size: 0x1
    // Offset: 0x18
    bool uniformRandom;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _local
    // Size: 0x1
    // Offset: 0x19
    bool local;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: local and: rotation
    char __padding1[0x6] = {};
    // [HeaderAttribute] Offset: 0x6761A8
    // private VROSC.MinMaxVector3 _rotation
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::MinMaxVector3* rotation;
    // Field size check
    static_assert(sizeof(::VROSC::MinMaxVector3*) == 0x8);
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x28
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: duration and: curve
    char __padding3[0x4] = {};
    // private UnityEngine.AnimationCurve _curve
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AnimationCurve* curve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // [HeaderAttribute] Offset: 0x676214
    // private System.Boolean _useConstantRotation
    // Size: 0x1
    // Offset: 0x38
    bool useConstantRotation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useConstantRotation and: constantRotation
    char __padding5[0x7] = {};
    // private VROSC.MinMaxVector3 _constantRotation
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::MinMaxVector3* constantRotation;
    // Field size check
    static_assert(sizeof(::VROSC::MinMaxVector3*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean _uniformRandom
    bool& dyn__uniformRandom();
    // Get instance field reference: private System.Boolean _local
    bool& dyn__local();
    // Get instance field reference: private VROSC.MinMaxVector3 _rotation
    ::VROSC::MinMaxVector3*& dyn__rotation();
    // Get instance field reference: private System.Single _duration
    float& dyn__duration();
    // Get instance field reference: private UnityEngine.AnimationCurve _curve
    ::UnityEngine::AnimationCurve*& dyn__curve();
    // Get instance field reference: private System.Boolean _useConstantRotation
    bool& dyn__useConstantRotation();
    // Get instance field reference: private VROSC.MinMaxVector3 _constantRotation
    ::VROSC::MinMaxVector3*& dyn__constantRotation();
    // public System.Boolean get_Local()
    // Offset: 0xB00DCC
    bool get_Local();
    // public System.Boolean get_UniformRandom()
    // Offset: 0xB00DD4
    bool get_UniformRandom();
    // public VROSC.MinMaxVector3 get_Rotation()
    // Offset: 0xB00DDC
    ::VROSC::MinMaxVector3* get_Rotation();
    // public System.Single get_Duration()
    // Offset: 0xB00DE4
    float get_Duration();
    // public UnityEngine.AnimationCurve get_Curve()
    // Offset: 0xB00DEC
    ::UnityEngine::AnimationCurve* get_Curve();
    // public System.Boolean get_UseConstantRotation()
    // Offset: 0xB00DF4
    bool get_UseConstantRotation();
    // public VROSC.MinMaxVector3 get_ConstantRotation()
    // Offset: 0xB00DFC
    ::VROSC::MinMaxVector3* get_ConstantRotation();
    // public System.Void .ctor()
    // Offset: 0xB00E04
    // Implemented from: VROSC.AudioReactive.AudioReactiveEffectData
    // Base method: System.Void AudioReactiveEffectData::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RotateEffectData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::RotateEffectData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RotateEffectData*, creationType>()));
    }
  }; // VROSC.AudioReactive.RotateEffectData
  #pragma pack(pop)
  static check_size<sizeof(RotateEffectData), 64 + sizeof(::VROSC::MinMaxVector3*)> __VROSC_AudioReactive_RotateEffectDataSizeCheck;
  static_assert(sizeof(RotateEffectData) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::RotateEffectData::get_Local
// Il2CppName: get_Local
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AudioReactive::RotateEffectData::*)()>(&VROSC::AudioReactive::RotateEffectData::get_Local)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::RotateEffectData*), "get_Local", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::RotateEffectData::get_UniformRandom
// Il2CppName: get_UniformRandom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AudioReactive::RotateEffectData::*)()>(&VROSC::AudioReactive::RotateEffectData::get_UniformRandom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::RotateEffectData*), "get_UniformRandom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::RotateEffectData::get_Rotation
// Il2CppName: get_Rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MinMaxVector3* (VROSC::AudioReactive::RotateEffectData::*)()>(&VROSC::AudioReactive::RotateEffectData::get_Rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::RotateEffectData*), "get_Rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::RotateEffectData::get_Duration
// Il2CppName: get_Duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::AudioReactive::RotateEffectData::*)()>(&VROSC::AudioReactive::RotateEffectData::get_Duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::RotateEffectData*), "get_Duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::RotateEffectData::get_Curve
// Il2CppName: get_Curve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (VROSC::AudioReactive::RotateEffectData::*)()>(&VROSC::AudioReactive::RotateEffectData::get_Curve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::RotateEffectData*), "get_Curve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::RotateEffectData::get_UseConstantRotation
// Il2CppName: get_UseConstantRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AudioReactive::RotateEffectData::*)()>(&VROSC::AudioReactive::RotateEffectData::get_UseConstantRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::RotateEffectData*), "get_UseConstantRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::RotateEffectData::get_ConstantRotation
// Il2CppName: get_ConstantRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MinMaxVector3* (VROSC::AudioReactive::RotateEffectData::*)()>(&VROSC::AudioReactive::RotateEffectData::get_ConstantRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::RotateEffectData*), "get_ConstantRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::RotateEffectData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
