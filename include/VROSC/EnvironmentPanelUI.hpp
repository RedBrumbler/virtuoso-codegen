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
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: EnvironmentUIButton
  class EnvironmentUIButton;
  // Forward declaring type: UISlider
  class UISlider;
  // Forward declaring type: EnvironmentData
  class EnvironmentData;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: EnvironmentPanelUI
  class EnvironmentPanelUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::EnvironmentPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EnvironmentPanelUI*, "VROSC", "EnvironmentPanelUI");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.EnvironmentPanelUI
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentPanelUI : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.EnvironmentUIButton[] _environmentButtons
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::VROSC::EnvironmentUIButton*> environmentButtons;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::EnvironmentUIButton*>) == 0x8);
    // private VROSC.EnvironmentUIButton _passthroughButton
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::EnvironmentUIButton* passthroughButton;
    // Field size check
    static_assert(sizeof(::VROSC::EnvironmentUIButton*) == 0x8);
    // private VROSC.UISlider _effectSlider
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::UISlider* effectSlider;
    // Field size check
    static_assert(sizeof(::VROSC::UISlider*) == 0x8);
    // private VROSC.EnvironmentData _selectedEnvironment
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::EnvironmentData* selectedEnvironment;
    // Field size check
    static_assert(sizeof(::VROSC::EnvironmentData*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.EnvironmentUIButton[] _environmentButtons
    ::ArrayW<::VROSC::EnvironmentUIButton*>& dyn__environmentButtons();
    // Get instance field reference: private VROSC.EnvironmentUIButton _passthroughButton
    ::VROSC::EnvironmentUIButton*& dyn__passthroughButton();
    // Get instance field reference: private VROSC.UISlider _effectSlider
    ::VROSC::UISlider*& dyn__effectSlider();
    // Get instance field reference: private VROSC.EnvironmentData _selectedEnvironment
    ::VROSC::EnvironmentData*& dyn__selectedEnvironment();
    // protected System.Void Awake()
    // Offset: 0x1315060
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x1315180
    void OnEnable();
    // private System.Void OnDestroy()
    // Offset: 0x1315320
    void OnDestroy();
    // public System.Void SetActiveEnvironment(VROSC.EnvironmentData newEvironment)
    // Offset: 0x13153F4
    void SetActiveEnvironment(::VROSC::EnvironmentData* newEvironment);
    // private System.Void SetEffectsInput(System.Single amount)
    // Offset: 0x1315558
    void SetEffectsInput(float amount);
    // public System.Void .ctor()
    // Offset: 0x1315608
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentPanelUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::EnvironmentPanelUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentPanelUI*, creationType>()));
    }
  }; // VROSC.EnvironmentPanelUI
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentPanelUI), 48 + sizeof(::VROSC::EnvironmentData*)> __VROSC_EnvironmentPanelUISizeCheck;
  static_assert(sizeof(EnvironmentPanelUI) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::EnvironmentPanelUI::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EnvironmentPanelUI::*)()>(&VROSC::EnvironmentPanelUI::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::EnvironmentPanelUI*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::EnvironmentPanelUI::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EnvironmentPanelUI::*)()>(&VROSC::EnvironmentPanelUI::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::EnvironmentPanelUI*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::EnvironmentPanelUI::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EnvironmentPanelUI::*)()>(&VROSC::EnvironmentPanelUI::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::EnvironmentPanelUI*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::EnvironmentPanelUI::SetActiveEnvironment
// Il2CppName: SetActiveEnvironment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EnvironmentPanelUI::*)(::VROSC::EnvironmentData*)>(&VROSC::EnvironmentPanelUI::SetActiveEnvironment)> {
  static const MethodInfo* get() {
    static auto* newEvironment = &::il2cpp_utils::GetClassFromName("VROSC", "EnvironmentData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::EnvironmentPanelUI*), "SetActiveEnvironment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newEvironment});
  }
};
// Writing MetadataGetter for method: VROSC::EnvironmentPanelUI::SetEffectsInput
// Il2CppName: SetEffectsInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::EnvironmentPanelUI::*)(float)>(&VROSC::EnvironmentPanelUI::SetEffectsInput)> {
  static const MethodInfo* get() {
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::EnvironmentPanelUI*), "SetEffectsInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{amount});
  }
};
// Writing MetadataGetter for method: VROSC::EnvironmentPanelUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
