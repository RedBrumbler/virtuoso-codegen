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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ConfirmationUIPopup
  class ConfirmationUIPopup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ConfirmationUIPopup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ConfirmationUIPopup*, "VROSC", "ConfirmationUIPopup");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ConfirmationUIPopup
  // [TokenAttribute] Offset: FFFFFFFF
  class ConfirmationUIPopup : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::ConfirmationUIPopup::Data
    class Data;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private TMPro.TextMeshPro _headerText
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshPro* headerText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private TMPro.TextMeshPro _bodyText
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshPro* bodyText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private TMPro.TextMeshPro _errorText
    // Size: 0x8
    // Offset: 0x28
    ::TMPro::TextMeshPro* errorText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private VROSC.UIButton _confirmButton
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::UIButton* confirmButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private VROSC.UIButton _cancelButton
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::UIButton* cancelButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private System.Action _onConfirmedCallback
    // Size: 0x8
    // Offset: 0x40
    ::System::Action* onConfirmedCallback;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action _onCanceledCallback
    // Size: 0x8
    // Offset: 0x48
    ::System::Action* onCanceledCallback;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshPro _headerText
    ::TMPro::TextMeshPro*& dyn__headerText();
    // Get instance field reference: private TMPro.TextMeshPro _bodyText
    ::TMPro::TextMeshPro*& dyn__bodyText();
    // Get instance field reference: private TMPro.TextMeshPro _errorText
    ::TMPro::TextMeshPro*& dyn__errorText();
    // Get instance field reference: private VROSC.UIButton _confirmButton
    ::VROSC::UIButton*& dyn__confirmButton();
    // Get instance field reference: private VROSC.UIButton _cancelButton
    ::VROSC::UIButton*& dyn__cancelButton();
    // Get instance field reference: private System.Action _onConfirmedCallback
    ::System::Action*& dyn__onConfirmedCallback();
    // Get instance field reference: private System.Action _onCanceledCallback
    ::System::Action*& dyn__onCanceledCallback();
    // private System.Void Awake()
    // Offset: 0x13374C8
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x13375EC
    void OnDestroy();
    // public System.Void SetActive(System.Boolean isActive, VROSC.ConfirmationUIPopup/VROSC.Data data, System.Action confirmCallback, System.Action cancelCallback)
    // Offset: 0x1337710
    void SetActive(bool isActive, ::VROSC::ConfirmationUIPopup::Data* data, ::System::Action* confirmCallback, ::System::Action* cancelCallback);
    // public System.Void ShowError(System.String errorMessage)
    // Offset: 0x13378E0
    void ShowError(::StringW errorMessage);
    // private System.Void EnableButtons(System.Boolean enable)
    // Offset: 0x133785C
    void EnableButtons(bool enable);
    // private System.Void ConfirmButtonPressed()
    // Offset: 0x1337920
    void ConfirmButtonPressed();
    // private System.Void CancelButtonPressed()
    // Offset: 0x133799C
    void CancelButtonPressed();
    // public System.Void .ctor()
    // Offset: 0x13379D0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConfirmationUIPopup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ConfirmationUIPopup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConfirmationUIPopup*, creationType>()));
    }
  }; // VROSC.ConfirmationUIPopup
  #pragma pack(pop)
  static check_size<sizeof(ConfirmationUIPopup), 72 + sizeof(::System::Action*)> __VROSC_ConfirmationUIPopupSizeCheck;
  static_assert(sizeof(ConfirmationUIPopup) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ConfirmationUIPopup::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ConfirmationUIPopup::*)()>(&VROSC::ConfirmationUIPopup::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ConfirmationUIPopup*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ConfirmationUIPopup::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ConfirmationUIPopup::*)()>(&VROSC::ConfirmationUIPopup::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ConfirmationUIPopup*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ConfirmationUIPopup::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ConfirmationUIPopup::*)(bool, ::VROSC::ConfirmationUIPopup::Data*, ::System::Action*, ::System::Action*)>(&VROSC::ConfirmationUIPopup::SetActive)> {
  static const MethodInfo* get() {
    static auto* isActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("VROSC", "ConfirmationUIPopup/Data")->byval_arg;
    static auto* confirmCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* cancelCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ConfirmationUIPopup*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isActive, data, confirmCallback, cancelCallback});
  }
};
// Writing MetadataGetter for method: VROSC::ConfirmationUIPopup::ShowError
// Il2CppName: ShowError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ConfirmationUIPopup::*)(::StringW)>(&VROSC::ConfirmationUIPopup::ShowError)> {
  static const MethodInfo* get() {
    static auto* errorMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ConfirmationUIPopup*), "ShowError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorMessage});
  }
};
// Writing MetadataGetter for method: VROSC::ConfirmationUIPopup::EnableButtons
// Il2CppName: EnableButtons
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ConfirmationUIPopup::*)(bool)>(&VROSC::ConfirmationUIPopup::EnableButtons)> {
  static const MethodInfo* get() {
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ConfirmationUIPopup*), "EnableButtons", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enable});
  }
};
// Writing MetadataGetter for method: VROSC::ConfirmationUIPopup::ConfirmButtonPressed
// Il2CppName: ConfirmButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ConfirmationUIPopup::*)()>(&VROSC::ConfirmationUIPopup::ConfirmButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ConfirmationUIPopup*), "ConfirmButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ConfirmationUIPopup::CancelButtonPressed
// Il2CppName: CancelButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ConfirmationUIPopup::*)()>(&VROSC::ConfirmationUIPopup::CancelButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ConfirmationUIPopup*), "CancelButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ConfirmationUIPopup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!