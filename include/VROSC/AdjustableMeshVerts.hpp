// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: AdjustableMesh
  class AdjustableMesh;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: AdjustableMeshVerts
  class AdjustableMeshVerts;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AdjustableMeshVerts);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshVerts*, "VROSC", "AdjustableMeshVerts");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AdjustableMeshVerts
  // [TokenAttribute] Offset: FFFFFFFF
  class AdjustableMeshVerts : public ::Il2CppObject {
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
    // private VROSC.AdjustableMesh _adjustableMesh
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::AdjustableMesh* adjustableMesh;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMesh*) == 0x8);
    public:
    // Creating conversion operator: operator ::VROSC::AdjustableMesh*
    constexpr operator ::VROSC::AdjustableMesh*() const noexcept {
      return adjustableMesh;
    }
    // Get instance field reference: private VROSC.AdjustableMesh _adjustableMesh
    ::VROSC::AdjustableMesh*& dyn__adjustableMesh();
    // public System.Void .ctor(VROSC.AdjustableMesh adjustableMesh)
    // Offset: 0x13681B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdjustableMeshVerts* New_ctor(::VROSC::AdjustableMesh* adjustableMesh) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AdjustableMeshVerts::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdjustableMeshVerts*, creationType>(adjustableMesh)));
    }
    // public System.Void SetScale(UnityEngine.Vector3 scale)
    // Offset: 0x136A498
    void SetScale(::UnityEngine::Vector3 scale);
  }; // VROSC.AdjustableMeshVerts
  #pragma pack(pop)
  static check_size<sizeof(AdjustableMeshVerts), 16 + sizeof(::VROSC::AdjustableMesh*)> __VROSC_AdjustableMeshVertsSizeCheck;
  static_assert(sizeof(AdjustableMeshVerts) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AdjustableMeshVerts::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AdjustableMeshVerts::SetScale
// Il2CppName: SetScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMeshVerts::*)(::UnityEngine::Vector3)>(&VROSC::AdjustableMeshVerts::SetScale)> {
  static const MethodInfo* get() {
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMeshVerts*), "SetScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scale});
  }
};
