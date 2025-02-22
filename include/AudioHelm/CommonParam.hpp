// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: CommonParam
  struct CommonParam;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::CommonParam, "AudioHelm", "CommonParam");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.CommonParam
  // [TokenAttribute] Offset: FFFFFFFF
  struct CommonParam/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CommonParam
    constexpr CommonParam(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public AudioHelm.CommonParam kNone
    static constexpr const int kNone = 0;
    // Get static field: static public AudioHelm.CommonParam kNone
    static ::AudioHelm::CommonParam _get_kNone();
    // Set static field: static public AudioHelm.CommonParam kNone
    static void _set_kNone(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kFilterCutoff
    static constexpr const int kFilterCutoff = 14;
    // Get static field: static public AudioHelm.CommonParam kFilterCutoff
    static ::AudioHelm::CommonParam _get_kFilterCutoff();
    // Set static field: static public AudioHelm.CommonParam kFilterCutoff
    static void _set_kFilterCutoff(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kResonance
    static constexpr const int kResonance = 85;
    // Get static field: static public AudioHelm.CommonParam kResonance
    static ::AudioHelm::CommonParam _get_kResonance();
    // Set static field: static public AudioHelm.CommonParam kResonance
    static void _set_kResonance(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kFilterAttack
    static constexpr const int kFilterAttack = 25;
    // Get static field: static public AudioHelm.CommonParam kFilterAttack
    static ::AudioHelm::CommonParam _get_kFilterAttack();
    // Set static field: static public AudioHelm.CommonParam kFilterAttack
    static void _set_kFilterAttack(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kFilterRelease
    static constexpr const int kFilterRelease = 28;
    // Get static field: static public AudioHelm.CommonParam kFilterRelease
    static ::AudioHelm::CommonParam _get_kFilterRelease();
    // Set static field: static public AudioHelm.CommonParam kFilterRelease
    static void _set_kFilterRelease(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kFilterEnvelopeDepth
    static constexpr const int kFilterEnvelopeDepth = 27;
    // Get static field: static public AudioHelm.CommonParam kFilterEnvelopeDepth
    static ::AudioHelm::CommonParam _get_kFilterEnvelopeDepth();
    // Set static field: static public AudioHelm.CommonParam kFilterEnvelopeDepth
    static void _set_kFilterEnvelopeDepth(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kFormantX
    static constexpr const int kFormantX = 38;
    // Get static field: static public AudioHelm.CommonParam kFormantX
    static ::AudioHelm::CommonParam _get_kFormantX();
    // Set static field: static public AudioHelm.CommonParam kFormantX
    static void _set_kFormantX(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kFormantY
    static constexpr const int kFormantY = 39;
    // Get static field: static public AudioHelm.CommonParam kFormantY
    static ::AudioHelm::CommonParam _get_kFormantY();
    // Set static field: static public AudioHelm.CommonParam kFormantY
    static void _set_kFormantY(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kAmplitudeAttack
    static constexpr const int kAmplitudeAttack = 1;
    // Get static field: static public AudioHelm.CommonParam kAmplitudeAttack
    static ::AudioHelm::CommonParam _get_kAmplitudeAttack();
    // Set static field: static public AudioHelm.CommonParam kAmplitudeAttack
    static void _set_kAmplitudeAttack(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kAmplitudeRelease
    static constexpr const int kAmplitudeRelease = 4;
    // Get static field: static public AudioHelm.CommonParam kAmplitudeRelease
    static ::AudioHelm::CommonParam _get_kAmplitudeRelease();
    // Set static field: static public AudioHelm.CommonParam kAmplitudeRelease
    static void _set_kAmplitudeRelease(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kCrossMod
    static constexpr const int kCrossMod = 13;
    // Get static field: static public AudioHelm.CommonParam kCrossMod
    static ::AudioHelm::CommonParam _get_kCrossMod();
    // Set static field: static public AudioHelm.CommonParam kCrossMod
    static void _set_kCrossMod(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kOsc1Tune
    static constexpr const int kOsc1Tune = 61;
    // Get static field: static public AudioHelm.CommonParam kOsc1Tune
    static ::AudioHelm::CommonParam _get_kOsc1Tune();
    // Set static field: static public AudioHelm.CommonParam kOsc1Tune
    static void _set_kOsc1Tune(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kOsc2Tune
    static constexpr const int kOsc2Tune = 67;
    // Get static field: static public AudioHelm.CommonParam kOsc2Tune
    static ::AudioHelm::CommonParam _get_kOsc2Tune();
    // Set static field: static public AudioHelm.CommonParam kOsc2Tune
    static void _set_kOsc2Tune(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kOsc1Transpose
    static constexpr const int kOsc1Transpose = 60;
    // Get static field: static public AudioHelm.CommonParam kOsc1Transpose
    static ::AudioHelm::CommonParam _get_kOsc1Transpose();
    // Set static field: static public AudioHelm.CommonParam kOsc1Transpose
    static void _set_kOsc1Transpose(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kOsc2Transpose
    static constexpr const int kOsc2Transpose = 66;
    // Get static field: static public AudioHelm.CommonParam kOsc2Transpose
    static ::AudioHelm::CommonParam _get_kOsc2Transpose();
    // Set static field: static public AudioHelm.CommonParam kOsc2Transpose
    static void _set_kOsc2Transpose(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kOsc1UnisonDetune
    static constexpr const int kOsc1UnisonDetune = 62;
    // Get static field: static public AudioHelm.CommonParam kOsc1UnisonDetune
    static ::AudioHelm::CommonParam _get_kOsc1UnisonDetune();
    // Set static field: static public AudioHelm.CommonParam kOsc1UnisonDetune
    static void _set_kOsc1UnisonDetune(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kOsc2UnisonDetune
    static constexpr const int kOsc2UnisonDetune = 68;
    // Get static field: static public AudioHelm.CommonParam kOsc2UnisonDetune
    static ::AudioHelm::CommonParam _get_kOsc2UnisonDetune();
    // Set static field: static public AudioHelm.CommonParam kOsc2UnisonDetune
    static void _set_kOsc2UnisonDetune(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kDelayFrequency
    static constexpr const int kDelayFrequency = 17;
    // Get static field: static public AudioHelm.CommonParam kDelayFrequency
    static ::AudioHelm::CommonParam _get_kDelayFrequency();
    // Set static field: static public AudioHelm.CommonParam kDelayFrequency
    static void _set_kDelayFrequency(::AudioHelm::CommonParam value);
    // static field const value: static public AudioHelm.CommonParam kDelayTempo
    static constexpr const int kDelayTempo = 20;
    // Get static field: static public AudioHelm.CommonParam kDelayTempo
    static ::AudioHelm::CommonParam _get_kDelayTempo();
    // Set static field: static public AudioHelm.CommonParam kDelayTempo
    static void _set_kDelayTempo(::AudioHelm::CommonParam value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // AudioHelm.CommonParam
  #pragma pack(pop)
  static check_size<sizeof(CommonParam), 0 + sizeof(int)> __AudioHelm_CommonParamSizeCheck;
  static_assert(sizeof(CommonParam) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
