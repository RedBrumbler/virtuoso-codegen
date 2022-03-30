// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioReactive.AudioReactiveEffectData
#include "VROSC/AudioReactive/AudioReactiveEffectData.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::AudioReactive
namespace VROSC::AudioReactive {
  // Skipping declaration: CycleStyle because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: ChangeColorEffectData
  class ChangeColorEffectData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::ChangeColorEffectData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ChangeColorEffectData*, "VROSC.AudioReactive", "ChangeColorEffectData");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x35
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.ChangeColorEffectData
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 66AA80
  class ChangeColorEffectData : public ::VROSC::AudioReactive::AudioReactiveEffectData {
    public:
    // Nested type: ::VROSC::AudioReactive::ChangeColorEffectData::CycleStyle
    struct CycleStyle;
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.AudioReactive.ChangeColorEffectData/VROSC.AudioReactive.CycleStyle
    // [TokenAttribute] Offset: FFFFFFFF
    struct CycleStyle/*, public ::System::Enum*/ {
      public:
      // Writing base type padding for base size: 0x0 to desired offset: 0x10
      char ___base_padding[0x10] = {};
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x10
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: CycleStyle
      constexpr CycleStyle(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.AudioReactive.ChangeColorEffectData/VROSC.AudioReactive.CycleStyle Random
      static constexpr const int Random = 0;
      // Get static field: static public VROSC.AudioReactive.ChangeColorEffectData/VROSC.AudioReactive.CycleStyle Random
      static ::VROSC::AudioReactive::ChangeColorEffectData::CycleStyle _get_Random();
      // Set static field: static public VROSC.AudioReactive.ChangeColorEffectData/VROSC.AudioReactive.CycleStyle Random
      static void _set_Random(::VROSC::AudioReactive::ChangeColorEffectData::CycleStyle value);
      // static field const value: static public VROSC.AudioReactive.ChangeColorEffectData/VROSC.AudioReactive.CycleStyle Cycle
      static constexpr const int Cycle = 1;
      // Get static field: static public VROSC.AudioReactive.ChangeColorEffectData/VROSC.AudioReactive.CycleStyle Cycle
      static ::VROSC::AudioReactive::ChangeColorEffectData::CycleStyle _get_Cycle();
      // Set static field: static public VROSC.AudioReactive.ChangeColorEffectData/VROSC.AudioReactive.CycleStyle Cycle
      static void _set_Cycle(::VROSC::AudioReactive::ChangeColorEffectData::CycleStyle value);
      // static field const value: static public VROSC.AudioReactive.ChangeColorEffectData/VROSC.AudioReactive.CycleStyle PingPoing
      static constexpr const int PingPoing = 2;
      // Get static field: static public VROSC.AudioReactive.ChangeColorEffectData/VROSC.AudioReactive.CycleStyle PingPoing
      static ::VROSC::AudioReactive::ChangeColorEffectData::CycleStyle _get_PingPoing();
      // Set static field: static public VROSC.AudioReactive.ChangeColorEffectData/VROSC.AudioReactive.CycleStyle PingPoing
      static void _set_PingPoing(::VROSC::AudioReactive::ChangeColorEffectData::CycleStyle value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.AudioReactive.ChangeColorEffectData/VROSC.AudioReactive.CycleStyle
    #pragma pack(pop)
    static check_size<sizeof(ChangeColorEffectData::CycleStyle), 16 + sizeof(int)> __VROSC_AudioReactive_ChangeColorEffectData_CycleStyleSizeCheck;
    static_assert(sizeof(ChangeColorEffectData::CycleStyle) == 0x14);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [ColorUsageAttribute] Offset: 0x675E94
    // private UnityEngine.Color[] _colors
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Color> colors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x20
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: duration and: curve
    char __padding1[0x4] = {};
    // private UnityEngine.AnimationCurve _curve
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AnimationCurve* curve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private VROSC.AudioReactive.ChangeColorEffectData/VROSC.AudioReactive.CycleStyle _style
    // Size: 0x14
    // Offset: 0x30
    ::VROSC::AudioReactive::ChangeColorEffectData::CycleStyle style;
    // Field size check
    static_assert(sizeof(::VROSC::AudioReactive::ChangeColorEffectData::CycleStyle) == 0x14);
    // private System.Boolean _startBlack
    // Size: 0x1
    // Offset: 0x34
    bool startBlack;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Color[] _colors
    ::ArrayW<::UnityEngine::Color>& dyn__colors();
    // Get instance field reference: private System.Single _duration
    float& dyn__duration();
    // Get instance field reference: private UnityEngine.AnimationCurve _curve
    ::UnityEngine::AnimationCurve*& dyn__curve();
    // Get instance field reference: private VROSC.AudioReactive.ChangeColorEffectData/VROSC.AudioReactive.CycleStyle _style
    ::VROSC::AudioReactive::ChangeColorEffectData::CycleStyle& dyn__style();
    // Get instance field reference: private System.Boolean _startBlack
    bool& dyn__startBlack();
    // public UnityEngine.Color[] get_Colors()
    // Offset: 0x132FFA8
    ::ArrayW<::UnityEngine::Color> get_Colors();
    // public System.Single get_Duration()
    // Offset: 0x132FFB0
    float get_Duration();
    // public UnityEngine.AnimationCurve get_Curve()
    // Offset: 0x132FFB8
    ::UnityEngine::AnimationCurve* get_Curve();
    // public VROSC.AudioReactive.ChangeColorEffectData/VROSC.AudioReactive.CycleStyle get_Style()
    // Offset: 0x132FFC0
    ::VROSC::AudioReactive::ChangeColorEffectData::CycleStyle get_Style();
    // public System.Boolean get_StartBlack()
    // Offset: 0x132FFC8
    bool get_StartBlack();
    // public System.Void .ctor()
    // Offset: 0x132FFD0
    // Implemented from: VROSC.AudioReactive.AudioReactiveEffectData
    // Base method: System.Void AudioReactiveEffectData::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChangeColorEffectData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::ChangeColorEffectData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChangeColorEffectData*, creationType>()));
    }
  }; // VROSC.AudioReactive.ChangeColorEffectData
  #pragma pack(pop)
  static check_size<sizeof(ChangeColorEffectData), 52 + sizeof(bool)> __VROSC_AudioReactive_ChangeColorEffectDataSizeCheck;
  static_assert(sizeof(ChangeColorEffectData) == 0x35);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ChangeColorEffectData::CycleStyle, "VROSC.AudioReactive", "ChangeColorEffectData/CycleStyle");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::ChangeColorEffectData::get_Colors
// Il2CppName: get_Colors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color> (VROSC::AudioReactive::ChangeColorEffectData::*)()>(&VROSC::AudioReactive::ChangeColorEffectData::get_Colors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ChangeColorEffectData*), "get_Colors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ChangeColorEffectData::get_Duration
// Il2CppName: get_Duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::AudioReactive::ChangeColorEffectData::*)()>(&VROSC::AudioReactive::ChangeColorEffectData::get_Duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ChangeColorEffectData*), "get_Duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ChangeColorEffectData::get_Curve
// Il2CppName: get_Curve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (VROSC::AudioReactive::ChangeColorEffectData::*)()>(&VROSC::AudioReactive::ChangeColorEffectData::get_Curve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ChangeColorEffectData*), "get_Curve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ChangeColorEffectData::get_Style
// Il2CppName: get_Style
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::ChangeColorEffectData::CycleStyle (VROSC::AudioReactive::ChangeColorEffectData::*)()>(&VROSC::AudioReactive::ChangeColorEffectData::get_Style)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ChangeColorEffectData*), "get_Style", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ChangeColorEffectData::get_StartBlack
// Il2CppName: get_StartBlack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AudioReactive::ChangeColorEffectData::*)()>(&VROSC::AudioReactive::ChangeColorEffectData::get_StartBlack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ChangeColorEffectData*), "get_StartBlack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ChangeColorEffectData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!