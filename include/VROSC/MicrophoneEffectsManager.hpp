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
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: MicrophoneEffectsManager
  class MicrophoneEffectsManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::MicrophoneEffectsManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MicrophoneEffectsManager*, "VROSC", "MicrophoneEffectsManager");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.MicrophoneEffectsManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MicrophoneEffectsManager : public ::UnityEngine::MonoBehaviour {
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
    // private System.Boolean _active
    // Size: 0x1
    // Offset: 0x18
    bool active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: active and: reverbVolumeAdjustment
    char __padding0[0x3] = {};
    // private System.Single _reverbVolumeAdjustment
    // Size: 0x4
    // Offset: 0x1C
    float reverbVolumeAdjustment;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _preampReverb
    // Size: 0x4
    // Offset: 0x20
    float preampReverb;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _proximityReverbMultiplier
    // Size: 0x4
    // Offset: 0x24
    float proximityReverbMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _useProximity
    // Size: 0x1
    // Offset: 0x28
    bool useProximity;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean _active
    bool& dyn__active();
    // Get instance field reference: private System.Single _reverbVolumeAdjustment
    float& dyn__reverbVolumeAdjustment();
    // Get instance field reference: private System.Single _preampReverb
    float& dyn__preampReverb();
    // Get instance field reference: private System.Single _proximityReverbMultiplier
    float& dyn__proximityReverbMultiplier();
    // Get instance field reference: private System.Boolean _useProximity
    bool& dyn__useProximity();
    // public System.Void Activate()
    // Offset: 0x8B32AC
    void Activate();
    // public System.Void Deactivate()
    // Offset: 0x8B3334
    void Deactivate();
    // public System.Void SetProximity(System.Single proximity)
    // Offset: 0x8B2EB4
    void SetProximity(float proximity);
    // public System.Void SetPreampReverb(System.Single preampReverb)
    // Offset: 0x8B38B8
    void SetPreampReverb(float preampReverb);
    // System.Void SetUseProximity(System.Boolean state)
    // Offset: 0x8B38C0
    void SetUseProximity(bool state);
    // public System.Void .ctor()
    // Offset: 0x8B38CC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MicrophoneEffectsManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::MicrophoneEffectsManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MicrophoneEffectsManager*, creationType>()));
    }
  }; // VROSC.MicrophoneEffectsManager
  #pragma pack(pop)
  static check_size<sizeof(MicrophoneEffectsManager), 40 + sizeof(bool)> __VROSC_MicrophoneEffectsManagerSizeCheck;
  static_assert(sizeof(MicrophoneEffectsManager) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::MicrophoneEffectsManager::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MicrophoneEffectsManager::*)()>(&VROSC::MicrophoneEffectsManager::Activate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneEffectsManager*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneEffectsManager::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MicrophoneEffectsManager::*)()>(&VROSC::MicrophoneEffectsManager::Deactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneEffectsManager*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneEffectsManager::SetProximity
// Il2CppName: SetProximity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MicrophoneEffectsManager::*)(float)>(&VROSC::MicrophoneEffectsManager::SetProximity)> {
  static const MethodInfo* get() {
    static auto* proximity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneEffectsManager*), "SetProximity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proximity});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneEffectsManager::SetPreampReverb
// Il2CppName: SetPreampReverb
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MicrophoneEffectsManager::*)(float)>(&VROSC::MicrophoneEffectsManager::SetPreampReverb)> {
  static const MethodInfo* get() {
    static auto* preampReverb = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneEffectsManager*), "SetPreampReverb", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{preampReverb});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneEffectsManager::SetUseProximity
// Il2CppName: SetUseProximity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MicrophoneEffectsManager::*)(bool)>(&VROSC::MicrophoneEffectsManager::SetUseProximity)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MicrophoneEffectsManager*), "SetUseProximity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: VROSC::MicrophoneEffectsManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!