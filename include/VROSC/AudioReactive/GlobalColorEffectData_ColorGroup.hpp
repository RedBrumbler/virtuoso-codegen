// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioReactive.GlobalColorEffectData
#include "VROSC/AudioReactive/GlobalColorEffectData.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::GlobalColorEffectData::ColorGroup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::GlobalColorEffectData::ColorGroup*, "VROSC.AudioReactive", "GlobalColorEffectData/ColorGroup");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.ColorGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class GlobalColorEffectData::ColorGroup : public ::Il2CppObject {
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
    // [ColorUsageAttribute] Offset: 0x67681C
    // private UnityEngine.Color _color1
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Color color1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [ColorUsageAttribute] Offset: 0x67685C
    // private UnityEngine.Color _color2
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color color2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [ColorUsageAttribute] Offset: 0x67689C
    // private UnityEngine.Color _color3
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color color3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [ColorUsageAttribute] Offset: 0x6768DC
    // private UnityEngine.Color _color4
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color color4;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: private UnityEngine.Color _color1
    ::UnityEngine::Color& dyn__color1();
    // Get instance field reference: private UnityEngine.Color _color2
    ::UnityEngine::Color& dyn__color2();
    // Get instance field reference: private UnityEngine.Color _color3
    ::UnityEngine::Color& dyn__color3();
    // Get instance field reference: private UnityEngine.Color _color4
    ::UnityEngine::Color& dyn__color4();
    // public UnityEngine.Color get_Color1()
    // Offset: 0x13CF4E4
    ::UnityEngine::Color get_Color1();
    // public UnityEngine.Color get_Color2()
    // Offset: 0x13CF4F0
    ::UnityEngine::Color get_Color2();
    // public UnityEngine.Color get_Color3()
    // Offset: 0x13CF4FC
    ::UnityEngine::Color get_Color3();
    // public UnityEngine.Color get_Color4()
    // Offset: 0x13CF508
    ::UnityEngine::Color get_Color4();
    // public System.Void .ctor()
    // Offset: 0x13CF514
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GlobalColorEffectData::ColorGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::GlobalColorEffectData::ColorGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GlobalColorEffectData::ColorGroup*, creationType>()));
    }
  }; // VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.ColorGroup
  #pragma pack(pop)
  static check_size<sizeof(GlobalColorEffectData::ColorGroup), 64 + sizeof(::UnityEngine::Color)> __VROSC_AudioReactive_GlobalColorEffectData_ColorGroupSizeCheck;
  static_assert(sizeof(GlobalColorEffectData::ColorGroup) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::ColorGroup::get_Color1
// Il2CppName: get_Color1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::AudioReactive::GlobalColorEffectData::ColorGroup::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::ColorGroup::get_Color1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData::ColorGroup*), "get_Color1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::ColorGroup::get_Color2
// Il2CppName: get_Color2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::AudioReactive::GlobalColorEffectData::ColorGroup::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::ColorGroup::get_Color2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData::ColorGroup*), "get_Color2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::ColorGroup::get_Color3
// Il2CppName: get_Color3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::AudioReactive::GlobalColorEffectData::ColorGroup::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::ColorGroup::get_Color3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData::ColorGroup*), "get_Color3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::ColorGroup::get_Color4
// Il2CppName: get_Color4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::AudioReactive::GlobalColorEffectData::ColorGroup::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::ColorGroup::get_Color4)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData::ColorGroup*), "get_Color4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::ColorGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
