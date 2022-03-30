// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoginUIPopup
  class LoginUIPopup;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: UIInputField
  class UIInputField;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoginUIPopupPanelBase
  class LoginUIPopupPanelBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoginUIPopupPanelBase);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoginUIPopupPanelBase*, "VROSC", "LoginUIPopupPanelBase");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoginUIPopupPanelBase
  // [TokenAttribute] Offset: FFFFFFFF
  class LoginUIPopupPanelBase : public ::UnityEngine::MonoBehaviour {
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
    // protected TMPro.TextMeshPro _stateText
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshPro* stateText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // protected VROSC.LoginUIPopup _loginUIPopup
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::LoginUIPopup* loginUIPopup;
    // Field size check
    static_assert(sizeof(::VROSC::LoginUIPopup*) == 0x8);
    // protected UIInputField _selectedInputField
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::UIInputField* selectedInputField;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UIInputField*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected TMPro.TextMeshPro _stateText
    ::TMPro::TextMeshPro*& dyn__stateText();
    // Get instance field reference: protected VROSC.LoginUIPopup _loginUIPopup
    ::VROSC::LoginUIPopup*& dyn__loginUIPopup();
    // Get instance field reference: protected UIInputField _selectedInputField
    ::GlobalNamespace::UIInputField*& dyn__selectedInputField();
    // public System.Void Setup(VROSC.LoginUIPopup loginUIPopup)
    // Offset: 0x1393C4C
    void Setup(::VROSC::LoginUIPopup* loginUIPopup);
    // public System.Void Open(params System.Object[] parameters)
    // Offset: 0x13902E0
    void Open(::ArrayW<::Il2CppObject*> parameters);
    // public System.Void Close()
    // Offset: 0x1391BE8
    void Close();
    // protected System.Void EnableUI(System.Boolean enable)
    // Offset: 0x1393CC0
    void EnableUI(bool enable);
    // protected System.Void SetStateMessage(System.String message)
    // Offset: 0x138FB04
    void SetStateMessage(::StringW message);
    // protected System.Void InputFieldSelected(UIInputField inputField)
    // Offset: 0x1393CC4
    void InputFieldSelected(::GlobalNamespace::UIInputField* inputField);
    // public System.Void .ctor()
    // Offset: 0x138FDDC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoginUIPopupPanelBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoginUIPopupPanelBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoginUIPopupPanelBase*, creationType>()));
    }
  }; // VROSC.LoginUIPopupPanelBase
  #pragma pack(pop)
  static check_size<sizeof(LoginUIPopupPanelBase), 40 + sizeof(::GlobalNamespace::UIInputField*)> __VROSC_LoginUIPopupPanelBaseSizeCheck;
  static_assert(sizeof(LoginUIPopupPanelBase) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoginUIPopupPanelBase::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupPanelBase::*)(::VROSC::LoginUIPopup*)>(&VROSC::LoginUIPopupPanelBase::Setup)> {
  static const MethodInfo* get() {
    static auto* loginUIPopup = &::il2cpp_utils::GetClassFromName("VROSC", "LoginUIPopup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupPanelBase*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loginUIPopup});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupPanelBase::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupPanelBase::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::LoginUIPopupPanelBase::Open)> {
  static const MethodInfo* get() {
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupPanelBase*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupPanelBase::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupPanelBase::*)()>(&VROSC::LoginUIPopupPanelBase::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupPanelBase*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupPanelBase::EnableUI
// Il2CppName: EnableUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupPanelBase::*)(bool)>(&VROSC::LoginUIPopupPanelBase::EnableUI)> {
  static const MethodInfo* get() {
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupPanelBase*), "EnableUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enable});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupPanelBase::SetStateMessage
// Il2CppName: SetStateMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupPanelBase::*)(::StringW)>(&VROSC::LoginUIPopupPanelBase::SetStateMessage)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupPanelBase*), "SetStateMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupPanelBase::InputFieldSelected
// Il2CppName: InputFieldSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoginUIPopupPanelBase::*)(::GlobalNamespace::UIInputField*)>(&VROSC::LoginUIPopupPanelBase::InputFieldSelected)> {
  static const MethodInfo* get() {
    static auto* inputField = &::il2cpp_utils::GetClassFromName("", "UIInputField")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoginUIPopupPanelBase*), "InputFieldSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputField});
  }
};
// Writing MetadataGetter for method: VROSC::LoginUIPopupPanelBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!