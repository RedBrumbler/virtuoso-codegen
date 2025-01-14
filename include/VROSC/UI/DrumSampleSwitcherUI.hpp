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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: UISpinner
  class UISpinner;
  // Forward declaring type: ModularDrumsDataController
  class ModularDrumsDataController;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Completed forward declares
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Forward declaring type: DrumSampleSwitcherUI
  class DrumSampleSwitcherUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::DrumSampleSwitcherUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::DrumSampleSwitcherUI*, "VROSC.UI", "DrumSampleSwitcherUI");
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UI.DrumSampleSwitcherUI
  // [TokenAttribute] Offset: FFFFFFFF
  class DrumSampleSwitcherUI : public ::UnityEngine::MonoBehaviour {
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
    // public System.Action`2<System.Int32,System.Boolean> OnNewDataSet
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_2<int, bool>* OnNewDataSet;
    // Field size check
    static_assert(sizeof(::System::Action_2<int, bool>*) == 0x8);
    // private VROSC.UISpinner _spinner
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UISpinner* spinner;
    // Field size check
    static_assert(sizeof(::VROSC::UISpinner*) == 0x8);
    // private TMPro.TextMeshPro _currentName
    // Size: 0x8
    // Offset: 0x28
    ::TMPro::TextMeshPro* currentName;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private VROSC.ModularDrumsDataController _dataController
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::ModularDrumsDataController* dataController;
    // Field size check
    static_assert(sizeof(::VROSC::ModularDrumsDataController*) == 0x8);
    // private System.Int32 _empadId
    // Size: 0x4
    // Offset: 0x38
    int empadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _groupId
    // Size: 0x4
    // Offset: 0x3C
    int groupId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Action`2<System.Int32,System.Boolean> OnNewDataSet
    ::System::Action_2<int, bool>*& dyn_OnNewDataSet();
    // Get instance field reference: private VROSC.UISpinner _spinner
    ::VROSC::UISpinner*& dyn__spinner();
    // Get instance field reference: private TMPro.TextMeshPro _currentName
    ::TMPro::TextMeshPro*& dyn__currentName();
    // Get instance field reference: private VROSC.ModularDrumsDataController _dataController
    ::VROSC::ModularDrumsDataController*& dyn__dataController();
    // Get instance field reference: private System.Int32 _empadId
    int& dyn__empadId();
    // Get instance field reference: private System.Int32 _groupId
    int& dyn__groupId();
    // public VROSC.UISpinner get_Spinner()
    // Offset: 0x130CD54
    ::VROSC::UISpinner* get_Spinner();
    // private System.Void Awake()
    // Offset: 0x130CD5C
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x130CE30
    void OnDestroy();
    // public System.Void SetSample(System.Int32 index)
    // Offset: 0x130CF04
    void SetSample(int index);
    // public System.Void Setup(System.Int32 empadId, VROSC.ModularDrumsDataController dataController, System.Int32 groupId)
    // Offset: 0x130D3D8
    void Setup(int empadId, ::VROSC::ModularDrumsDataController* dataController, int groupId);
    // public System.Void SetActiveSample(System.Boolean select, System.Boolean preview)
    // Offset: 0x130CFB8
    void SetActiveSample(bool select, bool preview);
    // public System.Void IncrementSample()
    // Offset: 0x130D3F0
    void IncrementSample();
    // public System.Void .ctor()
    // Offset: 0x130D40C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DrumSampleSwitcherUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::DrumSampleSwitcherUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DrumSampleSwitcherUI*, creationType>()));
    }
  }; // VROSC.UI.DrumSampleSwitcherUI
  #pragma pack(pop)
  static check_size<sizeof(DrumSampleSwitcherUI), 60 + sizeof(int)> __VROSC_UI_DrumSampleSwitcherUISizeCheck;
  static_assert(sizeof(DrumSampleSwitcherUI) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::DrumSampleSwitcherUI::get_Spinner
// Il2CppName: get_Spinner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UISpinner* (VROSC::UI::DrumSampleSwitcherUI::*)()>(&VROSC::UI::DrumSampleSwitcherUI::get_Spinner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::DrumSampleSwitcherUI*), "get_Spinner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::DrumSampleSwitcherUI::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::DrumSampleSwitcherUI::*)()>(&VROSC::UI::DrumSampleSwitcherUI::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::DrumSampleSwitcherUI*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::DrumSampleSwitcherUI::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::DrumSampleSwitcherUI::*)()>(&VROSC::UI::DrumSampleSwitcherUI::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::DrumSampleSwitcherUI*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::DrumSampleSwitcherUI::SetSample
// Il2CppName: SetSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::DrumSampleSwitcherUI::*)(int)>(&VROSC::UI::DrumSampleSwitcherUI::SetSample)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::DrumSampleSwitcherUI*), "SetSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: VROSC::UI::DrumSampleSwitcherUI::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::DrumSampleSwitcherUI::*)(int, ::VROSC::ModularDrumsDataController*, int)>(&VROSC::UI::DrumSampleSwitcherUI::Setup)> {
  static const MethodInfo* get() {
    static auto* empadId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dataController = &::il2cpp_utils::GetClassFromName("VROSC", "ModularDrumsDataController")->byval_arg;
    static auto* groupId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::DrumSampleSwitcherUI*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{empadId, dataController, groupId});
  }
};
// Writing MetadataGetter for method: VROSC::UI::DrumSampleSwitcherUI::SetActiveSample
// Il2CppName: SetActiveSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::DrumSampleSwitcherUI::*)(bool, bool)>(&VROSC::UI::DrumSampleSwitcherUI::SetActiveSample)> {
  static const MethodInfo* get() {
    static auto* select = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* preview = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::DrumSampleSwitcherUI*), "SetActiveSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{select, preview});
  }
};
// Writing MetadataGetter for method: VROSC::UI::DrumSampleSwitcherUI::IncrementSample
// Il2CppName: IncrementSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::DrumSampleSwitcherUI::*)()>(&VROSC::UI::DrumSampleSwitcherUI::IncrementSample)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::DrumSampleSwitcherUI*), "IncrementSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::DrumSampleSwitcherUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
