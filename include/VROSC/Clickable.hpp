// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.Interactable
#include "VROSC/Interactable.hpp"
// Including type: VROSC.TriggerButton
#include "VROSC/TriggerButton.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
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
  // Forward declaring type: Clickable
  class Clickable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::Clickable);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Clickable*, "VROSC", "Clickable");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.Clickable
  // [TokenAttribute] Offset: FFFFFFFF
  class Clickable : public ::VROSC::Interactable {
    public:
    // Writing base type padding for base size: 0x69 to desired offset: 0x6C
    char ___base_padding[0x3] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [BitMaskAttribute] Offset: 0x66E014
    // private VROSC.TriggerButton _reactsTo
    // Size: 0x4
    // Offset: 0x6C
    ::VROSC::TriggerButton reactsTo;
    // Field size check
    static_assert(sizeof(::VROSC::TriggerButton) == 0x4);
    // private System.Boolean <IsPressed>k__BackingField
    // Size: 0x1
    // Offset: 0x70
    bool IsPressed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsPressed and: OnPressed
    char __padding1[0x7] = {};
    // public System.Action`2<VROSC.ClickData,System.Boolean> OnPressed
    // Size: 0x8
    // Offset: 0x78
    ::System::Action_2<::VROSC::ClickData*, bool>* OnPressed;
    // Field size check
    static_assert(sizeof(::System::Action_2<::VROSC::ClickData*, bool>*) == 0x8);
    // public System.Action`1<VROSC.ClickData> OnClick
    // Size: 0x8
    // Offset: 0x80
    ::System::Action_1<::VROSC::ClickData*>* OnClick;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::ClickData*>*) == 0x8);
    public:
    // Get instance field reference: private VROSC.TriggerButton _reactsTo
    ::VROSC::TriggerButton& dyn__reactsTo();
    // Get instance field reference: private System.Boolean <IsPressed>k__BackingField
    bool& dyn_$IsPressed$k__BackingField();
    // Get instance field reference: public System.Action`2<VROSC.ClickData,System.Boolean> OnPressed
    ::System::Action_2<::VROSC::ClickData*, bool>*& dyn_OnPressed();
    // Get instance field reference: public System.Action`1<VROSC.ClickData> OnClick
    ::System::Action_1<::VROSC::ClickData*>*& dyn_OnClick();
    // public System.Boolean get_InteractionStopsLaser()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_InteractionStopsLaser();
    // public System.Boolean get_IsPressed()
    // Offset: 0x1330F80
    bool get_IsPressed();
    // private System.Void set_IsPressed(System.Boolean value)
    // Offset: 0x1330F74
    void set_IsPressed(bool value);
    // public System.Void PressBegin(VROSC.ClickData clickData)
    // Offset: 0x1330F88
    void PressBegin(::VROSC::ClickData* clickData);
    // public System.Void PressEnd(VROSC.ClickData clickData)
    // Offset: 0x1331070
    void PressEnd(::VROSC::ClickData* clickData);
    // protected System.Void .ctor()
    // Offset: 0x1331134
    // Implemented from: VROSC.Interactable
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Clickable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::Clickable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Clickable*, creationType>()));
    }
  }; // VROSC.Clickable
  #pragma pack(pop)
  static check_size<sizeof(Clickable), 128 + sizeof(::System::Action_1<::VROSC::ClickData*>*)> __VROSC_ClickableSizeCheck;
  static_assert(sizeof(Clickable) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::Clickable::get_InteractionStopsLaser
// Il2CppName: get_InteractionStopsLaser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::Clickable::*)()>(&VROSC::Clickable::get_InteractionStopsLaser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Clickable*), "get_InteractionStopsLaser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Clickable::get_IsPressed
// Il2CppName: get_IsPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::Clickable::*)()>(&VROSC::Clickable::get_IsPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Clickable*), "get_IsPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Clickable::set_IsPressed
// Il2CppName: set_IsPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Clickable::*)(bool)>(&VROSC::Clickable::set_IsPressed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Clickable*), "set_IsPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::Clickable::PressBegin
// Il2CppName: PressBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Clickable::*)(::VROSC::ClickData*)>(&VROSC::Clickable::PressBegin)> {
  static const MethodInfo* get() {
    static auto* clickData = &::il2cpp_utils::GetClassFromName("VROSC", "ClickData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Clickable*), "PressBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickData});
  }
};
// Writing MetadataGetter for method: VROSC::Clickable::PressEnd
// Il2CppName: PressEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Clickable::*)(::VROSC::ClickData*)>(&VROSC::Clickable::PressEnd)> {
  static const MethodInfo* get() {
    static auto* clickData = &::il2cpp_utils::GetClassFromName("VROSC", "ClickData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Clickable*), "PressEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickData});
  }
};
// Writing MetadataGetter for method: VROSC::Clickable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
