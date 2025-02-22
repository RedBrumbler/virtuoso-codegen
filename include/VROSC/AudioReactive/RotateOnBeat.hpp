// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioReactive.AudioReactiveBehaviour
#include "VROSC/AudioReactive/AudioReactiveBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: RotateEffect
  class RotateEffect;
}
// Completed forward declares
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: RotateOnBeat
  class RotateOnBeat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::RotateOnBeat);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::RotateOnBeat*, "VROSC.AudioReactive", "RotateOnBeat");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.RotateOnBeat
  // [TokenAttribute] Offset: FFFFFFFF
  class RotateOnBeat : public ::VROSC::AudioReactive::AudioReactiveBehaviour {
    public:
    // Writing base type padding for base size: 0x24 to desired offset: 0x28
    char ___base_padding[0x4] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.AudioReactive.RotateEffect _rotationAnimation
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::AudioReactive::RotateEffect* rotationAnimation;
    // Field size check
    static_assert(sizeof(::VROSC::AudioReactive::RotateEffect*) == 0x8);
    public:
    // Get instance field reference: private VROSC.AudioReactive.RotateEffect _rotationAnimation
    ::VROSC::AudioReactive::RotateEffect*& dyn__rotationAnimation();
    // public VROSC.AudioReactive.RotateEffect get_RotateAnimation()
    // Offset: 0xB00E14
    ::VROSC::AudioReactive::RotateEffect* get_RotateAnimation();
    // public System.Void .ctor()
    // Offset: 0xB00E90
    // Implemented from: VROSC.AudioReactive.AudioReactiveBehaviour
    // Base method: System.Void AudioReactiveBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RotateOnBeat* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::RotateOnBeat::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RotateOnBeat*, creationType>()));
    }
    // protected override System.Void Awake()
    // Offset: 0xB00E1C
    // Implemented from: VROSC.AudioReactive.AudioReactiveBehaviour
    // Base method: System.Void AudioReactiveBehaviour::Awake()
    void Awake();
    // protected override System.Void OnBeat(System.Int32 beat)
    // Offset: 0xB00E58
    // Implemented from: VROSC.AudioReactive.AudioReactiveBehaviour
    // Base method: System.Void AudioReactiveBehaviour::OnBeat(System.Int32 beat)
    void OnBeat(int beat);
  }; // VROSC.AudioReactive.RotateOnBeat
  #pragma pack(pop)
  static check_size<sizeof(RotateOnBeat), 40 + sizeof(::VROSC::AudioReactive::RotateEffect*)> __VROSC_AudioReactive_RotateOnBeatSizeCheck;
  static_assert(sizeof(RotateOnBeat) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::RotateOnBeat::get_RotateAnimation
// Il2CppName: get_RotateAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::RotateEffect* (VROSC::AudioReactive::RotateOnBeat::*)()>(&VROSC::AudioReactive::RotateOnBeat::get_RotateAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::RotateOnBeat*), "get_RotateAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::RotateOnBeat::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AudioReactive::RotateOnBeat::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::RotateOnBeat::*)()>(&VROSC::AudioReactive::RotateOnBeat::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::RotateOnBeat*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::RotateOnBeat::OnBeat
// Il2CppName: OnBeat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::RotateOnBeat::*)(int)>(&VROSC::AudioReactive::RotateOnBeat::OnBeat)> {
  static const MethodInfo* get() {
    static auto* beat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::RotateOnBeat*), "OnBeat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beat});
  }
};
