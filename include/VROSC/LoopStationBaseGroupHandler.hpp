// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoopStationGroupHandler
#include "VROSC/LoopStationGroupHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopStation
  class LoopStation;
  // Forward declaring type: LoopPlayer
  class LoopPlayer;
  // Forward declaring type: LoopStationLoopHandler
  class LoopStationLoopHandler;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopStationBaseGroupHandler
  class LoopStationBaseGroupHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopStationBaseGroupHandler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationBaseGroupHandler*, "VROSC", "LoopStationBaseGroupHandler");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopStationBaseGroupHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopStationBaseGroupHandler : public ::VROSC::LoopStationGroupHandler {
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
    // private System.Collections.Generic.List`1<VROSC.LoopStationGroup> _arrangedGroups
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::VROSC::LoopStationGroup*>* arrangedGroups;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::LoopStationGroup*>*) == 0x8);
    // private UnityEngine.RectTransform _autoGroupHeader
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::RectTransform* autoGroupHeader;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private VROSC.LoopStationGroup <BaseGroup>k__BackingField
    // Size: 0x8
    // Offset: 0x70
    ::VROSC::LoopStationGroup* BaseGroup;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationGroup*) == 0x8);
    public:
    // static field const value: static public System.String BaseID
    static constexpr const char* BaseID = "Ungrouped";
    // Get static field: static public System.String BaseID
    static ::StringW _get_BaseID();
    // Set static field: static public System.String BaseID
    static void _set_BaseID(::StringW value);
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.LoopStationGroup> _arrangedGroups
    ::System::Collections::Generic::List_1<::VROSC::LoopStationGroup*>*& dyn__arrangedGroups();
    // Get instance field reference: private UnityEngine.RectTransform _autoGroupHeader
    ::UnityEngine::RectTransform*& dyn__autoGroupHeader();
    // Get instance field reference: private VROSC.LoopStationGroup <BaseGroup>k__BackingField
    ::VROSC::LoopStationGroup*& dyn_$BaseGroup$k__BackingField();
    // public VROSC.LoopStationGroup get_BaseGroup()
    // Offset: 0x90E4E4
    ::VROSC::LoopStationGroup* get_BaseGroup();
    // private System.Void set_BaseGroup(VROSC.LoopStationGroup value)
    // Offset: 0x90E4EC
    void set_BaseGroup(::VROSC::LoopStationGroup* value);
    // public System.Void AddToBaseGroup(VROSC.LoopPlayer newPlayer)
    // Offset: 0x90E910
    void AddToBaseGroup(::VROSC::LoopPlayer* newPlayer);
    // public System.Void CreateGroupFromLoad(VROSC.LoopStationGroup/VROSC.SetupVariables vars)
    // Offset: 0x90E92C
    void CreateGroupFromLoad(::VROSC::LoopStationGroup::SetupVariables vars);
    // private System.Void AutoSort(VROSC.LoopPlayer newPlayer)
    // Offset: 0x90EA8C
    void AutoSort(::VROSC::LoopPlayer* newPlayer);
    // private VROSC.LoopStationGroup FindGroupByInstrument(System.String instrument)
    // Offset: 0x90EC34
    ::VROSC::LoopStationGroup* FindGroupByInstrument(::StringW instrument);
    // private VROSC.LoopPlayer[] FindMatchingLoopsInBaseGroup(VROSC.LoopPlayer newPlayer, System.String instrument)
    // Offset: 0x90ED94
    ::ArrayW<::VROSC::LoopPlayer*> FindMatchingLoopsInBaseGroup(::VROSC::LoopPlayer* newPlayer, ::StringW instrument);
    // private System.Void CreateNewInstrumentGroup(System.String instrument, VROSC.LoopPlayer[] matchingLoops, VROSC.LoopPlayer newPlayer)
    // Offset: 0x90EFD8
    void CreateNewInstrumentGroup(::StringW instrument, ::ArrayW<::VROSC::LoopPlayer*> matchingLoops, ::VROSC::LoopPlayer* newPlayer);
    // public System.Void AllGroupsLoaded()
    // Offset: 0x90F5D8
    void AllGroupsLoaded();
    // public System.Void .ctor()
    // Offset: 0x90FA78
    // Implemented from: VROSC.LoopStationGroupHandler
    // Base method: System.Void LoopStationGroupHandler::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopStationBaseGroupHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopStationBaseGroupHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopStationBaseGroupHandler*, creationType>()));
    }
    // public override System.Void Setup(VROSC.LoopStation loopStation, VROSC.LoopStationLoopHandler loopHandler)
    // Offset: 0x90E4F4
    // Implemented from: VROSC.LoopStationGroupHandler
    // Base method: System.Void LoopStationGroupHandler::Setup(VROSC.LoopStation loopStation, VROSC.LoopStationLoopHandler loopHandler)
    void Setup(::VROSC::LoopStation* loopStation, ::VROSC::LoopStationLoopHandler* loopHandler);
    // public override System.Void RemoveAllGroups()
    // Offset: 0x90E9CC
    // Implemented from: VROSC.LoopStationGroupHandler
    // Base method: System.Void LoopStationGroupHandler::RemoveAllGroups()
    void RemoveAllGroups();
    // protected override System.Void RemoveGroup(VROSC.LoopStationGroup group, System.Boolean fromReset)
    // Offset: 0x90F380
    // Implemented from: VROSC.LoopStationGroupHandler
    // Base method: System.Void LoopStationGroupHandler::RemoveGroup(VROSC.LoopStationGroup group, System.Boolean fromReset)
    void RemoveGroup(::VROSC::LoopStationGroup* group, bool fromReset);
    // public override System.Void SortGroups()
    // Offset: 0x90F700
    // Implemented from: VROSC.LoopStationGroupHandler
    // Base method: System.Void LoopStationGroupHandler::SortGroups()
    void SortGroups();
  }; // VROSC.LoopStationBaseGroupHandler
  #pragma pack(pop)
  static check_size<sizeof(LoopStationBaseGroupHandler), 112 + sizeof(::VROSC::LoopStationGroup*)> __VROSC_LoopStationBaseGroupHandlerSizeCheck;
  static_assert(sizeof(LoopStationBaseGroupHandler) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroupHandler::get_BaseGroup
// Il2CppName: get_BaseGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopStationGroup* (VROSC::LoopStationBaseGroupHandler::*)()>(&VROSC::LoopStationBaseGroupHandler::get_BaseGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroupHandler*), "get_BaseGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroupHandler::set_BaseGroup
// Il2CppName: set_BaseGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationBaseGroupHandler::*)(::VROSC::LoopStationGroup*)>(&VROSC::LoopStationBaseGroupHandler::set_BaseGroup)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroupHandler*), "set_BaseGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroupHandler::AddToBaseGroup
// Il2CppName: AddToBaseGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationBaseGroupHandler::*)(::VROSC::LoopPlayer*)>(&VROSC::LoopStationBaseGroupHandler::AddToBaseGroup)> {
  static const MethodInfo* get() {
    static auto* newPlayer = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroupHandler*), "AddToBaseGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newPlayer});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroupHandler::CreateGroupFromLoad
// Il2CppName: CreateGroupFromLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationBaseGroupHandler::*)(::VROSC::LoopStationGroup::SetupVariables)>(&VROSC::LoopStationBaseGroupHandler::CreateGroupFromLoad)> {
  static const MethodInfo* get() {
    static auto* vars = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationGroup/SetupVariables")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroupHandler*), "CreateGroupFromLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vars});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroupHandler::AutoSort
