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
// Type namespace: VROSC.Credits
namespace VROSC::Credits {
  // Forward declaring type: CreditsObject
  class CreditsObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::Credits::CreditsObject);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Credits::CreditsObject*, "VROSC.Credits", "CreditsObject");
// Type namespace: VROSC.Credits
namespace VROSC::Credits {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.Credits.CreditsObject
  // [TokenAttribute] Offset: FFFFFFFF
  class CreditsObject : public ::UnityEngine::MonoBehaviour {
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
    // protected System.Single _height
    // Size: 0x4
    // Offset: 0x18
    float height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _visibility
    // Size: 0x4
    // Offset: 0x1C
    float visibility;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected System.Single _height
    float& dyn__height();
    // Get instance field reference: private System.Single _visibility
    float& dyn__visibility();
    // public System.Single get_Height()
    // Offset: 0x1306BC0
    float get_Height();
    // private System.Void OnDrawGizmos()
    // Offset: 0x1306BC8
    void OnDrawGizmos();
    // public System.Void SetVisibility(System.Single visible)
    // Offset: 0x1306BFC
    void SetVisibility(float visible);
    // protected System.Void UpdateVisibility(System.Single visible)
    // Offset: 0x1306C90
    void UpdateVisibility(float visible);
    // public System.Void .ctor()
    // Offset: 0x1306C94
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::Credits::CreditsObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsObject*, creationType>()));
    }
  }; // VROSC.Credits.CreditsObject
  #pragma pack(pop)
  static check_size<sizeof(CreditsObject), 28 + sizeof(float)> __VROSC_Credits_CreditsObjectSizeCheck;
  static_assert(sizeof(CreditsObject) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::Credits::CreditsObject::get_Height
// Il2CppName: get_Height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::Credits::CreditsObject::*)()>(&VROSC::Credits::CreditsObject::get_Height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsObject*), "get_Height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsObject::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::CreditsObject::*)()>(&VROSC::Credits::CreditsObject::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsObject*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsObject::SetVisibility
// Il2CppName: SetVisibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::CreditsObject::*)(float)>(&VROSC::Credits::CreditsObject::SetVisibility)> {
  static const MethodInfo* get() {
    static auto* visible = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsObject*), "SetVisibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visible});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsObject::UpdateVisibility
// Il2CppName: UpdateVisibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Credits::CreditsObject::*)(float)>(&VROSC::Credits::CreditsObject::UpdateVisibility)> {
  static const MethodInfo* get() {
    static auto* visible = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsObject*), "UpdateVisibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visible});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!