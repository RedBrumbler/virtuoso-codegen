// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VROSC.Note
#include "VROSC/Note.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIToggle
  class UIToggle;
  // Forward declaring type: ControllerInputNode
  class ControllerInputNode;
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: Scale
  struct Scale;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: VROSC::UI
namespace VROSC::UI {
  // Forward declaring type: UIScalePanelButtonColoring
  class UIScalePanelButtonColoring;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ScaleNoteButtonUI
  class ScaleNoteButtonUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ScaleNoteButtonUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScaleNoteButtonUI*, "VROSC", "ScaleNoteButtonUI");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ScaleNoteButtonUI
  // [TokenAttribute] Offset: FFFFFFFF
  class ScaleNoteButtonUI : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.Note _note
    // Size: 0x14
    // Offset: 0x18
    ::VROSC::Note note;
    // Field size check
    static_assert(sizeof(::VROSC::Note) == 0x14);
    // private VROSC.UIToggle _toggleButton
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UIToggle* toggleButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIToggle*) == 0x8);
    // private VROSC.UIToggle _startNoteToggle
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::UIToggle* startNoteToggle;
    // Field size check
    static_assert(sizeof(::VROSC::UIToggle*) == 0x8);
    // private VROSC.ControllerInputNode _inputNode
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::ControllerInputNode* inputNode;
    // Field size check
    static_assert(sizeof(::VROSC::ControllerInputNode*) == 0x8);
    // private TMPro.TextMeshPro _display
    // Size: 0x8
    // Offset: 0x38
    ::TMPro::TextMeshPro* display;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private VROSC.UI.UIScalePanelButtonColoring _backgroundColoring
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::UI::UIScalePanelButtonColoring* backgroundColoring;
    // Field size check
    static_assert(sizeof(::VROSC::UI::UIScalePanelButtonColoring*) == 0x8);
    // public System.Action`1<VROSC.Note> OnSetAsStartNode
    // Size: 0x8
    // Offset: 0x48
    ::System::Action_1<::VROSC::Note>* OnSetAsStartNode;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Note>*) == 0x8);
    // public System.Action`2<VROSC.Note,System.Boolean> OnSetNoteActive
    // Size: 0x8
    // Offset: 0x50
    ::System::Action_2<::VROSC::Note, bool>* OnSetNoteActive;
    // Field size check
    static_assert(sizeof(::System::Action_2<::VROSC::Note, bool>*) == 0x8);
    // public System.Action`2<VROSC.Note,System.Boolean> OnNoteHovered
    // Size: 0x8
    // Offset: 0x58
    ::System::Action_2<::VROSC::Note, bool>* OnNoteHovered;
    // Field size check
    static_assert(sizeof(::System::Action_2<::VROSC::Note, bool>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.Note _note
    ::VROSC::Note& dyn__note();
    // Get instance field reference: private VROSC.UIToggle _toggleButton
    ::VROSC::UIToggle*& dyn__toggleButton();
    // Get instance field reference: private VROSC.UIToggle _startNoteToggle
    ::VROSC::UIToggle*& dyn__startNoteToggle();
    // Get instance field reference: private VROSC.ControllerInputNode _inputNode
    ::VROSC::ControllerInputNode*& dyn__inputNode();
    // Get instance field reference: private TMPro.TextMeshPro _display
    ::TMPro::TextMeshPro*& dyn__display();
    // Get instance field reference: private VROSC.UI.UIScalePanelButtonColoring _backgroundColoring
    ::VROSC::UI::UIScalePanelButtonColoring*& dyn__backgroundColoring();
    // Get instance field reference: public System.Action`1<VROSC.Note> OnSetAsStartNode
    ::System::Action_1<::VROSC::Note>*& dyn_OnSetAsStartNode();
    // Get instance field reference: public System.Action`2<VROSC.Note,System.Boolean> OnSetNoteActive
    ::System::Action_2<::VROSC::Note, bool>*& dyn_OnSetNoteActive();
    // Get instance field reference: public System.Action`2<VROSC.Note,System.Boolean> OnNoteHovered
    ::System::Action_2<::VROSC::Note, bool>*& dyn_OnNoteHovered();
    // private System.Void Start()
    // Offset: 0x13DE450
    void Start();
    // public System.Void SetAxis(System.Int32 axis)
    // Offset: 0x13DE774
    void SetAxis(int axis);
    // private System.Void AssignStartNote(VROSC.InputDevice device, System.Boolean active)
    // Offset: 0x13DE790
    void AssignStartNote(::VROSC::InputDevice* device, bool active);
    // public System.Void SetToScale(VROSC.Scale scale, VROSC.Note startNote)
    // Offset: 0x13DE804
    void SetToScale(::VROSC::Scale scale, ::VROSC::Note startNote);
    // private System.Void Toggle(VROSC.InputDevice device, System.Boolean active)
    // Offset: 0x13DE914
    void Toggle(::VROSC::InputDevice* device, bool active);
    // protected System.Void OnDestroy()
    // Offset: 0x13DE994
    void OnDestroy();
    // private System.Void SetText()
    // Offset: 0x13DE998
    void SetText();
    // private System.Void IsHovering(System.Boolean hovering)
    // Offset: 0x13DEB08
    void IsHovering(bool hovering);
    // public System.Void .ctor()
    // Offset: 0x13DEB7C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScaleNoteButtonUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ScaleNoteButtonUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScaleNoteButtonUI*, creationType>()));
    }
  }; // VROSC.ScaleNoteButtonUI
  #pragma pack(pop)
  static check_size<sizeof(ScaleNoteButtonUI), 88 + sizeof(::System::Action_2<::VROSC::Note, bool>*)> __VROSC_ScaleNoteButtonUISizeCheck;
  static_assert(sizeof(ScaleNoteButtonUI) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ScaleNoteButtonUI::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ScaleNoteButtonUI::*)()>(&VROSC::ScaleNoteButtonUI::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScaleNoteButtonUI*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ScaleNoteButtonUI::SetAxis
// Il2CppName: SetAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ScaleNoteButtonUI::*)(int)>(&VROSC::ScaleNoteButtonUI::SetAxis)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScaleNoteButtonUI*), "SetAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis});
  }
};
// Writing MetadataGetter for method: VROSC::ScaleNoteButtonUI::AssignStartNote
// Il2CppName: AssignStartNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ScaleNoteButtonUI::*)(::VROSC::InputDevice*, bool)>(&VROSC::ScaleNoteButtonUI::AssignStartNote)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScaleNoteButtonUI*), "AssignStartNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, active});
  }
};
// Writing MetadataGetter for method: VROSC::ScaleNoteButtonUI::SetToScale
// Il2CppName: SetToScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ScaleNoteButtonUI::*)(::VROSC::Scale, ::VROSC::Note)>(&VROSC::ScaleNoteButtonUI::SetToScale)> {
  static const MethodInfo* get() {
    static auto* scale = &::il2cpp_utils::GetClassFromName("VROSC", "Scale")->byval_arg;
    static auto* startNote = &::il2cpp_utils::GetClassFromName("VROSC", "Note")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScaleNoteButtonUI*), "SetToScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scale, startNote});
  }
};
// Writing MetadataGetter for method: VROSC::ScaleNoteButtonUI::Toggle
// Il2CppName: Toggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ScaleNoteButtonUI::*)(::VROSC::InputDevice*, bool)>(&VROSC::ScaleNoteButtonUI::Toggle)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScaleNoteButtonUI*), "Toggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, active});
  }
};
// Writing MetadataGetter for method: VROSC::ScaleNoteButtonUI::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ScaleNoteButtonUI::*)()>(&VROSC::ScaleNoteButtonUI::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScaleNoteButtonUI*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ScaleNoteButtonUI::SetText
// Il2CppName: SetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ScaleNoteButtonUI::*)()>(&VROSC::ScaleNoteButtonUI::SetText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScaleNoteButtonUI*), "SetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ScaleNoteButtonUI::IsHovering
// Il2CppName: IsHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ScaleNoteButtonUI::*)(bool)>(&VROSC::ScaleNoteButtonUI::IsHovering)> {
  static const MethodInfo* get() {
    static auto* hovering = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScaleNoteButtonUI*), "IsHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hovering});
  }
};
// Writing MetadataGetter for method: VROSC::ScaleNoteButtonUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!