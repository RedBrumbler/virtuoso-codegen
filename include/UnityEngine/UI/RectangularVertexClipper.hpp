// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Canvas
  class Canvas;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: RectangularVertexClipper
  class RectangularVertexClipper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::RectangularVertexClipper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::RectangularVertexClipper*, "UnityEngine.UI", "RectangularVertexClipper");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.RectangularVertexClipper
  // [TokenAttribute] Offset: FFFFFFFF
  class RectangularVertexClipper : public ::Il2CppObject {
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
    // private readonly UnityEngine.Vector3[] m_WorldCorners
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::Vector3> m_WorldCorners;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private readonly UnityEngine.Vector3[] m_CanvasCorners
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Vector3> m_CanvasCorners;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    public:
    // Get instance field reference: private readonly UnityEngine.Vector3[] m_WorldCorners
    ::ArrayW<::UnityEngine::Vector3>& dyn_m_WorldCorners();
    // Get instance field reference: private readonly UnityEngine.Vector3[] m_CanvasCorners
    ::ArrayW<::UnityEngine::Vector3>& dyn_m_CanvasCorners();
    // public UnityEngine.Rect GetCanvasRect(UnityEngine.RectTransform t, UnityEngine.Canvas c)
    // Offset: 0xF39DC8
    ::UnityEngine::Rect GetCanvasRect(::UnityEngine::RectTransform* t, ::UnityEngine::Canvas* c);
    // public System.Void .ctor()
    // Offset: 0xF3A09C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RectangularVertexClipper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::RectangularVertexClipper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RectangularVertexClipper*, creationType>()));
    }
  }; // UnityEngine.UI.RectangularVertexClipper
  #pragma pack(pop)
  static check_size<sizeof(RectangularVertexClipper), 24 + sizeof(::ArrayW<::UnityEngine::Vector3>)> __UnityEngine_UI_RectangularVertexClipperSizeCheck;
  static_assert(sizeof(RectangularVertexClipper) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::RectangularVertexClipper::GetCanvasRect
// Il2CppName: GetCanvasRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (UnityEngine::UI::RectangularVertexClipper::*)(::UnityEngine::RectTransform*, ::UnityEngine::Canvas*)>(&UnityEngine::UI::RectangularVertexClipper::GetCanvasRect)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::RectangularVertexClipper*), "GetCanvasRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, c});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::RectangularVertexClipper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
