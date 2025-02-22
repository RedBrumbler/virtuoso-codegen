// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.ToolController
#include "VROSC/ToolController.hpp"
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
  // Forward declaring type: TapeRecorder
  class TapeRecorder;
  // Forward declaring type: ControlPanelUI
  class ControlPanelUI;
  // Forward declaring type: InfoPanel
  class InfoPanel;
  // Forward declaring type: UserDataControllers
  class UserDataControllers;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: TapeRecorderController
  class TapeRecorderController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TapeRecorderController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorderController*, "VROSC", "TapeRecorderController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TapeRecorderController
  // [TokenAttribute] Offset: FFFFFFFF
  class TapeRecorderController : public ::VROSC::ToolController {
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
    // Offset: 0x70
    ::VROSC::UIButton* closeButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private VROSC.TapeRecorder _tapeRecorder
    // Size: 0x8
    // Offset: 0x78
    ::VROSC::TapeRecorder* tapeRecorder;
    // Field size check
    static_assert(sizeof(::VROSC::TapeRecorder*) == 0x8);
    // protected VROSC.ControlPanelUI _controlPanelUI
    // Size: 0x8
    // Offset: 0x80
    ::VROSC::ControlPanelUI* controlPanelUI;
    // Field size check
    static_assert(sizeof(::VROSC::ControlPanelUI*) == 0x8);
    // protected VROSC.InfoPanel _infoPanel
    // Size: 0x8
    // Offset: 0x88
    ::VROSC::InfoPanel* infoPanel;
    // Field size check
    static_assert(sizeof(::VROSC::InfoPanel*) == 0x8);
    public:
    // Get instance field reference: private VROSC.UIButton _closeButton
    ::VROSC::UIButton*& dyn__closeButton();
    // Get instance field reference: private VROSC.TapeRecorder _tapeRecorder
    ::VROSC::TapeRecorder*& dyn__tapeRecorder();
    // Get instance field reference: protected VROSC.ControlPanelUI _controlPanelUI
    ::VROSC::ControlPanelUI*& dyn__controlPanelUI();
    // Get instance field reference: protected VROSC.InfoPanel _infoPanel
    ::VROSC::InfoPanel*& dyn__infoPanel();
    // private System.Void CloseButtonPressed()
    // Offset: 0x13FAC0C
    void CloseButtonPressed();
    // public System.Void .ctor()
    // Offset: 0x13FAC18
    // Implemented from: VROSC.ToolController
    // Base method: System.Void ToolController::.ctor()
    // Base method: System.Void WidgetController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TapeRecorderController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TapeRecorderController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TapeRecorderController*, creationType>()));
    }
    // public override System.Void Setup()
    // Offset: 0x13FA7C4
    // Implemented from: VROSC.ToolController
    // Base method: System.Void ToolController::Setup()
    void Setup();
    // protected override System.Void ResetWidget()
    // Offset: 0x13FA984
    // Implemented from: VROSC.WidgetController
    // Base method: System.Void WidgetController::ResetWidget()
    void ResetWidget();
    // protected override System.Void UserDataLoaded(VROSC.UserDataControllers user)
    // Offset: 0x13FA9EC
    // Implemented from: VROSC.ToolController
    // Base method: System.Void ToolController::UserDataLoaded(VROSC.UserDataControllers user)
    void UserDataLoaded(::VROSC::UserDataControllers* user);
  }; // VROSC.TapeRecorderController
  #pragma pack(pop)
  static check_size<sizeof(TapeRecorderController), 136 + sizeof(::VROSC::InfoPanel*)> __VROSC_TapeRecorderControllerSizeCheck;
  static_assert(sizeof(TapeRecorderController) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TapeRecorderController::CloseButtonPressed
// Il2CppName: CloseButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderController::*)()>(&VROSC::TapeRecorderController::CloseButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderController*), "CloseButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::TapeRecorderController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderController::*)()>(&VROSC::TapeRecorderController::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderController::ResetWidget
// Il2CppName: ResetWidget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderController::*)()>(&VROSC::TapeRecorderController::ResetWidget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderController*), "ResetWidget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderController::UserDataLoaded
// Il2CppName: UserDataLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderController::*)(::VROSC::UserDataControllers*)>(&VROSC::TapeRecorderController::UserDataLoaded)> {
  static const MethodInfo* get() {
    static auto* user = &::il2cpp_utils::GetClassFromName("VROSC", "UserDataControllers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderController*), "UserDataLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{user});
  }
};
