// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.PointerInputModule
#include "UnityEngine/EventSystems/PointerInputModule.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.FramePressState
#include "UnityEngine/EventSystems/PointerEventData_FramePressState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Skipping declaration: PointerEventData because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData*, "UnityEngine.EventSystems", "PointerInputModule/MouseButtonEventData");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.MouseButtonEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class PointerInputModule::MouseButtonEventData : public ::Il2CppObject {
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
    // public UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.FramePressState buttonState
    // Size: 0x14
    // Offset: 0x10
    ::UnityEngine::EventSystems::PointerEventData::FramePressState buttonState;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::PointerEventData::FramePressState) == 0x14);
    // public UnityEngine.EventSystems.PointerEventData buttonData
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::EventSystems::PointerEventData* buttonData;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::PointerEventData*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.FramePressState buttonState
    ::UnityEngine::EventSystems::PointerEventData::FramePressState& dyn_buttonState();
    // Get instance field reference: public UnityEngine.EventSystems.PointerEventData buttonData
    ::UnityEngine::EventSystems::PointerEventData*& dyn_buttonData();
    // public System.Boolean PressedThisFrame()
    // Offset: 0x113B348
    bool PressedThisFrame();
    // public System.Boolean ReleasedThisFrame()
    // Offset: 0x113B35C
    bool ReleasedThisFrame();
    // public System.Void .ctor()
    // Offset: 0x1143364
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerInputModule::MouseButtonEventData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerInputModule::MouseButtonEventData*, creationType>()));
    }
  }; // UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.MouseButtonEventData
  #pragma pack(pop)
  static check_size<sizeof(PointerInputModule::MouseButtonEventData), 24 + sizeof(::UnityEngine::EventSystems::PointerEventData*)> __UnityEngine_EventSystems_PointerInputModule_MouseButtonEventDataSizeCheck;
  static_assert(sizeof(PointerInputModule::MouseButtonEventData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData::PressedThisFrame
// Il2CppName: PressedThisFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData::*)()>(&UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData::PressedThisFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData*), "PressedThisFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData::ReleasedThisFrame
// Il2CppName: ReleasedThisFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData::*)()>(&UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData::ReleasedThisFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData*), "ReleasedThisFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!