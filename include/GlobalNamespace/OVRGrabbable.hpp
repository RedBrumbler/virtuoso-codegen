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
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRGrabber
  class OVRGrabber;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRGrabbable
  class OVRGrabbable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRGrabbable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGrabbable*, "", "OVRGrabbable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: OVRGrabbable
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRGrabbable : public ::UnityEngine::MonoBehaviour {
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
    // protected System.Boolean m_allowOffhandGrab
    // Size: 0x1
    // Offset: 0x18
    bool m_allowOffhandGrab;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean m_snapPosition
    // Size: 0x1
    // Offset: 0x19
    bool m_snapPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean m_snapOrientation
    // Size: 0x1
    // Offset: 0x1A
    bool m_snapOrientation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_snapOrientation and: m_snapOffset
    char __padding2[0x5] = {};
    // protected UnityEngine.Transform m_snapOffset
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* m_snapOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // protected UnityEngine.Collider[] m_grabPoints
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Collider*> m_grabPoints;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // protected System.Boolean m_grabbedKinematic
    // Size: 0x1
    // Offset: 0x30
    bool m_grabbedKinematic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_grabbedKinematic and: m_grabbedCollider
    char __padding5[0x7] = {};
    // protected UnityEngine.Collider m_grabbedCollider
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Collider* m_grabbedCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // protected OVRGrabber m_grabbedBy
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::OVRGrabber* m_grabbedBy;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRGrabber*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected System.Boolean m_allowOffhandGrab
    bool& dyn_m_allowOffhandGrab();
    // Get instance field reference: protected System.Boolean m_snapPosition
    bool& dyn_m_snapPosition();
    // Get instance field reference: protected System.Boolean m_snapOrientation
    bool& dyn_m_snapOrientation();
    // Get instance field reference: protected UnityEngine.Transform m_snapOffset
    ::UnityEngine::Transform*& dyn_m_snapOffset();
    // Get instance field reference: protected UnityEngine.Collider[] m_grabPoints
    ::ArrayW<::UnityEngine::Collider*>& dyn_m_grabPoints();
    // Get instance field reference: protected System.Boolean m_grabbedKinematic
    bool& dyn_m_grabbedKinematic();
    // Get instance field reference: protected UnityEngine.Collider m_grabbedCollider
    ::UnityEngine::Collider*& dyn_m_grabbedCollider();
    // Get instance field reference: protected OVRGrabber m_grabbedBy
    ::GlobalNamespace::OVRGrabber*& dyn_m_grabbedBy();
    // public System.Boolean get_allowOffhandGrab()
    // Offset: 0xD2F53C
    bool get_allowOffhandGrab();
    // public System.Boolean get_isGrabbed()
    // Offset: 0xD2F544
    bool get_isGrabbed();
    // public System.Boolean get_snapPosition()
    // Offset: 0xD2F5B0
    bool get_snapPosition();
    // public System.Boolean get_snapOrientation()
    // Offset: 0xD2F5B8
    bool get_snapOrientation();
    // public UnityEngine.Transform get_snapOffset()
    // Offset: 0xD2F5C0
    ::UnityEngine::Transform* get_snapOffset();
    // public OVRGrabber get_grabbedBy()
    // Offset: 0xD2F5C8
    ::GlobalNamespace::OVRGrabber* get_grabbedBy();
    // public UnityEngine.Transform get_grabbedTransform()
    // Offset: 0xD2F5D0
    ::UnityEngine::Transform* get_grabbedTransform();
    // public UnityEngine.Rigidbody get_grabbedRigidbody()
    // Offset: 0xD2F5EC
    ::UnityEngine::Rigidbody* get_grabbedRigidbody();
    // public UnityEngine.Collider[] get_grabPoints()
    // Offset: 0xD2F608
    ::ArrayW<::UnityEngine::Collider*> get_grabPoints();
    // public System.Void GrabBegin(OVRGrabber hand, UnityEngine.Collider grabPoint)
    // Offset: 0xD2F610
    void GrabBegin(::GlobalNamespace::OVRGrabber* hand, ::UnityEngine::Collider* grabPoint);
    // public System.Void GrabEnd(UnityEngine.Vector3 linearVelocity, UnityEngine.Vector3 angularVelocity)
    // Offset: 0xD2F690
    void GrabEnd(::UnityEngine::Vector3 linearVelocity, ::UnityEngine::Vector3 angularVelocity);
    // private System.Void Awake()
    // Offset: 0xD2F768
    void Awake();
    // protected System.Void Start()
    // Offset: 0xD2F8CC
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0xD2F934
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0xD2FA88
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRGrabbable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRGrabbable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRGrabbable*, creationType>()));
    }
  }; // OVRGrabbable
  #pragma pack(pop)
  static check_size<sizeof(OVRGrabbable), 64 + sizeof(::GlobalNamespace::OVRGrabber*)> __GlobalNamespace_OVRGrabbableSizeCheck;
  static_assert(sizeof(OVRGrabbable) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRGrabbable::get_allowOffhandGrab
// Il2CppName: get_allowOffhandGrab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRGrabbable::*)()>(&GlobalNamespace::OVRGrabbable::get_allowOffhandGrab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGrabbable*), "get_allowOffhandGrab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGrabbable::get_isGrabbed
// Il2CppName: get_isGrabbed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRGrabbable::*)()>(&GlobalNamespace::OVRGrabbable::get_isGrabbed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGrabbable*), "get_isGrabbed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGrabbable::get_snapPosition
// Il2CppName: get_snapPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRGrabbable::*)()>(&GlobalNamespace::OVRGrabbable::get_snapPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGrabbable*), "get_snapPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGrabbable::get_snapOrientation
// Il2CppName: get_snapOrientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRGrabbable::*)()>(&GlobalNamespace::OVRGrabbable::get_snapOrientation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGrabbable*), "get_snapOrientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGrabbable::get_snapOffset
// Il2CppName: get_snapOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::OVRGrabbable::*)()>(&GlobalNamespace::OVRGrabbable::get_snapOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGrabbable*), "get_snapOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGrabbable::get_grabbedBy
// Il2CppName: get_grabbedBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRGrabber* (GlobalNamespace::OVRGrabbable::*)()>(&GlobalNamespace::OVRGrabbable::get_grabbedBy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGrabbable*), "get_grabbedBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGrabbable::get_grabbedTransform
// Il2CppName: get_grabbedTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::OVRGrabbable::*)()>(&GlobalNamespace::OVRGrabbable::get_grabbedTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGrabbable*), "get_grabbedTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGrabbable::get_grabbedRigidbody
// Il2CppName: get_grabbedRigidbody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rigidbody* (GlobalNamespace::OVRGrabbable::*)()>(&GlobalNamespace::OVRGrabbable::get_grabbedRigidbody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGrabbable*), "get_grabbedRigidbody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGrabbable::get_grabPoints
// Il2CppName: get_grabPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Collider*> (GlobalNamespace::OVRGrabbable::*)()>(&GlobalNamespace::OVRGrabbable::get_grabPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGrabbable*), "get_grabPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGrabbable::GrabBegin
// Il2CppName: GrabBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGrabbable::*)(::GlobalNamespace::OVRGrabber*, ::UnityEngine::Collider*)>(&GlobalNamespace::OVRGrabbable::GrabBegin)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("", "OVRGrabber")->byval_arg;
    static auto* grabPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGrabbable*), "GrabBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, grabPoint});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGrabbable::GrabEnd
// Il2CppName: GrabEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGrabbable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::OVRGrabbable::GrabEnd)> {
  static const MethodInfo* get() {
    static auto* linearVelocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* angularVelocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGrabbable*), "GrabEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{linearVelocity, angularVelocity});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGrabbable::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGrabbable::*)()>(&GlobalNamespace::OVRGrabbable::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGrabbable*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGrabbable::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGrabbable::*)()>(&GlobalNamespace::OVRGrabbable::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGrabbable*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGrabbable::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGrabbable::*)()>(&GlobalNamespace::OVRGrabbable::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGrabbable*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGrabbable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
