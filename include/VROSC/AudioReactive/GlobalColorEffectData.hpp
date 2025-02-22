// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioReactive.AudioReactiveEffectData
#include "VROSC/AudioReactive/AudioReactiveEffectData.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: VROSC::AudioReactive
namespace VROSC::AudioReactive {
  // Skipping declaration: OnBeatBehaviour because it is already included!
}
// Completed forward declares
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: GlobalColorEffectData
  class GlobalColorEffectData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::GlobalColorEffectData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::GlobalColorEffectData*, "VROSC.AudioReactive", "GlobalColorEffectData");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.GlobalColorEffectData
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 66AE98
  class GlobalColorEffectData : public ::VROSC::AudioReactive::AudioReactiveEffectData {
    public:
    // Nested type: ::VROSC::AudioReactive::GlobalColorEffectData::OnBeatBehaviour
    struct OnBeatBehaviour;
    // Nested type: ::VROSC::AudioReactive::GlobalColorEffectData::ColorGroup
    class ColorGroup;
    // Nested type: ::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup
    class HueChangeGroup;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.OnBeatBehaviour
    // [TokenAttribute] Offset: FFFFFFFF
    struct OnBeatBehaviour/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: OnBeatBehaviour
      constexpr OnBeatBehaviour(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.OnBeatBehaviour None
      static constexpr const int None = 0;
      // Get static field: static public VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.OnBeatBehaviour None
      static ::VROSC::AudioReactive::GlobalColorEffectData::OnBeatBehaviour _get_None();
      // Set static field: static public VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.OnBeatBehaviour None
      static void _set_None(::VROSC::AudioReactive::GlobalColorEffectData::OnBeatBehaviour value);
      // static field const value: static public VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.OnBeatBehaviour Random
      static constexpr const int Random = 1;
      // Get static field: static public VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.OnBeatBehaviour Random
      static ::VROSC::AudioReactive::GlobalColorEffectData::OnBeatBehaviour _get_Random();
      // Set static field: static public VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.OnBeatBehaviour Random
      static void _set_Random(::VROSC::AudioReactive::GlobalColorEffectData::OnBeatBehaviour value);
      // static field const value: static public VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.OnBeatBehaviour Cycle
      static constexpr const int Cycle = 2;
      // Get static field: static public VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.OnBeatBehaviour Cycle
      static ::VROSC::AudioReactive::GlobalColorEffectData::OnBeatBehaviour _get_Cycle();
      // Set static field: static public VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.OnBeatBehaviour Cycle
      static void _set_Cycle(::VROSC::AudioReactive::GlobalColorEffectData::OnBeatBehaviour value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.OnBeatBehaviour
    #pragma pack(pop)
    static check_size<sizeof(GlobalColorEffectData::OnBeatBehaviour), 0 + sizeof(int)> __VROSC_AudioReactive_GlobalColorEffectData_OnBeatBehaviourSizeCheck;
    static_assert(sizeof(GlobalColorEffectData::OnBeatBehaviour) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [HeaderAttribute] Offset: 0x6766C8
    // private VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.ColorGroup[] _startColors
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::VROSC::AudioReactive::GlobalColorEffectData::ColorGroup*> startColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::AudioReactive::GlobalColorEffectData::ColorGroup*>) == 0x8);
    // [HeaderAttribute] Offset: 0x676714
    // private VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.HueChangeGroup _channel1
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup* channel1;
    // Field size check
    static_assert(sizeof(::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup*) == 0x8);
    // private VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.HueChangeGroup _channel2
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup* channel2;
    // Field size check
    static_assert(sizeof(::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup*) == 0x8);
    // private VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.HueChangeGroup _channel3
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup* channel3;
    // Field size check
    static_assert(sizeof(::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup*) == 0x8);
    // private VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.HueChangeGroup _channel4
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup* channel4;
    // Field size check
    static_assert(sizeof(::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup*) == 0x8);
    // [HeaderAttribute] Offset: 0x676790
    // private VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.OnBeatBehaviour _behaviour
    // Size: 0x4
    // Offset: 0x40
    ::VROSC::AudioReactive::GlobalColorEffectData::OnBeatBehaviour behaviour;
    // Field size check
    static_assert(sizeof(::VROSC::AudioReactive::GlobalColorEffectData::OnBeatBehaviour) == 0x4);
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x44
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve _hueChange
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::AnimationCurve* hueChange;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _saturationChange
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::AnimationCurve* saturationChange;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _valueChange
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::AnimationCurve* valueChange;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.ColorGroup[] _startColors
    ::ArrayW<::VROSC::AudioReactive::GlobalColorEffectData::ColorGroup*>& dyn__startColors();
    // Get instance field reference: private VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.HueChangeGroup _channel1
    ::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup*& dyn__channel1();
    // Get instance field reference: private VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.HueChangeGroup _channel2
    ::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup*& dyn__channel2();
    // Get instance field reference: private VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.HueChangeGroup _channel3
    ::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup*& dyn__channel3();
    // Get instance field reference: private VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.HueChangeGroup _channel4
    ::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup*& dyn__channel4();
    // Get instance field reference: private VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.OnBeatBehaviour _behaviour
    ::VROSC::AudioReactive::GlobalColorEffectData::OnBeatBehaviour& dyn__behaviour();
    // Get instance field reference: private System.Single _duration
    float& dyn__duration();
    // Get instance field reference: private UnityEngine.AnimationCurve _hueChange
    ::UnityEngine::AnimationCurve*& dyn__hueChange();
    // Get instance field reference: private UnityEngine.AnimationCurve _saturationChange
    ::UnityEngine::AnimationCurve*& dyn__saturationChange();
    // Get instance field reference: private UnityEngine.AnimationCurve _valueChange
    ::UnityEngine::AnimationCurve*& dyn__valueChange();
    // public VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.HueChangeGroup get_Channel1()
    // Offset: 0x89195C
    ::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup* get_Channel1();
    // public VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.HueChangeGroup get_Channel2()
    // Offset: 0x891964
    ::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup* get_Channel2();
    // public VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.HueChangeGroup get_Channel3()
    // Offset: 0x89196C
    ::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup* get_Channel3();
    // public VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.HueChangeGroup get_Channel4()
    // Offset: 0x891974
    ::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup* get_Channel4();
    // public VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.ColorGroup[] get_StartColors()
    // Offset: 0x89197C
    ::ArrayW<::VROSC::AudioReactive::GlobalColorEffectData::ColorGroup*> get_StartColors();
    // public VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.OnBeatBehaviour get_BeatBehaviour()
    // Offset: 0x891984
    ::VROSC::AudioReactive::GlobalColorEffectData::OnBeatBehaviour get_BeatBehaviour();
    // public System.Single get_Duration()
    // Offset: 0x89198C
    float get_Duration();
    // public UnityEngine.AnimationCurve get_HueCurve()
    // Offset: 0x891994
    ::UnityEngine::AnimationCurve* get_HueCurve();
    // public UnityEngine.AnimationCurve get_SaturationCurve()
    // Offset: 0x89199C
    ::UnityEngine::AnimationCurve* get_SaturationCurve();
    // public UnityEngine.AnimationCurve get_ValueCurve()
    // Offset: 0x8919A4
    ::UnityEngine::AnimationCurve* get_ValueCurve();
    // public VROSC.AudioReactive.GlobalColorEffectData/VROSC.AudioReactive.HueChangeGroup GetGroupByChannel(System.Int32 channel)
    // Offset: 0x8919AC
    ::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup* GetGroupByChannel(int channel);
    // public System.Void .ctor()
    // Offset: 0x8919E8
    // Implemented from: VROSC.AudioReactive.AudioReactiveEffectData
    // Base method: System.Void AudioReactiveEffectData::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GlobalColorEffectData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::GlobalColorEffectData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GlobalColorEffectData*, creationType>()));
    }
  }; // VROSC.AudioReactive.GlobalColorEffectData
  #pragma pack(pop)
  static check_size<sizeof(GlobalColorEffectData), 88 + sizeof(::UnityEngine::AnimationCurve*)> __VROSC_AudioReactive_GlobalColorEffectDataSizeCheck;
  static_assert(sizeof(GlobalColorEffectData) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::GlobalColorEffectData::OnBeatBehaviour, "VROSC.AudioReactive", "GlobalColorEffectData/OnBeatBehaviour");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::get_Channel1
