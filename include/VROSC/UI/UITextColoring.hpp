// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UI.UIInteractableColoring
#include "VROSC/UI/UIInteractableColoring.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: VROSC::UI
namespace VROSC::UI {
  // Forward declaring type: UITextSetting
  class UITextSetting;
}
// Completed forward declares
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Forward declaring type: UITextColoring
  class UITextColoring;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::UITextColoring);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UITextColoring*, "VROSC.UI", "UITextColoring");
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // WARNING Size may be invalid!
  // Autogenerated type: VROSC.UI.UITextColoring
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class UITextColoring : public ::VROSC::UI::UIInteractableColoring {
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
    // private TMPro.TextMeshPro _textMeshPro
    // Size: 0x8
    // Offset: 0x48
    ::TMPro::TextMeshPro* textMeshPro;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private UnityEngine.Color _colorFromScheme
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color colorFromScheme;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: private TMPro.TextMeshPro _textMeshPro
    ::TMPro::TextMeshPro*& dyn__textMeshPro();
    // Get instance field reference: private UnityEngine.Color _colorFromScheme
    ::UnityEngine::Color& dyn__colorFromScheme();
    // private System.Void Awake()
    // Offset: 0x13A5168
    void Awake();
    // private System.Void SetTextSettings()
    // Offset: 0x13A516C
    void SetTextSettings();
    // private System.Void RemoveDumbMargins()
    // Offset: 0x13A538C
    void RemoveDumbMargins();
    // private System.Void OnValidate()
    // Offset: 0x13A5520
    void OnValidate();
    // public System.Void SetData(VROSC.UI.UITextSetting setting)
    // Offset: 0x13A564C
    void SetData(::VROSC::UI::UITextSetting* setting);
    // public System.Void .ctor()
    // Offset: 0x13A5654
    // Implemented from: VROSC.UI.UIInteractableColoring
    // Base method: System.Void UIInteractableColoring::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UITextColoring* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::UITextColoring::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UITextColoring*, creationType>()));
    }
    // public override System.Void UpdateColor()
    // Offset: 0x13A542C
    // Implemented from: VROSC.UI.UIInteractableColoring
    // Base method: System.Void UIInteractableColoring::UpdateColor()
    void UpdateColor();
    // public override System.Void ApplyColor(UnityEngine.Color color)
    // Offset: 0x13A5454
    // Implemented from: VROSC.UI.UIInteractableColoring
    // Base method: System.Void UIInteractableColoring::ApplyColor(UnityEngine.Color color)
    void ApplyColor(::UnityEngine::Color color);
  }; // VROSC.UI.UITextColoring
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::UITextColoring::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UITextColoring::*)()>(&VROSC::UI::UITextColoring::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UITextColoring*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UITextColoring::SetTextSettings
// Il2CppName: SetTextSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UITextColoring::*)()>(&VROSC::UI::UITextColoring::SetTextSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UITextColoring*), "SetTextSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UITextColoring::RemoveDumbMargins
// Il2CppName: RemoveDumbMargins
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UITextColoring::*)()>(&VROSC::UI::UITextColoring::RemoveDumbMargins)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UITextColoring*), "RemoveDumbMargins", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UITextColoring::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UITextColoring::*)()>(&VROSC::UI::UITextColoring::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UITextColoring*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UITextColoring::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UITextColoring::*)(::VROSC::UI::UITextSetting*)>(&VROSC::UI::UITextColoring::SetData)> {
  static const MethodInfo* get() {
    static auto* setting = &::il2cpp_utils::GetClassFromName("VROSC.UI", "UITextSetting")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UITextColoring*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{setting});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UITextColoring::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::UI::UITextColoring::UpdateColor
// Il2CppName: UpdateColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UITextColoring::*)()>(&VROSC::UI::UITextColoring::UpdateColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UITextColoring*), "UpdateColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UITextColoring::ApplyColor
// Il2CppName: ApplyColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UITextColoring::*)(::UnityEngine::Color)>(&VROSC::UI::UITextColoring::ApplyColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UITextColoring*), "ApplyColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
