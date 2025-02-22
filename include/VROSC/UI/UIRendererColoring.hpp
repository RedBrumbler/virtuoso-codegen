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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Forward declaring type: UIRendererColoring
  class UIRendererColoring;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::UIRendererColoring);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIRendererColoring*, "VROSC.UI", "UIRendererColoring");
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // WARNING Size may be invalid!
  // Autogenerated type: VROSC.UI.UIRendererColoring
  // [TokenAttribute] Offset: FFFFFFFF
  class UIRendererColoring : public ::VROSC::UI::UIInteractableColoring {
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
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // protected System.Boolean _hideWhenNotHovering
    // Size: 0x1
    // Offset: 0x50
    bool hideWhenNotHovering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UnityEngine.MaterialPropertyBlock _materialBlock
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::MaterialPropertyBlock* materialBlock;
    // Field size check
    static_assert(sizeof(::UnityEngine::MaterialPropertyBlock*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Renderer _renderer
    ::UnityEngine::Renderer*& dyn__renderer();
    // Get instance field reference: protected System.Boolean _hideWhenNotHovering
    bool& dyn__hideWhenNotHovering();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock _materialBlock
    ::UnityEngine::MaterialPropertyBlock*& dyn__materialBlock();
    // private System.Void Awake()
    // Offset: 0x139F4B8
    void Awake();
    // private System.Void OnValidate()
    // Offset: 0x139F6B4
    void OnValidate();
    // private System.Void OnDestroy()
    // Offset: 0x139F888
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x139F8A8
    // Implemented from: VROSC.UI.UIInteractableColoring
    // Base method: System.Void UIInteractableColoring::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIRendererColoring* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::UIRendererColoring::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIRendererColoring*, creationType>()));
    }
    // public override System.Void UpdateColor()
    // Offset: 0x139F528
    // Implemented from: VROSC.UI.UIInteractableColoring
    // Base method: System.Void UIInteractableColoring::UpdateColor()
    void UpdateColor();
  }; // VROSC.UI.UIRendererColoring
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::UIRendererColoring::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIRendererColoring::*)()>(&VROSC::UI::UIRendererColoring::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIRendererColoring*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIRendererColoring::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIRendererColoring::*)()>(&VROSC::UI::UIRendererColoring::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIRendererColoring*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIRendererColoring::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIRendererColoring::*)()>(&VROSC::UI::UIRendererColoring::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIRendererColoring*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIRendererColoring::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::UI::UIRendererColoring::UpdateColor
// Il2CppName: UpdateColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIRendererColoring::*)()>(&VROSC::UI::UIRendererColoring::UpdateColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIRendererColoring*), "UpdateColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
