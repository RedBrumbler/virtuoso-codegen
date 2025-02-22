// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIButton
  class UIButton;
  // Forward declaring type: TutorialBlinkingUIElement
  class TutorialBlinkingUIElement;
  // Forward declaring type: Grabable
  class Grabable;
  // Forward declaring type: TutorialStep
  class TutorialStep;
  // Forward declaring type: TutorialEvent
  struct TutorialEvent;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: TutorialPanel
  class TutorialPanel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TutorialPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialPanel*, "VROSC", "TutorialPanel");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TutorialPanel
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialPanel : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.UIButton _closeButton
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::UIButton* closeButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private VROSC.UIButton _closeOKButton
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UIButton* closeOKButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private VROSC.UIButton _closeCancelButton
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::UIButton* closeCancelButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private UnityEngine.GameObject _closeWarningPanel
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* closeWarningPanel;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private VROSC.UIButton _replayButton
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::UIButton* replayButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private VROSC.UIButton _continueButton
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::UIButton* continueButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private TMPro.TextMeshPro _instructionText
    // Size: 0x8
    // Offset: 0x48
    ::TMPro::TextMeshPro* instructionText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private VROSC.TutorialBlinkingUIElement _blinkContinue
    // Size: 0x8
    // Offset: 0x50
    ::VROSC::TutorialBlinkingUIElement* blinkContinue;
    // Field size check
    static_assert(sizeof(::VROSC::TutorialBlinkingUIElement*) == 0x8);
    // private UnityEngine.Color _conditionTextIncompleteColor
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Color conditionTextIncompleteColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _conditionTextCompleteColor
    // Size: 0x10
    // Offset: 0x68
    ::UnityEngine::Color conditionTextCompleteColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.GameObject _incompleteIcon
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::GameObject* incompleteIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _completeIcon
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::GameObject* completeIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private VROSC.Grabable[] _panelGrabables
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::VROSC::Grabable*> panelGrabables;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::Grabable*>) == 0x8);
    // private VROSC.TutorialBlinkingUIElement[] _panelBlinkers
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<::VROSC::TutorialBlinkingUIElement*> panelBlinkers;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::TutorialBlinkingUIElement*>) == 0x8);
    // private VROSC.TutorialStep _currentTutorialStep
    // Size: 0x8
    // Offset: 0x98
    ::VROSC::TutorialStep* currentTutorialStep;
    // Field size check
    static_assert(sizeof(::VROSC::TutorialStep*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.UIButton _closeButton
    ::VROSC::UIButton*& dyn__closeButton();
    // Get instance field reference: private VROSC.UIButton _closeOKButton
    ::VROSC::UIButton*& dyn__closeOKButton();
    // Get instance field reference: private VROSC.UIButton _closeCancelButton
    ::VROSC::UIButton*& dyn__closeCancelButton();
    // Get instance field reference: private UnityEngine.GameObject _closeWarningPanel
    ::UnityEngine::GameObject*& dyn__closeWarningPanel();
    // Get instance field reference: private VROSC.UIButton _replayButton
    ::VROSC::UIButton*& dyn__replayButton();
    // Get instance field reference: private VROSC.UIButton _continueButton
    ::VROSC::UIButton*& dyn__continueButton();
    // Get instance field reference: private TMPro.TextMeshPro _instructionText
    ::TMPro::TextMeshPro*& dyn__instructionText();
    // Get instance field reference: private VROSC.TutorialBlinkingUIElement _blinkContinue
    ::VROSC::TutorialBlinkingUIElement*& dyn__blinkContinue();
    // Get instance field reference: private UnityEngine.Color _conditionTextIncompleteColor
    ::UnityEngine::Color& dyn__conditionTextIncompleteColor();
    // Get instance field reference: private UnityEngine.Color _conditionTextCompleteColor
    ::UnityEngine::Color& dyn__conditionTextCompleteColor();
    // Get instance field reference: private UnityEngine.GameObject _incompleteIcon
    ::UnityEngine::GameObject*& dyn__incompleteIcon();
    // Get instance field reference: private UnityEngine.GameObject _completeIcon
    ::UnityEngine::GameObject*& dyn__completeIcon();
    // Get instance field reference: private VROSC.Grabable[] _panelGrabables
    ::ArrayW<::VROSC::Grabable*>& dyn__panelGrabables();
    // Get instance field reference: private VROSC.TutorialBlinkingUIElement[] _panelBlinkers
    ::ArrayW<::VROSC::TutorialBlinkingUIElement*>& dyn__panelBlinkers();
    // Get instance field reference: private VROSC.TutorialStep _currentTutorialStep
    ::VROSC::TutorialStep*& dyn__currentTutorialStep();
    // public System.Void StartTutorial()
    // Offset: 0x14084C8
    void StartTutorial();
    // public System.Void TutorialStopped()
    // Offset: 0x1408940
    void TutorialStopped();
    // private System.Void CloseButtonPressed()
    // Offset: 0x1409200
    void CloseButtonPressed();
    // private System.Void CloseOKButtonPressed()
    // Offset: 0x1409220
    void CloseOKButtonPressed();
    // private System.Void CloseCancelButtonPressed()
    // Offset: 0x1409278
    void CloseCancelButtonPressed();
    // private System.Void ReplayButtonPressed()
    // Offset: 0x1409298
    void ReplayButtonPressed();
    // private System.Void ContinueButtonPressed()
    // Offset: 0x14092B8
    void ContinueButtonPressed();
    // public System.Void ActivateTutorialStep(VROSC.TutorialStep tutorialStep)
    // Offset: 0x1408DF4
    void ActivateTutorialStep(::VROSC::TutorialStep* tutorialStep);
    // private System.Void TimelineReachedEnd()
    // Offset: 0x1409310
    void TimelineReachedEnd();
    // private System.Void TutorialEventTriggered(VROSC.TutorialEvent tutorialEvent)
    // Offset: 0x14093E8
    void TutorialEventTriggered(::VROSC::TutorialEvent tutorialEvent);
    // private System.Void TutorialPanelGrabbed(System.Boolean grabbed)
    // Offset: 0x14096A8
    void TutorialPanelGrabbed(bool grabbed);
    // private System.Void RevealInstruction()
    // Offset: 0x140960C
    void RevealInstruction();
    // private System.Void TutorialConditionsCompleted()
    // Offset: 0x1409B48
    void TutorialConditionsCompleted();
    // private System.Void DisplayInstructionText(System.Boolean conditionComplete)
    // Offset: 0x1409898
    void DisplayInstructionText(bool conditionComplete);
    // public System.Void .ctor()
    // Offset: 0x1409CB0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialPanel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TutorialPanel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialPanel*, creationType>()));
    }
  }; // VROSC.TutorialPanel
  #pragma pack(pop)
  static check_size<sizeof(TutorialPanel), 152 + sizeof(::VROSC::TutorialStep*)> __VROSC_TutorialPanelSizeCheck;
  static_assert(sizeof(TutorialPanel) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TutorialPanel::StartTutorial
// Il2CppName: StartTutorial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialPanel::*)()>(&VROSC::TutorialPanel::StartTutorial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialPanel*), "StartTutorial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialPanel::TutorialStopped
// Il2CppName: TutorialStopped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialPanel::*)()>(&VROSC::TutorialPanel::TutorialStopped)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialPanel*), "TutorialStopped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialPanel::CloseButtonPressed
// Il2CppName: CloseButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialPanel::*)()>(&VROSC::TutorialPanel::CloseButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialPanel*), "CloseButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialPanel::CloseOKButtonPressed
// Il2CppName: CloseOKButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialPanel::*)()>(&VROSC::TutorialPanel::CloseOKButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialPanel*), "CloseOKButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialPanel::CloseCancelButtonPressed
// Il2CppName: CloseCancelButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialPanel::*)()>(&VROSC::TutorialPanel::CloseCancelButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialPanel*), "CloseCancelButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialPanel::ReplayButtonPressed
// Il2CppName: ReplayButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialPanel::*)()>(&VROSC::TutorialPanel::ReplayButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialPanel*), "ReplayButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialPanel::ContinueButtonPressed
// Il2CppName: ContinueButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialPanel::*)()>(&VROSC::TutorialPanel::ContinueButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialPanel*), "ContinueButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialPanel::ActivateTutorialStep
// Il2CppName: ActivateTutorialStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialPanel::*)(::VROSC::TutorialStep*)>(&VROSC::TutorialPanel::ActivateTutorialStep)> {
  static const MethodInfo* get() {
    static auto* tutorialStep = &::il2cpp_utils::GetClassFromName("VROSC", "TutorialStep")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialPanel*), "ActivateTutorialStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tutorialStep});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialPanel::TimelineReachedEnd
// Il2CppName: TimelineReachedEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialPanel::*)()>(&VROSC::TutorialPanel::TimelineReachedEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialPanel*), "TimelineReachedEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialPanel::TutorialEventTriggered
// Il2CppName: TutorialEventTriggered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialPanel::*)(::VROSC::TutorialEvent)>(&VROSC::TutorialPanel::TutorialEventTriggered)> {
  static const MethodInfo* get() {
    static auto* tutorialEvent = &::il2cpp_utils::GetClassFromName("VROSC", "TutorialEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialPanel*), "TutorialEventTriggered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tutorialEvent});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialPanel::TutorialPanelGrabbed
// Il2CppName: TutorialPanelGrabbed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialPanel::*)(bool)>(&VROSC::TutorialPanel::TutorialPanelGrabbed)> {
  static const MethodInfo* get() {
    static auto* grabbed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialPanel*), "TutorialPanelGrabbed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabbed});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialPanel::RevealInstruction
// Il2CppName: RevealInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialPanel::*)()>(&VROSC::TutorialPanel::RevealInstruction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialPanel*), "RevealInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialPanel::TutorialConditionsCompleted
// Il2CppName: TutorialConditionsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialPanel::*)()>(&VROSC::TutorialPanel::TutorialConditionsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialPanel*), "TutorialConditionsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialPanel::DisplayInstructionText
// Il2CppName: DisplayInstructionText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialPanel::*)(bool)>(&VROSC::TutorialPanel::DisplayInstructionText)> {
  static const MethodInfo* get() {
    static auto* conditionComplete = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialPanel*), "DisplayInstructionText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{conditionComplete});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialPanel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
