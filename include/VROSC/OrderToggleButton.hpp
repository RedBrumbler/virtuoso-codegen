// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UIToggle
#include "VROSC/UIToggle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: ClickData
  class ClickData;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: OrderToggleButton
  class OrderToggleButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::OrderToggleButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OrderToggleButton*, "VROSC", "OrderToggleButton");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xD8
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.OrderToggleButton
  // [TokenAttribute] Offset: FFFFFFFF
  class OrderToggleButton : public ::VROSC::UIToggle {
    public:
    // Writing base type padding for base size: 0xB9 to desired offset: 0xC0
    char ___base_padding[0x7] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String[] _statesText
    // Size: 0x8
    // Offset: 0xC0
    ::ArrayW<::StringW> statesText;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.Int32 <CurrentState>k__BackingField
    // Size: 0x4
    // Offset: 0xC8
    int CurrentState;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: CurrentState and: OnStateChanged
    char __padding1[0x4] = {};
    // public System.Action`1<System.Int32> OnStateChanged
    // Size: 0x8
    // Offset: 0xD0
    ::System::Action_1<int>* OnStateChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<int>*) == 0x8);
    public:
    // Get instance field reference: private System.String[] _statesText
    ::ArrayW<::StringW>& dyn__statesText();
    // Get instance field reference: private System.Int32 <CurrentState>k__BackingField
    int& dyn_$CurrentState$k__BackingField();
    // Get instance field reference: public System.Action`1<System.Int32> OnStateChanged
    ::System::Action_1<int>*& dyn_OnStateChanged();
    // public System.Int32 get_CurrentState()
    // Offset: 0x91E0B8
    int get_CurrentState();
    // private System.Void set_CurrentState(System.Int32 value)
    // Offset: 0x91E0C0
    void set_CurrentState(int value);
    // public System.Void .ctor()
    // Offset: 0x91E254
    // Implemented from: VROSC.UIToggle
    // Base method: System.Void UIToggle::.ctor()
    // Base method: System.Void UIInteractable::.ctor()
    // Base method: System.Void Clickable::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OrderToggleButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::OrderToggleButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OrderToggleButton*, creationType>()));
    }
    // protected override System.Void Awake()
    // Offset: 0x91E0C8
    // Implemented from: VROSC.UIToggle
    // Base method: System.Void UIToggle::Awake()
    void Awake();
    // protected override System.Void ButtonWasPressed(VROSC.ClickData clickData)
    // Offset: 0x91E128
    // Implemented from: VROSC.UIToggle
    // Base method: System.Void UIToggle::ButtonWasPressed(VROSC.ClickData clickData)
    void ButtonWasPressed(::VROSC::ClickData* clickData);
  }; // VROSC.OrderToggleButton
  #pragma pack(pop)
  static check_size<sizeof(OrderToggleButton), 208 + sizeof(::System::Action_1<int>*)> __VROSC_OrderToggleButtonSizeCheck;
  static_assert(sizeof(OrderToggleButton) == 0xD8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::OrderToggleButton::get_CurrentState
// Il2CppName: get_CurrentState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::OrderToggleButton::*)()>(&VROSC::OrderToggleButton::get_CurrentState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::OrderToggleButton*), "get_CurrentState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::OrderToggleButton::set_CurrentState
// Il2CppName: set_CurrentState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::OrderToggleButton::*)(int)>(&VROSC::OrderToggleButton::set_CurrentState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::OrderToggleButton*), "set_CurrentState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::OrderToggleButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::OrderToggleButton::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::OrderToggleButton::*)()>(&VROSC::OrderToggleButton::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::OrderToggleButton*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::OrderToggleButton::ButtonWasPressed
// Il2CppName: ButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::OrderToggleButton::*)(::VROSC::ClickData*)>(&VROSC::OrderToggleButton::ButtonWasPressed)> {
  static const MethodInfo* get() {
    static auto* clickData = &::il2cpp_utils::GetClassFromName("VROSC", "ClickData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::OrderToggleButton*), "ButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickData});
  }
};
