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
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: RenderLIV
  class RenderLIV;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::RenderLIV);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::RenderLIV*, "VROSC", "RenderLIV");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.RenderLIV
  // [TokenAttribute] Offset: FFFFFFFF
  class RenderLIV : public ::UnityEngine::MonoBehaviour {
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
    // private System.Boolean _livActive
    // Size: 0x1
    // Offset: 0x18
    bool livActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: livActive and: camera
    char __padding0[0x7] = {};
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean _livActive
    bool& dyn__livActive();
    // Get instance field reference: private UnityEngine.Camera _camera
    ::UnityEngine::Camera*& dyn__camera();
    // public System.Void Setup()
    // Offset: 0x99979C
    void Setup();
    // public System.Void Activate()
    // Offset: 0x9997F0
    void Activate();
    // public System.Void Deactivate()
    // Offset: 0x99982C
    void Deactivate();
    // protected System.Void OnRenderImage(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    // Offset: 0x999890
    void OnRenderImage(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);
    // public System.Void .ctor()
    // Offset: 0x999950
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderLIV* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::RenderLIV::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderLIV*, creationType>()));
    }
  }; // VROSC.RenderLIV
  #pragma pack(pop)
  static check_size<sizeof(RenderLIV), 32 + sizeof(::UnityEngine::Camera*)> __VROSC_RenderLIVSizeCheck;
  static_assert(sizeof(RenderLIV) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::RenderLIV::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::RenderLIV::*)()>(&VROSC::RenderLIV::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::RenderLIV*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::RenderLIV::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::RenderLIV::*)()>(&VROSC::RenderLIV::Activate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::RenderLIV*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::RenderLIV::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::RenderLIV::*)()>(&VROSC::RenderLIV::Deactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::RenderLIV*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::RenderLIV::OnRenderImage
// Il2CppName: OnRenderImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::RenderLIV::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&VROSC::RenderLIV::OnRenderImage)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::RenderLIV*), "OnRenderImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest});
  }
};
// Writing MetadataGetter for method: VROSC::RenderLIV::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
