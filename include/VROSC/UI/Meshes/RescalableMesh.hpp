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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: VROSC::UI::Meshes
namespace VROSC::UI::Meshes {
  // Forward declaring type: RescalableMeshData
  class RescalableMeshData;
}
// Completed forward declares
// Type namespace: VROSC.UI.Meshes
namespace VROSC::UI::Meshes {
  // Forward declaring type: RescalableMesh
  class RescalableMesh;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::Meshes::RescalableMesh);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::Meshes::RescalableMesh*, "VROSC.UI.Meshes", "RescalableMesh");
// Type namespace: VROSC.UI.Meshes
namespace VROSC::UI::Meshes {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UI.Meshes.RescalableMesh
  // [TokenAttribute] Offset: FFFFFFFF
  class RescalableMesh : public ::UnityEngine::MonoBehaviour {
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
    // private UnityEngine.MeshFilter _meshFilter
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::MeshFilter* meshFilter;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // private VROSC.UI.Meshes.RescalableMeshData _data
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UI::Meshes::RescalableMeshData* data;
    // Field size check
    static_assert(sizeof(::VROSC::UI::Meshes::RescalableMeshData*) == 0x8);
    // private System.Single _width
    // Size: 0x4
    // Offset: 0x28
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _height
    // Size: 0x4
    // Offset: 0x2C
    float height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Mesh _mesh
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // private UnityEngine.Vector3[] _positions
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::Vector3> positions;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.MeshFilter _meshFilter
    ::UnityEngine::MeshFilter*& dyn__meshFilter();
    // Get instance field reference: private VROSC.UI.Meshes.RescalableMeshData _data
    ::VROSC::UI::Meshes::RescalableMeshData*& dyn__data();
    // Get instance field reference: private System.Single _width
    float& dyn__width();
    // Get instance field reference: private System.Single _height
    float& dyn__height();
    // Get instance field reference: private UnityEngine.Mesh _mesh
    ::UnityEngine::Mesh*& dyn__mesh();
    // Get instance field reference: private UnityEngine.Vector3[] _positions
    ::ArrayW<::UnityEngine::Vector3>& dyn__positions();
    // public System.Single get_Width()
    // Offset: 0x99A6AC
    float get_Width();
    // public System.Single get_Height()
    // Offset: 0x99A6B4
    float get_Height();
    // public VROSC.UI.Meshes.RescalableMeshData get_Data()
    // Offset: 0x99A6BC
    ::VROSC::UI::Meshes::RescalableMeshData* get_Data();
    // private System.Void Awake()
    // Offset: 0x99A6C4
    void Awake();
    // public System.Void GetValuesFromData()
    // Offset: 0x99A7AC
    void GetValuesFromData();
    // private System.Void Update()
    // Offset: 0x99A7D4
    void Update();
    // private System.Void OnDrawGizmos()
    // Offset: 0x99A914
    void OnDrawGizmos();
    // public System.Void .ctor()
    // Offset: 0x99A958
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RescalableMesh* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::Meshes::RescalableMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RescalableMesh*, creationType>()));
    }
  }; // VROSC.UI.Meshes.RescalableMesh
  #pragma pack(pop)
  static check_size<sizeof(RescalableMesh), 56 + sizeof(::ArrayW<::UnityEngine::Vector3>)> __VROSC_UI_Meshes_RescalableMeshSizeCheck;
  static_assert(sizeof(RescalableMesh) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::Meshes::RescalableMesh::get_Width
// Il2CppName: get_Width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::UI::Meshes::RescalableMesh::*)()>(&VROSC::UI::Meshes::RescalableMesh::get_Width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::RescalableMesh*), "get_Width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::RescalableMesh::get_Height
// Il2CppName: get_Height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::UI::Meshes::RescalableMesh::*)()>(&VROSC::UI::Meshes::RescalableMesh::get_Height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::RescalableMesh*), "get_Height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::RescalableMesh::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UI::Meshes::RescalableMeshData* (VROSC::UI::Meshes::RescalableMesh::*)()>(&VROSC::UI::Meshes::RescalableMesh::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::RescalableMesh*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::RescalableMesh::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::RescalableMesh::*)()>(&VROSC::UI::Meshes::RescalableMesh::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::RescalableMesh*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::RescalableMesh::GetValuesFromData
// Il2CppName: GetValuesFromData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::RescalableMesh::*)()>(&VROSC::UI::Meshes::RescalableMesh::GetValuesFromData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::RescalableMesh*), "GetValuesFromData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::RescalableMesh::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::RescalableMesh::*)()>(&VROSC::UI::Meshes::RescalableMesh::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::RescalableMesh*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::RescalableMesh::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::Meshes::RescalableMesh::*)()>(&VROSC::UI::Meshes::RescalableMesh::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::Meshes::RescalableMesh*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::Meshes::RescalableMesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
