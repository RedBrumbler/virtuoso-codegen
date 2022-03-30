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
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Renderer
  class Renderer;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: RawImage
  class RawImage;
}
// Completed forward declares
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: MaterialPulse
  class MaterialPulse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::MaterialPulse);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::MaterialPulse*, "AudioHelm", "MaterialPulse");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.MaterialPulse
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 66C178
  class MaterialPulse : public ::UnityEngine::MonoBehaviour {
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
    // public UnityEngine.Material defaultMaterial
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Material* defaultMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.Material pulseMaterial
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Material* pulseMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public System.Single decay
    // Size: 0x4
    // Offset: 0x28
    float decay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single progress
    // Size: 0x4
    // Offset: 0x2C
    float progress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Renderer render
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Renderer* render;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.UI.RawImage rawImage
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UI::RawImage* rawImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::RawImage*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Material defaultMaterial
    ::UnityEngine::Material*& dyn_defaultMaterial();
    // Get instance field reference: public UnityEngine.Material pulseMaterial
    ::UnityEngine::Material*& dyn_pulseMaterial();
    // Get instance field reference: public System.Single decay
    float& dyn_decay();
    // Get instance field reference: private System.Single progress
    float& dyn_progress();
    // Get instance field reference: private UnityEngine.Renderer render
    ::UnityEngine::Renderer*& dyn_render();
    // Get instance field reference: private UnityEngine.UI.RawImage rawImage
    ::UnityEngine::UI::RawImage*& dyn_rawImage();
    // public System.Void Pulse(System.Single amount)
    // Offset: 0x8ADAF0
    void Pulse(float amount);
    // private System.Void Update()
    // Offset: 0x8ADBA0
    void Update();
    // public System.Void .ctor()
    // Offset: 0x8ADD64
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPulse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::MaterialPulse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPulse*, creationType>()));
    }
  }; // AudioHelm.MaterialPulse
  #pragma pack(pop)
  static check_size<sizeof(MaterialPulse), 56 + sizeof(::UnityEngine::UI::RawImage*)> __AudioHelm_MaterialPulseSizeCheck;
  static_assert(sizeof(MaterialPulse) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::MaterialPulse::Pulse
// Il2CppName: Pulse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::MaterialPulse::*)(float)>(&AudioHelm::MaterialPulse::Pulse)> {
  static const MethodInfo* get() {
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::MaterialPulse*), "Pulse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{amount});
  }
};
// Writing MetadataGetter for method: AudioHelm::MaterialPulse::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::MaterialPulse::*)()>(&AudioHelm::MaterialPulse::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::MaterialPulse*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::MaterialPulse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!