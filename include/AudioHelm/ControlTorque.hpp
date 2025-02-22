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
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: ControlTorque
  class ControlTorque;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::ControlTorque);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::ControlTorque*, "AudioHelm", "ControlTorque");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.ControlTorque
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 66C008
  class ControlTorque : public ::UnityEngine::MonoBehaviour {
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
    // public System.Single torque
    // Size: 0x4
    // Offset: 0x18
    float torque;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxAngularVelocity
    // Size: 0x4
    // Offset: 0x1C
    float maxAngularVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 forward
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 forward;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 right
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 right;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single torque
    float& dyn_torque();
    // Get instance field reference: public System.Single maxAngularVelocity
    float& dyn_maxAngularVelocity();
    // Get instance field reference: public UnityEngine.Vector3 forward
    ::UnityEngine::Vector3& dyn_forward();
    // Get instance field reference: public UnityEngine.Vector3 right
    ::UnityEngine::Vector3& dyn_right();
    // private System.Void Start()
    // Offset: 0x1338260
    void Start();
    // private System.Void Update()
    // Offset: 0x13382C0
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1338510
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ControlTorque* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::ControlTorque::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ControlTorque*, creationType>()));
    }
  }; // AudioHelm.ControlTorque
  #pragma pack(pop)
  static check_size<sizeof(ControlTorque), 44 + sizeof(::UnityEngine::Vector3)> __AudioHelm_ControlTorqueSizeCheck;
  static_assert(sizeof(ControlTorque) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::ControlTorque::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::ControlTorque::*)()>(&AudioHelm::ControlTorque::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::ControlTorque*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::ControlTorque::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::ControlTorque::*)()>(&AudioHelm::ControlTorque::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::ControlTorque*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::ControlTorque::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
