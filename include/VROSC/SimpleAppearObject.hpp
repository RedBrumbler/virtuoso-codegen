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
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SimpleAppearObject
  class SimpleAppearObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SimpleAppearObject);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SimpleAppearObject*, "VROSC", "SimpleAppearObject");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SimpleAppearObject
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleAppearObject : public ::UnityEngine::MonoBehaviour {
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
    // private System.Single _size
    // Size: 0x4
    // Offset: 0x18
    float size;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _scaleEffect
    // Size: 0x1
    // Offset: 0x1C
    bool scaleEffect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: scaleEffect and: originalScale
    char __padding1[0x3] = {};
    // private UnityEngine.Vector3 _originalScale
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 originalScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean _setupDone
    // Size: 0x1
    // Offset: 0x2C
    bool setupDone;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _size
    float& dyn__size();
    // Get instance field reference: private System.Boolean _scaleEffect
    bool& dyn__scaleEffect();
    // Get instance field reference: private UnityEngine.Vector3 _originalScale
    ::UnityEngine::Vector3& dyn__originalScale();
    // Get instance field reference: private System.Boolean _setupDone
    bool& dyn__setupDone();
    // public System.Single get_Size()
    // Offset: 0x13B5920
    float get_Size();
    // public System.Void Setup()
    // Offset: 0x13B5928
    void Setup();
    // public System.Void UpdateAppearance(System.Single amount)
    // Offset: 0x13B5974
    void UpdateAppearance(float amount);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x13B5A60
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x13B5AB0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleAppearObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SimpleAppearObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleAppearObject*, creationType>()));
    }
  }; // VROSC.SimpleAppearObject
  #pragma pack(pop)
  static check_size<sizeof(SimpleAppearObject), 44 + sizeof(bool)> __VROSC_SimpleAppearObjectSizeCheck;
  static_assert(sizeof(SimpleAppearObject) == 0x2D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SimpleAppearObject::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::SimpleAppearObject::*)()>(&VROSC::SimpleAppearObject::get_Size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SimpleAppearObject*), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SimpleAppearObject::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SimpleAppearObject::*)()>(&VROSC::SimpleAppearObject::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SimpleAppearObject*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SimpleAppearObject::UpdateAppearance
// Il2CppName: UpdateAppearance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SimpleAppearObject::*)(float)>(&VROSC::SimpleAppearObject::UpdateAppearance)> {
  static const MethodInfo* get() {
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SimpleAppearObject*), "UpdateAppearance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{amount});
  }
};
// Writing MetadataGetter for method: VROSC::SimpleAppearObject::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SimpleAppearObject::*)()>(&VROSC::SimpleAppearObject::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SimpleAppearObject*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SimpleAppearObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
