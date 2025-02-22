// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.NoteBoardNoteVisualController
#include "VROSC/NoteBoardNoteVisualController.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: NotefieldColorSettings
  class NotefieldColorSettings;
  // Forward declaring type: NoteBoardNote
  class NoteBoardNote;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteMeshChangerController
  class NoteMeshChangerController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NoteMeshChangerController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteMeshChangerController*, "VROSC", "NoteMeshChangerController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteMeshChangerController
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteMeshChangerController : public ::VROSC::NoteBoardNoteVisualController {
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
    // private VROSC.NotefieldColorSettings _colorSettings
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::NotefieldColorSettings* colorSettings;
    // Field size check
    static_assert(sizeof(::VROSC::NotefieldColorSettings*) == 0x8);
    // private System.Boolean _sendMultiNoteData
    // Size: 0x1
    // Offset: 0x28
    bool sendMultiNoteData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: sendMultiNoteData and: restingColor
    char __padding1[0x3] = {};
    // private UnityEngine.Color _restingColor
    // Size: 0x10
    // Offset: 0x2C
    ::UnityEngine::Color restingColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean _animating
    // Size: 0x1
    // Offset: 0x3C
    bool animating;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: animating and: renderer
    char __padding3[0x3] = {};
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private System.Single _note
    // Size: 0x4
    // Offset: 0x48
    float note;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: note and: propBlock
    char __padding5[0x4] = {};
    // private UnityEngine.MaterialPropertyBlock _propBlock
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::MaterialPropertyBlock* propBlock;
    // Field size check
    static_assert(sizeof(::UnityEngine::MaterialPropertyBlock*) == 0x8);
    public:
    // Get instance field reference: private VROSC.NotefieldColorSettings _colorSettings
    ::VROSC::NotefieldColorSettings*& dyn__colorSettings();
    // Get instance field reference: private System.Boolean _sendMultiNoteData
    bool& dyn__sendMultiNoteData();
    // Get instance field reference: private UnityEngine.Color _restingColor
    ::UnityEngine::Color& dyn__restingColor();
    // Get instance field reference: private System.Boolean _animating
    bool& dyn__animating();
    // Get instance field reference: private UnityEngine.Renderer _renderer
    ::UnityEngine::Renderer*& dyn__renderer();
    // Get instance field reference: private System.Single _note
    float& dyn__note();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock _propBlock
    ::UnityEngine::MaterialPropertyBlock*& dyn__propBlock();
    // private System.Void CreateBlock()
    // Offset: 0xA15984
    void CreateBlock();
    // private System.Void SetPlayingColor(UnityEngine.Vector3 power, System.Single velocity, System.Single highlight)
    // Offset: 0xA15A50
    void SetPlayingColor(::UnityEngine::Vector3 power, float velocity, float highlight);
    // public System.Void .ctor()
    // Offset: 0xA15D20
    // Implemented from: VROSC.NoteBoardNoteVisualController
    // Base method: System.Void NoteBoardNoteVisualController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteMeshChangerController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteMeshChangerController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteMeshChangerController*, creationType>()));
    }
    // public override System.Void Setup(VROSC.NoteBoardNote noteField, System.Boolean octave, System.Boolean isOdd)
    // Offset: 0xA158B8
    // Implemented from: VROSC.NoteBoardNoteVisualController
    // Base method: System.Void NoteBoardNoteVisualController::Setup(VROSC.NoteBoardNote noteField, System.Boolean octave, System.Boolean isOdd)
    void Setup(::VROSC::NoteBoardNote* noteField, bool octave, bool isOdd);
    // public override System.Void SetRestingColor(UnityEngine.Color color)
    // Offset: 0xA15C0C
    // Implemented from: VROSC.NoteBoardNoteVisualController
    // Base method: System.Void NoteBoardNoteVisualController::SetRestingColor(UnityEngine.Color color)
    void SetRestingColor(::UnityEngine::Color color);
    // public override System.Void UpdateVisuals()
    // Offset: 0xA15C18
    // Implemented from: VROSC.NoteBoardNoteVisualController
    // Base method: System.Void NoteBoardNoteVisualController::UpdateVisuals()
    void UpdateVisuals();
  }; // VROSC.NoteMeshChangerController
  #pragma pack(pop)
  static check_size<sizeof(NoteMeshChangerController), 80 + sizeof(::UnityEngine::MaterialPropertyBlock*)> __VROSC_NoteMeshChangerControllerSizeCheck;
  static_assert(sizeof(NoteMeshChangerController) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteMeshChangerController::CreateBlock
// Il2CppName: CreateBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteMeshChangerController::*)()>(&VROSC::NoteMeshChangerController::CreateBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteMeshChangerController*), "CreateBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteMeshChangerController::SetPlayingColor
// Il2CppName: SetPlayingColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteMeshChangerController::*)(::UnityEngine::Vector3, float, float)>(&VROSC::NoteMeshChangerController::SetPlayingColor)> {
  static const MethodInfo* get() {
    static auto* power = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* highlight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteMeshChangerController*), "SetPlayingColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{power, velocity, highlight});
  }
};
// Writing MetadataGetter for method: VROSC::NoteMeshChangerController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::NoteMeshChangerController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteMeshChangerController::*)(::VROSC::NoteBoardNote*, bool, bool)>(&VROSC::NoteMeshChangerController::Setup)> {
  static const MethodInfo* get() {
    static auto* noteField = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoardNote")->byval_arg;
    static auto* octave = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isOdd = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteMeshChangerController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteField, octave, isOdd});
  }
};
// Writing MetadataGetter for method: VROSC::NoteMeshChangerController::SetRestingColor
// Il2CppName: SetRestingColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteMeshChangerController::*)(::UnityEngine::Color)>(&VROSC::NoteMeshChangerController::SetRestingColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteMeshChangerController*), "SetRestingColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: VROSC::NoteMeshChangerController::UpdateVisuals
// Il2CppName: UpdateVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteMeshChangerController::*)()>(&VROSC::NoteMeshChangerController::UpdateVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteMeshChangerController*), "UpdateVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
