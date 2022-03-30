// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ovrAvatarGazeTargetType
#include "GlobalNamespace/ovrAvatarGazeTargetType.hpp"
// Including type: ovrAvatarGazeTargets
#include "GlobalNamespace/ovrAvatarGazeTargets.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: ovrAvatarGazeTarget because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GazeTarget
  class GazeTarget;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GazeTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GazeTarget*, "", "GazeTarget");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: GazeTarget
  // [TokenAttribute] Offset: FFFFFFFF
  class GazeTarget : public ::UnityEngine::MonoBehaviour {
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
    // public ovrAvatarGazeTargetType Type
    // Size: 0x14
    // Offset: 0x18
    ::GlobalNamespace::ovrAvatarGazeTargetType Type;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarGazeTargetType) == 0x14);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private ovrAvatarGazeTargets RuntimeTargetList
    static ::GlobalNamespace::ovrAvatarGazeTargets _get_RuntimeTargetList();
    // Set static field: static private ovrAvatarGazeTargets RuntimeTargetList
    static void _set_RuntimeTargetList(::GlobalNamespace::ovrAvatarGazeTargets value);
    // Get instance field reference: public ovrAvatarGazeTargetType Type
    ::GlobalNamespace::ovrAvatarGazeTargetType& dyn_Type();
    // private System.Void Start()
    // Offset: 0x8907F8
    void Start();
    // private System.Void Update()
    // Offset: 0x89096C
    void Update();
    // private System.Void OnDestroy()
    // Offset: 0x8909D0
    void OnDestroy();
    // private System.Void UpdateGazeTarget()
    // Offset: 0x890834
    void UpdateGazeTarget();
    // private ovrAvatarGazeTarget CreateOvrGazeTarget(System.UInt32 targetId, UnityEngine.Vector3 targetPosition, ovrAvatarGazeTargetType targetType)
    // Offset: 0x890A94
    ::GlobalNamespace::ovrAvatarGazeTarget CreateOvrGazeTarget(uint targetId, ::UnityEngine::Vector3 targetPosition, ::GlobalNamespace::ovrAvatarGazeTargetType targetType);
    // static private System.Void .cctor()
    // Offset: 0x890780
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x890AAC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GazeTarget* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GazeTarget::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GazeTarget*, creationType>()));
    }
  }; // GazeTarget
  #pragma pack(pop)
  static check_size<sizeof(GazeTarget), 24 + sizeof(::GlobalNamespace::ovrAvatarGazeTargetType)> __GlobalNamespace_GazeTargetSizeCheck;
  static_assert(sizeof(GazeTarget) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GazeTarget::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GazeTarget::*)()>(&GlobalNamespace::GazeTarget::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GazeTarget*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GazeTarget::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GazeTarget::*)()>(&GlobalNamespace::GazeTarget::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GazeTarget*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GazeTarget::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GazeTarget::*)()>(&GlobalNamespace::GazeTarget::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GazeTarget*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GazeTarget::UpdateGazeTarget
// Il2CppName: UpdateGazeTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GazeTarget::*)()>(&GlobalNamespace::GazeTarget::UpdateGazeTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GazeTarget*), "UpdateGazeTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GazeTarget::CreateOvrGazeTarget
// Il2CppName: CreateOvrGazeTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ovrAvatarGazeTarget (GlobalNamespace::GazeTarget::*)(uint, ::UnityEngine::Vector3, ::GlobalNamespace::ovrAvatarGazeTargetType)>(&GlobalNamespace::GazeTarget::CreateOvrGazeTarget)> {
  static const MethodInfo* get() {
    static auto* targetId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* targetType = &::il2cpp_utils::GetClassFromName("", "ovrAvatarGazeTargetType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GazeTarget*), "CreateOvrGazeTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetId, targetPosition, targetType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GazeTarget::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::GazeTarget::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GazeTarget*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GazeTarget::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!