// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::UI::Meshes
namespace VROSC::UI::Meshes {
  // Forward declaring type: ColorPickerMesh
  class ColorPickerMesh;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIColorPickerMiniBar
  class UIColorPickerMiniBar;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UIColorPickerMiniBar);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIColorPickerMiniBar*, "VROSC", "UIColorPickerMiniBar");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UIColorPickerMiniBar
  // [TokenAttribute] Offset: FFFFFFFF
  class UIColorPickerMiniBar : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::UIColorPickerMiniBar::Type
    struct Type;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.UIColorPickerMiniBar/VROSC.Type
    // [TokenAttribute] Offset: FFFFFFFF
    struct Type/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Type
      constexpr Type(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.UIColorPickerMiniBar/VROSC.Type Hue
      static constexpr const int Hue = 0;
      // Get static field: static public VROSC.UIColorPickerMiniBar/VROSC.Type Hue
      static ::VROSC::UIColorPickerMiniBar::Type _get_Hue();
      // Set static field: static public VROSC.UIColorPickerMiniBar/VROSC.Type Hue
      static void _set_Hue(::VROSC::UIColorPickerMiniBar::Type value);
      // static field const value: static public VROSC.UIColorPickerMiniBar/VROSC.Type Saturation
      static constexpr const int Saturation = 1;
      // Get static field: static public VROSC.UIColorPickerMiniBar/VROSC.Type Saturation
      static ::VROSC::UIColorPickerMiniBar::Type _get_Saturation();
      // Set static field: static public VROSC.UIColorPickerMiniBar/VROSC.Type Saturation
      static void _set_Saturation(::VROSC::UIColorPickerMiniBar::Type value);
      // static field const value: static public VROSC.UIColorPickerMiniBar/VROSC.Type Value
      static constexpr const int Value = 2;
      // Get static field: static public VROSC.UIColorPickerMiniBar/VROSC.Type Value
      static ::VROSC::UIColorPickerMiniBar::Type _get_Value();
      // Set static field: static public VROSC.UIColorPickerMiniBar/VROSC.Type Value
      static void _set_Value(::VROSC::UIColorPickerMiniBar::Type value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.UIColorPickerMiniBar/VROSC.Type
    #pragma pack(pop)
    static check_size<sizeof(UIColorPickerMiniBar::Type), 0 + sizeof(int)> __VROSC_UIColorPickerMiniBar_TypeSizeCheck;
    static_assert(sizeof(UIColorPickerMiniBar::Type) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.UIColorPickerMiniBar/VROSC.Type _type
    // Size: 0x4
    // Offset: 0x18
    ::VROSC::UIColorPickerMiniBar::Type type;
    // Field size check
    static_assert(sizeof(::VROSC::UIColorPickerMiniBar::Type) == 0x4);
    // Padding between fields: type and: mesh
    char __padding0[0x4] = {};
    // private VROSC.UI.Meshes.ColorPickerMesh _mesh
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UI::Meshes::ColorPickerMesh* mesh;
    // Field size check
    static_assert(sizeof(::VROSC::UI::Meshes::ColorPickerMesh*) == 0x8);
    // private UnityEngine.Transform _marker
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* marker;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Single _width
    // Size: 0x4
    // Offset: 0x30
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.UIColorPickerMiniBar/VROSC.Type _type
    ::VROSC::UIColorPickerMiniBar::Type& dyn__type();
    // Get instance field reference: private VROSC.UI.Meshes.ColorPickerMesh _mesh
    ::VROSC::UI::Meshes::ColorPickerMesh*& dyn__mesh();
    // Get instance field reference: private UnityEngine.Transform _marker
    ::UnityEngine::Transform*& dyn__marker();
    // Get instance field reference: private System.Single _width
    float& dyn__width();
    // private System.Void Awake()
    // Offset: 0x139B360
    void Awake();
    // public System.Void Verify(System.Boolean forceUpdate)
    // Offset: 0x139B04C
    void Verify(bool forceUpdate);
    // public System.Void Set(System.Single hue, System.Single saturation, System.Single value)
    // Offset: 0x139B264
    void Set(float hue, float saturation, float value);
    // private System.Void SetMarker(System.Single value)
    // Offset: 0x139B368
    void SetMarker(float value);
    // public System.Void .ctor()
    // Offset: 0x139B3AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIColorPickerMiniBar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UIColorPickerMiniBar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIColorPickerMiniBar*, creationType>()));
    }
  }; // VROSC.UIColorPickerMiniBar
  #pragma pack(pop)
  static check_size<sizeof(UIColorPickerMiniBar), 48 + sizeof(float)> __VROSC_UIColorPickerMiniBarSizeCheck;
  static_assert(sizeof(UIColorPickerMiniBar) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIColorPickerMiniBar::Type, "VROSC", "UIColorPickerMiniBar/Type");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UIColorPickerMiniBar::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIColorPickerMiniBar::*)()>(&VROSC::UIColorPickerMiniBar::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPickerMiniBar*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPickerMiniBar::Verify
// Il2CppName: Verify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIColorPickerMiniBar::*)(bool)>(&VROSC::UIColorPickerMiniBar::Verify)> {
  static const MethodInfo* get() {
    static auto* forceUpdate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPickerMiniBar*), "Verify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forceUpdate});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPickerMiniBar::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIColorPickerMiniBar::*)(float, float, float)>(&VROSC::UIColorPickerMiniBar::Set)> {
  static const MethodInfo* get() {
    static auto* hue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* saturation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPickerMiniBar*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hue, saturation, value});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPickerMiniBar::SetMarker
// Il2CppName: SetMarker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIColorPickerMiniBar::*)(float)>(&VROSC::UIColorPickerMiniBar::SetMarker)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPickerMiniBar*), "SetMarker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPickerMiniBar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
