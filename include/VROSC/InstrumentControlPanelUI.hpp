// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.ControlPanelUI
#include "VROSC/ControlPanelUI.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: QuantizeUI
  class QuantizeUI;
  // Forward declaring type: WidgetController
  class WidgetController;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: InstrumentControlPanelUI
  class InstrumentControlPanelUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::InstrumentControlPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentControlPanelUI*, "VROSC", "InstrumentControlPanelUI");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.InstrumentControlPanelUI
  // [TokenAttribute] Offset: FFFFFFFF
  class InstrumentControlPanelUI : public ::VROSC::ControlPanelUI {
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
    // [HeaderAttribute] Offset: 0x674C18
    // private VROSC.QuantizeUI _quantizeUI
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::QuantizeUI* quantizeUI;
    // Field size check
    static_assert(sizeof(::VROSC::QuantizeUI*) == 0x8);
    public:
    // Get instance field reference: private VROSC.QuantizeUI _quantizeUI
    ::VROSC::QuantizeUI*& dyn__quantizeUI();
    // public System.Void .ctor()
    // Offset: 0x13837AC
    // Implemented from: VROSC.ControlPanelUI
    // Base method: System.Void ControlPanelUI::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstrumentControlPanelUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::InstrumentControlPanelUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstrumentControlPanelUI*, creationType>()));
    }
    // public override System.Void Setup(VROSC.WidgetController widgetController)
    // Offset: 0x13836C8
    // Implemented from: VROSC.ControlPanelUI
    // Base method: System.Void ControlPanelUI::Setup(VROSC.WidgetController widgetController)
    void Setup(::VROSC::WidgetController* widgetController);
  }; // VROSC.InstrumentControlPanelUI
  #pragma pack(pop)
  static check_size<sizeof(InstrumentControlPanelUI), 72 + sizeof(::VROSC::QuantizeUI*)> __VROSC_InstrumentControlPanelUISizeCheck;
  static_assert(sizeof(InstrumentControlPanelUI) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::InstrumentControlPanelUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::InstrumentControlPanelUI::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InstrumentControlPanelUI::*)(::VROSC::WidgetController*)>(&VROSC::InstrumentControlPanelUI::Setup)> {
  static const MethodInfo* get() {
    static auto* widgetController = &::il2cpp_utils::GetClassFromName("VROSC", "WidgetController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InstrumentControlPanelUI*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{widgetController});
  }
};
