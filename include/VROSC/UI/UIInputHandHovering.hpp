// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Clickable
  class Clickable;
  // Forward declaring type: Grabable
  class Grabable;
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: InputSettings
  class InputSettings;
  // Forward declaring type: TooltipData
  class TooltipData;
  // Forward declaring type: Interactable
  class Interactable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Forward declaring type: UIInputHandHovering
  class UIInputHandHovering;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::UIInputHandHovering);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIInputHandHovering*, "VROSC.UI", "UIInputHandHovering");
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Size: 0xB1
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UI.UIInputHandHovering
  // [TokenAttribute] Offset: FFFFFFFF
  class UIInputHandHovering : public ::Il2CppObject {
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
    // private UnityEngine.Vector3 <GrabbableTouchPosition>k__BackingField
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 GrabbableTouchPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean <GrabbablePointedAt>k__BackingField
    // Size: 0x1
    // Offset: 0x1C
    bool GrabbablePointedAt;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: GrabbablePointedAt and: ClickableTouchPosition
    char __padding1[0x3] = {};
    // private UnityEngine.Vector3 <ClickableTouchPosition>k__BackingField
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 ClickableTouchPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean <ClickablePointedAt>k__BackingField
    // Size: 0x1
    // Offset: 0x2C
    bool ClickablePointedAt;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ClickablePointedAt and: interactionPoint
    char __padding3[0x3] = {};
    // private UnityEngine.Transform _interactionPoint
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* interactionPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _rayPoint
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* rayPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private VROSC.Clickable <CurrentClickable>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::Clickable* CurrentClickable;
    // Field size check
    static_assert(sizeof(::VROSC::Clickable*) == 0x8);
    // private VROSC.Grabable <CurrentGrabbable>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::Grabable* CurrentGrabbable;
    // Field size check
    static_assert(sizeof(::VROSC::Grabable*) == 0x8);
    // private UnityEngine.Vector3 <RayEnd>k__BackingField
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 RayEnd;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean <IsHoveringSomething>k__BackingField
    // Size: 0x1
    // Offset: 0x5C
    bool IsHoveringSomething;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _interactionDisabledByMallets
    // Size: 0x1
    // Offset: 0x5D
    bool interactionDisabledByMallets;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: interactionDisabledByMallets and: device
    char __padding10[0x2] = {};
    // private VROSC.InputDevice _device
    // Size: 0x8
    // Offset: 0x60
    ::VROSC::InputDevice* device;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // private VROSC.InputSettings _inputSettings
    // Size: 0x8
    // Offset: 0x68
    ::VROSC::InputSettings* inputSettings;
    // Field size check
    static_assert(sizeof(::VROSC::InputSettings*) == 0x8);
    // private UnityEngine.RaycastHit _hit
    // Size: 0x2C
    // Offset: 0x70
    ::UnityEngine::RaycastHit hit;
    // Field size check
    static_assert(sizeof(::UnityEngine::RaycastHit) == 0x2C);
    // Padding between fields: hit and: hoverColliderBuffer
    char __padding13[0x4] = {};
    // private UnityEngine.Collider[] _hoverColliderBuffer
    // Size: 0x8
    // Offset: 0xA0
    ::ArrayW<::UnityEngine::Collider*> hoverColliderBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.TooltipData> _currentRequestedTooltips
    // Size: 0x8
    // Offset: 0xA8
    ::System::Collections::Generic::List_1<::VROSC::TooltipData*>* currentRequestedTooltips;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*) == 0x8);
    // private System.Boolean _ignoreGrabTooltips
    // Size: 0x1
    // Offset: 0xB0
    bool ignoreGrabTooltips;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Vector3 <GrabbableTouchPosition>k__BackingField
    ::UnityEngine::Vector3& dyn_$GrabbableTouchPosition$k__BackingField();
    // Get instance field reference: private System.Boolean <GrabbablePointedAt>k__BackingField
    bool& dyn_$GrabbablePointedAt$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 <ClickableTouchPosition>k__BackingField
    ::UnityEngine::Vector3& dyn_$ClickableTouchPosition$k__BackingField();
    // Get instance field reference: private System.Boolean <ClickablePointedAt>k__BackingField
    bool& dyn_$ClickablePointedAt$k__BackingField();
    // Get instance field reference: private UnityEngine.Transform _interactionPoint
    ::UnityEngine::Transform*& dyn__interactionPoint();
    // Get instance field reference: private UnityEngine.Transform _rayPoint
    ::UnityEngine::Transform*& dyn__rayPoint();
    // Get instance field reference: private VROSC.Clickable <CurrentClickable>k__BackingField
    ::VROSC::Clickable*& dyn_$CurrentClickable$k__BackingField();
    // Get instance field reference: private VROSC.Grabable <CurrentGrabbable>k__BackingField
    ::VROSC::Grabable*& dyn_$CurrentGrabbable$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 <RayEnd>k__BackingField
    ::UnityEngine::Vector3& dyn_$RayEnd$k__BackingField();
    // Get instance field reference: private System.Boolean <IsHoveringSomething>k__BackingField
    bool& dyn_$IsHoveringSomething$k__BackingField();
    // Get instance field reference: private System.Boolean _interactionDisabledByMallets
    bool& dyn__interactionDisabledByMallets();
    // Get instance field reference: private VROSC.InputDevice _device
    ::VROSC::InputDevice*& dyn__device();
    // Get instance field reference: private VROSC.InputSettings _inputSettings
    ::VROSC::InputSettings*& dyn__inputSettings();
    // Get instance field reference: private UnityEngine.RaycastHit _hit
    ::UnityEngine::RaycastHit& dyn__hit();
    // Get instance field reference: private UnityEngine.Collider[] _hoverColliderBuffer
    ::ArrayW<::UnityEngine::Collider*>& dyn__hoverColliderBuffer();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.TooltipData> _currentRequestedTooltips
    ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*& dyn__currentRequestedTooltips();
    // Get instance field reference: private System.Boolean _ignoreGrabTooltips
    bool& dyn__ignoreGrabTooltips();
    // public UnityEngine.Vector3 get_GrabbableTouchPosition()
    // Offset: 0x139DDC4
    ::UnityEngine::Vector3 get_GrabbableTouchPosition();
    // private System.Void set_GrabbableTouchPosition(UnityEngine.Vector3 value)
    // Offset: 0x139DDB8
    void set_GrabbableTouchPosition(::UnityEngine::Vector3 value);
    // public System.Boolean get_GrabbablePointedAt()
    // Offset: 0x139DDDC
    bool get_GrabbablePointedAt();
    // private System.Void set_GrabbablePointedAt(System.Boolean value)
    // Offset: 0x139DDD0
    void set_GrabbablePointedAt(bool value);
    // public UnityEngine.Vector3 get_ClickableTouchPosition()
    // Offset: 0x139DDF0
    ::UnityEngine::Vector3 get_ClickableTouchPosition();
    // private System.Void set_ClickableTouchPosition(UnityEngine.Vector3 value)
    // Offset: 0x139DDE4
    void set_ClickableTouchPosition(::UnityEngine::Vector3 value);
    // public System.Boolean get_ClickablePointedAt()
    // Offset: 0x139DE08
    bool get_ClickablePointedAt();
    // private System.Void set_ClickablePointedAt(System.Boolean value)
    // Offset: 0x139DDFC
    void set_ClickablePointedAt(bool value);
    // public VROSC.Clickable get_CurrentClickable()
    // Offset: 0x139DE18
    ::VROSC::Clickable* get_CurrentClickable();
    // private System.Void set_CurrentClickable(VROSC.Clickable value)
    // Offset: 0x139DE10
    void set_CurrentClickable(::VROSC::Clickable* value);
    // public VROSC.Grabable get_CurrentGrabbable()
    // Offset: 0x139DE28
    ::VROSC::Grabable* get_CurrentGrabbable();
    // private System.Void set_CurrentGrabbable(VROSC.Grabable value)
    // Offset: 0x139DE20
    void set_CurrentGrabbable(::VROSC::Grabable* value);
    // public UnityEngine.Vector3 get_RayEnd()
    // Offset: 0x139DE3C
    ::UnityEngine::Vector3 get_RayEnd();
    // private System.Void set_RayEnd(UnityEngine.Vector3 value)
    // Offset: 0x139DE30
    void set_RayEnd(::UnityEngine::Vector3 value);
    // public System.Boolean get_IsHoveringSomething()
    // Offset: 0x139DE54
    bool get_IsHoveringSomething();
    // private System.Void set_IsHoveringSomething(System.Boolean value)
    // Offset: 0x139DE48
    void set_IsHoveringSomething(bool value);
    // public System.Void Setup(VROSC.InputSettings inputSettings, VROSC.InputDevice device, UnityEngine.Transform rayPoint)
    // Offset: 0x139D3C4
    void Setup(::VROSC::InputSettings* inputSettings, ::VROSC::InputDevice* device, ::UnityEngine::Transform* rayPoint);
    // public System.Void Update(System.Boolean useLaser)
    // Offset: 0x139D9CC
    void Update(bool useLaser);
    // public System.Void ResetHovering()
    // Offset: 0x139D5D8
    void ResetHovering();
    // System.Void SetInteractionDisabledByMallets(System.Boolean disable)
    // Offset: 0x139D670
    void SetInteractionDisabledByMallets(bool disable);
    // private System.Void UpdateHovering(System.Boolean useLaser)
    // Offset: 0x139DE5C
    void UpdateHovering(bool useLaser);
    // private T GetClosestInCurrentlyHovering()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T GetClosestInCurrentlyHovering() {
      static_assert(std::is_convertible_v<T, ::VROSC::Interactable*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::UIInputHandHovering::GetClosestInCurrentlyHovering");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetClosestInCurrentlyHovering", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method);
    }
    // private System.Void UpdateClickable(VROSC.Clickable currentlyHoveringOver)
    // Offset: 0x139E4B8
    void UpdateClickable(::VROSC::Clickable* currentlyHoveringOver);
    // private System.Void UpdateGrabbable(VROSC.Grabable currentlyHoveringOver)
    // Offset: 0x139E5C8
    void UpdateGrabbable(::VROSC::Grabable* currentlyHoveringOver);
    // private System.Void UpdateTooltips()
    // Offset: 0x139E780
    void UpdateTooltips();
    // public System.Void .ctor()
    // Offset: 0x139EB38
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIInputHandHovering* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::UIInputHandHovering::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIInputHandHovering*, creationType>()));
    }
  }; // VROSC.UI.UIInputHandHovering
  #pragma pack(pop)
  static check_size<sizeof(UIInputHandHovering), 176 + sizeof(bool)> __VROSC_UI_UIInputHandHoveringSizeCheck;
  static_assert(sizeof(UIInputHandHovering) == 0xB1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::get_GrabbableTouchPosition
// Il2CppName: get_GrabbableTouchPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::UI::UIInputHandHovering::*)()>(&VROSC::UI::UIInputHandHovering::get_GrabbableTouchPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "get_GrabbableTouchPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::set_GrabbableTouchPosition
// Il2CppName: set_GrabbableTouchPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHandHovering::*)(::UnityEngine::Vector3)>(&VROSC::UI::UIInputHandHovering::set_GrabbableTouchPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "set_GrabbableTouchPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::get_GrabbablePointedAt
// Il2CppName: get_GrabbablePointedAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UI::UIInputHandHovering::*)()>(&VROSC::UI::UIInputHandHovering::get_GrabbablePointedAt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "get_GrabbablePointedAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::set_GrabbablePointedAt
// Il2CppName: set_GrabbablePointedAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHandHovering::*)(bool)>(&VROSC::UI::UIInputHandHovering::set_GrabbablePointedAt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "set_GrabbablePointedAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::get_ClickableTouchPosition
// Il2CppName: get_ClickableTouchPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::UI::UIInputHandHovering::*)()>(&VROSC::UI::UIInputHandHovering::get_ClickableTouchPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "get_ClickableTouchPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::set_ClickableTouchPosition
// Il2CppName: set_ClickableTouchPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHandHovering::*)(::UnityEngine::Vector3)>(&VROSC::UI::UIInputHandHovering::set_ClickableTouchPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "set_ClickableTouchPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::get_ClickablePointedAt
// Il2CppName: get_ClickablePointedAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UI::UIInputHandHovering::*)()>(&VROSC::UI::UIInputHandHovering::get_ClickablePointedAt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "get_ClickablePointedAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::set_ClickablePointedAt
// Il2CppName: set_ClickablePointedAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHandHovering::*)(bool)>(&VROSC::UI::UIInputHandHovering::set_ClickablePointedAt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "set_ClickablePointedAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::get_CurrentClickable
// Il2CppName: get_CurrentClickable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Clickable* (VROSC::UI::UIInputHandHovering::*)()>(&VROSC::UI::UIInputHandHovering::get_CurrentClickable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "get_CurrentClickable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::set_CurrentClickable
// Il2CppName: set_CurrentClickable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHandHovering::*)(::VROSC::Clickable*)>(&VROSC::UI::UIInputHandHovering::set_CurrentClickable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "Clickable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "set_CurrentClickable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::get_CurrentGrabbable
// Il2CppName: get_CurrentGrabbable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Grabable* (VROSC::UI::UIInputHandHovering::*)()>(&VROSC::UI::UIInputHandHovering::get_CurrentGrabbable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "get_CurrentGrabbable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::set_CurrentGrabbable
// Il2CppName: set_CurrentGrabbable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHandHovering::*)(::VROSC::Grabable*)>(&VROSC::UI::UIInputHandHovering::set_CurrentGrabbable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "Grabable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "set_CurrentGrabbable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::get_RayEnd
// Il2CppName: get_RayEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::UI::UIInputHandHovering::*)()>(&VROSC::UI::UIInputHandHovering::get_RayEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "get_RayEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::set_RayEnd
// Il2CppName: set_RayEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHandHovering::*)(::UnityEngine::Vector3)>(&VROSC::UI::UIInputHandHovering::set_RayEnd)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "set_RayEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::get_IsHoveringSomething
// Il2CppName: get_IsHoveringSomething
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UI::UIInputHandHovering::*)()>(&VROSC::UI::UIInputHandHovering::get_IsHoveringSomething)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "get_IsHoveringSomething", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::set_IsHoveringSomething
// Il2CppName: set_IsHoveringSomething
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHandHovering::*)(bool)>(&VROSC::UI::UIInputHandHovering::set_IsHoveringSomething)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "set_IsHoveringSomething", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHandHovering::*)(::VROSC::InputSettings*, ::VROSC::InputDevice*, ::UnityEngine::Transform*)>(&VROSC::UI::UIInputHandHovering::Setup)> {
  static const MethodInfo* get() {
    static auto* inputSettings = &::il2cpp_utils::GetClassFromName("VROSC", "InputSettings")->byval_arg;
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* rayPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputSettings, device, rayPoint});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHandHovering::*)(bool)>(&VROSC::UI::UIInputHandHovering::Update)> {
  static const MethodInfo* get() {
    static auto* useLaser = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useLaser});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::ResetHovering
