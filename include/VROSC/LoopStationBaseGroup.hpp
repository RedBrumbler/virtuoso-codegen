// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoopStationGroup
#include "VROSC/LoopStationGroup.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: TransformMoverRelay
  class TransformMoverRelay;
  // Forward declaring type: UIButton
  class UIButton;
  // Forward declaring type: LoopStation
  class LoopStation;
  // Forward declaring type: LoopStationGroupHandler
  class LoopStationGroupHandler;
  // Forward declaring type: LoopPlayer
  class LoopPlayer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopStationBaseGroup
  class LoopStationBaseGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopStationBaseGroup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationBaseGroup*, "VROSC", "LoopStationBaseGroup");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xC1
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopStationBaseGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopStationBaseGroup : public ::VROSC::LoopStationGroup {
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
    // [HeaderAttribute] Offset: 0x66ED9C
    // private VROSC.TransformMoverRelay _moverRelay
    // Size: 0x8
    // Offset: 0xA8
    ::VROSC::TransformMoverRelay* moverRelay;
    // Field size check
    static_assert(sizeof(::VROSC::TransformMoverRelay*) == 0x8);
    // private VROSC.UIButton _convertButton
    // Size: 0x8
    // Offset: 0xB0
    ::VROSC::UIButton* convertButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private UnityEngine.GameObject[] _objectsToDisable
    // Size: 0x8
    // Offset: 0xB8
    ::ArrayW<::UnityEngine::GameObject*> objectsToDisable;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // private System.Boolean _isTheUngroupedGroup
    // Size: 0x1
    // Offset: 0xC0
    bool isTheUngroupedGroup;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private VROSC.TransformMoverRelay _moverRelay
    ::VROSC::TransformMoverRelay*& dyn__moverRelay();
    // Get instance field reference: private VROSC.UIButton _convertButton
    ::VROSC::UIButton*& dyn__convertButton();
    // Get instance field reference: private UnityEngine.GameObject[] _objectsToDisable
    ::ArrayW<::UnityEngine::GameObject*>& dyn__objectsToDisable();
    // Get instance field reference: private System.Boolean _isTheUngroupedGroup
    bool& dyn__isTheUngroupedGroup();
    // private System.Void Awake()
    // Offset: 0x90DB90
    void Awake();
    // private System.Void ConvertToUserGroupButtonPressed()
    // Offset: 0x90DEC8
    void ConvertToUserGroupButtonPressed();
    // public System.Void SetAsTheUngroupedGroup()
    // Offset: 0x90E0A0
    void SetAsTheUngroupedGroup();
    // public System.Void .ctor()
    // Offset: 0x90E40C
    // Implemented from: VROSC.LoopStationGroup
    // Base method: System.Void LoopStationGroup::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopStationBaseGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopStationBaseGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopStationBaseGroup*, creationType>()));
    }
    // public override System.Void Setup(VROSC.LoopStation loopStation, VROSC.LoopStationGroupHandler handler, VROSC.LoopStationGroup/VROSC.SetupVariables vars)
    // Offset: 0x90DCAC
    // Implemented from: VROSC.LoopStationGroup
    // Base method: System.Void LoopStationGroup::Setup(VROSC.LoopStation loopStation, VROSC.LoopStationGroupHandler handler, VROSC.LoopStationGroup/VROSC.SetupVariables vars)
    void Setup(::VROSC::LoopStation* loopStation, ::VROSC::LoopStationGroupHandler* handler, ::VROSC::LoopStationGroup::SetupVariables vars);
    // public override System.Void RemoveLoop(VROSC.LoopPlayer loopPlayer, System.Boolean byGrab, System.Boolean fromReset)
    // Offset: 0x90E118
    // Implemented from: VROSC.LoopStationGroup
    // Base method: System.Void LoopStationGroup::RemoveLoop(VROSC.LoopPlayer loopPlayer, System.Boolean byGrab, System.Boolean fromReset)
    void RemoveLoop(::VROSC::LoopPlayer* loopPlayer, bool byGrab, bool fromReset);
    // public override System.Void UpdateGroupVisibility(System.Boolean byGrab)
    // Offset: 0x90E2F0
    // Implemented from: VROSC.LoopStationGroup
    // Base method: System.Void LoopStationGroup::UpdateGroupVisibility(System.Boolean byGrab)
    void UpdateGroupVisibility(bool byGrab);
  }; // VROSC.LoopStationBaseGroup
  #pragma pack(pop)
  static check_size<sizeof(LoopStationBaseGroup), 192 + sizeof(bool)> __VROSC_LoopStationBaseGroupSizeCheck;
  static_assert(sizeof(LoopStationBaseGroup) == 0xC1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroup::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationBaseGroup::*)()>(&VROSC::LoopStationBaseGroup::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroup*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroup::ConvertToUserGroupButtonPressed
// Il2CppName: ConvertToUserGroupButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationBaseGroup::*)()>(&VROSC::LoopStationBaseGroup::ConvertToUserGroupButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroup*), "ConvertToUserGroupButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroup::SetAsTheUngroupedGroup
// Il2CppName: SetAsTheUngroupedGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationBaseGroup::*)()>(&VROSC::LoopStationBaseGroup::SetAsTheUngroupedGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroup*), "SetAsTheUngroupedGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroup::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationBaseGroup::*)(::VROSC::LoopStation*, ::VROSC::LoopStationGroupHandler*, ::VROSC::LoopStationGroup::SetupVariables)>(&VROSC::LoopStationBaseGroup::Setup)> {
  static const MethodInfo* get() {
    static auto* loopStation = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStation")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationGroupHandler")->byval_arg;
    static auto* vars = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationGroup/SetupVariables")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroup*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loopStation, handler, vars});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroup::RemoveLoop
// Il2CppName: RemoveLoop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationBaseGroup::*)(::VROSC::LoopPlayer*, bool, bool)>(&VROSC::LoopStationBaseGroup::RemoveLoop)> {
  static const MethodInfo* get() {
    static auto* loopPlayer = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayer")->byval_arg;
    static auto* byGrab = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* fromReset = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroup*), "RemoveLoop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loopPlayer, byGrab, fromReset});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroup::UpdateGroupVisibility
// Il2CppName: UpdateGroupVisibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationBaseGroup::*)(bool)>(&VROSC::LoopStationBaseGroup::UpdateGroupVisibility)> {
  static const MethodInfo* get() {
    static auto* byGrab = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroup*), "UpdateGroupVisibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{byGrab});
  }
};
