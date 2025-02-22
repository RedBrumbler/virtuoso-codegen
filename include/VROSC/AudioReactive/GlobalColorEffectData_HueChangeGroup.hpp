// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioReactive.GlobalColorEffectData
#include "VROSC/AudioReactive/GlobalColorEffectData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Gradient
  class Gradient;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup*, "VROSC.AudioReactive", "GlobalColorEffectData/HueChangeGroup");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x22
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.HueChangeGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class GlobalColorEffectData::HueChangeGroup : public ::Il2CppObject {
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
    // private System.Single _hueShift
    // Size: 0x4
    // Offset: 0x10
    float hueShift;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: hueShift and: gradient
    char __padding0[0x4] = {};
    // [GradientUsageAttribute] Offset: 0x67692C
    // private UnityEngine.Gradient _gradient
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Gradient* gradient;
    // Field size check
    static_assert(sizeof(::UnityEngine::Gradient*) == 0x8);
    // private System.Boolean _useGradient
    // Size: 0x1
    // Offset: 0x20
    bool useGradient;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _includeShifts
    // Size: 0x1
    // Offset: 0x21
    bool includeShifts;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Single _hueShift
    float& dyn__hueShift();
    // Get instance field reference: private UnityEngine.Gradient _gradient
    ::UnityEngine::Gradient*& dyn__gradient();
    // Get instance field reference: private System.Boolean _useGradient
    bool& dyn__useGradient();
    // Get instance field reference: private System.Boolean _includeShifts
    bool& dyn__includeShifts();
    // public System.Single get_HueShift()
    // Offset: 0x13CF51C
    float get_HueShift();
    // public UnityEngine.Gradient get_Gradient()
    // Offset: 0x13CF524
    ::UnityEngine::Gradient* get_Gradient();
    // public System.Boolean get_UseGradient()
    // Offset: 0x13CF52C
    bool get_UseGradient();
    // public System.Boolean get_IncludeShifts()
    // Offset: 0x13CF534
    bool get_IncludeShifts();
    // public System.Void .ctor()
    // Offset: 0x13CF53C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GlobalColorEffectData::HueChangeGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GlobalColorEffectData::HueChangeGroup*, creationType>()));
    }
  }; // VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.HueChangeGroup
  #pragma pack(pop)
  static check_size<sizeof(GlobalColorEffectData::HueChangeGroup), 33 + sizeof(bool)> __VROSC_AudioReactive_GlobalColorEffectData_HueChangeGroupSizeCheck;
  static_assert(sizeof(GlobalColorEffectData::HueChangeGroup) == 0x22);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup::get_HueShift
// Il2CppName: get_HueShift
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup::get_HueShift)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup*), "get_HueShift", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup::get_Gradient
// Il2CppName: get_Gradient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Gradient* (VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup::get_Gradient)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup*), "get_Gradient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup::get_UseGradient
// Il2CppName: get_UseGradient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup::get_UseGradient)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup*), "get_UseGradient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup::get_IncludeShifts
// Il2CppName: get_IncludeShifts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup::get_IncludeShifts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup*), "get_IncludeShifts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
