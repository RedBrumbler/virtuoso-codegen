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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: CameraMan
  class CameraMan;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::CameraMan);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::CameraMan*, "AudioHelm", "CameraMan");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.CameraMan
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 66BF98
  class CameraMan : public ::UnityEngine::MonoBehaviour {
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
    // public UnityEngine.Transform player
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* player;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // protected UnityEngine.Vector3 diff_
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 diff;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Transform player
    ::UnityEngine::Transform*& dyn_player();
    // Get instance field reference: protected UnityEngine.Vector3 diff_
    ::UnityEngine::Vector3& dyn_diff_();
    // private System.Void Start()
    // Offset: 0x132FECC
    void Start();
    // private System.Void Update()
    // Offset: 0x132FF40
    void Update();
    // public System.Void .ctor()
    // Offset: 0x132FFA0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CameraMan* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::CameraMan::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CameraMan*, creationType>()));
    }
  }; // AudioHelm.CameraMan
  #pragma pack(pop)
  static check_size<sizeof(CameraMan), 32 + sizeof(::UnityEngine::Vector3)> __AudioHelm_CameraManSizeCheck;
  static_assert(sizeof(CameraMan) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::CameraMan::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::CameraMan::*)()>(&AudioHelm::CameraMan::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::CameraMan*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::CameraMan::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::CameraMan::*)()>(&AudioHelm::CameraMan::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::CameraMan*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::CameraMan::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
