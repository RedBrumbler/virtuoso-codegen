// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: Bounds
  struct Bounds;
  // Forward declaring type: RaycastHit
  struct RaycastHit;
  // Forward declaring type: Ray
  struct Ray;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Collider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collider*, "UnityEngine", "Collider");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Collider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 5AE0D0
  // [RequireComponent] Offset: 5AE0D0
  // [RequiredByNativeCodeAttribute] Offset: 5AE0D0
  class Collider : public ::UnityEngine::Component {
    public:
    // public System.Boolean get_enabled()
    // Offset: 0x12EA14C
    bool get_enabled();
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0x12EA18C
    void set_enabled(bool value);
    // public UnityEngine.Rigidbody get_attachedRigidbody()
    // Offset: 0x12EA1DC
    ::UnityEngine::Rigidbody* get_attachedRigidbody();
    // public System.Boolean get_isTrigger()
    // Offset: 0x12EA21C
    bool get_isTrigger();
    // public System.Void set_isTrigger(System.Boolean value)
    // Offset: 0x12EA25C
    void set_isTrigger(bool value);
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x12EA2AC
    ::UnityEngine::Bounds get_bounds();
    // private UnityEngine.RaycastHit Raycast(UnityEngine.Ray ray, System.Single maxDistance, ref System.Boolean hasHit)
    // Offset: 0x12EA368
    ::UnityEngine::RaycastHit Raycast(::UnityEngine::Ray ray, float maxDistance, ByRef<bool> hasHit);
    // public System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance)
    // Offset: 0x12EA484
    bool Raycast(::UnityEngine::Ray ray, ByRef<::UnityEngine::RaycastHit> hitInfo, float maxDistance);
    // private System.Void Internal_ClosestPointOnBounds(UnityEngine.Vector3 point, ref UnityEngine.Vector3 outPos, ref System.Single distance)
    // Offset: 0x12EA540
    void Internal_ClosestPointOnBounds(::UnityEngine::Vector3 point, ByRef<::UnityEngine::Vector3> outPos, ByRef<float> distance);
    // public UnityEngine.Vector3 ClosestPointOnBounds(UnityEngine.Vector3 position)
    // Offset: 0x12EA618
    ::UnityEngine::Vector3 ClosestPointOnBounds(::UnityEngine::Vector3 position);
    // private System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
    // Offset: 0x12EA318
    void get_bounds_Injected(ByRef<::UnityEngine::Bounds> ret);
    // private System.Void Raycast_Injected(ref UnityEngine.Ray ray, System.Single maxDistance, ref System.Boolean hasHit, out UnityEngine.RaycastHit ret)
    // Offset: 0x12EA40C
    void Raycast_Injected(ByRef<::UnityEngine::Ray> ray, float maxDistance, ByRef<bool> hasHit, ByRef<::UnityEngine::RaycastHit> ret);
    // private System.Void Internal_ClosestPointOnBounds_Injected(ref UnityEngine.Vector3 point, ref UnityEngine.Vector3 outPos, ref System.Single distance)
    // Offset: 0x12EA5B0
    void Internal_ClosestPointOnBounds_Injected(ByRef<::UnityEngine::Vector3> point, ByRef<::UnityEngine::Vector3> outPos, ByRef<float> distance);
    // public System.Void .ctor()
    // Offset: 0x12EA690
    // Implemented from: UnityEngine.Component
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Collider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Collider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Collider*, creationType>()));
    }
  }; // UnityEngine.Collider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Collider::get_enabled
// Il2CppName: get_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Collider::*)()>(&UnityEngine::Collider::get_enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "get_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::set_enabled
// Il2CppName: set_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Collider::*)(bool)>(&UnityEngine::Collider::set_enabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "set_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::get_attachedRigidbody
// Il2CppName: get_attachedRigidbody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rigidbody* (UnityEngine::Collider::*)()>(&UnityEngine::Collider::get_attachedRigidbody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "get_attachedRigidbody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::get_isTrigger
// Il2CppName: get_isTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Collider::*)()>(&UnityEngine::Collider::get_isTrigger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "get_isTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::set_isTrigger
// Il2CppName: set_isTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Collider::*)(bool)>(&UnityEngine::Collider::set_isTrigger)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "set_isTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::get_bounds
// Il2CppName: get_bounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (UnityEngine::Collider::*)()>(&UnityEngine::Collider::get_bounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "get_bounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (UnityEngine::Collider::*)(::UnityEngine::Ray, float, ByRef<bool>)>(&UnityEngine::Collider::Raycast)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* hasHit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, maxDistance, hasHit});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Collider::*)(::UnityEngine::Ray, ByRef<::UnityEngine::RaycastHit>, float)>(&UnityEngine::Collider::Raycast)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* hitInfo = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, hitInfo, maxDistance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::Internal_ClosestPointOnBounds
// Il2CppName: Internal_ClosestPointOnBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Collider::*)(::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>, ByRef<float>)>(&UnityEngine::Collider::Internal_ClosestPointOnBounds)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* outPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "Internal_ClosestPointOnBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, outPos, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::ClosestPointOnBounds
// Il2CppName: ClosestPointOnBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Collider::*)(::UnityEngine::Vector3)>(&UnityEngine::Collider::ClosestPointOnBounds)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "ClosestPointOnBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::get_bounds_Injected
// Il2CppName: get_bounds_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Collider::*)(ByRef<::UnityEngine::Bounds>)>(&UnityEngine::Collider::get_bounds_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "get_bounds_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::Raycast_Injected
// Il2CppName: Raycast_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Collider::*)(ByRef<::UnityEngine::Ray>, float, ByRef<bool>, ByRef<::UnityEngine::RaycastHit>)>(&UnityEngine::Collider::Raycast_Injected)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* hasHit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "Raycast_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, maxDistance, hasHit, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::Internal_ClosestPointOnBounds_Injected
// Il2CppName: Internal_ClosestPointOnBounds_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Collider::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<float>)>(&UnityEngine::Collider::Internal_ClosestPointOnBounds_Injected)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* outPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "Internal_ClosestPointOnBounds_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, outPos, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