// Il2CppName: get_Channel1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup* (VROSC::AudioReactive::GlobalColorEffectData::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::get_Channel1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData*), "get_Channel1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::get_Channel2
// Il2CppName: get_Channel2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup* (VROSC::AudioReactive::GlobalColorEffectData::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::get_Channel2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData*), "get_Channel2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::get_Channel3
// Il2CppName: get_Channel3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup* (VROSC::AudioReactive::GlobalColorEffectData::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::get_Channel3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData*), "get_Channel3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::get_Channel4
// Il2CppName: get_Channel4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup* (VROSC::AudioReactive::GlobalColorEffectData::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::get_Channel4)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData*), "get_Channel4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::get_StartColors
// Il2CppName: get_StartColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::VROSC::AudioReactive::GlobalColorEffectData::ColorGroup*> (VROSC::AudioReactive::GlobalColorEffectData::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::get_StartColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData*), "get_StartColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::get_BeatBehaviour
// Il2CppName: get_BeatBehaviour
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::GlobalColorEffectData::OnBeatBehaviour (VROSC::AudioReactive::GlobalColorEffectData::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::get_BeatBehaviour)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData*), "get_BeatBehaviour", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::get_Duration
// Il2CppName: get_Duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::AudioReactive::GlobalColorEffectData::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::get_Duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData*), "get_Duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::get_HueCurve
// Il2CppName: get_HueCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (VROSC::AudioReactive::GlobalColorEffectData::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::get_HueCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData*), "get_HueCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::get_SaturationCurve
// Il2CppName: get_SaturationCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (VROSC::AudioReactive::GlobalColorEffectData::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::get_SaturationCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData*), "get_SaturationCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::get_ValueCurve
// Il2CppName: get_ValueCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (VROSC::AudioReactive::GlobalColorEffectData::*)()>(&VROSC::AudioReactive::GlobalColorEffectData::get_ValueCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData*), "get_ValueCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::GetGroupByChannel
// Il2CppName: GetGroupByChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::GlobalColorEffectData::HueChangeGroup* (VROSC::AudioReactive::GlobalColorEffectData::*)(int)>(&VROSC::AudioReactive::GlobalColorEffectData::GetGroupByChannel)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::GlobalColorEffectData*), "GetGroupByChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::GlobalColorEffectData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
