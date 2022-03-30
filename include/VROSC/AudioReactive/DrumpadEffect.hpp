// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioReactive.CoroutineDrivenEffect
#include "VROSC/AudioReactive/CoroutineDrivenEffect.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: ChangeColorEffectData
  class ChangeColorEffectData;
  // Forward declaring type: AudioReactiveBehaviour
  class AudioReactiveBehaviour;
  // Forward declaring type: ReactToBeat
  class ReactToBeat;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: GlobalDrumPadEffect
  class GlobalDrumPadEffect;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: DrumpadEffect
  class DrumpadEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::DrumpadEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::DrumpadEffect*, "VROSC.AudioReactive", "DrumpadEffect");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.DrumpadEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class DrumpadEffect : public ::VROSC::AudioReactive::CoroutineDrivenEffect {
    public:
    // Nested type: ::VROSC::AudioReactive::DrumpadEffect::$SpecificFlow$d__8
    class $SpecificFlow$d__8;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.AudioReactive.ChangeColorEffectData _data
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::AudioReactive::ChangeColorEffectData* data;
    // Field size check
    static_assert(sizeof(::VROSC::AudioReactive::ChangeColorEffectData*) == 0x8);
    // private VROSC.GlobalDrumPadEffect[] _targets
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::VROSC::GlobalDrumPadEffect*> targets;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::GlobalDrumPadEffect*>) == 0x8);
    // private System.Int32 _currentInt
    // Size: 0x4
    // Offset: 0x40
    int currentInt;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _pingPongDirection
    // Size: 0x4
    // Offset: 0x44
    int pingPongDirection;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Color _currentColor
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Color currentColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: private VROSC.AudioReactive.ChangeColorEffectData _data
    ::VROSC::AudioReactive::ChangeColorEffectData*& dyn__data();
    // Get instance field reference: private VROSC.GlobalDrumPadEffect[] _targets
    ::ArrayW<::VROSC::GlobalDrumPadEffect*>& dyn__targets();
    // Get instance field reference: private System.Int32 _currentInt
    int& dyn__currentInt();
    // Get instance field reference: private System.Int32 _pingPongDirection
    int& dyn__pingPongDirection();
    // Get instance field reference: private UnityEngine.Color _currentColor
    ::UnityEngine::Color& dyn__currentColor();
    // public VROSC.AudioReactive.ChangeColorEffectData get_Data()
    // Offset: 0x130E87C
    ::VROSC::AudioReactive::ChangeColorEffectData* get_Data();
    // private UnityEngine.Color GetNewColor()
    // Offset: 0x130E8D0
    ::UnityEngine::Color GetNewColor();
    // private System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x130EB1C
    void SetColor(::UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x130ED2C
    // Implemented from: VROSC.AudioReactive.CoroutineDrivenEffect
    // Base method: System.Void CoroutineDrivenEffect::.ctor()
    // Base method: System.Void ReactiveEffect::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DrumpadEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::DrumpadEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DrumpadEffect*, creationType>()));
    }
    // public override System.Void Setup(VROSC.AudioReactive.AudioReactiveBehaviour behaviour)
    // Offset: 0x130E884
    // Implemented from: VROSC.AudioReactive.CoroutineDrivenEffect
    // Base method: System.Void CoroutineDrivenEffect::Setup(VROSC.AudioReactive.AudioReactiveBehaviour behaviour)
    void Setup(::VROSC::AudioReactive::AudioReactiveBehaviour* behaviour);
    // protected override System.Collections.IEnumerator SpecificFlow()
    // Offset: 0x130EBC4
    // Implemented from: VROSC.AudioReactive.CoroutineDrivenEffect
    // Base method: System.Collections.IEnumerator CoroutineDrivenEffect::SpecificFlow()
    ::System::Collections::IEnumerator* SpecificFlow();
    // public override System.Void DrawGizmos(VROSC.AudioReactive.ReactToBeat sender)
    // Offset: 0x130EC30
    // Implemented from: VROSC.AudioReactive.ReactiveEffect
    // Base method: System.Void ReactiveEffect::DrawGizmos(VROSC.AudioReactive.ReactToBeat sender)
    void DrawGizmos(::VROSC::AudioReactive::ReactToBeat* sender);
  }; // VROSC.AudioReactive.DrumpadEffect
  #pragma pack(pop)
  static check_size<sizeof(DrumpadEffect), 72 + sizeof(::UnityEngine::Color)> __VROSC_AudioReactive_DrumpadEffectSizeCheck;
  static_assert(sizeof(DrumpadEffect) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::DrumpadEffect::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::ChangeColorEffectData* (VROSC::AudioReactive::DrumpadEffect::*)()>(&VROSC::AudioReactive::DrumpadEffect::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::DrumpadEffect*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::DrumpadEffect::GetNewColor
// Il2CppName: GetNewColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::AudioReactive::DrumpadEffect::*)()>(&VROSC::AudioReactive::DrumpadEffect::GetNewColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::DrumpadEffect*), "GetNewColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::DrumpadEffect::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::DrumpadEffect::*)(::UnityEngine::Color)>(&VROSC::AudioReactive::DrumpadEffect::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::DrumpadEffect*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::DrumpadEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AudioReactive::DrumpadEffect::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::DrumpadEffect::*)(::VROSC::AudioReactive::AudioReactiveBehaviour*)>(&VROSC::AudioReactive::DrumpadEffect::Setup)> {
  static const MethodInfo* get() {
    static auto* behaviour = &::il2cpp_utils::GetClassFromName("VROSC.AudioReactive", "AudioReactiveBehaviour")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::DrumpadEffect*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{behaviour});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::DrumpadEffect::SpecificFlow
// Il2CppName: SpecificFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VROSC::AudioReactive::DrumpadEffect::*)()>(&VROSC::AudioReactive::DrumpadEffect::SpecificFlow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::DrumpadEffect*), "SpecificFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::DrumpadEffect::DrawGizmos
// Il2CppName: DrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::DrumpadEffect::*)(::VROSC::AudioReactive::ReactToBeat*)>(&VROSC::AudioReactive::DrumpadEffect::DrawGizmos)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("VROSC.AudioReactive", "ReactToBeat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::DrumpadEffect*), "DrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};