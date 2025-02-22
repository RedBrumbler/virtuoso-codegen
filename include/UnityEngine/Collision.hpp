// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.ContactPoint
#include "UnityEngine/ContactPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collision
  class Collision;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Collision);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collision*, "UnityEngine", "Collision");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x50
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Collision
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 5ADFA8
  class Collision : public ::Il2CppObject {
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
    // UnityEngine.Vector3 m_Impulse
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 m_Impulse;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // UnityEngine.Vector3 m_RelativeVelocity
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 m_RelativeVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // UnityEngine.Component m_Body
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Component* m_Body;
    // Field size check
    static_assert(sizeof(::UnityEngine::Component*) == 0x8);
    // UnityEngine.Collider m_Collider
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Collider* m_Collider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // System.Int32 m_ContactCount
    // Size: 0x4
    // Offset: 0x38
    int m_ContactCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_ContactCount and: m_ReusedContacts
    char __padding4[0x4] = {};
    // UnityEngine.ContactPoint[] m_ReusedContacts
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::ContactPoint> m_ReusedContacts;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::ContactPoint>) == 0x8);
    // UnityEngine.ContactPoint[] m_LegacyContacts
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::UnityEngine::ContactPoint> m_LegacyContacts;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::ContactPoint>) == 0x8);
    public:
    // Get instance field reference: UnityEngine.Vector3 m_Impulse
    ::UnityEngine::Vector3& dyn_m_Impulse();
    // Get instance field reference: UnityEngine.Vector3 m_RelativeVelocity
    ::UnityEngine::Vector3& dyn_m_RelativeVelocity();
    // Get instance field reference: UnityEngine.Component m_Body
    ::UnityEngine::Component*& dyn_m_Body();
    // Get instance field reference: UnityEngine.Collider m_Collider
    ::UnityEngine::Collider*& dyn_m_Collider();
    // Get instance field reference: System.Int32 m_ContactCount
    int& dyn_m_ContactCount();
    // Get instance field reference: UnityEngine.ContactPoint[] m_ReusedContacts
    ::ArrayW<::UnityEngine::ContactPoint>& dyn_m_ReusedContacts();
    // Get instance field reference: UnityEngine.ContactPoint[] m_LegacyContacts
    ::ArrayW<::UnityEngine::ContactPoint>& dyn_m_LegacyContacts();
    // public UnityEngine.ContactPoint[] get_contacts()
    // Offset: 0x12EA698
    ::ArrayW<::UnityEngine::ContactPoint> get_contacts();
  }; // UnityEngine.Collision
  #pragma pack(pop)
  static check_size<sizeof(Collision), 72 + sizeof(::ArrayW<::UnityEngine::ContactPoint>)> __UnityEngine_CollisionSizeCheck;
  static_assert(sizeof(Collision) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Collision::get_contacts
// Il2CppName: get_contacts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ContactPoint> (UnityEngine::Collision::*)()>(&UnityEngine::Collision::get_contacts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collision*), "get_contacts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
