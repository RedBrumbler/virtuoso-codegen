// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SmoothMovement
  class SmoothMovement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SmoothMovement);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SmoothMovement*, "VROSC", "SmoothMovement");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SmoothMovement
  // [TokenAttribute] Offset: FFFFFFFF
  class SmoothMovement : public ::Il2CppObject {
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
    // private UnityEngine.Vector3 <SmoothPosition>k__BackingField
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 SmoothPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _smoothingVelocity
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 smoothingVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean _needsReset
    // Size: 0x1
    // Offset: 0x28
    bool needsReset;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Vector3 <SmoothPosition>k__BackingField
    ::UnityEngine::Vector3& dyn_$SmoothPosition$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 _smoothingVelocity
    ::UnityEngine::Vector3& dyn__smoothingVelocity();
    // Get instance field reference: private System.Boolean _needsReset
    bool& dyn__needsReset();
    // public UnityEngine.Vector3 get_SmoothPosition()
    // Offset: 0x13B5E8C
    ::UnityEngine::Vector3 get_SmoothPosition();
    // private System.Void set_SmoothPosition(UnityEngine.Vector3 value)
    // Offset: 0x13B5E80
    void set_SmoothPosition(::UnityEngine::Vector3 value);
    // public System.Void .ctor(UnityEngine.Vector3 position)
    // Offset: 0x13B5E98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SmoothMovement* New_ctor(::UnityEngine::Vector3 position) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SmoothMovement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SmoothMovement*, creationType>(position)));
    }
    // public System.Void Update(UnityEngine.Vector3 position, System.Single smoothing)
    // Offset: 0x13B5EE0
    void Update(::UnityEngine::Vector3 position, float smoothing);
    // public System.Void ResetSmoothing()
    // Offset: 0x13B5F40
    void ResetSmoothing();
  }; // VROSC.SmoothMovement
  #pragma pack(pop)
  static check_size<sizeof(SmoothMovement), 40 + sizeof(bool)> __VROSC_SmoothMovementSizeCheck;
  static_assert(sizeof(SmoothMovement) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SmoothMovement::get_SmoothPosition
// Il2CppName: get_SmoothPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::SmoothMovement::*)()>(&VROSC::SmoothMovement::get_SmoothPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SmoothMovement*), "get_SmoothPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SmoothMovement::set_SmoothPosition
// Il2CppName: set_SmoothPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SmoothMovement::*)(::UnityEngine::Vector3)>(&VROSC::SmoothMovement::set_SmoothPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SmoothMovement*), "set_SmoothPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::SmoothMovement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SmoothMovement::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SmoothMovement::*)(::UnityEngine::Vector3, float)>(&VROSC::SmoothMovement::Update)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* smoothing = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SmoothMovement*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, smoothing});
  }
};
// Writing MetadataGetter for method: VROSC::SmoothMovement::ResetSmoothing
// Il2CppName: ResetSmoothing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SmoothMovement::*)()>(&VROSC::SmoothMovement::ResetSmoothing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SmoothMovement*), "ResetSmoothing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
