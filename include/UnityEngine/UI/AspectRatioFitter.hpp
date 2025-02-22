// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.UI.ILayoutSelfController
#include "UnityEngine/UI/ILayoutSelfController.hpp"
// Including type: UnityEngine.DrivenRectTransformTracker
#include "UnityEngine/DrivenRectTransformTracker.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Skipping declaration: AspectMode because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: AspectRatioFitter
  class AspectRatioFitter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::AspectRatioFitter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::AspectRatioFitter*, "UnityEngine.UI", "AspectRatioFitter");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UI.AspectRatioFitter
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 5955DC
  // [ExecuteAlways] Offset: FFFFFFFF
  // [RequireComponent] Offset: 5955DC
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  class AspectRatioFitter : public ::UnityEngine::EventSystems::UIBehaviour/*, public ::UnityEngine::UI::ILayoutSelfController*/ {
    public:
    // Nested type: ::UnityEngine::UI::AspectRatioFitter::AspectMode
    struct AspectMode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct AspectMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: AspectMode
      constexpr AspectMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode None
      static ::UnityEngine::UI::AspectRatioFitter::AspectMode _get_None();
      // Set static field: static public UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode None
      static void _set_None(::UnityEngine::UI::AspectRatioFitter::AspectMode value);
      // static field const value: static public UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode WidthControlsHeight
      static constexpr const int WidthControlsHeight = 1;
      // Get static field: static public UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode WidthControlsHeight
      static ::UnityEngine::UI::AspectRatioFitter::AspectMode _get_WidthControlsHeight();
      // Set static field: static public UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode WidthControlsHeight
      static void _set_WidthControlsHeight(::UnityEngine::UI::AspectRatioFitter::AspectMode value);
      // static field const value: static public UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode HeightControlsWidth
      static constexpr const int HeightControlsWidth = 2;
      // Get static field: static public UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode HeightControlsWidth
      static ::UnityEngine::UI::AspectRatioFitter::AspectMode _get_HeightControlsWidth();
      // Set static field: static public UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode HeightControlsWidth
      static void _set_HeightControlsWidth(::UnityEngine::UI::AspectRatioFitter::AspectMode value);
      // static field const value: static public UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode FitInParent
      static constexpr const int FitInParent = 3;
      // Get static field: static public UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode FitInParent
      static ::UnityEngine::UI::AspectRatioFitter::AspectMode _get_FitInParent();
      // Set static field: static public UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode FitInParent
      static void _set_FitInParent(::UnityEngine::UI::AspectRatioFitter::AspectMode value);
      // static field const value: static public UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode EnvelopeParent
      static constexpr const int EnvelopeParent = 4;
      // Get static field: static public UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode EnvelopeParent
      static ::UnityEngine::UI::AspectRatioFitter::AspectMode _get_EnvelopeParent();
      // Set static field: static public UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode EnvelopeParent
      static void _set_EnvelopeParent(::UnityEngine::UI::AspectRatioFitter::AspectMode value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode
    #pragma pack(pop)
    static check_size<sizeof(AspectRatioFitter::AspectMode), 0 + sizeof(int)> __UnityEngine_UI_AspectRatioFitter_AspectModeSizeCheck;
    static_assert(sizeof(AspectRatioFitter::AspectMode) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode m_AspectMode
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::UI::AspectRatioFitter::AspectMode m_AspectMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::AspectRatioFitter::AspectMode) == 0x4);
    // private System.Single m_AspectRatio
    // Size: 0x4
    // Offset: 0x1C
    float m_AspectRatio;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.RectTransform m_Rect
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::RectTransform* m_Rect;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private System.Boolean m_DelayedSetDirty
    // Size: 0x1
    // Offset: 0x28
    bool m_DelayedSetDirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_DoesParentExist
    // Size: 0x1
    // Offset: 0x29
    bool m_DoesParentExist;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UnityEngine.DrivenRectTransformTracker m_Tracker
    // Size: 0x1
    // Offset: 0x2A
    ::UnityEngine::DrivenRectTransformTracker m_Tracker;
    // Field size check
    static_assert(sizeof(::UnityEngine::DrivenRectTransformTracker) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::UI::ILayoutSelfController
    operator ::UnityEngine::UI::ILayoutSelfController() noexcept {
      return *reinterpret_cast<::UnityEngine::UI::ILayoutSelfController*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode m_AspectMode
    ::UnityEngine::UI::AspectRatioFitter::AspectMode& dyn_m_AspectMode();
    // Get instance field reference: private System.Single m_AspectRatio
    float& dyn_m_AspectRatio();
    // Get instance field reference: private UnityEngine.RectTransform m_Rect
    ::UnityEngine::RectTransform*& dyn_m_Rect();
    // Get instance field reference: private System.Boolean m_DelayedSetDirty
    bool& dyn_m_DelayedSetDirty();
    // Get instance field reference: private System.Boolean m_DoesParentExist
    bool& dyn_m_DoesParentExist();
    // Get instance field reference: private UnityEngine.DrivenRectTransformTracker m_Tracker
    ::UnityEngine::DrivenRectTransformTracker& dyn_m_Tracker();
    // public UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode get_aspectMode()
    // Offset: 0xBB3F8C
    ::UnityEngine::UI::AspectRatioFitter::AspectMode get_aspectMode();
    // public System.Void set_aspectMode(UnityEngine.UI.AspectRatioFitter/UnityEngine.UI.AspectMode value)
    // Offset: 0xBB3F94
    void set_aspectMode(::UnityEngine::UI::AspectRatioFitter::AspectMode value);
    // public System.Single get_aspectRatio()
    // Offset: 0xBB4010
    float get_aspectRatio();
    // public System.Void set_aspectRatio(System.Single value)
    // Offset: 0xBB4018
    void set_aspectRatio(float value);
    // private UnityEngine.RectTransform get_rectTransform()
    // Offset: 0xBB4090
    ::UnityEngine::RectTransform* get_rectTransform();
    // protected System.Void Update()
    // Offset: 0xBB4474
    void Update();
    // private System.Void UpdateRect()
    // Offset: 0xBB448C
    void UpdateRect();
    // private System.Single GetSizeDeltaToProduceSize(System.Single size, System.Int32 axis)
    // Offset: 0xBB47F4
    float GetSizeDeltaToProduceSize(float size, int axis);
    // private UnityEngine.Vector2 GetParentSize()
    // Offset: 0xBB4704
    ::UnityEngine::Vector2 GetParentSize();
    // public System.Void SetLayoutHorizontal()
    // Offset: 0xBB48A8
    void SetLayoutHorizontal();
    // public System.Void SetLayoutVertical()
    // Offset: 0xBB48AC
    void SetLayoutVertical();
    // protected System.Void SetDirty()
    // Offset: 0xBB400C
    void SetDirty();
    // public System.Boolean IsComponentValidOnObject()
    // Offset: 0xBB4244
    bool IsComponentValidOnObject();
    // public System.Boolean IsAspectModeValid()
    // Offset: 0xBB431C
    bool IsAspectModeValid();
    // private System.Boolean DoesParentExists()
    // Offset: 0xBB48B0
    bool DoesParentExists();
    // protected System.Void .ctor()
    // Offset: 0xBB4130
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspectRatioFitter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::AspectRatioFitter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspectRatioFitter*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0xBB4140
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void Start()
    // Offset: 0xBB41E4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
    // protected override System.Void OnDisable()
    // Offset: 0xBB4344
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnTransformParentChanged()
    // Offset: 0xBB43D0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnTransformParentChanged()
    void OnTransformParentChanged();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0xBB4488
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
  }; // UnityEngine.UI.AspectRatioFitter
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::AspectRatioFitter::AspectMode, "UnityEngine.UI", "AspectRatioFitter/AspectMode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::get_aspectMode
// Il2CppName: get_aspectMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::AspectRatioFitter::AspectMode (UnityEngine::UI::AspectRatioFitter::*)()>(&UnityEngine::UI::AspectRatioFitter::get_aspectMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "get_aspectMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::set_aspectMode
// Il2CppName: set_aspectMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AspectRatioFitter::*)(::UnityEngine::UI::AspectRatioFitter::AspectMode)>(&UnityEngine::UI::AspectRatioFitter::set_aspectMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "AspectRatioFitter/AspectMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "set_aspectMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::get_aspectRatio
// Il2CppName: get_aspectRatio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::AspectRatioFitter::*)()>(&UnityEngine::UI::AspectRatioFitter::get_aspectRatio)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "get_aspectRatio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::set_aspectRatio
// Il2CppName: set_aspectRatio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AspectRatioFitter::*)(float)>(&UnityEngine::UI::AspectRatioFitter::set_aspectRatio)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "set_aspectRatio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::get_rectTransform
// Il2CppName: get_rectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (UnityEngine::UI::AspectRatioFitter::*)()>(&UnityEngine::UI::AspectRatioFitter::get_rectTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "get_rectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AspectRatioFitter::*)()>(&UnityEngine::UI::AspectRatioFitter::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::UpdateRect
// Il2CppName: UpdateRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AspectRatioFitter::*)()>(&UnityEngine::UI::AspectRatioFitter::UpdateRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "UpdateRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::GetSizeDeltaToProduceSize
// Il2CppName: GetSizeDeltaToProduceSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::AspectRatioFitter::*)(float, int)>(&UnityEngine::UI::AspectRatioFitter::GetSizeDeltaToProduceSize)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "GetSizeDeltaToProduceSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size, axis});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::GetParentSize
// Il2CppName: GetParentSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::UI::AspectRatioFitter::*)()>(&UnityEngine::UI::AspectRatioFitter::GetParentSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "GetParentSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::SetLayoutHorizontal
// Il2CppName: SetLayoutHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AspectRatioFitter::*)()>(&UnityEngine::UI::AspectRatioFitter::SetLayoutHorizontal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "SetLayoutHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::SetLayoutVertical
// Il2CppName: SetLayoutVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AspectRatioFitter::*)()>(&UnityEngine::UI::AspectRatioFitter::SetLayoutVertical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "SetLayoutVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::SetDirty
// Il2CppName: SetDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AspectRatioFitter::*)()>(&UnityEngine::UI::AspectRatioFitter::SetDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "SetDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::IsComponentValidOnObject
// Il2CppName: IsComponentValidOnObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::AspectRatioFitter::*)()>(&UnityEngine::UI::AspectRatioFitter::IsComponentValidOnObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "IsComponentValidOnObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::IsAspectModeValid
// Il2CppName: IsAspectModeValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::AspectRatioFitter::*)()>(&UnityEngine::UI::AspectRatioFitter::IsAspectModeValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "IsAspectModeValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::DoesParentExists
// Il2CppName: DoesParentExists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::AspectRatioFitter::*)()>(&UnityEngine::UI::AspectRatioFitter::DoesParentExists)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "DoesParentExists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AspectRatioFitter::*)()>(&UnityEngine::UI::AspectRatioFitter::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AspectRatioFitter::*)()>(&UnityEngine::UI::AspectRatioFitter::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AspectRatioFitter::*)()>(&UnityEngine::UI::AspectRatioFitter::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::OnTransformParentChanged
// Il2CppName: OnTransformParentChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AspectRatioFitter::*)()>(&UnityEngine::UI::AspectRatioFitter::OnTransformParentChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "OnTransformParentChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::AspectRatioFitter::OnRectTransformDimensionsChange
// Il2CppName: OnRectTransformDimensionsChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::AspectRatioFitter::*)()>(&UnityEngine::UI::AspectRatioFitter::OnRectTransformDimensionsChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::AspectRatioFitter*), "OnRectTransformDimensionsChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
