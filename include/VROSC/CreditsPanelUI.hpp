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
  // Forward declaring type: UIButton
  class UIButton;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: CreditsPanelUI
  class CreditsPanelUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::CreditsPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CreditsPanelUI*, "VROSC", "CreditsPanelUI");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.CreditsPanelUI
  // [TokenAttribute] Offset: FFFFFFFF
  class CreditsPanelUI : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.UIButton _joinDiscordButton
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::UIButton* joinDiscordButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private TMPro.TextMeshPro _discordURLOpenedText
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshPro* discordURLOpenedText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.UIButton _joinDiscordButton
    ::VROSC::UIButton*& dyn__joinDiscordButton();
    // Get instance field reference: private TMPro.TextMeshPro _discordURLOpenedText
    ::TMPro::TextMeshPro*& dyn__discordURLOpenedText();
    // public System.Boolean get_IsOpen()
    // Offset: 0x1306C9C
    bool get_IsOpen();
    // protected System.Void Awake()
    // Offset: 0x1306CC0
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x1306D9C
    void OnDestroy();
    // private System.Void JoinDiscordButtonPressed()
    // Offset: 0x1306E5C
    void JoinDiscordButtonPressed();
    // public System.Void .ctor()
    // Offset: 0x1306ECC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsPanelUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::CreditsPanelUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsPanelUI*, creationType>()));
    }
  }; // VROSC.CreditsPanelUI
  #pragma pack(pop)
  static check_size<sizeof(CreditsPanelUI), 32 + sizeof(::TMPro::TextMeshPro*)> __VROSC_CreditsPanelUISizeCheck;
  static_assert(sizeof(CreditsPanelUI) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::CreditsPanelUI::get_IsOpen
// Il2CppName: get_IsOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::CreditsPanelUI::*)()>(&VROSC::CreditsPanelUI::get_IsOpen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::CreditsPanelUI*), "get_IsOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::CreditsPanelUI::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CreditsPanelUI::*)()>(&VROSC::CreditsPanelUI::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::CreditsPanelUI*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::CreditsPanelUI::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CreditsPanelUI::*)()>(&VROSC::CreditsPanelUI::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::CreditsPanelUI*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::CreditsPanelUI::JoinDiscordButtonPressed
// Il2CppName: JoinDiscordButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::CreditsPanelUI::*)()>(&VROSC::CreditsPanelUI::JoinDiscordButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::CreditsPanelUI*), "JoinDiscordButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::CreditsPanelUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