// Il2CppName: AutoSort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationBaseGroupHandler::*)(::VROSC::LoopPlayer*)>(&VROSC::LoopStationBaseGroupHandler::AutoSort)> {
  static const MethodInfo* get() {
    static auto* newPlayer = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroupHandler*), "AutoSort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newPlayer});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroupHandler::FindGroupByInstrument
// Il2CppName: FindGroupByInstrument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopStationGroup* (VROSC::LoopStationBaseGroupHandler::*)(::StringW)>(&VROSC::LoopStationBaseGroupHandler::FindGroupByInstrument)> {
  static const MethodInfo* get() {
    static auto* instrument = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroupHandler*), "FindGroupByInstrument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instrument});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroupHandler::FindMatchingLoopsInBaseGroup
// Il2CppName: FindMatchingLoopsInBaseGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::VROSC::LoopPlayer*> (VROSC::LoopStationBaseGroupHandler::*)(::VROSC::LoopPlayer*, ::StringW)>(&VROSC::LoopStationBaseGroupHandler::FindMatchingLoopsInBaseGroup)> {
  static const MethodInfo* get() {
    static auto* newPlayer = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayer")->byval_arg;
    static auto* instrument = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroupHandler*), "FindMatchingLoopsInBaseGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newPlayer, instrument});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroupHandler::CreateNewInstrumentGroup
// Il2CppName: CreateNewInstrumentGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationBaseGroupHandler::*)(::StringW, ::ArrayW<::VROSC::LoopPlayer*>, ::VROSC::LoopPlayer*)>(&VROSC::LoopStationBaseGroupHandler::CreateNewInstrumentGroup)> {
  static const MethodInfo* get() {
    static auto* instrument = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* matchingLoops = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayer"), 1)->byval_arg;
    static auto* newPlayer = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroupHandler*), "CreateNewInstrumentGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instrument, matchingLoops, newPlayer});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroupHandler::AllGroupsLoaded
// Il2CppName: AllGroupsLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationBaseGroupHandler::*)()>(&VROSC::LoopStationBaseGroupHandler::AllGroupsLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroupHandler*), "AllGroupsLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroupHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroupHandler::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationBaseGroupHandler::*)(::VROSC::LoopStation*, ::VROSC::LoopStationLoopHandler*)>(&VROSC::LoopStationBaseGroupHandler::Setup)> {
  static const MethodInfo* get() {
    static auto* loopStation = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStation")->byval_arg;
    static auto* loopHandler = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationLoopHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroupHandler*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loopStation, loopHandler});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroupHandler::RemoveAllGroups
// Il2CppName: RemoveAllGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationBaseGroupHandler::*)()>(&VROSC::LoopStationBaseGroupHandler::RemoveAllGroups)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroupHandler*), "RemoveAllGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroupHandler::RemoveGroup
// Il2CppName: RemoveGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationBaseGroupHandler::*)(::VROSC::LoopStationGroup*, bool)>(&VROSC::LoopStationBaseGroupHandler::RemoveGroup)> {
  static const MethodInfo* get() {
    static auto* group = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationGroup")->byval_arg;
    static auto* fromReset = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroupHandler*), "RemoveGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{group, fromReset});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationBaseGroupHandler::SortGroups
// Il2CppName: SortGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationBaseGroupHandler::*)()>(&VROSC::LoopStationBaseGroupHandler::SortGroups)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationBaseGroupHandler*), "SortGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
