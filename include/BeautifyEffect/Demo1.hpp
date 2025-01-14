// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIStyle
  class GUIStyle;
}
// Completed forward declares
// Type namespace: BeautifyEffect
namespace BeautifyEffect {
  // Forward declaring type: Demo1
  class Demo1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeautifyEffect::Demo1);
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::Demo1*, "BeautifyEffect", "Demo1");
// Type namespace: BeautifyEffect
namespace BeautifyEffect {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BeautifyEffect.Demo1
  // [TokenAttribute] Offset: FFFFFFFF
  class Demo1 : public ::UnityEngine::MonoBehaviour {
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
    // private System.Single deltaTime
    // Size: 0x4
    // Offset: 0x18
    float deltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean benchmarkEnabled
    // Size: 0x1
    // Offset: 0x1C
    bool benchmarkEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: benchmarkEnabled and: style
    char __padding1[0x3] = {};
    // private UnityEngine.GUIStyle style
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GUIStyle* style;
    // Field size check
    static_assert(sizeof(::UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.Rect rect
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Rect rect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single deltaTime
    float& dyn_deltaTime();
    // Get instance field reference: private System.Boolean benchmarkEnabled
    bool& dyn_benchmarkEnabled();
    // Get instance field reference: private UnityEngine.GUIStyle style
    ::UnityEngine::GUIStyle*& dyn_style();
    // Get instance field reference: private UnityEngine.Rect rect
    ::UnityEngine::Rect& dyn_rect();
    // private System.Void Update()
    // Offset: 0x130A9E4
    void Update();
    // private System.Void UpdateText()
    // Offset: 0x130AB18
    void UpdateText();
    // private System.Void OnGUI()
    // Offset: 0x130ABEC
    void OnGUI();
    // public System.Void .ctor()
    // Offset: 0x130AE08
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Demo1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeautifyEffect::Demo1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Demo1*, creationType>()));
    }
  }; // BeautifyEffect.Demo1
  #pragma pack(pop)
  static check_size<sizeof(Demo1), 40 + sizeof(::UnityEngine::Rect)> __BeautifyEffect_Demo1SizeCheck;
  static_assert(sizeof(Demo1) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeautifyEffect::Demo1::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeautifyEffect::Demo1::*)()>(&BeautifyEffect::Demo1::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeautifyEffect::Demo1*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeautifyEffect::Demo1::UpdateText
// Il2CppName: UpdateText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeautifyEffect::Demo1::*)()>(&BeautifyEffect::Demo1::UpdateText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeautifyEffect::Demo1*), "UpdateText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeautifyEffect::Demo1::OnGUI
// Il2CppName: OnGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeautifyEffect::Demo1::*)()>(&BeautifyEffect::Demo1::OnGUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeautifyEffect::Demo1*), "OnGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeautifyEffect::Demo1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
