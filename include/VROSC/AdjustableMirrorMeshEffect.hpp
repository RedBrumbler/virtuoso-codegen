// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AdjustableMeshEffect
#include "VROSC/AdjustableMeshEffect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: AdjustableMirrorMeshEffect
  class AdjustableMirrorMeshEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AdjustableMirrorMeshEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMirrorMeshEffect*, "VROSC", "AdjustableMirrorMeshEffect");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AdjustableMirrorMeshEffect
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class AdjustableMirrorMeshEffect : public ::VROSC::AdjustableMeshEffect {
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
    // private System.Boolean _flipped
    // Size: 0x1
    // Offset: 0x20
    bool flipped;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Boolean _flipped
    bool& dyn__flipped();
    // private System.Void Flip(UnityEngine.Mesh mesh)
    // Offset: 0x136A704
    void Flip(::UnityEngine::Mesh* mesh);
    // private System.Void FlipNormals(UnityEngine.Mesh mesh)
    // Offset: 0x136A7AC
    void FlipNormals(::UnityEngine::Mesh* mesh);
    // public System.Void .ctor()
    // Offset: 0x136A8BC
    // Implemented from: VROSC.AdjustableMeshEffect
    // Base method: System.Void AdjustableMeshEffect::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdjustableMirrorMeshEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AdjustableMirrorMeshEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdjustableMirrorMeshEffect*, creationType>()));
    }
    // protected override System.Void OnMeshVisible()
    // Offset: 0x136A6C4
    // Implemented from: VROSC.AdjustableMeshEffect
    // Base method: System.Void AdjustableMeshEffect::OnMeshVisible()
    void OnMeshVisible();
  }; // VROSC.AdjustableMirrorMeshEffect
  #pragma pack(pop)
  static check_size<sizeof(AdjustableMirrorMeshEffect), 32 + sizeof(bool)> __VROSC_AdjustableMirrorMeshEffectSizeCheck;
  static_assert(sizeof(AdjustableMirrorMeshEffect) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AdjustableMirrorMeshEffect::Flip
// Il2CppName: Flip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMirrorMeshEffect::*)(::UnityEngine::Mesh*)>(&VROSC::AdjustableMirrorMeshEffect::Flip)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMirrorMeshEffect*), "Flip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMirrorMeshEffect::FlipNormals
// Il2CppName: FlipNormals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMirrorMeshEffect::*)(::UnityEngine::Mesh*)>(&VROSC::AdjustableMirrorMeshEffect::FlipNormals)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMirrorMeshEffect*), "FlipNormals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMirrorMeshEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AdjustableMirrorMeshEffect::OnMeshVisible
// Il2CppName: OnMeshVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMirrorMeshEffect::*)()>(&VROSC::AdjustableMirrorMeshEffect::OnMeshVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMirrorMeshEffect*), "OnMeshVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
