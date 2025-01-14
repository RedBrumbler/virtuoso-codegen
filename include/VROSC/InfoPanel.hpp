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
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: AnimatedPanel
  class AnimatedPanel;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: InfoPanel
  class InfoPanel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::InfoPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InfoPanel*, "VROSC", "InfoPanel");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.InfoPanel
  // [TokenAttribute] Offset: FFFFFFFF
  class InfoPanel : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.AnimatedPanel _animation
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::AnimatedPanel* animation;
    // Field size check
    static_assert(sizeof(::VROSC::AnimatedPanel*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.AnimatedPanel _animation
    ::VROSC::AnimatedPanel*& dyn__animation();
    // public System.Void Setup()
    // Offset: 0x8A0828
    void Setup();
    // public System.Void SetActive(System.Boolean shouldBeOpen, System.Boolean animate)
    // Offset: 0x8A0834
    void SetActive(bool shouldBeOpen, bool animate);
    // public System.Void .ctor()
    // Offset: 0x8A0888
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InfoPanel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::InfoPanel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InfoPanel*, creationType>()));
    }
  }; // VROSC.InfoPanel
  #pragma pack(pop)
  static check_size<sizeof(InfoPanel), 24 + sizeof(::VROSC::AnimatedPanel*)> __VROSC_InfoPanelSizeCheck;
  static_assert(sizeof(InfoPanel) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::InfoPanel::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InfoPanel::*)()>(&VROSC::InfoPanel::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InfoPanel*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InfoPanel::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InfoPanel::*)(bool, bool)>(&VROSC::InfoPanel::SetActive)> {
  static const MethodInfo* get() {
    static auto* shouldBeOpen = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* animate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InfoPanel*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shouldBeOpen, animate});
  }
};
// Writing MetadataGetter for method: VROSC::InfoPanel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
