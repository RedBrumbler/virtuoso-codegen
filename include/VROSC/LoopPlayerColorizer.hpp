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
// Forward declaring namespace: VROSC::UI
namespace VROSC::UI {
  // Forward declaring type: UIColorGetter
  class UIColorGetter;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: AdjustableMesh
  class AdjustableMesh;
  // Forward declaring type: UIColorPicker
  class UIColorPicker;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlayerColorizer
  class LoopPlayerColorizer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopPlayerColorizer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerColorizer*, "VROSC", "LoopPlayerColorizer");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopPlayerColorizer
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 66960C
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class LoopPlayerColorizer : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.UI.UIColorGetter _baseColor
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::UI::UIColorGetter* baseColor;
    // Field size check
    static_assert(sizeof(::VROSC::UI::UIColorGetter*) == 0x8);
    // private VROSC.UI.UIColorGetter _mutedColor
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UI::UIColorGetter* mutedColor;
    // Field size check
    static_assert(sizeof(::VROSC::UI::UIColorGetter*) == 0x8);
    // private VROSC.UI.UIColorGetter[] _loopPlayerColors
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::VROSC::UI::UIColorGetter*> loopPlayerColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::UI::UIColorGetter*>) == 0x8);
    // private VROSC.AdjustableMesh[] _adjustableMeshes
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::VROSC::AdjustableMesh*> adjustableMeshes;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::AdjustableMesh*>) == 0x8);
    // private VROSC.UIColorPicker _colorPicker
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::UIColorPicker* colorPicker;
    // Field size check
    static_assert(sizeof(::VROSC::UIColorPicker*) == 0x8);
    // private UnityEngine.Color <CurrentColor>k__BackingField
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color CurrentColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Action`1<UnityEngine.Color> OnColorChanged
    // Size: 0x8
    // Offset: 0x50
    ::System::Action_1<::UnityEngine::Color>* OnColorChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Color>*) == 0x8);
    // private UnityEngine.Color _muteColor
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Color muteColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean _isMuted
    // Size: 0x1
    // Offset: 0x68
    bool isMuted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.UI.UIColorGetter _baseColor
    ::VROSC::UI::UIColorGetter*& dyn__baseColor();
    // Get instance field reference: private VROSC.UI.UIColorGetter _mutedColor
    ::VROSC::UI::UIColorGetter*& dyn__mutedColor();
    // Get instance field reference: private VROSC.UI.UIColorGetter[] _loopPlayerColors
    ::ArrayW<::VROSC::UI::UIColorGetter*>& dyn__loopPlayerColors();
    // Get instance field reference: private VROSC.AdjustableMesh[] _adjustableMeshes
    ::ArrayW<::VROSC::AdjustableMesh*>& dyn__adjustableMeshes();
    // Get instance field reference: private VROSC.UIColorPicker _colorPicker
    ::VROSC::UIColorPicker*& dyn__colorPicker();
    // Get instance field reference: private UnityEngine.Color <CurrentColor>k__BackingField
    ::UnityEngine::Color& dyn_$CurrentColor$k__BackingField();
    // Get instance field reference: public System.Action`1<UnityEngine.Color> OnColorChanged
    ::System::Action_1<::UnityEngine::Color>*& dyn_OnColorChanged();
    // Get instance field reference: private UnityEngine.Color _muteColor
    ::UnityEngine::Color& dyn__muteColor();
    // Get instance field reference: private System.Boolean _isMuted
    bool& dyn__isMuted();
    // public VROSC.UIColorPicker get_UIColorPicker()
    // Offset: 0x904A38
    ::VROSC::UIColorPicker* get_UIColorPicker();
    // public UnityEngine.Color get_CurrentColor()
    // Offset: 0x904A4C
    ::UnityEngine::Color get_CurrentColor();
    // private System.Void set_CurrentColor(UnityEngine.Color value)
    // Offset: 0x904A40
    void set_CurrentColor(::UnityEngine::Color value);
    // private System.Void Awake()
    // Offset: 0x904A58
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x904B64
    void OnDestroy();
    // private System.Void Reset()
    // Offset: 0x904C38
    void Reset();
    // public System.Void Recolor()
    // Offset: 0x904C84
    void Recolor();
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x904C78
    void SetColor(::UnityEngine::Color color);
    // private System.Void UpdateDrawnColor()
    // Offset: 0x904D50
    void UpdateDrawnColor();
    // private System.Void ColorPicked(UnityEngine.Color color)
    // Offset: 0x904E3C
    void ColorPicked(::UnityEngine::Color color);
    // public System.Void SetMuted(System.Boolean isMuted)
    // Offset: 0x904ED8
    void SetMuted(bool isMuted);
    // public System.Void .ctor()
    // Offset: 0x904EE4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopPlayerColorizer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopPlayerColorizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopPlayerColorizer*, creationType>()));
    }
  }; // VROSC.LoopPlayerColorizer
  #pragma pack(pop)
  static check_size<sizeof(LoopPlayerColorizer), 104 + sizeof(bool)> __VROSC_LoopPlayerColorizerSizeCheck;
  static_assert(sizeof(LoopPlayerColorizer) == 0x69);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopPlayerColorizer::get_UIColorPicker
// Il2CppName: get_UIColorPicker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UIColorPicker* (VROSC::LoopPlayerColorizer::*)()>(&VROSC::LoopPlayerColorizer::get_UIColorPicker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerColorizer*), "get_UIColorPicker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerColorizer::get_CurrentColor
// Il2CppName: get_CurrentColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::LoopPlayerColorizer::*)()>(&VROSC::LoopPlayerColorizer::get_CurrentColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerColorizer*), "get_CurrentColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerColorizer::set_CurrentColor
// Il2CppName: set_CurrentColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerColorizer::*)(::UnityEngine::Color)>(&VROSC::LoopPlayerColorizer::set_CurrentColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerColorizer*), "set_CurrentColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerColorizer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerColorizer::*)()>(&VROSC::LoopPlayerColorizer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerColorizer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerColorizer::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerColorizer::*)()>(&VROSC::LoopPlayerColorizer::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerColorizer*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerColorizer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerColorizer::*)()>(&VROSC::LoopPlayerColorizer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerColorizer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerColorizer::Recolor
// Il2CppName: Recolor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerColorizer::*)()>(&VROSC::LoopPlayerColorizer::Recolor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerColorizer*), "Recolor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerColorizer::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerColorizer::*)(::UnityEngine::Color)>(&VROSC::LoopPlayerColorizer::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerColorizer*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerColorizer::UpdateDrawnColor
// Il2CppName: UpdateDrawnColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerColorizer::*)()>(&VROSC::LoopPlayerColorizer::UpdateDrawnColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerColorizer*), "UpdateDrawnColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerColorizer::ColorPicked
// Il2CppName: ColorPicked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerColorizer::*)(::UnityEngine::Color)>(&VROSC::LoopPlayerColorizer::ColorPicked)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerColorizer*), "ColorPicked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerColorizer::SetMuted
// Il2CppName: SetMuted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerColorizer::*)(bool)>(&VROSC::LoopPlayerColorizer::SetMuted)> {
  static const MethodInfo* get() {
    static auto* isMuted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerColorizer*), "SetMuted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isMuted});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerColorizer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!