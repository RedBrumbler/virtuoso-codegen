// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR
namespace OVR {
  // Forward declaring type: SoundFXRef
  class SoundFXRef;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: OVR
namespace OVR {
  // Forward declaring type: AmbienceEmitter
  class AmbienceEmitter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::AmbienceEmitter);
DEFINE_IL2CPP_ARG_TYPE(::OVR::AmbienceEmitter*, "OVR", "AmbienceEmitter");
// Type namespace: OVR
namespace OVR {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: OVR.AmbienceEmitter
  // [TokenAttribute] Offset: FFFFFFFF
  class AmbienceEmitter : public ::UnityEngine::MonoBehaviour {
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
    // public OVR.SoundFXRef[] ambientSounds
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::OVR::SoundFXRef*> ambientSounds;
    // Field size check
    static_assert(sizeof(::ArrayW<::OVR::SoundFXRef*>) == 0x8);
    // public System.Boolean autoActivate
    // Size: 0x1
    // Offset: 0x20
    bool autoActivate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0x5D54A8
    // public System.Boolean autoRetrigger
    // Size: 0x1
    // Offset: 0x21
    bool autoRetrigger;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: autoRetrigger and: randomRetriggerDelaySecs
    char __padding2[0x2] = {};
    // [MinMaxAttribute] Offset: 0x5D54E0
    // public UnityEngine.Vector2 randomRetriggerDelaySecs
    // Size: 0x8
    // Offset: 0x24
    ::UnityEngine::Vector2 randomRetriggerDelaySecs;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // Padding between fields: randomRetriggerDelaySecs and: playPositions
    char __padding3[0x4] = {};
    // [TooltipAttribute] Offset: 0x5D5504
    // public UnityEngine.Transform[] playPositions
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Transform*> playPositions;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // private System.Boolean activated
    // Size: 0x1
    // Offset: 0x38
    bool activated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: activated and: playingIdx
    char __padding5[0x3] = {};
    // private System.Int32 playingIdx
    // Size: 0x4
    // Offset: 0x3C
    int playingIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single nextPlayTime
    // Size: 0x4
    // Offset: 0x40
    float nextPlayTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single fadeTime
    // Size: 0x4
    // Offset: 0x44
    float fadeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 lastPosIdx
    // Size: 0x4
    // Offset: 0x48
    int lastPosIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public OVR.SoundFXRef[] ambientSounds
    ::ArrayW<::OVR::SoundFXRef*>& dyn_ambientSounds();
    // Get instance field reference: public System.Boolean autoActivate
    bool& dyn_autoActivate();
    // Get instance field reference: public System.Boolean autoRetrigger
    bool& dyn_autoRetrigger();
    // Get instance field reference: public UnityEngine.Vector2 randomRetriggerDelaySecs
    ::UnityEngine::Vector2& dyn_randomRetriggerDelaySecs();
    // Get instance field reference: public UnityEngine.Transform[] playPositions
    ::ArrayW<::UnityEngine::Transform*>& dyn_playPositions();
    // Get instance field reference: private System.Boolean activated
    bool& dyn_activated();
    // Get instance field reference: private System.Int32 playingIdx
    int& dyn_playingIdx();
    // Get instance field reference: private System.Single nextPlayTime
    float& dyn_nextPlayTime();
    // Get instance field reference: private System.Single fadeTime
    float& dyn_fadeTime();
    // Get instance field reference: private System.Int32 lastPosIdx
    int& dyn_lastPosIdx();
    // private System.Void Awake()
    // Offset: 0x129F78C
    void Awake();
    // private System.Void Update()
    // Offset: 0x129F930
    void Update();
    // public System.Void OnTriggerEnter(UnityEngine.Collider col)
    // Offset: 0x129FB08
    void OnTriggerEnter(::UnityEngine::Collider* col);
    // public System.Void Play()
    // Offset: 0x129F990
    void Play();
    // public System.Void EnableEmitter(System.Boolean enable)
    // Offset: 0x129FC44
    void EnableEmitter(bool enable);
    // public System.Void .ctor()
    // Offset: 0x129FDB0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmbienceEmitter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::AmbienceEmitter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmbienceEmitter*, creationType>()));
    }
  }; // OVR.AmbienceEmitter
  #pragma pack(pop)
  static check_size<sizeof(AmbienceEmitter), 72 + sizeof(int)> __OVR_AmbienceEmitterSizeCheck;
  static_assert(sizeof(AmbienceEmitter) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::AmbienceEmitter::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::AmbienceEmitter::*)()>(&OVR::AmbienceEmitter::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::AmbienceEmitter*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::AmbienceEmitter::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::AmbienceEmitter::*)()>(&OVR::AmbienceEmitter::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::AmbienceEmitter*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::AmbienceEmitter::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::AmbienceEmitter::*)(::UnityEngine::Collider*)>(&OVR::AmbienceEmitter::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* col = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::AmbienceEmitter*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{col});
  }
};
// Writing MetadataGetter for method: OVR::AmbienceEmitter::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::AmbienceEmitter::*)()>(&OVR::AmbienceEmitter::Play)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::AmbienceEmitter*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::AmbienceEmitter::EnableEmitter
// Il2CppName: EnableEmitter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::AmbienceEmitter::*)(bool)>(&OVR::AmbienceEmitter::EnableEmitter)> {
  static const MethodInfo* get() {
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::AmbienceEmitter*), "EnableEmitter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enable});
  }
};
// Writing MetadataGetter for method: OVR::AmbienceEmitter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
