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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ControllerHintUI
  class ControllerHintUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ControllerHintUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ControllerHintUI*, "VROSC", "ControllerHintUI");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ControllerHintUI
  // [TokenAttribute] Offset: FFFFFFFF
  class ControllerHintUI : public ::UnityEngine::MonoBehaviour {
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
    // private TMPro.TextMeshPro _hintLabelText
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshPro* hintLabelText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private UnityEngine.RectTransform _hintBackground
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::RectTransform* hintBackground;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private System.Single _textpaddingX
    // Size: 0x4
    // Offset: 0x28
    float textpaddingX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _textpaddingY
    // Size: 0x4
    // Offset: 0x2C
    float textpaddingY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.String _text
    // Size: 0x8
    // Offset: 0x30
    ::StringW text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshPro _hintLabelText
    ::TMPro::TextMeshPro*& dyn__hintLabelText();
    // Get instance field reference: private UnityEngine.RectTransform _hintBackground
    ::UnityEngine::RectTransform*& dyn__hintBackground();
    // Get instance field reference: private System.Single _textpaddingX
    float& dyn__textpaddingX();
    // Get instance field reference: private System.Single _textpaddingY
    float& dyn__textpaddingY();
    // Get instance field reference: private System.String _text
    ::StringW& dyn__text();
    // public System.Void SetTooltipActive(System.Boolean active, System.String tooltip)
    // Offset: 0x1338C74
    void SetTooltipActive(bool active, ::StringW tooltip);
    // public System.Void .ctor()
    // Offset: 0x13390EC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ControllerHintUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ControllerHintUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ControllerHintUI*, creationType>()));
    }
  }; // VROSC.ControllerHintUI
  #pragma pack(pop)
  static check_size<sizeof(ControllerHintUI), 48 + sizeof(::StringW)> __VROSC_ControllerHintUISizeCheck;
  static_assert(sizeof(ControllerHintUI) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ControllerHintUI::SetTooltipActive
// Il2CppName: SetTooltipActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerHintUI::*)(bool, ::StringW)>(&VROSC::ControllerHintUI::SetTooltipActive)> {
  static const MethodInfo* get() {
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* tooltip = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerHintUI*), "SetTooltipActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{active, tooltip});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerHintUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
