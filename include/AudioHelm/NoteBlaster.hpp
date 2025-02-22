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
// Forward declaring namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: HelmController
  class HelmController;
}
// Completed forward declares
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: NoteBlaster
  class NoteBlaster;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::NoteBlaster);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::NoteBlaster*, "AudioHelm", "NoteBlaster");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.NoteBlaster
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 66C1B0
  class NoteBlaster : public ::UnityEngine::MonoBehaviour {
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
    // public AudioHelm.HelmController player
    // Size: 0x8
    // Offset: 0x18
    ::AudioHelm::HelmController* player;
    // Field size check
    static_assert(sizeof(::AudioHelm::HelmController*) == 0x8);
    // public System.Int32 min
    // Size: 0x4
    // Offset: 0x20
    int min;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 max
    // Size: 0x4
    // Offset: 0x24
    int max;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public AudioHelm.HelmController player
    ::AudioHelm::HelmController*& dyn_player();
    // Get instance field reference: public System.Int32 min
    int& dyn_min();
    // Get instance field reference: public System.Int32 max
    int& dyn_max();
    // private System.Void Update()
    // Offset: 0xA10430
    void Update();
    // public System.Void .ctor()
    // Offset: 0xA104A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteBlaster* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::NoteBlaster::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteBlaster*, creationType>()));
    }
  }; // AudioHelm.NoteBlaster
  #pragma pack(pop)
  static check_size<sizeof(NoteBlaster), 36 + sizeof(int)> __AudioHelm_NoteBlasterSizeCheck;
  static_assert(sizeof(NoteBlaster) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::NoteBlaster::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::NoteBlaster::*)()>(&AudioHelm::NoteBlaster::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::NoteBlaster*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::NoteBlaster::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