// Il2CppName: ResetHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHandHovering::*)()>(&VROSC::UI::UIInputHandHovering::ResetHovering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "ResetHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::SetInteractionDisabledByMallets
// Il2CppName: SetInteractionDisabledByMallets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHandHovering::*)(bool)>(&VROSC::UI::UIInputHandHovering::SetInteractionDisabledByMallets)> {
  static const MethodInfo* get() {
    static auto* disable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "SetInteractionDisabledByMallets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disable});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::UpdateHovering
// Il2CppName: UpdateHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHandHovering::*)(bool)>(&VROSC::UI::UIInputHandHovering::UpdateHovering)> {
  static const MethodInfo* get() {
    static auto* useLaser = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "UpdateHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useLaser});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::GetClosestInCurrentlyHovering
// Il2CppName: GetClosestInCurrentlyHovering
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::UpdateClickable
// Il2CppName: UpdateClickable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHandHovering::*)(::VROSC::Clickable*)>(&VROSC::UI::UIInputHandHovering::UpdateClickable)> {
  static const MethodInfo* get() {
    static auto* currentlyHoveringOver = &::il2cpp_utils::GetClassFromName("VROSC", "Clickable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "UpdateClickable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentlyHoveringOver});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::UpdateGrabbable
// Il2CppName: UpdateGrabbable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHandHovering::*)(::VROSC::Grabable*)>(&VROSC::UI::UIInputHandHovering::UpdateGrabbable)> {
  static const MethodInfo* get() {
    static auto* currentlyHoveringOver = &::il2cpp_utils::GetClassFromName("VROSC", "Grabable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "UpdateGrabbable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentlyHoveringOver});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::UpdateTooltips
// Il2CppName: UpdateTooltips
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::UIInputHandHovering::*)()>(&VROSC::UI::UIInputHandHovering::UpdateTooltips)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIInputHandHovering*), "UpdateTooltips", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::UIInputHandHovering::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
