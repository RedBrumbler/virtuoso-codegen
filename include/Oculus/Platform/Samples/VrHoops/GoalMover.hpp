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
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Forward declaring type: GoalMover
  class GoalMover;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrHoops::GoalMover);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrHoops::GoalMover*, "Oculus.Platform.Samples.VrHoops", "GoalMover");
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrHoops.GoalMover
  // [TokenAttribute] Offset: FFFFFFFF
  class GoalMover : public ::UnityEngine::MonoBehaviour {
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
    // private System.Single MAX_OFFSET
    // Size: 0x4
    // Offset: 0x18
    float MAX_OFFSET;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_speed
    // Size: 0x4
    // Offset: 0x1C
    float m_speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 m_expectedPosition
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 m_expectedPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_moveDirection
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 m_moveDirection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_nextMoveDirection
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 m_nextMoveDirection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single MOVE_TOLERANCE
    static constexpr const float MOVE_TOLERANCE = 0.1;
    // Get static field: static private System.Single MOVE_TOLERANCE
    static float _get_MOVE_TOLERANCE();
    // Set static field: static private System.Single MOVE_TOLERANCE
    static void _set_MOVE_TOLERANCE(float value);
    // Get instance field reference: private System.Single MAX_OFFSET
    float& dyn_MAX_OFFSET();
    // Get instance field reference: private System.Single m_speed
    float& dyn_m_speed();
    // Get instance field reference: private UnityEngine.Vector3 m_expectedPosition
    ::UnityEngine::Vector3& dyn_m_expectedPosition();
    // Get instance field reference: private UnityEngine.Vector3 m_moveDirection
    ::UnityEngine::Vector3& dyn_m_moveDirection();
    // Get instance field reference: private UnityEngine.Vector3 m_nextMoveDirection
    ::UnityEngine::Vector3& dyn_m_nextMoveDirection();
    // public UnityEngine.Vector3 get_ExpectedPosition()
    // Offset: 0x7EAA3C
    ::UnityEngine::Vector3 get_ExpectedPosition();
    // public System.Void set_ExpectedPosition(UnityEngine.Vector3 value)
    // Offset: 0x7EAA48
    void set_ExpectedPosition(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_MoveDirection()
    // Offset: 0x7EAA54
    ::UnityEngine::Vector3 get_MoveDirection();
    // public System.Void set_MoveDirection(UnityEngine.Vector3 value)
    // Offset: 0x7EAA60
    void set_MoveDirection(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_NextMoveDirection()
    // Offset: 0x7EAA6C
    ::UnityEngine::Vector3 get_NextMoveDirection();
    // public System.Void set_NextMoveDirection(UnityEngine.Vector3 value)
    // Offset: 0x7EAA78
    void set_NextMoveDirection(::UnityEngine::Vector3 value);
    // private System.Void Start()
    // Offset: 0x7EAA84
    void Start();
    // private System.Void FixedUpdate()
    // Offset: 0x7EAB90
    void FixedUpdate();
    // public System.Void .ctor()
    // Offset: 0x7EADD0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GoalMover* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrHoops::GoalMover::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GoalMover*, creationType>()));
    }
  }; // Oculus.Platform.Samples.VrHoops.GoalMover
  #pragma pack(pop)
  static check_size<sizeof(GoalMover), 56 + sizeof(::UnityEngine::Vector3)> __Oculus_Platform_Samples_VrHoops_GoalMoverSizeCheck;
  static_assert(sizeof(GoalMover) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::GoalMover::get_ExpectedPosition
// Il2CppName: get_ExpectedPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Platform::Samples::VrHoops::GoalMover::*)()>(&Oculus::Platform::Samples::VrHoops::GoalMover::get_ExpectedPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::GoalMover*), "get_ExpectedPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::GoalMover::set_ExpectedPosition
// Il2CppName: set_ExpectedPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::GoalMover::*)(::UnityEngine::Vector3)>(&Oculus::Platform::Samples::VrHoops::GoalMover::set_ExpectedPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::GoalMover*), "set_ExpectedPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::GoalMover::get_MoveDirection
// Il2CppName: get_MoveDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Platform::Samples::VrHoops::GoalMover::*)()>(&Oculus::Platform::Samples::VrHoops::GoalMover::get_MoveDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::GoalMover*), "get_MoveDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::GoalMover::set_MoveDirection
// Il2CppName: set_MoveDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::GoalMover::*)(::UnityEngine::Vector3)>(&Oculus::Platform::Samples::VrHoops::GoalMover::set_MoveDirection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::GoalMover*), "set_MoveDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::GoalMover::get_NextMoveDirection
// Il2CppName: get_NextMoveDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Platform::Samples::VrHoops::GoalMover::*)()>(&Oculus::Platform::Samples::VrHoops::GoalMover::get_NextMoveDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::GoalMover*), "get_NextMoveDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::GoalMover::set_NextMoveDirection
// Il2CppName: set_NextMoveDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::GoalMover::*)(::UnityEngine::Vector3)>(&Oculus::Platform::Samples::VrHoops::GoalMover::set_NextMoveDirection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::GoalMover*), "set_NextMoveDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::GoalMover::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::GoalMover::*)()>(&Oculus::Platform::Samples::VrHoops::GoalMover::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::GoalMover*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::GoalMover::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::GoalMover::*)()>(&Oculus::Platform::Samples::VrHoops::GoalMover::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::GoalMover*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::GoalMover::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
