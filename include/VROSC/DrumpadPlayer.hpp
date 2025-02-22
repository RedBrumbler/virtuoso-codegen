// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: IntNode
  class IntNode;
  // Forward declaring type: NotePlayer
  class NotePlayer;
  // Forward declaring type: ValueSourceSelector
  class ValueSourceSelector;
  // Forward declaring type: PredictiveHittable
  class PredictiveHittable;
  // Forward declaring type: DrumPadEffectOnSignal
  class DrumPadEffectOnSignal;
  // Forward declaring type: InstrumentController
  class InstrumentController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: DrumpadPlayer
  class DrumpadPlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::DrumpadPlayer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrumpadPlayer*, "VROSC", "DrumpadPlayer");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.DrumpadPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class DrumpadPlayer : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.IntNode _noteNode
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::IntNode* noteNode;
    // Field size check
    static_assert(sizeof(::VROSC::IntNode*) == 0x8);
    // private VROSC.NotePlayer _notePlayer
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::NotePlayer* notePlayer;
    // Field size check
    static_assert(sizeof(::VROSC::NotePlayer*) == 0x8);
    // private VROSC.ValueSourceSelector _valueSourceSelector
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::ValueSourceSelector* valueSourceSelector;
    // Field size check
    static_assert(sizeof(::VROSC::ValueSourceSelector*) == 0x8);
    // private VROSC.PredictiveHittable _hittable
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::PredictiveHittable* hittable;
    // Field size check
    static_assert(sizeof(::VROSC::PredictiveHittable*) == 0x8);
    // private VROSC.DrumPadEffectOnSignal _drumpad
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::DrumPadEffectOnSignal* drumpad;
    // Field size check
    static_assert(sizeof(::VROSC::DrumPadEffectOnSignal*) == 0x8);
    // private UnityEngine.AudioSource _previewAudioSource
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AudioSource* previewAudioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private VROSC.InstrumentController _instrumentController
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::InstrumentController* instrumentController;
    // Field size check
    static_assert(sizeof(::VROSC::InstrumentController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.IntNode _noteNode
    ::VROSC::IntNode*& dyn__noteNode();
    // Get instance field reference: private VROSC.NotePlayer _notePlayer
    ::VROSC::NotePlayer*& dyn__notePlayer();
    // Get instance field reference: private VROSC.ValueSourceSelector _valueSourceSelector
    ::VROSC::ValueSourceSelector*& dyn__valueSourceSelector();
    // Get instance field reference: private VROSC.PredictiveHittable _hittable
    ::VROSC::PredictiveHittable*& dyn__hittable();
    // Get instance field reference: private VROSC.DrumPadEffectOnSignal _drumpad
    ::VROSC::DrumPadEffectOnSignal*& dyn__drumpad();
    // Get instance field reference: private UnityEngine.AudioSource _previewAudioSource
    ::UnityEngine::AudioSource*& dyn__previewAudioSource();
    // Get instance field reference: private VROSC.InstrumentController _instrumentController
    ::VROSC::InstrumentController*& dyn__instrumentController();
    // public System.Void Setup(System.Int32 sampleId, UnityEngine.Color groupColor, VROSC.InstrumentController instrumentController)
    // Offset: 0x130DF20
    void Setup(int sampleId, ::UnityEngine::Color groupColor, ::VROSC::InstrumentController* instrumentController);
    // public System.Void SetSampleIdOrNoteNumber(System.Int32 sampleIdOrNoteNumber, System.Boolean preview)
    // Offset: 0x130E57C
    void SetSampleIdOrNoteNumber(int sampleIdOrNoteNumber, bool preview);
    // public System.Void SetVelocityDependant(System.Boolean shouldBeVelocityDependant)
    // Offset: 0x130DAF0
    void SetVelocityDependant(bool shouldBeVelocityDependant);
    // public System.Void SetPitch(System.Int32 pitch, System.Boolean preview)
    // Offset: 0x130DB6C
    void SetPitch(int pitch, bool preview);
    // private System.Void PlayPreview(System.Int32 id)
    // Offset: 0x130EF58
    void PlayPreview(int id);
    // private System.Void Colorize(UnityEngine.Color color)
    // Offset: 0x130EED8
    void Colorize(::UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x130F038
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DrumpadPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::DrumpadPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DrumpadPlayer*, creationType>()));
    }
  }; // VROSC.DrumpadPlayer
  #pragma pack(pop)
  static check_size<sizeof(DrumpadPlayer), 72 + sizeof(::VROSC::InstrumentController*)> __VROSC_DrumpadPlayerSizeCheck;
  static_assert(sizeof(DrumpadPlayer) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::DrumpadPlayer::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::DrumpadPlayer::*)(int, ::UnityEngine::Color, ::VROSC::InstrumentController*)>(&VROSC::DrumpadPlayer::Setup)> {
  static const MethodInfo* get() {
    static auto* sampleId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* groupColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* instrumentController = &::il2cpp_utils::GetClassFromName("VROSC", "InstrumentController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::DrumpadPlayer*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sampleId, groupColor, instrumentController});
  }
};
// Writing MetadataGetter for method: VROSC::DrumpadPlayer::SetSampleIdOrNoteNumber
// Il2CppName: SetSampleIdOrNoteNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::DrumpadPlayer::*)(int, bool)>(&VROSC::DrumpadPlayer::SetSampleIdOrNoteNumber)> {
  static const MethodInfo* get() {
    static auto* sampleIdOrNoteNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* preview = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::DrumpadPlayer*), "SetSampleIdOrNoteNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sampleIdOrNoteNumber, preview});
  }
};
// Writing MetadataGetter for method: VROSC::DrumpadPlayer::SetVelocityDependant
// Il2CppName: SetVelocityDependant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::DrumpadPlayer::*)(bool)>(&VROSC::DrumpadPlayer::SetVelocityDependant)> {
  static const MethodInfo* get() {
    static auto* shouldBeVelocityDependant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::DrumpadPlayer*), "SetVelocityDependant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shouldBeVelocityDependant});
  }
};
// Writing MetadataGetter for method: VROSC::DrumpadPlayer::SetPitch
// Il2CppName: SetPitch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::DrumpadPlayer::*)(int, bool)>(&VROSC::DrumpadPlayer::SetPitch)> {
  static const MethodInfo* get() {
    static auto* pitch = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* preview = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::DrumpadPlayer*), "SetPitch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pitch, preview});
  }
};
// Writing MetadataGetter for method: VROSC::DrumpadPlayer::PlayPreview
// Il2CppName: PlayPreview
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::DrumpadPlayer::*)(int)>(&VROSC::DrumpadPlayer::PlayPreview)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::DrumpadPlayer*), "PlayPreview", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: VROSC::DrumpadPlayer::Colorize
// Il2CppName: Colorize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::DrumpadPlayer::*)(::UnityEngine::Color)>(&VROSC::DrumpadPlayer::Colorize)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::DrumpadPlayer*), "Colorize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: VROSC::DrumpadPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
